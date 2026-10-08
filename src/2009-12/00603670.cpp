// roc 2009-12 00603670  unit: seg_00600000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603670
//
// 00603670  56                   push esi
// 00603671  8b742408             mov esi, dword ptr [esp + 8]
// 00603675  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 0060367c  7411                 je 0x60368f
// 0060367e  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00603681  2500030000           and eax, 0x300
// 00603686  3d00030000           cmp eax, 0x300
// 0060368b  750b                 jne 0x603698
// 0060368d  5e                   pop esi
// 0060368e  c3                   ret 
// 0060368f  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00603696  751f                 jne 0x6036b7
// 00603698  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060369c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006036a0  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 006036a6  51                   push ecx
// 006036a7  52                   push edx
// 006036a8  50                   push eax
// 006036a9  e8f2f20000           call 0x6129a0
// 006036ae  83c40c               add esp, 0xc
// 006036b1  898610010000         mov dword ptr [esi + 0x110], eax
// 006036b7  5e                   pop esi
// 006036b8  c3                   ret 
// library libpng-1.2.5/png.c (function _png_calculate_crc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
