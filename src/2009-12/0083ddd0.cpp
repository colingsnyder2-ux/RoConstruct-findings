// from server: 75% by atomic.potato
struct CXTPCustomizeSheet
{
    void f();
    void g();
};

void CXTPCustomizeSheet::f()
{
    void **p = *(void ***)((char *)this + 0xb8);
    void *q = *(void **)((char *)p + 0x58);
    if (q)
        g();
}
