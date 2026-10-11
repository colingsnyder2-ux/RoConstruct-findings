// from server: 50% by atomic.potato
struct S
{
    int Get();
    void* field84;
};

int S::Get()
{
    struct VTable
    {
        char pad[0x4c];
        int (__stdcall *fn)(void*);
    };

    void* p = field84;
    VTable* v = *(VTable**)p;
    return v->fn(p);
}
