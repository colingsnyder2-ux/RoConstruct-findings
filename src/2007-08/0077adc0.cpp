// from server: 78% by colin
// roc 2007-08 0077adc0  size: 55 bytes

extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0058d830();
extern "C" int __cdecl sub_00407410(int*);
extern "C" int __cdecl sub_00407220(int);

void sub_0077adc0()
{
    int local;
    *(int*)0x8a4510 = 0x7af704;
    sub_00725520(0x58dd90, 0x8c37c4);
    local = sub_0058d830();
    sub_00407410(&local);
    sub_00407220(local);
}
