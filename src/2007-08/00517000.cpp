// from server: 100% by auto
// roc 2007-08 00517000  unit: seg_00510000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00517000
//
// 00517000  56                   push esi
// 00517001  8b742408             mov esi, dword ptr [esp + 8]
// 00517005  f6466c40             test byte ptr [esi + 0x6c], 0x40
// 00517009  7519                 jne 0x517024
// 0051700b  56                   push esi
// 0051700c  e84fa40000           call 0x521460
// 00517011  8b442410             mov eax, dword ptr [esp + 0x10]
// 00517015  83c404               add esp, 4
// 00517018  50                   push eax
// 00517019  56                   push esi
// 0051701a  e8511e0000           call 0x518e70
// 0051701f  83c408               add esp, 8
// 00517022  5e                   pop esi
// 00517023  c3                   ret 
// 00517024  68802c7a00           push 0x7a2c80
// 00517029  56                   push esi
// 0051702a  e861790000           call 0x51e990
// 0051702f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00517033  83c408               add esp, 8
// 00517036  50                   push eax
// 00517037  56                   push esi
// 00517038  e8331e0000           call 0x518e70
// 0051703d  83c408               add esp, 8
// 00517040  5e                   pop esi
// 00517041  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_read_update_info)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
