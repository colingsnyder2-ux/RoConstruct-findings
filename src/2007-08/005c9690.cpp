// from server: 86% by colin
// roc 2007-08 005c9690  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9690
//
// 005c9690  56                   push esi
// 005c9691  8b742408             mov esi, dword ptr [esp + 8]
// 005c9695  6a01                 push 1
// 005c9697  56                   push esi
// 005c9698  e8735dffff           call 0x5bf410
// 005c969d  d9fa                 fsqrt 
// 005c969f  dd1c24               fstp qword ptr [esp]
// 005c96a2  56                   push esi
// 005c96a3  e8c844ffff           call 0x5bdb70
// 005c96a8  83c40c               add esp, 0xc
// 005c96ab  b801000000           mov eax, 1
// 005c96b0  5e                   pop esi
// 005c96b1  c3                   ret 

extern "C" double __cdecl func_005bf410(int, int);
extern "C" void __cdecl func_005bdb70(int);

int func_005c9690(int a)
{
    double d = func_005bf410(a, 1);
    func_005bdb70(a);
    return 1;
}
