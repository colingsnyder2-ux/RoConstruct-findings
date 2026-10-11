// from server: 52% by atomic.potato
struct Vbad_any_cast_error_info_injector {
    void (__stdcall *vtable0)(void);
    int field4;
    int field8;
    void (__stdcall *vtableC)(void);
    void *field10;
    void destroy();
};

extern "C" void __stdcall bad_cast_dtor(void *);
extern "C" void __stdcall base_dtor(void *);

void Vbad_any_cast_error_info_injector::destroy()
{
    *(void (__stdcall **)(void))((char *)this + 0) = (void (__stdcall *)(void))0x8ad3f4;
    *(void (__stdcall **)(void))((char *)this + 0xc) = (void (__stdcall *)(void))0x8ad3ec;
    *(void (__stdcall **)(void))((char *)this + 0xc) = (void (__stdcall *)(void))0x8ad294;
    void *p = *(void **)((char *)this + 0x10);
    if (p != 0) {
        void (__stdcall **vt)(void) = *(void (__stdcall ***)(void))p;
        void (__stdcall *fn)(void) = *(void (__stdcall **)(void))((char *)vt + 0x10);
        fn();
    }
    base_dtor(this);
}
