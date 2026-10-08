// from server: 88% by colin
// roc 2007-08 005c9460  unit: lua_exception  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9460
//
// 005c9460  56                   push esi
// 005c9461  8b742408             mov esi, dword ptr [esp + 8]
// 005c9465  6a01                 push 1
// 005c9467  56                   push esi
// 005c9468  e8a35fffff           call 0x5bf410
// 005c946d  d9f2                 fptan 
// 005c946f  ddd8                 fstp st(0)
// 005c9471  dd1c24               fstp qword ptr [esp]
// 005c9474  56                   push esi
// 005c9475  e8f646ffff           call 0x5bdb70
// 005c947a  83c40c               add esp, 0xc
// 005c947d  b801000000           mov eax, 1
// 005c9482  5e                   pop esi
// 005c9483  c3                   ret 

extern "C" void __cdecl sub_005bf410(int, int);
extern "C" void __cdecl sub_005bdb70(int, double);

int __cdecl sub_005c9460(int a)
{
    sub_005bf410(a, 1);
    sub_005bdb70(a, 0.0);
    return 1;
}
