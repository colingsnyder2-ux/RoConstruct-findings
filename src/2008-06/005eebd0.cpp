// from server: 55% by colin
struct SurfaceEnumPropDescriptor {
    void getVariant(const void* instance, void* value) const;
};

extern "C" void __cdecl sub_557330(const char* a, const char* b);
extern "C" void* __cdecl sub_5ED630();
extern "C" void __cdecl sub_448360(void* self, void* a, void* b);

void SurfaceEnumPropDescriptor::getVariant(const void* instance, void* value) const {
    void* getset = *(void**)((char*)this + 0x1c);
    void* vtable = *(void**)getset;
    void* fn = *(void**)((char*)vtable + 8);
    void* result = ((void* (__thiscall*)(void*, const void*))fn)(getset, instance);
    sub_557330((const char*)0x97b120, (const char*)0x5ed690);
    void* desc = sub_5ED630();
    sub_448360(desc, value, result);
}
