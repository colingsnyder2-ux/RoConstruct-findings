// from server: 77% by colin
extern "C" int __cdecl sub_520650(int);
extern "C" void __cdecl sub_51E8E0(int, const char*);

int __cdecl sub_521720(int a)
{
    int v = sub_520650(a);
    if ((unsigned)v > 0x7fffffff)
    {
        sub_51E8E0(a, "PNG unsigned integer out of range.");
    }
    return v;
}
