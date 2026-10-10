// from server: 75% by tester
struct VCBrowserViewExternal {
    void* vtable0;
    void* vtable4;
    char pad8[0x0C];
    void* field14;
    int field18;
    void* ctor(char flag);
};

extern "C" void __stdcall sub_62FC62(void* p);
extern "C" void __stdcall sub_466B20(void* p);

extern void* g_8BAE44;

void* VCBrowserViewExternal::ctor(char flag) {
    this->vtable0 = (void*)0x785C84;
    this->vtable4 = (void*)0x785C6C;
    char* edi = (char*)this + 8;
    *(void**)edi = (void*)0x785C48;
    this->field14 = (void*)0x785C20;
    this->field18 = (int)0xC0000001;

    void* ecx = g_8BAE44;
    void** vt = *(void***)ecx;
    void (*fn)(void*) = (void (*)(void*))vt[2];
    fn(ecx);

    sub_466B20(edi);

    if (flag & 1) {
        sub_62FC62(this);
    }
    return this;
}
