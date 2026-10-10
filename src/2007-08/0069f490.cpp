// from server: 81% by colin
// roc 2007-08 0069f490  unit: CXTCaptionButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f490

extern "C" {
    void* __stdcall GetParent(void*);
    int __stdcall InvalidateRect(void*, const void*, int);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

struct CXTCaptionButton {
    char pad0[0x20];
    void* field_0x20;
    char pad1[0x80 - 0x24];
    void* field_0x80;
    int sub_69f490(int, int);
};

int sub_6301c0(void*);
int sub_630202(void*);
int sub_63062e(void*);
int sub_668f70();
int sub_668770(int);
int sub_69f290();

int CXTCaptionButton::sub_69f490(int arg0, int arg1) {
    void* ebx = this->field_0x80;
    void* eax = this->field_0x20;
    int edi;
    if (eax != 0) {
        eax = (void*)sub_6301c0((void*)GetParent(eax));
    } else {
        eax = 0;
    }
    edi = sub_630202((void*)sub_69f290());
    if (edi != 0) {
        (*(void (__thiscall**)(CXTCaptionButton*, int))(*(int*)this + 0x16c))(this, *(int*)(edi + 0x74));
        (*(void (__thiscall**)(CXTCaptionButton*, int))(*(int*)this + 0x17c))(this, *(int*)(edi + 0x78));
        int v = sub_668770(sub_668f70());
        (*(void (__thiscall**)(CXTCaptionButton*, int))(*(int*)this + 0x178))(this, v);
        int p = SendMessageA(*(void**)(edi + 0x20), 0x31, 0, 0);
        int r = sub_63062e((void*)p);
        if (r != 0) {
            r = *(int*)(r + 4);
        }
        SendMessageA(this->field_0x20, 0x30, r, 1);
        if (arg0 != 0) {
            InvalidateRect(this->field_0x20, 0, 1);
        }
    }
    return (int)ebx;
}
