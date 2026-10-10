// from server: 82% by atomic.potato
struct S
{
    struct T
    {
        int begin;
        int end;
    };

    int unused[20];
    T* value;
    int f();
};

int S::f()
{
    T* p = value;
    if (p)
        return (p->end - p->begin) >> 3;
    return 0;
}
