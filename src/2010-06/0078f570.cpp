// from server: 100% by auto
// roc 2010-06 0078f570  unit: RBX::GroupDragTool  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f570
//
// 0078f570  51                   push ecx
// 0078f571  55                   push ebp
// 0078f572  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0078f576  57                   push edi
// 0078f577  8bf8                 mov edi, eax
// 0078f579  83ffff               cmp edi, -1
// 0078f57c  0f84a4000000         je 0x78f626
// 0078f582  53                   push ebx
// 0078f583  56                   push esi
// 0078f584  eb0a                 jmp 0x78f590
// 0078f586  8da42400000000       lea esp, [esp]
// 0078f58d  8d4900               lea ecx, [ecx]
// 0078f590  8b4500               mov eax, dword ptr [ebp]
// 0078f593  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0078f596  8d34bd00000000       lea esi, [edi*4]
// 0078f59d  8b040e               mov eax, dword ptr [esi + ecx]
// 0078f5a0  c1e80e               shr eax, 0xe
// 0078f5a3  2dffff0100           sub eax, 0x1ffff
// 0078f5a8  83f8ff               cmp eax, -1
// 0078f5ab  7506                 jne 0x78f5b3
// 0078f5ad  89442410             mov dword ptr [esp + 0x10], eax
// 0078f5b1  eb08                 jmp 0x78f5bb
// 0078f5b3  8d543801             lea edx, [eax + edi + 1]
// 0078f5b7  89542410             mov dword ptr [esp + 0x10], edx
// 0078f5bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078f5bf  8bc7                 mov eax, edi
// 0078f5c1  8bd5                 mov edx, ebp
// 0078f5c3  e898feffff           call 0x78f460
// 0078f5c8  85c0                 test eax, eax
// 0078f5ca  8b4500               mov eax, dword ptr [ebp]
// 0078f5cd  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0078f5d0  7408                 je 0x78f5da
// 0078f5d2  03de                 add ebx, esi
// 0078f5d4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0078f5d8  eb06                 jmp 0x78f5e0
// 0078f5da  03de                 add ebx, esi
// 0078f5dc  8b742424             mov esi, dword ptr [esp + 0x24]
// 0078f5e0  2bf7                 sub esi, edi
// 0078f5e2  4e                   dec esi
// 0078f5e3  8bc6                 mov eax, esi
// 0078f5e5  99                   cdq 
// 0078f5e6  33c2                 xor eax, edx
// 0078f5e8  2bc2                 sub eax, edx
// 0078f5ea  3dffff0100           cmp eax, 0x1ffff
// 0078f5ef  7e11                 jle 0x78f602
// 0078f5f1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0078f5f4  68f83da500           push 0xa53df8
// 0078f5f9  51                   push ecx
// 0078f5fa  e8912fffff           call 0x782590
// 0078f5ff  83c408               add esp, 8
// 0078f602  8b13                 mov edx, dword ptr [ebx]
// 0078f604  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0078f608  81c6ffff0100         add esi, 0x1ffff
// 0078f60e  81e2ff3f0000         and edx, 0x3fff
// 0078f614  c1e60e               shl esi, 0xe
// 0078f617  33f2                 xor esi, edx
// 0078f619  8933                 mov dword ptr [ebx], esi
// 0078f61b  83ffff               cmp edi, -1
// 0078f61e  0f856cffffff         jne 0x78f590
// 0078f624  5e                   pop esi
// 0078f625  5b                   pop ebx
// 0078f626  5f                   pop edi
// 0078f627  5d                   pop ebp
// 0078f628  59                   pop ecx
// 0078f629  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchlistaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
