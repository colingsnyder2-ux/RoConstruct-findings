// from server: 100% by auto
// roc 2012-06 00659e10  unit: seg_00650000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00659e10
//
// 00659e10  56                   push esi
// 00659e11  8b742408             mov esi, dword ptr [esp + 8]
// 00659e15  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 00659e1c  57                   push edi
// 00659e1d  bf01000000           mov edi, 1
// 00659e22  7411                 je 0x659e35
// 00659e24  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00659e27  2500030000           and eax, 0x300
// 00659e2c  3d00030000           cmp eax, 0x300
// 00659e31  750d                 jne 0x659e40
// 00659e33  eb09                 jmp 0x659e3e
// 00659e35  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00659e3c  7402                 je 0x659e40
// 00659e3e  33ff                 xor edi, edi
// 00659e40  6a04                 push 4
// 00659e42  8d4c2410             lea ecx, [esp + 0x10]
// 00659e46  51                   push ecx
// 00659e47  56                   push esi
// 00659e48  e8a33fffff           call 0x64ddf0
// 00659e4d  83c40c               add esp, 0xc
// 00659e50  85ff                 test edi, edi
// 00659e52  7431                 je 0x659e85
// 00659e54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00659e58  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00659e5d  0fb6d0               movzx edx, al
// 00659e60  c1e208               shl edx, 8
// 00659e63  0fb6c4               movzx eax, ah
// 00659e66  03d0                 add edx, eax
// 00659e68  0fb644240f           movzx eax, byte ptr [esp + 0xf]
// 00659e6d  c1e208               shl edx, 8
// 00659e70  03d1                 add edx, ecx
// 00659e72  c1e208               shl edx, 8
// 00659e75  03d0                 add edx, eax
// 00659e77  33c0                 xor eax, eax
// 00659e79  3b9610010000         cmp edx, dword ptr [esi + 0x110]
// 00659e7f  5f                   pop edi
// 00659e80  0f95c0               setne al
// 00659e83  5e                   pop esi
// 00659e84  c3                   ret 
// 00659e85  5f                   pop edi
// 00659e86  33c0                 xor eax, eax
// 00659e88  5e                   pop esi
// 00659e89  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
