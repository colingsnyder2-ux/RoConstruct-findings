// roc 2010-06 00564fe0  unit: seg_00560000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564fe0
//
// 00564fe0  56                   push esi
// 00564fe1  8b742408             mov esi, dword ptr [esp + 8]
// 00564fe5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 00564fec  7411                 je 0x564fff
// 00564fee  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00564ff1  2500030000           and eax, 0x300
// 00564ff6  3d00030000           cmp eax, 0x300
// 00564ffb  750b                 jne 0x565008
// 00564ffd  5e                   pop esi
// 00564ffe  c3                   ret 
// 00564fff  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00565006  751f                 jne 0x565027
// 00565008  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056500c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00565010  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00565016  51                   push ecx
// 00565017  52                   push edx
// 00565018  50                   push eax
// 00565019  e8a2f20000           call 0x5742c0
// 0056501e  83c40c               add esp, 0xc
// 00565021  898610010000         mov dword ptr [esi + 0x110], eax
// 00565027  5e                   pop esi
// 00565028  c3                   ret 
// library libpng-1.2.5/png.c (function _png_calculate_crc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
