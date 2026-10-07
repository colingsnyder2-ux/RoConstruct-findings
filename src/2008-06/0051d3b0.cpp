// roc 2008-06 0051d3b0  unit: seg_00510000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d3b0
//
// 0051d3b0  57                   push edi
// 0051d3b1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051d3b5  85ff                 test edi, edi
// 0051d3b7  0f84c6000000         je 0x51d483
// 0051d3bd  56                   push esi
// 0051d3be  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051d3c2  85f6                 test esi, esi
// 0051d3c4  0f84b8000000         je 0x51d482
// 0051d3ca  dd0598928200         fld qword ptr [0x829298]
// 0051d3d0  8a442414             mov al, byte ptr [esp + 0x14]
// 0051d3d4  814e0800080000       or dword ptr [esi + 8], 0x800
// 0051d3db  83ec08               sub esp, 8
// 0051d3de  dd1c24               fstp qword ptr [esp]
// 0051d3e1  56                   push esi
// 0051d3e2  57                   push edi
// 0051d3e3  88462c               mov byte ptr [esi + 0x2c], al
// 0051d3e6  e8e5f8ffff           call 0x51ccd0
// 0051d3eb  688fb10000           push 0xb18f
// 0051d3f0  56                   push esi
// 0051d3f1  57                   push edi
// 0051d3f2  e859f9ffff           call 0x51cd50
// 0051d3f7  6870170000           push 0x1770
// 0051d3fc  68983a0000           push 0x3a98
// 0051d401  6860ea0000           push 0xea60
// 0051d406  6830750000           push 0x7530
// 0051d40b  68e8800000           push 0x80e8
// 0051d410  6800fa0000           push 0xfa00
// 0051d415  6884800000           push 0x8084
// 0051d41a  68267a0000           push 0x7a26
// 0051d41f  56                   push esi
// 0051d420  57                   push edi
// 0051d421  e8baf6ffff           call 0x51cae0
// 0051d426  dd0590928200         fld qword ptr [0x829290]
// 0051d42c  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0051d430  83c404               add esp, 4
// 0051d433  dd0588928200         fld qword ptr [0x829288]
// 0051d439  dd5c2430             fstp qword ptr [esp + 0x30]
// 0051d43d  dd0580928200         fld qword ptr [0x829280]
// 0051d443  dd5c2428             fstp qword ptr [esp + 0x28]
// 0051d447  dd05001e8200         fld qword ptr [0x821e00]
// 0051d44d  dd5c2420             fstp qword ptr [esp + 0x20]
// 0051d451  dd0578928200         fld qword ptr [0x829278]
// 0051d457  dd5c2418             fstp qword ptr [esp + 0x18]
// 0051d45b  dd0570928200         fld qword ptr [0x829270]
// 0051d461  dd5c2410             fstp qword ptr [esp + 0x10]
// 0051d465  dd0568928200         fld qword ptr [0x829268]
// 0051d46b  dd5c2408             fstp qword ptr [esp + 8]
// 0051d46f  dd0560928200         fld qword ptr [0x829260]
// 0051d475  dd1c24               fstp qword ptr [esp]
// 0051d478  56                   push esi
// 0051d479  57                   push edi
// 0051d47a  e821f3ffff           call 0x51c7a0
// 0051d47f  83c448               add esp, 0x48
// 0051d482  5e                   pop esi
// 0051d483  5f                   pop edi
// 0051d484  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sRGB_gAMA_and_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
