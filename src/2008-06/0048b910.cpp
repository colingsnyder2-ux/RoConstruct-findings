// from server: 70% by atomic.potato
typedef void (*Fn)(void *, void *);

struct S {
    void f(void *);
};

extern S *g;

void S::f(void *p)
{
    void *x;
    if (this)
        x = (char *)this + 20;
    else
        x = 0;
    Fn fn = *(Fn *)((char *)*(void **)g + 12);
    fn(x, &p);
}
