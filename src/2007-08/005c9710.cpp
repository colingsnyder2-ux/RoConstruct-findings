// from server: 80% by colin
// roc 2007-08 005c9710  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9710
//
// 005c9710  56                   push esi
// 005c9711  8b742408             mov esi, dword ptr [esp + 8]
// 005c9715  6a01                 push 1
// 005c9717  56                   push esi
// 005c9718  e8f35cffff           call 0x5bf410
// 005c971d  d9ed                 fldln2 
// 005c971f  d9c9                 fxch st(1)
// 005c9721  d9f1                 fyl2x 
// 005c9723  dd1c24               fstp qword ptr [esp]
// 005c9726  56                   push esi
// 005c9727  e84444ffff           call 0x5bdb70
// 005c972c  83c40c               add esp, 0xc
// 005c972f  b801000000           mov eax, 1
// 005c9734  5e                   pop esi
// 005c9735  c3                   ret 

extern "C" int __cdecl sub_5BF410(int, int);
extern "C" void __cdecl sub_5BDB70(int, double);

int sub_5C9710(int a)
{
    sub_5BF410(a, 1);
    sub_5BDB70(a, 0.0);
    return 1;
}
