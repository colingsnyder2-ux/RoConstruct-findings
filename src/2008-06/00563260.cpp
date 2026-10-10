// from server: 49% by atomic.potato
extern "C" void * __cdecl sub_501AE0(void *);
extern "C" void __cdecl sub_5631C0(void *);

int sub_563260(void *p)
{
    void *v = sub_501AE0(&p);
    int result = *((int *)v + 2);
    sub_5631C0(&p);
    return result;
}
