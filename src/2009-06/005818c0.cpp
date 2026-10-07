// roc 2009-06 005818c0  unit: seg_00580000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005818c0
//
// 005818c0  56                   push esi
// 005818c1  8b742408             mov esi, dword ptr [esp + 8]
// 005818c5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 005818cc  7411                 je 0x5818df
// 005818ce  8b466c               mov eax, dword ptr [esi + 0x6c]
// 005818d1  2500030000           and eax, 0x300
// 005818d6  3d00030000           cmp eax, 0x300
// 005818db  750b                 jne 0x5818e8
// 005818dd  5e                   pop esi
// 005818de  c3                   ret 
// 005818df  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 005818e6  751f                 jne 0x581907
// 005818e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005818ec  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005818f0  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005818f6  51                   push ecx
// 005818f7  52                   push edx
// 005818f8  50                   push eax
// 005818f9  e882f00000           call 0x590980
// 005818fe  83c40c               add esp, 0xc
// 00581901  898610010000         mov dword ptr [esi + 0x110], eax
// 00581907  5e                   pop esi
// 00581908  c3                   ret 
// library libpng-1.2.5/png.c (function _png_calculate_crc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
