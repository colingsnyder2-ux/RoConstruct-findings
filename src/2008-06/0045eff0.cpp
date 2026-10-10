// from server: 59% by atomic.potato
struct S
{
    int value;
    int f();
};

extern "C" int __cdecl sub_42afc0(int *p);
extern "C" void __cdecl sub_5c9110(S *p, int *v);

int S::f()
{
    int v = sub_42afc0(&value);
    sub_5c9110(this, &v);
    return 0;
}
