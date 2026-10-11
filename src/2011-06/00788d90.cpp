// from server: 47% by atomic.potato
struct S
{
    int value;
};

extern "C" int __cdecl sub_0080bbc2(int);
extern "C" int (__cdecl *sub_00c9105c)(int);

struct T
{
    int f();
    int pad0[3];
    S* p;
};

int T::f()
{
    int value = p->value;
    if (value == 0)
        return 0;
    return sub_00c9105c(sub_0080bbc2(value));
}
