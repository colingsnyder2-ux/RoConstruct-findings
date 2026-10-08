// from server: 100% by auto
// roc 2011-06 007dc8a0  unit: seg_007d0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dc8a0
//
// 007dc8a0  83ec0c               sub esp, 0xc
// 007dc8a3  56                   push esi
// 007dc8a4  8b7030               mov esi, dword ptr [eax + 0x30]
// 007dc8a7  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 007dc8af  c644240e00           mov byte ptr [esp + 0xe], 0
// 007dc8b4  8a4e32               mov cl, byte ptr [esi + 0x32]
// 007dc8b7  884c240c             mov byte ptr [esp + 0xc], cl
// 007dc8bb  c644240d00           mov byte ptr [esp + 0xd], 0
// 007dc8c0  8b5614               mov edx, dword ptr [esi + 0x14]
// 007dc8c3  57                   push edi
// 007dc8c4  8d4c2408             lea ecx, [esp + 8]
// 007dc8c8  89542408             mov dword ptr [esp + 8], edx
// 007dc8cc  50                   push eax
// 007dc8cd  894e14               mov dword ptr [esi + 0x14], ecx
// 007dc8d0  e8cb130000           call 0x7ddca0
// 007dc8d5  8b7e14               mov edi, dword ptr [esi + 0x14]
// 007dc8d8  8b17                 mov edx, dword ptr [edi]
// 007dc8da  8b460c               mov eax, dword ptr [esi + 0xc]
// 007dc8dd  895614               mov dword ptr [esi + 0x14], edx
// 007dc8e0  0fb65708             movzx edx, byte ptr [edi + 8]
// 007dc8e4  83c404               add esp, 4
// 007dc8e7  e854e8ffff           call 0x7db140
// 007dc8ec  807f0900             cmp byte ptr [edi + 9], 0
// 007dc8f0  7414                 je 0x7dc906
// 007dc8f2  0fb64708             movzx eax, byte ptr [edi + 8]
// 007dc8f6  6a00                 push 0
// 007dc8f8  6a00                 push 0
// 007dc8fa  50                   push eax
// 007dc8fb  6a23                 push 0x23
// 007dc8fd  56                   push esi
// 007dc8fe  e8ad5e0100           call 0x7f27b0
// 007dc903  83c414               add esp, 0x14
// 007dc906  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007dc90a  894e24               mov dword ptr [esi + 0x24], ecx
// 007dc90d  8b5704               mov edx, dword ptr [edi + 4]
// 007dc910  52                   push edx
// 007dc911  56                   push esi
// 007dc912  e8f9600100           call 0x7f2a10
// 007dc917  83c408               add esp, 8
// 007dc91a  5f                   pop edi
// 007dc91b  5e                   pop esi
// 007dc91c  83c40c               add esp, 0xc
// 007dc91f  c3                   ret 
// library lua-5.1.4/lparser.c (function _block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
