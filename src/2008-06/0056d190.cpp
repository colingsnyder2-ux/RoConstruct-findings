// from server: 68% by atomic.potato
struct S
{
    void f();
};

extern "C" void imported_type_info_compare(void *, void *);

void S::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    imported_type_info_compare(q, (void *)0x946364);
}
