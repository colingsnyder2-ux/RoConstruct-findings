// from server: 100% by auto
// roc 2008-06 0051ccd0  unit: G3D::_internal::DialogTemplate  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ccd0
//
// 0051ccd0  57                   push edi
// 0051ccd1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051ccd5  85ff                 test edi, edi
// 0051ccd7  746e                 je 0x51cd47
// 0051ccd9  56                   push esi
// 0051ccda  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051ccde  85f6                 test esi, esi
// 0051cce0  7464                 je 0x51cd46
// 0051cce2  dd05788f8200         fld qword ptr [0x828f78]
// 0051cce8  dd442414             fld qword ptr [esp + 0x14]
// 0051ccec  d8d1                 fcom st(1)
// 0051ccee  dfe0                 fnstsw ax
// 0051ccf0  ddd9                 fstp st(1)
// 0051ccf2  f6c441               test ah, 0x41
// 0051ccf5  7516                 jne 0x51cd0d
// 0051ccf7  68a08f8200           push 0x828fa0
// 0051ccfc  ddd8                 fstp st(0)
// 0051ccfe  57                   push edi
// 0051ccff  e84ccd0000           call 0x529a50
// 0051cd04  dd05788f8200         fld qword ptr [0x828f78]
// 0051cd0a  83c408               add esp, 8
// 0051cd0d  d95628               fst dword ptr [esi + 0x28]
// 0051cd10  dd05708f8200         fld qword ptr [0x828f70]
// 0051cd16  d8c9                 fmul st(1)
// 0051cd18  dc0538e78100         fadd qword ptr [0x81e738]
// 0051cd1e  e8cd4a1800           call 0x6a17f0
// 0051cd23  d9ee                 fldz 
// 0051cd25  834e0801             or dword ptr [esi + 8], 1
// 0051cd29  dae9                 fucompp 
// 0051cd2b  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 0051cd31  dfe0                 fnstsw ax
// 0051cd33  f6c444               test ah, 0x44
// 0051cd36  7a0e                 jp 0x51cd46
// 0051cd38  68908f8200           push 0x828f90
// 0051cd3d  57                   push edi
// 0051cd3e  e80dcd0000           call 0x529a50
// 0051cd43  83c408               add esp, 8
// 0051cd46  5e                   pop esi
// 0051cd47  5f                   pop edi
// 0051cd48  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
