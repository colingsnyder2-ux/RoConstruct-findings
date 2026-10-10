// from server: 60% by atomic.potato
extern "C" void __cdecl sub_71A57A(int);

struct S
{
    int __cdecl f(int);
};

int S::f(int value)
{
    sub_71A57A((value - 4) ^ value);
    return 0x9b2264;
}
