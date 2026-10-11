// from server: 50% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    void getVariant(const void* instance, void* value) const;
};

extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void* __cdecl sub_5ed5c0();
extern "C" void __cdecl sub_448360(void*, void*, void*);

void SurfaceEnumPropDescriptor::getVariant(const void* instance, void* value) const {
    void* gs = getset;
    void* vtbl = *(void**)gs;
    void* fn = *(void**)((char*)vtbl + 8);
    void* tmp = 0;
    ((void (__thiscall*)(void*, const void*, void*))fn)(gs, instance, &tmp);
    sub_557330((void*)0x97b11c, (void*)0x5ed620);
    void* desc = sub_5ed5c0();
    sub_448360(desc, &tmp, value);
}
