// from server: 100% by auto
// roc 2012-06 00939db0  unit: seg_00930000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00939db0
//
// 00939db0  83ec0c               sub esp, 0xc
// 00939db3  56                   push esi
// 00939db4  8b7030               mov esi, dword ptr [eax + 0x30]
// 00939db7  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00939dbf  c644240e00           mov byte ptr [esp + 0xe], 0
// 00939dc4  8a4e32               mov cl, byte ptr [esi + 0x32]
// 00939dc7  884c240c             mov byte ptr [esp + 0xc], cl
// 00939dcb  c644240d00           mov byte ptr [esp + 0xd], 0
// 00939dd0  8b5614               mov edx, dword ptr [esi + 0x14]
// 00939dd3  57                   push edi
// 00939dd4  8d4c2408             lea ecx, [esp + 8]
// 00939dd8  89542408             mov dword ptr [esp + 8], edx
// 00939ddc  50                   push eax
// 00939ddd  894e14               mov dword ptr [esi + 0x14], ecx
// 00939de0  e8cb130000           call 0x93b1b0
// 00939de5  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00939de8  8b17                 mov edx, dword ptr [edi]
// 00939dea  8b460c               mov eax, dword ptr [esi + 0xc]
// 00939ded  895614               mov dword ptr [esi + 0x14], edx
// 00939df0  0fb65708             movzx edx, byte ptr [edi + 8]
// 00939df4  83c404               add esp, 4
// 00939df7  e854e8ffff           call 0x938650
// 00939dfc  807f0900             cmp byte ptr [edi + 9], 0
// 00939e00  7414                 je 0x939e16
// 00939e02  0fb64708             movzx eax, byte ptr [edi + 8]
// 00939e06  6a00                 push 0
// 00939e08  6a00                 push 0
// 00939e0a  50                   push eax
// 00939e0b  6a23                 push 0x23
// 00939e0d  56                   push esi
// 00939e0e  e83dd90200           call 0x967750
// 00939e13  83c414               add esp, 0x14
// 00939e16  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00939e1a  894e24               mov dword ptr [esi + 0x24], ecx
// 00939e1d  8b5704               mov edx, dword ptr [edi + 4]
// 00939e20  52                   push edx
// 00939e21  56                   push esi
// 00939e22  e889db0200           call 0x9679b0
// 00939e27  83c408               add esp, 8
// 00939e2a  5f                   pop edi
// 00939e2b  5e                   pop esi
// 00939e2c  83c40c               add esp, 0xc
// 00939e2f  c3                   ret 
// library lua-5.1.4/lparser.c (function _block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
