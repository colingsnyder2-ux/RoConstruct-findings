// from server: 100% by auto
// roc 2010-06 00780410  unit: seg_00780000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780410
//
// 00780410  83ec0c               sub esp, 0xc
// 00780413  56                   push esi
// 00780414  8b7030               mov esi, dword ptr [eax + 0x30]
// 00780417  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0078041f  c644240e00           mov byte ptr [esp + 0xe], 0
// 00780424  8a4e32               mov cl, byte ptr [esi + 0x32]
// 00780427  884c240c             mov byte ptr [esp + 0xc], cl
// 0078042b  c644240d00           mov byte ptr [esp + 0xd], 0
// 00780430  8b5614               mov edx, dword ptr [esi + 0x14]
// 00780433  57                   push edi
// 00780434  8d4c2408             lea ecx, [esp + 8]
// 00780438  89542408             mov dword ptr [esp + 8], edx
// 0078043c  50                   push eax
// 0078043d  894e14               mov dword ptr [esi + 0x14], ecx
// 00780440  e8ab130000           call 0x7817f0
// 00780445  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00780448  8b17                 mov edx, dword ptr [edi]
// 0078044a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078044d  895614               mov dword ptr [esi + 0x14], edx
// 00780450  0fb65708             movzx edx, byte ptr [edi + 8]
// 00780454  83c404               add esp, 4
// 00780457  e8a4e8ffff           call 0x77ed00
// 0078045c  807f0900             cmp byte ptr [edi + 9], 0
// 00780460  7414                 je 0x780476
// 00780462  0fb64708             movzx eax, byte ptr [edi + 8]
// 00780466  6a00                 push 0
// 00780468  6a00                 push 0
// 0078046a  50                   push eax
// 0078046b  6a23                 push 0x23
// 0078046d  56                   push esi
// 0078046e  e8edf60000           call 0x78fb60
// 00780473  83c414               add esp, 0x14
// 00780476  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0078047a  894e24               mov dword ptr [esi + 0x24], ecx
// 0078047d  8b5704               mov edx, dword ptr [edi + 4]
// 00780480  52                   push edx
// 00780481  56                   push esi
// 00780482  e839f90000           call 0x78fdc0
// 00780487  83c408               add esp, 8
// 0078048a  5f                   pop edi
// 0078048b  5e                   pop esi
// 0078048c  83c40c               add esp, 0xc
// 0078048f  c3                   ret 
// library lua-5.1.4/lparser.c (function _block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
