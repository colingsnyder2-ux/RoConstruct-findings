// from server: 69% by atomic.potato
extern "C" void Imported(void *, const char *);

struct S
{
    S * __cdecl f(void *);
};

S *S::f(void *p)
{
    Imported(p, (const char *)0x00e1a254);
    return (S *)p;
}
