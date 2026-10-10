// from server: 28% by colin
struct InputObject {
    int type;
    int pad[3];
};

struct GuiResponse {
    int type;
    int pad;
};

struct GuiItem {
    char pad[0x18];
};

struct Widget : GuiItem {
    int widgetState;
};

struct ChatWidget : Widget {
    GuiResponse process(const InputObject* event);
};

extern "C" {
    int __stdcall sub_48DFB0(void* p);
    void __stdcall sub_4980B0(void* p);
    int __stdcall sub_5553D0(void* p);
    void* __stdcall sub_5555B0(void* p, const void* q);
    void __stdcall sub_5570D0(void* p, const InputObject* e);
    void* __stdcall sub_561B10(void* p, int n);
    void* __stdcall sub_58C810(void* p);
    void* __stdcall sub_77E558(const char* s, void* out);
    void* __stdcall sub_77E69C(void* out, const void* src);
    void* __stdcall sub_77E6AC(void* p);
}

GuiResponse ChatWidget::process(const InputObject* event)
{
    GuiResponse result;
    result.type = 0;
    result.pad = 0;

    if (this->widgetState == 0) {
        sub_5570D0(this, event);
        return result;
    }

    int t = event->type;
    if (t == 1 || t == 2 || t == 3 || t == 5 || t == 6) {
        if (t != 4) {
            sub_5570D0(this, event);
            return result;
        }
    } else if (t != 4) {
        sub_5570D0(this, event);
        return result;
    }

    char buf[0x20];
    sub_5555B0(this, event);
    if (!sub_5553D0(buf)) {
        sub_5570D0(this, event);
        return result;
    }

    void* p = (void*)sub_48DFB0(this);
    if (!p) {
        sub_5570D0(this, event);
        return result;
    }

    void* q = sub_561B10(this, 4);
    sub_58C810(q);

    char buf2[0x20];
    sub_77E558("/sc ", buf2);
    sub_77E69C(buf2, buf);
    sub_4980B0(p);

    result.type = 2;
    result.pad = 0;
    sub_77E6AC(buf2);
    return result;
}
