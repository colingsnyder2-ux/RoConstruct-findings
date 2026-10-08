// from server: 87% by colin
// roc 2007-08 005c9590  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9590
//
// 005c9590  56                   push esi
// 005c9591  8b742408             mov esi, dword ptr [esp + 8]
// 005c9595  6a01                 push 1
// 005c9597  56                   push esi
// 005c9598  e8735effff           call 0x5bf410
// 005c959d  dd1c24               fstp qword ptr [esp]
// 005c95a0  ff1530e97700         call dword ptr [0x77e930]
// 005c95a6  dd1c24               fstp qword ptr [esp]
// 005c95a9  56                   push esi
// 005c95aa  e8c145ffff           call 0x5bdb70
// 005c95af  83c40c               add esp, 0xc
// 005c95b2  b801000000           mov eax, 1
// 005c95b7  5e                   pop esi
// 005c95b8  c3                   ret 

extern "C" double __cdecl ceil(double);

extern "C" double __cdecl sub_5BF410(int, int);
extern "C" void __cdecl sub_5BDB70(int);

int __cdecl sub_5C9590(int a)
{
    double d = sub_5BF410(a, 1);
    double c = ceil(d);
    sub_5BDB70(a);
    return 1;
}
