// from server: 83% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* m_getset;
    bool equalValues(const void* a, const void* b) const;
};

extern "C" void* __cdecl func_005b7ee0(const void* a, void* b);
extern "C" bool __cdecl func_005b80d0(void* p);

bool SurfaceEnumPropDescriptor::equalValues(const void* a, const void* b) const {
    void* v = func_005b7ee0(a, (void*)&a);
    if (func_005b80d0(v)) {
        void* p = m_getset;
        void* vt = *(void**)p;
        void* fn = *(void**)((char*)vt + 8);
        typedef void (__thiscall *Fn)(void*, const void*, const void*);
        ((Fn)fn)(p, a, b);
        return true;
    }
    return false;
}
