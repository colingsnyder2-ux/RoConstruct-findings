// from server: 100% by auto
// roc 2010-06 005773e0  unit: seg_00570000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005773e0
//
// 005773e0  56                   push esi
// 005773e1  8b742408             mov esi, dword ptr [esp + 8]
// 005773e5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 005773ec  57                   push edi
// 005773ed  bf01000000           mov edi, 1
// 005773f2  7411                 je 0x577405
// 005773f4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 005773f7  2500030000           and eax, 0x300
// 005773fc  3d00030000           cmp eax, 0x300
// 00577401  750d                 jne 0x577410
// 00577403  eb09                 jmp 0x57740e
// 00577405  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 0057740c  7402                 je 0x577410
// 0057740e  33ff                 xor edi, edi
// 00577410  6a04                 push 4
// 00577412  8d4c2410             lea ecx, [esp + 0x10]
// 00577416  51                   push ecx
// 00577417  56                   push esi
// 00577418  e8f34fffff           call 0x56c410
// 0057741d  83c40c               add esp, 0xc
// 00577420  85ff                 test edi, edi
// 00577422  7431                 je 0x577455
// 00577424  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577428  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 0057742d  0fb6d0               movzx edx, al
// 00577430  c1e208               shl edx, 8
// 00577433  0fb6c4               movzx eax, ah
// 00577436  03d0                 add edx, eax
// 00577438  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 0057743d  c1e208               shl edx, 8
// 00577440  03d1                 add edx, ecx
// 00577442  c1e208               shl edx, 8
// 00577445  03d0                 add edx, eax
// 00577447  33c0                 xor eax, eax
// 00577449  3b9610010000         cmp edx, dword ptr [esi + 0x110]
// 0057744f  5f                   pop edi
// 00577450  0f95c0               setne al
// 00577453  5e                   pop esi
// 00577454  c3                   ret 
// 00577455  5f                   pop edi
// 00577456  33c0                 xor eax, eax
// 00577458  5e                   pop esi
// 00577459  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
