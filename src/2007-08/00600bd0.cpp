// from server: 14% by colin
struct RBXName {
    void* p;
};

struct String {
    char buf[16];
    unsigned int len;
    unsigned int cap;
};

struct SharedCount {
    long refs;
};

struct SharedPtr {
    void* px;
    SharedCount* pn;
};

struct GuiItem {
    char pad[0x20];
    SharedPtr* a20;
    SharedPtr* a24;
    SharedPtr* a28;
    SharedPtr* a2c;
    float f30;
    float f34;
};

struct VWidget : GuiItem {
    bool processMouse(const SharedPtr& event);
};

extern "C" {
    long __stdcall InterlockedDecrement(long volatile*);
    void* __stdcall GetCurrentThreadId();
}

extern "C" int __stdcall sub_544FC0(void*, void*);
extern "C" void __stdcall sub_457DD0(void*);
extern "C" void __stdcall sub_474F70(void*, void*);
extern "C" void __stdcall sub_44CF10(void*, const char*);
extern "C" void __stdcall sub_600B30(void*, const SharedPtr&);

extern "C" void* __stdcall sub_77E690();
extern "C" void* __stdcall sub_77E69C();
extern "C" void* __stdcall sub_77E638();
extern "C" void* __stdcall sub_77E644();
extern "C" void* __stdcall sub_77E6AC();
extern "C" void* __stdcall sub_77D2E8();

extern "C" const char str_7C2A50[];
extern "C" const char str_7C2A48[];
extern "C" const char str_7C2A40[];

bool VWidget::processMouse(const SharedPtr& event)
{
    if (!sub_544FC0(this, (void*)&event)) {
        return false;
    }

    sub_77E690();

    this->a20 = 0;
    this->a28 = 0;
    this->a2c = 0;
    this->a24 = 0;
    this->f30 = 0.0f;
    this->f34 = 0.0f;

    SharedPtr tmp;
    sub_600B30(&tmp, event);
    sub_474F70(&this->a20, tmp.px);

    if (tmp.px) {
        if (InterlockedDecrement((long*)tmp.px) == 0) {
            sub_457DD0(tmp.px);
        }
        tmp.px = 0;
    }

    if (this->a20 == 0) {
        return false;
    }

    sub_77E69C();
    sub_77E638();
    sub_77E644();
    sub_44CF10(&tmp, str_7C2A50);
    sub_600B30(&tmp, event);
    sub_474F70(&this->a28, tmp.px);

    if (tmp.px) {
        if (InterlockedDecrement((long*)tmp.px) == 0) {
            sub_457DD0(tmp.px);
        }
        tmp.px = 0;
    }

    sub_77E6AC();
    sub_77E6AC();

    sub_77E644();
    sub_44CF10(&tmp, str_7C2A48);
    sub_600B30(&tmp, event);
    sub_474F70(&this->a2c, tmp.px);

    if (tmp.px) {
        if (InterlockedDecrement((long*)tmp.px) == 0) {
            sub_457DD0(tmp.px);
        }
        tmp.px = 0;
    }

    sub_77E6AC();
    sub_77E6AC();

    sub_77E644();
    sub_44CF10(&tmp, str_7C2A40);
    sub_600B30(&tmp, event);
    sub_474F70(&this->a24, tmp.px);

    if (tmp.px) {
        if (InterlockedDecrement((long*)tmp.px) == 0) {
            sub_457DD0(tmp.px);
        }
        tmp.px = 0;
    }

    sub_77E6AC();
    sub_77E6AC();
    sub_77E6AC();
    sub_77E6AC();

    return this->a20 != 0;
}
