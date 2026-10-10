// from server: 57% by atomic.potato
extern "C" void __cdecl sub_71A57A(int);

struct S
{
    void f(int, int);
};

void S::f(int a, int b)
{
    sub_71A57A(*(int *)(b - 4) ^ b);
}
