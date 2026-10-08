// from server: 67% by colin
// roc 2007-08 005c9850  unit: lua_exception  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9850
//
// 005c9850  56                   push esi
// 005c9851  8b742408             mov esi, dword ptr [esp + 8]
// 005c9855  6a02                 push 2
// 005c9857  56                   push esi
// 005c9858  e8335cffff           call 0x5bf490
// 005c985d  83c408               add esp, 8
// 005c9860  50                   push eax
// 005c9861  6a01                 push 1
// 005c9863  56                   push esi
// 005c9864  e8a75bffff           call 0x5bf410
// 005c9869  dd1c24               fstp qword ptr [esp]
// 005c986c  ff1554e87700         call dword ptr [0x77e854]
// 005c9872  dd5c2404             fstp qword ptr [esp + 4]
// 005c9876  83c404               add esp, 4
// 005c9879  56                   push esi
// 005c987a  e8f142ffff           call 0x5bdb70
// 005c987f  83c40c               add esp, 0xc
// 005c9882  b801000000           mov eax, 1
// 005c9887  5e                   pop esi
// 005c9888  c3                   ret 

extern "C" __declspec(dllimport) double __stdcall ldexp(double x, int exp);

extern "C" int __cdecl sub_5BF490(int a, int b);
extern "C" double __cdecl sub_5BF410(int a, int b);
extern "C" int __cdecl sub_5BDB70(int a);

int __cdecl sub_5C9850(int a)
{
    int v = sub_5BF490(a, 2);
    double d = sub_5BF410(a, 1);
    ldexp(d, v);
    sub_5BDB70(a);
    return 1;
}
