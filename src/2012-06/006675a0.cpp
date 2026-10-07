// roc 2012-06 006675a0  unit: seg_00660000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006675a0
//
// 006675a0  53                   push ebx
// 006675a1  8a5c2408             mov bl, byte ptr [esp + 8]
// 006675a5  56                   push esi
// 006675a6  8bf0                 mov esi, eax
// 006675a8  6a7f                 push 0x7f
// 006675aa  b807000000           mov eax, 7
// 006675af  e88cfdffff           call 0x667340
// 006675b4  83c404               add esp, 4
// 006675b7  84c0                 test al, al
// 006675b9  0f848c000000         je 0x66764b
// 006675bf  33c0                 xor eax, eax
// 006675c1  894608               mov dword ptr [esi + 8], eax
// 006675c4  89460c               mov dword ptr [esi + 0xc], eax
// 006675c7  8b06                 mov eax, dword ptr [esi]
// 006675c9  c600ff               mov byte ptr [eax], 0xff
// 006675cc  ff06                 inc dword ptr [esi]
// 006675ce  834604ff             add dword ptr [esi + 4], -1
// 006675d2  57                   push edi
// 006675d3  751d                 jne 0x6675f2
// 006675d5  8b4620               mov eax, dword ptr [esi + 0x20]
// 006675d8  8b7818               mov edi, dword ptr [eax + 0x18]
// 006675db  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006675de  50                   push eax
// 006675df  ffd1                 call ecx
// 006675e1  83c404               add esp, 4
// 006675e4  84c0                 test al, al
// 006675e6  7468                 je 0x667650
// 006675e8  8b17                 mov edx, dword ptr [edi]
// 006675ea  8916                 mov dword ptr [esi], edx
// 006675ec  8b4704               mov eax, dword ptr [edi + 4]
// 006675ef  894604               mov dword ptr [esi + 4], eax
// 006675f2  8b0e                 mov ecx, dword ptr [esi]
// 006675f4  80eb30               sub bl, 0x30
// 006675f7  8819                 mov byte ptr [ecx], bl
// 006675f9  ff06                 inc dword ptr [esi]
// 006675fb  834604ff             add dword ptr [esi + 4], -1
// 006675ff  751d                 jne 0x66761e
// 00667601  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667604  8b7818               mov edi, dword ptr [eax + 0x18]
// 00667607  8b570c               mov edx, dword ptr [edi + 0xc]
// 0066760a  50                   push eax
// 0066760b  ffd2                 call edx
// 0066760d  83c404               add esp, 4
// 00667610  84c0                 test al, al
// 00667612  743c                 je 0x667650
// 00667614  8b07                 mov eax, dword ptr [edi]
// 00667616  8906                 mov dword ptr [esi], eax
// 00667618  8b4f04               mov ecx, dword ptr [edi + 4]
// 0066761b  894e04               mov dword ptr [esi + 4], ecx
// 0066761e  8b5620               mov edx, dword ptr [esi + 0x20]
// 00667621  33c0                 xor eax, eax
// 00667623  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 00667629  7e1a                 jle 0x667645
// 0066762b  8d4e10               lea ecx, [esi + 0x10]
// 0066762e  8bff                 mov edi, edi
// 00667630  c70100000000         mov dword ptr [ecx], 0
// 00667636  8b5620               mov edx, dword ptr [esi + 0x20]
// 00667639  40                   inc eax
// 0066763a  83c104               add ecx, 4
// 0066763d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00667643  7ceb                 jl 0x667630
// 00667645  5f                   pop edi
// 00667646  5e                   pop esi
// 00667647  b001                 mov al, 1
// 00667649  5b                   pop ebx
// 0066764a  c3                   ret 
// 0066764b  5e                   pop esi
// 0066764c  32c0                 xor al, al
// 0066764e  5b                   pop ebx
// 0066764f  c3                   ret 
// 00667650  5f                   pop edi
// 00667651  5e                   pop esi
// 00667652  32c0                 xor al, al
// 00667654  5b                   pop ebx
// 00667655  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
