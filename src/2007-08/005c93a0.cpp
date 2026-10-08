// from server: 85% by colin
// roc 2007-08 005c93a0  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c93a0
//
// 005c93a0  56                   push esi
// 005c93a1  8b742408             mov esi, dword ptr [esp + 8]
// 005c93a5  6a01                 push 1
// 005c93a7  56                   push esi
// 005c93a8  e86360ffff           call 0x5bf410
// 005c93ad  d9fe                 fsin 
// 005c93af  dd1c24               fstp qword ptr [esp]
// 005c93b2  56                   push esi
// 005c93b3  e8b847ffff           call 0x5bdb70
// 005c93b8  83c40c               add esp, 0xc
// 005c93bb  b801000000           mov eax, 1
// 005c93c0  5e                   pop esi
// 005c93c1  c3                   ret 

extern "C" void __cdecl sub_5bf410(int, int);
extern "C" void __cdecl sub_5bdb70(int);

int __cdecl sub_5c93a0(int a) {
    sub_5bf410(a, 1);
    double d = (double)(float)0;
    sub_5bdb70(a);
    return 1;
}
