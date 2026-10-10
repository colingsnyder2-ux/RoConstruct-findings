// from server: 81% by atomic.potato
extern "C" int __stdcall sub_406dd0(void *, void *, void *, void *, void *, void *);

struct S
{
    int __stdcall f(void *, void *, void *, void *);
};

int __stdcall S::f(void *a, void *b, void *c, void *d)
{
    return sub_406dd0((void *)0x00affad0, this, a, b, c, d);
}
