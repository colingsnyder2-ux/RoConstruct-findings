// from server: 100% by auto
// roc 2009-06 006ef170  unit: seg_006e0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef170
//
// 006ef170  83ec0c               sub esp, 0xc
// 006ef173  56                   push esi
// 006ef174  8b7030               mov esi, dword ptr [eax + 0x30]
// 006ef177  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 006ef17f  c644240e00           mov byte ptr [esp + 0xe], 0
// 006ef184  8a4e32               mov cl, byte ptr [esi + 0x32]
// 006ef187  884c240c             mov byte ptr [esp + 0xc], cl
// 006ef18b  c644240d00           mov byte ptr [esp + 0xd], 0
// 006ef190  8b5614               mov edx, dword ptr [esi + 0x14]
// 006ef193  57                   push edi
// 006ef194  8d4c2408             lea ecx, [esp + 8]
// 006ef198  89542408             mov dword ptr [esp + 8], edx
// 006ef19c  50                   push eax
// 006ef19d  894e14               mov dword ptr [esi + 0x14], ecx
// 006ef1a0  e8ab130000           call 0x6f0550
// 006ef1a5  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006ef1a8  8b17                 mov edx, dword ptr [edi]
// 006ef1aa  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ef1ad  895614               mov dword ptr [esi + 0x14], edx
// 006ef1b0  0fb65708             movzx edx, byte ptr [edi + 8]
// 006ef1b4  83c404               add esp, 4
// 006ef1b7  e8a4e8ffff           call 0x6eda60
// 006ef1bc  807f0900             cmp byte ptr [edi + 9], 0
// 006ef1c0  7414                 je 0x6ef1d6
// 006ef1c2  0fb64708             movzx eax, byte ptr [edi + 8]
// 006ef1c6  6a00                 push 0
// 006ef1c8  6a00                 push 0
// 006ef1ca  50                   push eax
// 006ef1cb  6a23                 push 0x23
// 006ef1cd  56                   push esi
// 006ef1ce  e8fdaf0000           call 0x6fa1d0
// 006ef1d3  83c414               add esp, 0x14
// 006ef1d6  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ef1da  894e24               mov dword ptr [esi + 0x24], ecx
// 006ef1dd  8b5704               mov edx, dword ptr [edi + 4]
// 006ef1e0  52                   push edx
// 006ef1e1  56                   push esi
// 006ef1e2  e849b20000           call 0x6fa430
// 006ef1e7  83c408               add esp, 8
// 006ef1ea  5f                   pop edi
// 006ef1eb  5e                   pop esi
// 006ef1ec  83c40c               add esp, 0xc
// 006ef1ef  c3                   ret 
// library lua-5.1.4/lparser.c (function _block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
