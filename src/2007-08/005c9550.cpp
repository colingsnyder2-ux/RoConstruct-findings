// from server: 79% by colin
// roc 2007-08 005c9550  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9550
//
// 005c9550  83ec08               sub esp, 8
// 005c9553  56                   push esi
// 005c9554  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c9558  6a01                 push 1
// 005c955a  56                   push esi
// 005c955b  e8b05effff           call 0x5bf410
// 005c9560  dd5c240c             fstp qword ptr [esp + 0xc]
// 005c9564  6a02                 push 2
// 005c9566  56                   push esi
// 005c9567  e8a45effff           call 0x5bf410
// 005c956c  dd442414             fld qword ptr [esp + 0x14]
// 005c9570  d9c9                 fxch st(1)
// 005c9572  83c408               add esp, 8
// 005c9575  d9f3                 fpatan 
// 005c9577  dd1c24               fstp qword ptr [esp]
// 005c957a  56                   push esi
// 005c957b  e8f045ffff           call 0x5bdb70
// 005c9580  83c40c               add esp, 0xc
// 005c9583  b801000000           mov eax, 1
// 005c9588  5e                   pop esi
// 005c9589  83c408               add esp, 8
// 005c958c  c3                   ret 

extern "C" double __cdecl func_005bf410(int, int);
extern "C" void __cdecl func_005bdb70(int, double);
extern "C" double __cdecl atan2(double, double);

double func_005c9550(int a)
{
    double x = func_005bf410(1, a);
    double y = func_005bf410(2, a);
    func_005bdb70(a, atan2(y, x));
    return 1.0;
}
