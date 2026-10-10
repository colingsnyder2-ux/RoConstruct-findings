// from server: 64% by atomic.potato
struct S
{
    struct T
    {
        int pad58[22];
        int value100;
        int pad14c[19];
        int value14c;
    };

    int padb8[46];
    T* valueb8;

    int f();
};

int S::f()
{
    T* p = (T*)valueb8->pad58[22], *q;
    if (p)
    {
        p->value14c = 3;
        q = (T*)p->value100;
        return q->value14c;
    }
    return 0;
}
