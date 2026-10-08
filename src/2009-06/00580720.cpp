// from server: 100% by auto
// roc 2009-06 00580720  unit: G3D::_internal::DialogTemplate  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580720
//
// 00580720  57                   push edi
// 00580721  8b7c2408             mov edi, dword ptr [esp + 8]
// 00580725  85ff                 test edi, edi
// 00580727  746e                 je 0x580797
// 00580729  56                   push esi
// 0058072a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058072e  85f6                 test esi, esi
// 00580730  7464                 je 0x580796
// 00580732  dd0578c48c00         fld qword ptr [0x8cc478]
// 00580738  dd442414             fld qword ptr [esp + 0x14]
// 0058073c  d8d1                 fcom st(1)
// 0058073e  dfe0                 fnstsw ax
// 00580740  ddd9                 fstp st(1)
// 00580742  f6c441               test ah, 0x41
// 00580745  7516                 jne 0x58075d
// 00580747  68d0c48c00           push 0x8cc4d0
// 0058074c  ddd8                 fstp st(0)
// 0058074e  57                   push edi
// 0058074f  e8bcda0000           call 0x58e210
// 00580754  dd0578c48c00         fld qword ptr [0x8cc478]
// 0058075a  83c408               add esp, 8
// 0058075d  d95628               fst dword ptr [esi + 0x28]
// 00580760  dd0570c48c00         fld qword ptr [0x8cc470]
// 00580766  d8c9                 fmul st(1)
// 00580768  dc05f8018c00         fadd qword ptr [0x8c01f8]
// 0058076e  e84d971900           call 0x719ec0
// 00580773  d9ee                 fldz 
// 00580775  834e0801             or dword ptr [esi + 8], 1
// 00580779  dae9                 fucompp 
// 0058077b  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00580781  dfe0                 fnstsw ax
// 00580783  f6c444               test ah, 0x44
// 00580786  7a0e                 jp 0x580796
// 00580788  68c0c48c00           push 0x8cc4c0
// 0058078d  57                   push edi
// 0058078e  e87dda0000           call 0x58e210
// 00580793  83c408               add esp, 8
// 00580796  5e                   pop esi
// 00580797  5f                   pop edi
// 00580798  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
