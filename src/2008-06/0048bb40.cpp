// from server: 53% by colin
struct PropDesc {
    char pad[0x18];
    void* getset;
    bool equalTo(void* exec, const PropDesc& other);
};

bool PropDesc::equalTo(void* exec, const PropDesc& other)
{
    char tmp1;
    char tmp2;
    void* vtable = *(void**)getset;
    void (*fn)(void*, char*, void*) = *(void (**)(void*, char*, void*))((char*)vtable + 8);
    fn(getset, &tmp1, exec);
    void* vtable2 = *(void**)getset;
    void (*fn2)(void*, char*, void*) = *(void (**)(void*, char*, void*))((char*)vtable2 + 8);
    fn2(getset, &tmp2, exec);
    return tmp1 == tmp2;
}
