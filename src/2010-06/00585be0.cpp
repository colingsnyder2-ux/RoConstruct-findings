// roc 2010-06 00585be0  unit: seg_00580000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585be0
//
// 00585be0  53                   push ebx
// 00585be1  8a5c2408             mov bl, byte ptr [esp + 8]
// 00585be5  56                   push esi
// 00585be6  8bf0                 mov esi, eax
// 00585be8  6a7f                 push 0x7f
// 00585bea  b807000000           mov eax, 7
// 00585bef  e88cfdffff           call 0x585980
// 00585bf4  83c404               add esp, 4
// 00585bf7  84c0                 test al, al
// 00585bf9  0f848c000000         je 0x585c8b
// 00585bff  33c0                 xor eax, eax
// 00585c01  894608               mov dword ptr [esi + 8], eax
// 00585c04  89460c               mov dword ptr [esi + 0xc], eax
// 00585c07  8b06                 mov eax, dword ptr [esi]
// 00585c09  c600ff               mov byte ptr [eax], 0xff
// 00585c0c  ff06                 inc dword ptr [esi]
// 00585c0e  834604ff             add dword ptr [esi + 4], -1
// 00585c12  57                   push edi
// 00585c13  751d                 jne 0x585c32
// 00585c15  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585c18  8b7818               mov edi, dword ptr [eax + 0x18]
// 00585c1b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00585c1e  50                   push eax
// 00585c1f  ffd1                 call ecx
// 00585c21  83c404               add esp, 4
// 00585c24  84c0                 test al, al
// 00585c26  7468                 je 0x585c90
// 00585c28  8b17                 mov edx, dword ptr [edi]
// 00585c2a  8916                 mov dword ptr [esi], edx
// 00585c2c  8b4704               mov eax, dword ptr [edi + 4]
// 00585c2f  894604               mov dword ptr [esi + 4], eax
// 00585c32  8b0e                 mov ecx, dword ptr [esi]
// 00585c34  80eb30               sub bl, 0x30
// 00585c37  8819                 mov byte ptr [ecx], bl
// 00585c39  ff06                 inc dword ptr [esi]
// 00585c3b  834604ff             add dword ptr [esi + 4], -1
// 00585c3f  751d                 jne 0x585c5e
// 00585c41  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585c44  8b7818               mov edi, dword ptr [eax + 0x18]
// 00585c47  8b570c               mov edx, dword ptr [edi + 0xc]
// 00585c4a  50                   push eax
// 00585c4b  ffd2                 call edx
// 00585c4d  83c404               add esp, 4
// 00585c50  84c0                 test al, al
// 00585c52  743c                 je 0x585c90
// 00585c54  8b07                 mov eax, dword ptr [edi]
// 00585c56  8906                 mov dword ptr [esi], eax
// 00585c58  8b4f04               mov ecx, dword ptr [edi + 4]
// 00585c5b  894e04               mov dword ptr [esi + 4], ecx
// 00585c5e  8b5620               mov edx, dword ptr [esi + 0x20]
// 00585c61  33c0                 xor eax, eax
// 00585c63  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 00585c69  7e1a                 jle 0x585c85
// 00585c6b  8d4e10               lea ecx, [esi + 0x10]
// 00585c6e  8bff                 mov edi, edi
// 00585c70  c70100000000         mov dword ptr [ecx], 0
// 00585c76  8b5620               mov edx, dword ptr [esi + 0x20]
// 00585c79  40                   inc eax
// 00585c7a  83c104               add ecx, 4
// 00585c7d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00585c83  7ceb                 jl 0x585c70
// 00585c85  5f                   pop edi
// 00585c86  5e                   pop esi
// 00585c87  b001                 mov al, 1
// 00585c89  5b                   pop ebx
// 00585c8a  c3                   ret 
// 00585c8b  5e                   pop esi
// 00585c8c  32c0                 xor al, al
// 00585c8e  5b                   pop ebx
// 00585c8f  c3                   ret 
// 00585c90  5f                   pop edi
// 00585c91  5e                   pop esi
// 00585c92  32c0                 xor al, al
// 00585c94  5b                   pop ebx
// 00585c95  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
