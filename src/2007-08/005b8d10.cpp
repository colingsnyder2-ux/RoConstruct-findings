// from server: 80% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* field_1c;
    bool equalValues(const void* a, const void* b) const;
};

extern "C" void* __stdcall func_005b7ee0(const void*, void*);
extern "C" bool __stdcall func_005dc2a0(void*);

bool SurfaceEnumPropDescriptor::equalValues(const void* a, const void* b) const
{
    void* v = func_005b7ee0(a, (void*)&b);
    if (func_005dc2a0(v)) {
        void* p = field_1c;
        void* vt = *(void**)p;
        void (*fn)(void*, const void*) = *(void (**)(void*, const void*))((char*)vt + 8);
        fn(p, (const void*)&b);
        return true;
    }
    return false;
}
