// from server: 100% by auto
// roc 2008-06 00529a50  unit: G3D::Line  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529a50
//
// 00529a50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00529a54  56                   push esi
// 00529a55  8b742408             mov esi, dword ptr [esp + 8]
// 00529a59  33c0                 xor eax, eax
// 00529a5b  f7466c00000c00       test dword ptr [esi + 0x6c], 0xc0000
// 00529a62  7422                 je 0x529a86
// 00529a64  803923               cmp byte ptr [ecx], 0x23
// 00529a67  751d                 jne 0x529a86
// 00529a69  b801000000           mov eax, 1
// 00529a6e  b220                 mov dl, 0x20
// 00529a70  381408               cmp byte ptr [eax + ecx], dl
// 00529a73  7411                 je 0x529a86
// 00529a75  38540801             cmp byte ptr [eax + ecx + 1], dl
// 00529a79  740a                 je 0x529a85
// 00529a7b  83c002               add eax, 2
// 00529a7e  83f80f               cmp eax, 0xf
// 00529a81  7ced                 jl 0x529a70
// 00529a83  eb01                 jmp 0x529a86
// 00529a85  40                   inc eax
// 00529a86  8b5644               mov edx, dword ptr [esi + 0x44]
// 00529a89  03c1                 add eax, ecx
// 00529a8b  85d2                 test edx, edx
// 00529a8d  7409                 je 0x529a98
// 00529a8f  50                   push eax
// 00529a90  56                   push esi
// 00529a91  ffd2                 call edx
// 00529a93  83c408               add esp, 8
// 00529a96  5e                   pop esi
// 00529a97  c3                   ret 
// 00529a98  5e                   pop esi
// 00529a99  e9d2fdffff           jmp 0x529870
// library libpng-1.2.5/pngerror.c (function _png_warning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngerror.c
