// from server: 82% by colin
extern "C" int __cdecl sub_612410(void *, int);
extern "C" int __cdecl sub_612460(void *, int);
extern "C" int __cdecl sub_612120(void *, int);
extern "C" int __cdecl sub_611c20(void *, int);
extern "C" int __cdecl sub_5adbf0(void *, int);

extern int dword_976B78;

struct S
{
};

void __cdecl f(void *a)
{
    if (dword_976B78 > 0)
    {
        sub_612410(a, 0x43);
        sub_612460(a, -10002);
        int v = sub_612120(a, -1);
        sub_611c20(a, -2);
        sub_5adbf0((void *)v, (int)a);
    }
}
