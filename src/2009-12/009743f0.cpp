// from server: 43% by atomic.potato
struct S
{
    void f();
};

typedef void (__thiscall *Call1)(void *, void *, void *, void *, int, void *, void *);
typedef void (__cdecl *Call2)(void *);

void S::f()
{
    ((Call1)0x6b6c50)((void *)0xb91ac8, (void *)0x9d6670, (void *)0x9bb084,
                       (void *)0x6b3950, 9, 0, 0);
    ((Call2)0x7f4929)((void *)0x985710);
}
