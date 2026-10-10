// from server: 81% by atomic.potato
struct S
{
};

void * __cdecl f(void *p)
{
    void *q = *(void **)((char *)p + 0x18);
    return ((void *(*)(void *))(*(void **)q))(q);
}
