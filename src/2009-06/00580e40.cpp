// roc 2009-06 00580e40  unit: seg_00580000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580e40
//
// 00580e40  57                   push edi
// 00580e41  8b7c2408             mov edi, dword ptr [esp + 8]
// 00580e45  85ff                 test edi, edi
// 00580e47  0f84c6000000         je 0x580f13
// 00580e4d  56                   push esi
// 00580e4e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00580e52  85f6                 test esi, esi
// 00580e54  0f84b8000000         je 0x580f12
// 00580e5a  dd05e8c78c00         fld qword ptr [0x8cc7e8]
// 00580e60  8a442414             mov al, byte ptr [esp + 0x14]
// 00580e64  814e0800080000       or dword ptr [esi + 8], 0x800
// 00580e6b  83ec08               sub esp, 8
// 00580e6e  dd1c24               fstp qword ptr [esp]
// 00580e71  56                   push esi
// 00580e72  57                   push edi
// 00580e73  88462c               mov byte ptr [esi + 0x2c], al
// 00580e76  e8a5f8ffff           call 0x580720
// 00580e7b  688fb10000           push 0xb18f
// 00580e80  56                   push esi
// 00580e81  57                   push edi
// 00580e82  e819f9ffff           call 0x5807a0
// 00580e87  6870170000           push 0x1770
// 00580e8c  68983a0000           push 0x3a98
// 00580e91  6860ea0000           push 0xea60
// 00580e96  6830750000           push 0x7530
// 00580e9b  68e8800000           push 0x80e8
// 00580ea0  6800fa0000           push 0xfa00
// 00580ea5  6884800000           push 0x8084
// 00580eaa  68267a0000           push 0x7a26
// 00580eaf  56                   push esi
// 00580eb0  57                   push edi
// 00580eb1  e87af6ffff           call 0x580530
// 00580eb6  dd05e0c78c00         fld qword ptr [0x8cc7e0]
// 00580ebc  dd5c243c             fstp qword ptr [esp + 0x3c]
// 00580ec0  83c404               add esp, 4
// 00580ec3  dd05d8c78c00         fld qword ptr [0x8cc7d8]
// 00580ec9  dd5c2430             fstp qword ptr [esp + 0x30]
// 00580ecd  dd05d0c78c00         fld qword ptr [0x8cc7d0]
// 00580ed3  dd5c2428             fstp qword ptr [esp + 0x28]
// 00580ed7  dd05c8e98b00         fld qword ptr [0x8be9c8]
// 00580edd  dd5c2420             fstp qword ptr [esp + 0x20]
// 00580ee1  dd05c8c78c00         fld qword ptr [0x8cc7c8]
// 00580ee7  dd5c2418             fstp qword ptr [esp + 0x18]
// 00580eeb  dd05c0c78c00         fld qword ptr [0x8cc7c0]
// 00580ef1  dd5c2410             fstp qword ptr [esp + 0x10]
// 00580ef5  dd05b8c78c00         fld qword ptr [0x8cc7b8]
// 00580efb  dd5c2408             fstp qword ptr [esp + 8]
// 00580eff  dd05b0c78c00         fld qword ptr [0x8cc7b0]
// 00580f05  dd1c24               fstp qword ptr [esp]
// 00580f08  56                   push esi
// 00580f09  57                   push edi
// 00580f0a  e8f1f2ffff           call 0x580200
// 00580f0f  83c448               add esp, 0x48
// 00580f12  5e                   pop esi
// 00580f13  5f                   pop edi
// 00580f14  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sRGB_gAMA_and_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
