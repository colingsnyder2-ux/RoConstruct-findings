// from server: 78% by colin
extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0058da60();
extern "C" int __cdecl sub_00407410(int*);
extern "C" void __cdecl sub_00407220(int);

int __cdecl sub_0077ac80()
{
    int local;
    *(int*)0x8a4524 = 0x7af790;
    sub_00725520(0x8c37d8, 0x58dde0);
    local = sub_0058da60();
    sub_00407220(sub_00407410(&local));
    return 0;
}
