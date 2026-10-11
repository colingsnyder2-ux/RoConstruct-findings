// from server: 42% by colin
extern "C" void __cdecl sub_493760();
extern "C" void __cdecl sub_6a158c(void *, void *);
extern "C" void __stdcall sub_802458(void *, const char *);
extern "C" void __cdecl sub_409d50(void *, void *);

struct S
{
    void f(int, int);
};

void S::f(int, int)
{
    void *p = *(void **)((char *)this + 0x1c8);
    if (p)
    {
        sub_493760();
        if (*(int *)p == 2)
        {
            char buf[0x1c];
            sub_802458(buf, (const char *)0x8346a8);
            *(int *)(buf + 0x1c) = 0;
            sub_409d50(buf + 0x1c, buf);
            sub_6a158c((void *)0x8d1bc8, buf + 0x1c);
        }
    }
}
