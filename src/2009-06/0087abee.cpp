// from server: 60% by atomic.potato
extern "C" void __cdecl sub_0071A57A(int);

struct S
{
    int __cdecl f(int);
};

int S::f(int value)
{
    sub_0071A57A(*(int *)((char *)value - 4) ^ value);
    return 0x9B8854;
}
