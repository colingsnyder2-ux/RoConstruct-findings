// from server: 43% by tester
struct PropertyDescriptor {
    char pad[0x18];
    void* field18;
    bool equalTo(void* exec, const PropertyDescriptor& other) const;
};

bool PropertyDescriptor::equalTo(void* exec, const PropertyDescriptor& other) const {
    char buf[4];
    if (!((bool (__stdcall*)(void*, const PropertyDescriptor&, void*))0x5be680)(exec, other, buf))
        return false;
    void* p = field18;
    void** vtbl = *(void***)p;
    void (__stdcall* fn)(void*, void*, void*) = (void (__stdcall*)(void*, void*, void*))vtbl[3];
    fn(p, buf, exec);
    return true;
}
