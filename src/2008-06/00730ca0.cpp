// from server: 67% by atomic.potato
struct S
{
    int f(int, int);
};

extern "C" int __cdecl sub_72e380(int, int, int);
extern "C" int sub_72f070(int);

int S::f(int a, int b)
{
    return sub_72f070(sub_72e380(b, a, 1));
}
