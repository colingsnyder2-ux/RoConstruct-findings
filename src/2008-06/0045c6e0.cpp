// from server: 56% by atomic.potato
struct VTextureArgsTable
{
    void __cdecl copy(void* source, void* destination);
};

void VTextureArgsTable::copy(void* source, void* destination)
{
    typedef unsigned long DWORD;
    DWORD* p = (DWORD*)source;
    DWORD* q = (DWORD*)destination;
    void* value = (void*)p[0];
    void* context = (void*)p[1];

    typedef void (__thiscall *Fn)(void*);
    Fn fn = *(Fn*)value;
    fn(value);

    DWORD* result = (DWORD*)value;
    DWORD* out = q;
    int i;
    for (i = 0; i < 22; ++i)
        out[i] = result[i];
}
