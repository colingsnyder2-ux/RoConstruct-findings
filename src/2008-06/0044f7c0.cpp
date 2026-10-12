// from server: 41% by colin
struct PasteVerb {
    char padding[0x94];
    void *field_94;
    bool enabled();
};

extern "C" void *__stdcall func_803f04();
extern "C" void *__stdcall func_8032c0();
extern "C" void *__stdcall func_803ee0();
extern "C" void *__stdcall func_803f14();
extern "C" void __stdcall func_802944(void *);
extern "C" void __stdcall func_6a0e72();
extern "C" int __stdcall func_6a0e6c();
extern "C" void __stdcall func_6a0e66();
extern "C" void __stdcall func_6a0e5a();
extern "C" void __stdcall func_401180(void *);

bool PasteVerb::enabled()
{
    char buffer[0x1ec];
    void *state;

    func_803f04();
    func_8032c0();
    func_803ee0();
    func_6a0e72();
    if (func_6a0e6c() == 1) {
        func_6a0e66();
        func_803ee0();
        func_401180(buffer);
        func_803f14();
        void *obj = field_94;
        void *vtable = *(void **)obj;
        void (*fn)(void *, void *) = *(void (**)(void *, void *))(*(char **)vtable + 0x20);
        fn(obj, buffer);
        func_802944(buffer);
    }
    func_6a0e5a();
    func_803f14();
    return false;
}
