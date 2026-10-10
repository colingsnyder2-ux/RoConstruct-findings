// from server: 86% by atomic.potato
extern "C" void __cdecl free(void *);

void f(void *p)
{
    if (p)
        free(p);
}
