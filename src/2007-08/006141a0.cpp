// from server: 100% by auto
// roc 2007-08 006141a0  unit: seg_00610000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006141a0
//
// 006141a0  55                   push ebp
// 006141a1  56                   push esi
// 006141a2  57                   push edi
// 006141a3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 006141a6  57                   push edi
// 006141a7  8bf0                 mov esi, eax
// 006141a9  e8b2efffff           call 0x613160
// 006141ae  8be8                 mov ebp, eax
// 006141b0  892e                 mov dword ptr [esi], ebp
// 006141b2  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006141b5  894608               mov dword ptr [esi + 8], eax
// 006141b8  33c0                 xor eax, eax
// 006141ba  895e0c               mov dword ptr [esi + 0xc], ebx
// 006141bd  897e10               mov dword ptr [esi + 0x10], edi
// 006141c0  897330               mov dword ptr [ebx + 0x30], esi
// 006141c3  83c9ff               or ecx, 0xffffffff
// 006141c6  50                   push eax
// 006141c7  894618               mov dword ptr [esi + 0x18], eax
// 006141ca  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006141cd  894e20               mov dword ptr [esi + 0x20], ecx
// 006141d0  894624               mov dword ptr [esi + 0x24], eax
// 006141d3  894628               mov dword ptr [esi + 0x28], eax
// 006141d6  89462c               mov dword ptr [esi + 0x2c], eax
// 006141d9  66894630             mov word ptr [esi + 0x30], ax
// 006141dd  884632               mov byte ptr [esi + 0x32], al
// 006141e0  894614               mov dword ptr [esi + 0x14], eax
// 006141e3  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 006141e6  50                   push eax
// 006141e7  57                   push edi
// 006141e8  894d20               mov dword ptr [ebp + 0x20], ecx
// 006141eb  c6454b02             mov byte ptr [ebp + 0x4b], 2
// 006141ef  e88ce1ffff           call 0x612380
// 006141f4  894604               mov dword ptr [esi + 4], eax
// 006141f7  8b4f08               mov ecx, dword ptr [edi + 8]
// 006141fa  8901                 mov dword ptr [ecx], eax
// 006141fc  c7410805000000       mov dword ptr [ecx + 8], 5
// 00614203  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00614206  2b5708               sub edx, dword ptr [edi + 8]
// 00614209  be10000000           mov esi, 0x10
// 0061420e  83c410               add esp, 0x10
// 00614211  3bd6                 cmp edx, esi
// 00614213  7f0b                 jg 0x614220
// 00614215  6a01                 push 1
// 00614217  57                   push edi
// 00614218  e8f318fbff           call 0x5c5b10
// 0061421d  83c408               add esp, 8
// 00614220  017708               add dword ptr [edi + 8], esi
// 00614223  8b4708               mov eax, dword ptr [edi + 8]
// 00614226  8928                 mov dword ptr [eax], ebp
// 00614228  c7400809000000       mov dword ptr [eax + 8], 9
// 0061422f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00614232  2b4708               sub eax, dword ptr [edi + 8]
// 00614235  3bc6                 cmp eax, esi
// 00614237  7f0b                 jg 0x614244
// 00614239  6a01                 push 1
// 0061423b  57                   push edi
// 0061423c  e8cf18fbff           call 0x5c5b10
// 00614241  83c408               add esp, 8
// 00614244  017708               add dword ptr [edi + 8], esi
// 00614247  5f                   pop edi
// 00614248  5e                   pop esi
// 00614249  5d                   pop ebp
// 0061424a  c3                   ret 
// library lua-5.1.4/lparser.c (function _open_func)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
