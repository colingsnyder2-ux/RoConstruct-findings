// from server: 68% by colin
// roc 2008-06 005ee5d0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee5d0

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_557330();
extern "C" void* __cdecl sub_5ed5c0();

struct EnumItem {
    int value;
};

struct DescribedBase;

struct EnumPropertyDescriptor {
    void* vtable;
    char pad[0x18];
    void* getset;
};

struct SurfaceEnumPropDescriptor {
    bool get(const DescribedBase* instance, int* value) const;
};

bool SurfaceEnumPropDescriptor::get(const DescribedBase* instance, int* value) const
{
    sub_557330();
    void* desc = sub_5ed5c0();
    unsigned int index = *(unsigned int*)((char*)this + 0x18);
    if (index < *(unsigned int*)((char*)desc + 0x28)) {
        return false;
    }
    unsigned int count = (*(unsigned int*)((char*)desc + 0xc8) - *(unsigned int*)((char*)desc + 0xc4)) >> 2;
    if (index >= count) {
        _invalid_parameter_noinfo();
    }
    int item = *(int*)(*(unsigned int*)((char*)desc + 0xc4) + index * 4);
    void* getset = *(void**)((char*)this + 0x1c);
    int local = item;
    void* vt = *(void**)getset;
    void (*fn)(void*, int*, int*) = *(void (**)(void*, int*, int*))((char*)vt + 0xc);
    fn(getset, value, &local);
    return true;
}
