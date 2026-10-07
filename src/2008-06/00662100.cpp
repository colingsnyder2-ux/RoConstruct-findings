// roc 2008-06 00662100  unit: RBX::FilterStairs  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662100
//
// 00662100  83ec0c               sub esp, 0xc
// 00662103  56                   push esi
// 00662104  8b7030               mov esi, dword ptr [eax + 0x30]
// 00662107  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0066210f  c644240e00           mov byte ptr [esp + 0xe], 0
// 00662114  8a4e32               mov cl, byte ptr [esi + 0x32]
// 00662117  884c240c             mov byte ptr [esp + 0xc], cl
// 0066211b  c644240d00           mov byte ptr [esp + 0xd], 0
// 00662120  8b5614               mov edx, dword ptr [esi + 0x14]
// 00662123  57                   push edi
// 00662124  8d4c2408             lea ecx, [esp + 8]
// 00662128  89542408             mov dword ptr [esp + 8], edx
// 0066212c  50                   push eax
// 0066212d  894e14               mov dword ptr [esi + 0x14], ecx
// 00662130  e87b130000           call 0x6634b0
// 00662135  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00662138  8b17                 mov edx, dword ptr [edi]
// 0066213a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066213d  895614               mov dword ptr [esi + 0x14], edx
// 00662140  0fb65708             movzx edx, byte ptr [edi + 8]
// 00662144  83c404               add esp, 4
// 00662147  e8a4e8ffff           call 0x6609f0
// 0066214c  807f0900             cmp byte ptr [edi + 9], 0
// 00662150  7414                 je 0x662166
// 00662152  0fb64708             movzx eax, byte ptr [edi + 8]
// 00662156  6a00                 push 0
// 00662158  6a00                 push 0
// 0066215a  50                   push eax
// 0066215b  6a23                 push 0x23
// 0066215d  56                   push esi
// 0066215e  e8cd900000           call 0x66b230
// 00662163  83c414               add esp, 0x14
// 00662166  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0066216a  894e24               mov dword ptr [esi + 0x24], ecx
// 0066216d  8b5704               mov edx, dword ptr [edi + 4]
// 00662170  52                   push edx
// 00662171  56                   push esi
// 00662172  e809930000           call 0x66b480
// 00662177  83c408               add esp, 8
// 0066217a  5f                   pop edi
// 0066217b  5e                   pop esi
// 0066217c  83c40c               add esp, 0xc
// 0066217f  c3                   ret 
// library lua-5.1.4/lparser.c (function _block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
