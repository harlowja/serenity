#pragma once

#include <LibGUI/GDialog.h>

class GMessageBox : public GDialog {
public:
    explicit GMessageBox(const String& text, const String& title, GObject* parent = nullptr);
    virtual ~GMessageBox() override;

private:
    void build();

    String m_text;
};
