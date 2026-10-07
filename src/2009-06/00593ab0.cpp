// roc 2009-06 00593ab0  unit: seg_00590000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593ab0
//
// 00593ab0  56                   push esi
// 00593ab1  8b742408             mov esi, dword ptr [esp + 8]
// 00593ab5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 00593abc  57                   push edi
// 00593abd  bf01000000           mov edi, 1
// 00593ac2  7411                 je 0x593ad5
// 00593ac4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00593ac7  2500030000           and eax, 0x300
// 00593acc  3d00030000           cmp eax, 0x300
// 00593ad1  750d                 jne 0x593ae0
// 00593ad3  eb09                 jmp 0x593ade
// 00593ad5  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00593adc  7402                 je 0x593ae0
// 00593ade  33ff                 xor edi, edi
// 00593ae0  6a04                 push 4
// 00593ae2  8d4c2410             lea ecx, [esp + 0x10]
// 00593ae6  51                   push ecx
// 00593ae7  56                   push esi
// 00593ae8  e81352ffff           call 0x588d00
// 00593aed  83c40c               add esp, 0xc
// 00593af0  85ff                 test edi, edi
// 00593af2  7431                 je 0x593b25
// 00593af4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00593af8  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00593afd  0fb6d0               movzx edx, al
// 00593b00  c1e208               shl edx, 8
// 00593b03  0fb6c4               movzx eax, ah
// 00593b06  03d0                 add edx, eax
// 00593b08  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 00593b0d  c1e208               shl edx, 8
// 00593b10  03d1                 add edx, ecx
// 00593b12  c1e208               shl edx, 8
// 00593b15  03d0                 add edx, eax
// 00593b17  33c0                 xor eax, eax
// 00593b19  3b9610010000         cmp edx, dword ptr [esi + 0x110]
// 00593b1f  5f                   pop edi
// 00593b20  0f95c0               setne al
// 00593b23  5e                   pop esi
// 00593b24  c3                   ret 
// 00593b25  5f                   pop edi
// 00593b26  33c0                 xor eax, eax
// 00593b28  5e                   pop esi
// 00593b29  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
