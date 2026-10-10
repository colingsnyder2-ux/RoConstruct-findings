// from server: 84% by atomic.potato
struct CEnumMediaTypes
{
    int Next(void *);
};

int CEnumMediaTypes::Next(void *arg)
{
    CEnumMediaTypes *p = (CEnumMediaTypes *)arg;
    int *v = *(int **)((char *)p + 8);
    *(int *)((char *)p + 4) = 0;
    int (*f)(int *) = (int (*)(int *))(*(int **)v + 4);
    *(int *)((char *)p + 12) = f(v);
    return 0;
}
