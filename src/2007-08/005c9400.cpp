// from server: 85% by colin
// roc 2007-08 005c9400  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9400
//
// 005c9400  56                   push esi
// 005c9401  8b742408             mov esi, dword ptr [esp + 8]
// 005c9405  6a01                 push 1
// 005c9407  56                   push esi
// 005c9408  e80360ffff           call 0x5bf410
// 005c940d  d9ff                 fcos 
// 005c940f  dd1c24               fstp qword ptr [esp]
// 005c9412  56                   push esi
// 005c9413  e85847ffff           call 0x5bdb70
// 005c9418  83c40c               add esp, 0xc
// 005c941b  b801000000           mov eax, 1
// 005c9420  5e                   pop esi
// 005c9421  c3                   ret 

extern "C" void __cdecl func_005bf410(int, int);
extern "C" void __cdecl func_005bdb70(int);

int func_005c9400(int a)
{
    func_005bf410(a, 1);
    double d = 0.0;
    func_005bdb70(a);
    return 1;
}
