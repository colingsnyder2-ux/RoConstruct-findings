// roc 2009-12 00602bf0  unit: seg_00600000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00602bf0
//
// 00602bf0  57                   push edi
// 00602bf1  8b7c2408             mov edi, dword ptr [esp + 8]
// 00602bf5  85ff                 test edi, edi
// 00602bf7  0f84c6000000         je 0x602cc3
// 00602bfd  56                   push esi
// 00602bfe  8b742410             mov esi, dword ptr [esp + 0x10]
// 00602c02  85f6                 test esi, esi
// 00602c04  0f84b8000000         je 0x602cc2
// 00602c0a  dd0588369c00         fld qword ptr [0x9c3688]
// 00602c10  8a442414             mov al, byte ptr [esp + 0x14]
// 00602c14  814e0800080000       or dword ptr [esi + 8], 0x800
// 00602c1b  83ec08               sub esp, 8
// 00602c1e  dd1c24               fstp qword ptr [esp]
// 00602c21  56                   push esi
// 00602c22  57                   push edi
// 00602c23  88462c               mov byte ptr [esi + 0x2c], al
// 00602c26  e8a5f8ffff           call 0x6024d0
// 00602c2b  688fb10000           push 0xb18f
// 00602c30  56                   push esi
// 00602c31  57                   push edi
// 00602c32  e819f9ffff           call 0x602550
// 00602c37  6870170000           push 0x1770
// 00602c3c  68983a0000           push 0x3a98
// 00602c41  6860ea0000           push 0xea60
// 00602c46  6830750000           push 0x7530
// 00602c4b  68e8800000           push 0x80e8
// 00602c50  6800fa0000           push 0xfa00
// 00602c55  6884800000           push 0x8084
// 00602c5a  68267a0000           push 0x7a26
// 00602c5f  56                   push esi
// 00602c60  57                   push edi
// 00602c61  e87af6ffff           call 0x6022e0
// 00602c66  dd0580369c00         fld qword ptr [0x9c3680]
// 00602c6c  dd5c243c             fstp qword ptr [esp + 0x3c]
// 00602c70  83c404               add esp, 4
// 00602c73  dd0578369c00         fld qword ptr [0x9c3678]
// 00602c79  dd5c2430             fstp qword ptr [esp + 0x30]
// 00602c7d  dd0570369c00         fld qword ptr [0x9c3670]
// 00602c83  dd5c2428             fstp qword ptr [esp + 0x28]
// 00602c87  dd05d84c9b00         fld qword ptr [0x9b4cd8]
// 00602c8d  dd5c2420             fstp qword ptr [esp + 0x20]
// 00602c91  dd0568369c00         fld qword ptr [0x9c3668]
// 00602c97  dd5c2418             fstp qword ptr [esp + 0x18]
// 00602c9b  dd0560369c00         fld qword ptr [0x9c3660]
// 00602ca1  dd5c2410             fstp qword ptr [esp + 0x10]
// 00602ca5  dd0558369c00         fld qword ptr [0x9c3658]
// 00602cab  dd5c2408             fstp qword ptr [esp + 8]
// 00602caf  dd0550369c00         fld qword ptr [0x9c3650]
// 00602cb5  dd1c24               fstp qword ptr [esp]
// 00602cb8  56                   push esi
// 00602cb9  57                   push edi
// 00602cba  e811f3ffff           call 0x601fd0
// 00602cbf  83c448               add esp, 0x48
// 00602cc2  5e                   pop esi
// 00602cc3  5f                   pop edi
// 00602cc4  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sRGB_gAMA_and_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
