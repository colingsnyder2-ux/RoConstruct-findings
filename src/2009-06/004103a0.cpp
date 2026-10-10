// from server: 55% by atomic.potato
extern "C" void sub_40fe60(void *, void *);

struct S
{
    char pad00[16];
    void *field10;
    void *field14;
    void *field18;
    void *field1c;
    char pad20[4];

    S(void *);
};

S::S(void *arg)
{
    sub_40fe60(this, arg);
    *(unsigned long *)((char *)this + 0x20) = 0;
    *(unsigned long *)((char *)this + 0x20) = 0x008ad24c;
    *(unsigned char *)((char *)this + 0x20) = 1;
    *(void **)this = (void *)0x008af008;
    *(void **)((char *)this + 0x0c) = (void *)0x008af000;
    *(unsigned long *)((char *)this + 0x20) = 0x008aeff0;

    {
        char *p = arg ? (char *)arg + 0x0c : 0;
        void *v = field10;
        void *n = *(void **)(p + 4);

        if (v)
        {
            void **vt = *(void ***)v;
            ((void (__thiscall *)(void *))vt[4])(v);
        }

        field10 = n;

        if (n)
        {
            void **vt = *(void ***)n;
            ((void (__thiscall *)(void *))vt[3])(n);
        }

        field14 = *(void **)(p + 8);
        field18 = *(void **)(p + 0x0c);
        field1c = *(void **)(p + 0x10);
    }
}
