// roc 2007-08 00513ec0  unit: G3D::_internal::DialogTemplate  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513ec0
//
// 00513ec0  57                   push edi
// 00513ec1  8b7c2408             mov edi, dword ptr [esp + 8]
// 00513ec5  85ff                 test edi, edi
// 00513ec7  746e                 je 0x513f37
// 00513ec9  56                   push esi
// 00513eca  8b742410             mov esi, dword ptr [esp + 0x10]
// 00513ece  85f6                 test esi, esi
// 00513ed0  7464                 je 0x513f36
// 00513ed2  dd0550117a00         fld qword ptr [0x7a1150]
// 00513ed8  dd442414             fld qword ptr [esp + 0x14]
// 00513edc  d8d1                 fcom st(1)
// 00513ede  dfe0                 fnstsw ax
// 00513ee0  ddd9                 fstp st(1)
// 00513ee2  f6c441               test ah, 0x41
// 00513ee5  7516                 jne 0x513efd
// 00513ee7  6870117a00           push 0x7a1170
// 00513eec  ddd8                 fstp st(0)
// 00513eee  57                   push edi
// 00513eef  e89caa0000           call 0x51e990
// 00513ef4  dd0550117a00         fld qword ptr [0x7a1150]
// 00513efa  83c408               add esp, 8
// 00513efd  d95628               fst dword ptr [esi + 0x28]
// 00513f00  dd0548117a00         fld qword ptr [0x7a1148]
// 00513f06  d8c9                 fmul st(1)
// 00513f08  dc05485b7900         fadd qword ptr [0x795b48]
// 00513f0e  e84dce1100           call 0x630d60
// 00513f13  d9ee                 fldz 
// 00513f15  834e0801             or dword ptr [esi + 8], 1
// 00513f19  dae9                 fucompp 
// 00513f1b  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00513f21  dfe0                 fnstsw ax
// 00513f23  f6c444               test ah, 0x44
// 00513f26  7a0e                 jp 0x513f36
// 00513f28  6860117a00           push 0x7a1160
// 00513f2d  57                   push edi
// 00513f2e  e85daa0000           call 0x51e990
// 00513f33  83c408               add esp, 8
// 00513f36  5e                   pop esi
// 00513f37  5f                   pop edi
// 00513f38  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
