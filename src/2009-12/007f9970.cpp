// from server: 33% by atomic.potato
struct S
{
    int *vtable;
    S *GetObject();
};

S *S::GetObject()
{
    return 0;
}

struct T
{
    void *pad[24];
    S *object;
    int Get();
};

int T::Get()
{
    S *p = object->GetObject();
    return p->vtable[98];
}
