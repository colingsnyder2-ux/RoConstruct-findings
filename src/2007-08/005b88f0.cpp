// from server: 95% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    bool equalValues(const void* a, const void* b) const;
};

extern "C" void* __stdcall func_005b7e80(void* a, void* b);
extern "C" bool __stdcall func_005b80d0(void* p);

bool SurfaceEnumPropDescriptor::equalValues(const void* a, const void* b) const
{
    void* tmp;
    void* r = func_005b7e80((void*)b, &tmp);
    if (func_005b80d0(r)) {
        void** obj = (void**)getset;
        void* vt = *obj;
        void* fn = *(void**)((char*)vt + 8);
        typedef void (__thiscall *Fn)(void*, const void*, void*);
        ((Fn)fn)(getset, a, &tmp);
        return true;
    }
    return false;
}
