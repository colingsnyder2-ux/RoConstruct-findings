// roc 2009-12 00615ac0  unit: seg_00610000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615ac0
//
// 00615ac0  56                   push esi
// 00615ac1  8b742408             mov esi, dword ptr [esp + 8]
// 00615ac5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 00615acc  57                   push edi
// 00615acd  bf01000000           mov edi, 1
// 00615ad2  7411                 je 0x615ae5
// 00615ad4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00615ad7  2500030000           and eax, 0x300
// 00615adc  3d00030000           cmp eax, 0x300
// 00615ae1  750d                 jne 0x615af0
// 00615ae3  eb09                 jmp 0x615aee
// 00615ae5  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00615aec  7402                 je 0x615af0
// 00615aee  33ff                 xor edi, edi
// 00615af0  6a04                 push 4
// 00615af2  8d4c2410             lea ecx, [esp + 0x10]
// 00615af6  51                   push ecx
// 00615af7  56                   push esi
// 00615af8  e8934fffff           call 0x60aa90
// 00615afd  83c40c               add esp, 0xc
// 00615b00  85ff                 test edi, edi
// 00615b02  7431                 je 0x615b35
// 00615b04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00615b08  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00615b0d  0fb6d0               movzx edx, al
// 00615b10  c1e208               shl edx, 8
// 00615b13  0fb6c4               movzx eax, ah
// 00615b16  03d0                 add edx, eax
// 00615b18  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 00615b1d  c1e208               shl edx, 8
// 00615b20  03d1                 add edx, ecx
// 00615b22  c1e208               shl edx, 8
// 00615b25  03d0                 add edx, eax
// 00615b27  33c0                 xor eax, eax
// 00615b29  3b9610010000         cmp edx, dword ptr [esi + 0x110]
// 00615b2f  5f                   pop edi
// 00615b30  0f95c0               setne al
// 00615b33  5e                   pop esi
// 00615b34  c3                   ret 
// 00615b35  5f                   pop edi
// 00615b36  33c0                 xor eax, eax
// 00615b38  5e                   pop esi
// 00615b39  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
