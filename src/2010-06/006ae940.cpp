// from server: 85% by atomic.potato
struct S
{
    int *p;

    void f();
};

typedef void (__thiscall *F)(void *, void *, int);

void S::f()
{
    int *p = this->p;
    if (p != 0)
    {
        F fn = *(F *)*p;
        void *q = (char *)this + 8;
        if (fn != 0)
            fn(q, q, 2);
        this->p = 0;
    }
}
