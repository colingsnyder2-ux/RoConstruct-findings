// roc 2010-06 00564560  unit: seg_00560000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564560
//
// 00564560  57                   push edi
// 00564561  8b7c2408             mov edi, dword ptr [esp + 8]
// 00564565  85ff                 test edi, edi
// 00564567  0f84c6000000         je 0x564633
// 0056456d  56                   push esi
// 0056456e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00564572  85f6                 test esi, esi
// 00564574  0f84b8000000         je 0x564632
// 0056457a  dd05e813a200         fld qword ptr [0xa213e8]
// 00564580  8a442414             mov al, byte ptr [esp + 0x14]
// 00564584  814e0800080000       or dword ptr [esi + 8], 0x800
// 0056458b  83ec08               sub esp, 8
// 0056458e  dd1c24               fstp qword ptr [esp]
// 00564591  56                   push esi
// 00564592  57                   push edi
// 00564593  88462c               mov byte ptr [esi + 0x2c], al
// 00564596  e8a5f8ffff           call 0x563e40
// 0056459b  688fb10000           push 0xb18f
// 005645a0  56                   push esi
// 005645a1  57                   push edi
// 005645a2  e819f9ffff           call 0x563ec0
// 005645a7  6870170000           push 0x1770
// 005645ac  68983a0000           push 0x3a98
// 005645b1  6860ea0000           push 0xea60
// 005645b6  6830750000           push 0x7530
// 005645bb  68e8800000           push 0x80e8
// 005645c0  6800fa0000           push 0xfa00
// 005645c5  6884800000           push 0x8084
// 005645ca  68267a0000           push 0x7a26
// 005645cf  56                   push esi
// 005645d0  57                   push edi
// 005645d1  e87af6ffff           call 0x563c50
// 005645d6  dd05e013a200         fld qword ptr [0xa213e0]
// 005645dc  dd5c243c             fstp qword ptr [esp + 0x3c]
// 005645e0  83c404               add esp, 4
// 005645e3  dd05d813a200         fld qword ptr [0xa213d8]
// 005645e9  dd5c2430             fstp qword ptr [esp + 0x30]
// 005645ed  dd05d013a200         fld qword ptr [0xa213d0]
// 005645f3  dd5c2428             fstp qword ptr [esp + 0x28]
// 005645f7  dd05c813a200         fld qword ptr [0xa213c8]
// 005645fd  dd5c2420             fstp qword ptr [esp + 0x20]
// 00564601  dd05c013a200         fld qword ptr [0xa213c0]
// 00564607  dd5c2418             fstp qword ptr [esp + 0x18]
// 0056460b  dd05b813a200         fld qword ptr [0xa213b8]
// 00564611  dd5c2410             fstp qword ptr [esp + 0x10]
// 00564615  dd05b013a200         fld qword ptr [0xa213b0]
// 0056461b  dd5c2408             fstp qword ptr [esp + 8]
// 0056461f  dd05a813a200         fld qword ptr [0xa213a8]
// 00564625  dd1c24               fstp qword ptr [esp]
// 00564628  56                   push esi
// 00564629  57                   push edi
// 0056462a  e811f3ffff           call 0x563940
// 0056462f  83c448               add esp, 0x48
// 00564632  5e                   pop esi
// 00564633  5f                   pop edi
// 00564634  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sRGB_gAMA_and_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
