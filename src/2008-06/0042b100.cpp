// from server: 45% by atomic.potato
typedef unsigned int DWORD;

extern "C" void basic_string_copy(void *, const void *);
extern "C" void function_0042ac20(void *);
extern void *global_0080245c;

struct S
{
    void f(const void *, void *);
};

void S::f(const void *a, void *b)
{
    void *p;
    void *q;
    char buffer[28];

    p = *(void **)((char *)a + 16);
    q = buffer;
    *(void **)(buffer + 28) = buffer;
    basic_string_copy(buffer, *(void **)this);
    p = (char *)p + 8;
    function_0042ac20(p);
    q = *(void **)((char *)b + 0);
    (void)q;
}
