// from server: 62% by colin
// roc 2007-08 005c9770  unit: lua_exception  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9770
//
// 005c9770  56                   push esi
// 005c9771  8b742408             mov esi, dword ptr [esp + 8]
// 005c9775  6a01                 push 1
// 005c9777  56                   push esi
// 005c9778  e8935cffff           call 0x5bf410
// 005c977d  d9ea                 fldl2e 
// 005c977f  dec9                 fmulp st(1)
// 005c9781  d9c0                 fld st(0)
// 005c9783  d9fc                 frndint 
// 005c9785  d9c9                 fxch st(1)
// 005c9787  d8e1                 fsub st(1)
// 005c9789  d9f0                 f2xm1 
// 005c978b  d9e8                 fld1 
// 005c978d  dec1                 faddp st(1)
// 005c978f  d9fd                 fscale 
// 005c9791  ddd9                 fstp st(1)
// 005c9793  dd1c24               fstp qword ptr [esp]
// 005c9796  56                   push esi
// 005c9797  e8d443ffff           call 0x5bdb70
// 005c979c  83c40c               add esp, 0xc
// 005c979f  b801000000           mov eax, 1
// 005c97a4  5e                   pop esi
// 005c97a5  c3                   ret 

extern "C" int __cdecl sub_5BF410(int, int);
extern "C" void __cdecl sub_5BDB70(int, double);

int __cdecl sub_5C9770(int a)
{
    sub_5BF410(a, 1);
    double d = (double)a;
    sub_5BDB70(a, d);
    return 1;
}
