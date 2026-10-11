// from server: 57% by colin
// roc 2008-06 0070c200  unit: RBX::VInstance::?$NonFactoryProduct  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070c200

extern "C" unsigned long __stdcall GetTickCount();
extern "C" int __stdcall KillTimer(void*, unsigned int);
extern "C" unsigned int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

struct CXTSplitterWnd {
    int compare(void*);
    void copyFrom(void*);
    void destroy();
};

struct VInstance {
    char pad0[0x20];
    void* field20;
    char pad24[0x68 - 0x24];
    int field68;
    char pad6c[0x70 - 0x6c];
    CXTSplitterWnd field70;
    char pad74[0xa8 - 0x74];
    CXTSplitterWnd fielda8;
    char padac[0xe0 - 0xac];
    CXTSplitterWnd fielde0;
    char pade4[0x118 - 0xe4];
    unsigned int field118;
    unsigned int field11c;
    unsigned int field120;
    unsigned int field124;

    void method(void*);
};

void* __fastcall sub_70c0e0(void*);

void VInstance::method(void* arg) {
    if (field68 == 0)
        return;

    unsigned int code = *(unsigned int*)((char*)arg + 4);
    if (!((code >= 0x200 && code <= 0x20a) || (code >= 0xa0 && code <= 0xa9)))
        return;

    void* p = sub_70c0e0(arg);

    if (*(unsigned int*)((char*)arg + 4) == 0x201) {
        if (p != 0) {
            fielda8.copyFrom(p);
            p = 0;
        }
    } else {
        if (p != 0) {
            if (fielda8.compare(p) != 0)
                p = 0;
        }
    }

    unsigned int timer = field118;
    if (timer != 0) {
        if (fielde0.compare(p) == 0) {
            KillTimer(field20, timer);
            field118 = 0;
            fielde0.destroy();
        }
    }

    if (p != 0) {
        if (field70.compare(p) != 0)
            return;

        unsigned int now = GetTickCount();
        if (now - field11c < field124) {
            field70.copyFrom(p);
            field118 = SetTimer(field20, field120, 1, 0);
            return;
        }

        if (fielde0.compare(p) != 0)
            return;

        fielde0.copyFrom(p);
        field118 = SetTimer(field20, field120, 1, 0);
        return;
    }

    field70.copyFrom(0);
    field70.destroy();
}
