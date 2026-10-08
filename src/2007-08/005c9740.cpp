// from server: 80% by colin
// roc 2007-08 005c9740  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9740
//
// 005c9740  56                   push esi
// 005c9741  8b742408             mov esi, dword ptr [esp + 8]
// 005c9745  6a01                 push 1
// 005c9747  56                   push esi
// 005c9748  e8c35cffff           call 0x5bf410
// 005c974d  d9ec                 fldlg2 
// 005c974f  d9c9                 fxch st(1)
// 005c9751  d9f1                 fyl2x 
// 005c9753  dd1c24               fstp qword ptr [esp]
// 005c9756  56                   push esi
// 005c9757  e81444ffff           call 0x5bdb70
// 005c975c  83c40c               add esp, 0xc
// 005c975f  b801000000           mov eax, 1
// 005c9764  5e                   pop esi
// 005c9765  c3                   ret 

extern "C" void __cdecl func_005bf410(int, int);
extern "C" void __cdecl func_005bdb70(int, double);

int func_005c9740(int a)
{
    func_005bf410(a, 1);
    double d = 0.0;
    func_005bdb70(a, d);
    return 1;
}
