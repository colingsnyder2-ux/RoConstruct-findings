// from server: 100% by auto
// roc 2009-06 005a2050  unit: seg_005a0000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2050
//
// 005a2050  53                   push ebx
// 005a2051  8a5c2408             mov bl, byte ptr [esp + 8]
// 005a2055  56                   push esi
// 005a2056  8bf0                 mov esi, eax
// 005a2058  6a7f                 push 0x7f
// 005a205a  b807000000           mov eax, 7
// 005a205f  e88cfdffff           call 0x5a1df0
// 005a2064  83c404               add esp, 4
// 005a2067  84c0                 test al, al
// 005a2069  0f848c000000         je 0x5a20fb
// 005a206f  33c0                 xor eax, eax
// 005a2071  894608               mov dword ptr [esi + 8], eax
// 005a2074  89460c               mov dword ptr [esi + 0xc], eax
// 005a2077  8b06                 mov eax, dword ptr [esi]
// 005a2079  c600ff               mov byte ptr [eax], 0xff
// 005a207c  ff06                 inc dword ptr [esi]
// 005a207e  834604ff             add dword ptr [esi + 4], -1
// 005a2082  57                   push edi
// 005a2083  751d                 jne 0x5a20a2
// 005a2085  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2088  8b7818               mov edi, dword ptr [eax + 0x18]
// 005a208b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005a208e  50                   push eax
// 005a208f  ffd1                 call ecx
// 005a2091  83c404               add esp, 4
// 005a2094  84c0                 test al, al
// 005a2096  7468                 je 0x5a2100
// 005a2098  8b17                 mov edx, dword ptr [edi]
// 005a209a  8916                 mov dword ptr [esi], edx
// 005a209c  8b4704               mov eax, dword ptr [edi + 4]
// 005a209f  894604               mov dword ptr [esi + 4], eax
// 005a20a2  8b0e                 mov ecx, dword ptr [esi]
// 005a20a4  80eb30               sub bl, 0x30
// 005a20a7  8819                 mov byte ptr [ecx], bl
// 005a20a9  ff06                 inc dword ptr [esi]
// 005a20ab  834604ff             add dword ptr [esi + 4], -1
// 005a20af  751d                 jne 0x5a20ce
// 005a20b1  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a20b4  8b7818               mov edi, dword ptr [eax + 0x18]
// 005a20b7  8b570c               mov edx, dword ptr [edi + 0xc]
// 005a20ba  50                   push eax
// 005a20bb  ffd2                 call edx
// 005a20bd  83c404               add esp, 4
// 005a20c0  84c0                 test al, al
// 005a20c2  743c                 je 0x5a2100
// 005a20c4  8b07                 mov eax, dword ptr [edi]
// 005a20c6  8906                 mov dword ptr [esi], eax
// 005a20c8  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a20cb  894e04               mov dword ptr [esi + 4], ecx
// 005a20ce  8b5620               mov edx, dword ptr [esi + 0x20]
// 005a20d1  33c0                 xor eax, eax
// 005a20d3  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 005a20d9  7e1a                 jle 0x5a20f5
// 005a20db  8d4e10               lea ecx, [esi + 0x10]
// 005a20de  8bff                 mov edi, edi
// 005a20e0  c70100000000         mov dword ptr [ecx], 0
// 005a20e6  8b5620               mov edx, dword ptr [esi + 0x20]
// 005a20e9  40                   inc eax
// 005a20ea  83c104               add ecx, 4
// 005a20ed  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 005a20f3  7ceb                 jl 0x5a20e0
// 005a20f5  5f                   pop edi
// 005a20f6  5e                   pop esi
// 005a20f7  b001                 mov al, 1
// 005a20f9  5b                   pop ebx
// 005a20fa  c3                   ret 
// 005a20fb  5e                   pop esi
// 005a20fc  32c0                 xor al, al
// 005a20fe  5b                   pop ebx
// 005a20ff  c3                   ret 
// 005a2100  5f                   pop edi
// 005a2101  5e                   pop esi
// 005a2102  32c0                 xor al, al
// 005a2104  5b                   pop ebx
// 005a2105  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
