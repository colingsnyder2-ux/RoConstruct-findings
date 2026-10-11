// from server: 62% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    int getEnumItem(const void* instance) const;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void* __cdecl sub_5ed5c0();

int SurfaceEnumPropDescriptor::getEnumItem(const void* instance) const {
    void* gs = getset;
    int (*fn)(const void*) = *(int (**)(const void*))((*(char**)gs) + 8);
    int value = fn(instance);
    sub_557330((void*)0x97b11c, (void*)0x5ed620);
    void* desc = sub_5ed5c0();
    char* d = (char*)desc;
    int count = (*(int*)(d + 0xe0) - *(int*)(d + 0xdc)) >> 2;
    if ((unsigned)value < (unsigned)count) {
        return -1;
    }
    int count2 = (*(int*)(d + 0xe0) - *(int*)(d + 0xdc)) >> 2;
    if ((unsigned)value >= (unsigned)count2) {
        _invalid_parameter_noinfo();
    }
    int* arr = *(int**)(d + 0xdc);
    return arr[value];
}
