// roc 2009-12 00624080  unit: seg_00620000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624080
//
// 00624080  53                   push ebx
// 00624081  8a5c2408             mov bl, byte ptr [esp + 8]
// 00624085  56                   push esi
// 00624086  8bf0                 mov esi, eax
// 00624088  6a7f                 push 0x7f
// 0062408a  b807000000           mov eax, 7
// 0062408f  e88cfdffff           call 0x623e20
// 00624094  83c404               add esp, 4
// 00624097  84c0                 test al, al
// 00624099  0f848c000000         je 0x62412b
// 0062409f  33c0                 xor eax, eax
// 006240a1  894608               mov dword ptr [esi + 8], eax
// 006240a4  89460c               mov dword ptr [esi + 0xc], eax
// 006240a7  8b06                 mov eax, dword ptr [esi]
// 006240a9  c600ff               mov byte ptr [eax], 0xff
// 006240ac  ff06                 inc dword ptr [esi]
// 006240ae  834604ff             add dword ptr [esi + 4], -1
// 006240b2  57                   push edi
// 006240b3  751d                 jne 0x6240d2
// 006240b5  8b4620               mov eax, dword ptr [esi + 0x20]
// 006240b8  8b7818               mov edi, dword ptr [eax + 0x18]
// 006240bb  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006240be  50                   push eax
// 006240bf  ffd1                 call ecx
// 006240c1  83c404               add esp, 4
// 006240c4  84c0                 test al, al
// 006240c6  7468                 je 0x624130
// 006240c8  8b17                 mov edx, dword ptr [edi]
// 006240ca  8916                 mov dword ptr [esi], edx
// 006240cc  8b4704               mov eax, dword ptr [edi + 4]
// 006240cf  894604               mov dword ptr [esi + 4], eax
// 006240d2  8b0e                 mov ecx, dword ptr [esi]
// 006240d4  80eb30               sub bl, 0x30
// 006240d7  8819                 mov byte ptr [ecx], bl
// 006240d9  ff06                 inc dword ptr [esi]
// 006240db  834604ff             add dword ptr [esi + 4], -1
// 006240df  751d                 jne 0x6240fe
// 006240e1  8b4620               mov eax, dword ptr [esi + 0x20]
// 006240e4  8b7818               mov edi, dword ptr [eax + 0x18]
// 006240e7  8b570c               mov edx, dword ptr [edi + 0xc]
// 006240ea  50                   push eax
// 006240eb  ffd2                 call edx
// 006240ed  83c404               add esp, 4
// 006240f0  84c0                 test al, al
// 006240f2  743c                 je 0x624130
// 006240f4  8b07                 mov eax, dword ptr [edi]
// 006240f6  8906                 mov dword ptr [esi], eax
// 006240f8  8b4f04               mov ecx, dword ptr [edi + 4]
// 006240fb  894e04               mov dword ptr [esi + 4], ecx
// 006240fe  8b5620               mov edx, dword ptr [esi + 0x20]
// 00624101  33c0                 xor eax, eax
// 00624103  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 00624109  7e1a                 jle 0x624125
// 0062410b  8d4e10               lea ecx, [esi + 0x10]
// 0062410e  8bff                 mov edi, edi
// 00624110  c70100000000         mov dword ptr [ecx], 0
// 00624116  8b5620               mov edx, dword ptr [esi + 0x20]
// 00624119  40                   inc eax
// 0062411a  83c104               add ecx, 4
// 0062411d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00624123  7ceb                 jl 0x624110
// 00624125  5f                   pop edi
// 00624126  5e                   pop esi
// 00624127  b001                 mov al, 1
// 00624129  5b                   pop ebx
// 0062412a  c3                   ret 
// 0062412b  5e                   pop esi
// 0062412c  32c0                 xor al, al
// 0062412e  5b                   pop ebx
// 0062412f  c3                   ret 
// 00624130  5f                   pop edi
// 00624131  5e                   pop esi
// 00624132  32c0                 xor al, al
// 00624134  5b                   pop ebx
// 00624135  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
