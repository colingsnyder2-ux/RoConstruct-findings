// from server: 38% by atomic.potato
struct S
{
    int Get();
    void* field84;
};

int S::Get()
{
    struct VTable
    {
        int (*fn)(void*);
    };

    void* p = field84;
    VTable* v = *(VTable**)p;
    return v->fn(p);
}
