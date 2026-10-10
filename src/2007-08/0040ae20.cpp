// from server: 72% by colin
struct CNullDoc {
    char pad[0x108];
    void* field_108;
    char pad2[0x140 - 0x10c];
    void* field_140;
    void method(int arg);
};

extern "C" int __stdcall sub_6301FC(int);
extern "C" void __stdcall sub_63DCB0(int);
extern "C" void __stdcall sub_64F440(void*, int, void*, int);
extern "C" void __stdcall sub_643A10(void*, void*);
extern "C" void __stdcall sub_643A90(void*, void*);
extern "C" void* __stdcall sub_64DFD0();

extern void* dword_8C86D8;
extern void* (__stdcall *dword_77D2EC)(void*);

void CNullDoc::method(int arg) {
    int r = sub_6301FC(arg);
    if (r == -1) {
        return;
    }
    void* p = (char*)this + 0x108;
    sub_64F440(p, 0x50010010, (void*)0xe800, (int)this);
    void* v;
    if (this != 0) {
        v = *(void**)((char*)this + 0x20);
    } else {
        v = 0;
    }
    field_140 = v;
    if (dword_8C86D8 == 0) {
        sub_63DCB0(0);
        if (dword_8C86D8 == 0) {
            goto skip1;
        }
    }
    dword_77D2EC((char*)dword_8C86D8 + 4);
    if (dword_8C86D8 == 0) {
        sub_63DCB0(0);
    }
    sub_643A10(p, dword_8C86D8);
skip1:
    void* q = sub_64DFD0();
    dword_77D2EC((char*)q + 4);
    void* q2 = sub_64DFD0();
    sub_643A90(p, q2);
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*, int, int) = (void (__stdcall *)(void*, int, int))vtbl[0x14c / 4];
    fn(p, 0x93, 0);
}
