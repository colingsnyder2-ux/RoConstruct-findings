// roc 2008-06 0051f0f0  unit: seg_00510000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051f0f0
//
// 0051f0f0  56                   push esi
// 0051f0f1  8b742408             mov esi, dword ptr [esp + 8]
// 0051f0f5  f6466c40             test byte ptr [esi + 0x6c], 0x40
// 0051f0f9  7519                 jne 0x51f114
// 0051f0fb  56                   push esi
// 0051f0fc  e8dfda0000           call 0x52cbe0
// 0051f101  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051f105  83c404               add esp, 4
// 0051f108  50                   push eax
// 0051f109  56                   push esi
// 0051f10a  e821110000           call 0x520230
// 0051f10f  83c408               add esp, 8
// 0051f112  5e                   pop esi
// 0051f113  c3                   ret 
// 0051f114  6848ab8200           push 0x82ab48
// 0051f119  56                   push esi
// 0051f11a  e831a90000           call 0x529a50
// 0051f11f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051f123  83c408               add esp, 8
// 0051f126  50                   push eax
// 0051f127  56                   push esi
// 0051f128  e803110000           call 0x520230
// 0051f12d  83c408               add esp, 8
// 0051f130  5e                   pop esi
// 0051f131  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_read_update_info)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
