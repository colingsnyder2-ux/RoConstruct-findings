// from server: 77% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    bool setVariant(void* instance, const void* value) const;
};

extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void* __cdecl sub_5ed5c0();
extern "C" bool __cdecl sub_5ed300(void*, void*, void*);

bool SurfaceEnumPropDescriptor::setVariant(void* instance, const void* value) const {
    sub_557330((void*)0x97b11c, (void*)0x5ed620);
    void* desc = sub_5ed5c0();
    void* local;
    if (sub_5ed300(desc, &local, (void*)value)) {
        void* gs = getset;
        void* vtbl = *(void**)gs;
        void* fn = *(void**)((char*)vtbl + 0xc);
        ((void (__thiscall*)(void*, void*, void*))fn)(gs, &local, instance);
        return true;
    }
    return false;
}
