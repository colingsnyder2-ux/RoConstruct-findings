// from server: 72% by colin




extern "C" void __stdcall sub_6A067A(void*);
extern "C" void __stdcall sub_40EC90();

struct UIEnumConnections_CComEnum_CComObject {
    void* vtable;
    char pad[0x14];
    int field_18;
    void* Release(unsigned int flags);
};

void* UIEnumConnections_CComEnum_CComObject::Release(unsigned int flags)
{
    vtable = (void*)0x80D7F0;
    field_18 = (int)0xC0000001;
    void** vtbl = *(void***)0x96C268;
    void (*fn)(void) = (void (*)(void))vtbl[2];
    fn();
    sub_40EC90();
    if (flags & 1) {
        sub_6A067A(this);
    }
    return this;
}
