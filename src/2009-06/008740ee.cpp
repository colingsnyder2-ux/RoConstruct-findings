// from server: 69% by atomic.potato
extern "C" void __cdecl sub_71A57A(int);

int __cdecl sub_7199EC(int);

struct S
{
};

int __cdecl f(int a, int b)
{
    int v = b;
    sub_71A57A(*(int *)(v - 4) ^ v);
    return sub_7199EC(0x9B2238);
}
