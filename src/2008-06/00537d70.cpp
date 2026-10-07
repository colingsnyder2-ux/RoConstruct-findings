// roc 2008-06 00537d70  unit: seg_00530000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537d70
//
// 00537d70  53                   push ebx
// 00537d71  8a5c2408             mov bl, byte ptr [esp + 8]
// 00537d75  56                   push esi
// 00537d76  8bf0                 mov esi, eax
// 00537d78  6a7f                 push 0x7f
// 00537d7a  b807000000           mov eax, 7
// 00537d7f  e88cfdffff           call 0x537b10
// 00537d84  83c404               add esp, 4
// 00537d87  84c0                 test al, al
// 00537d89  0f848c000000         je 0x537e1b
// 00537d8f  33c0                 xor eax, eax
// 00537d91  894608               mov dword ptr [esi + 8], eax
// 00537d94  89460c               mov dword ptr [esi + 0xc], eax
// 00537d97  8b06                 mov eax, dword ptr [esi]
// 00537d99  c600ff               mov byte ptr [eax], 0xff
// 00537d9c  ff06                 inc dword ptr [esi]
// 00537d9e  834604ff             add dword ptr [esi + 4], -1
// 00537da2  57                   push edi
// 00537da3  751d                 jne 0x537dc2
// 00537da5  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537da8  8b7818               mov edi, dword ptr [eax + 0x18]
// 00537dab  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00537dae  50                   push eax
// 00537daf  ffd1                 call ecx
// 00537db1  83c404               add esp, 4
// 00537db4  84c0                 test al, al
// 00537db6  7468                 je 0x537e20
// 00537db8  8b17                 mov edx, dword ptr [edi]
// 00537dba  8916                 mov dword ptr [esi], edx
// 00537dbc  8b4704               mov eax, dword ptr [edi + 4]
// 00537dbf  894604               mov dword ptr [esi + 4], eax
// 00537dc2  8b0e                 mov ecx, dword ptr [esi]
// 00537dc4  80eb30               sub bl, 0x30
// 00537dc7  8819                 mov byte ptr [ecx], bl
// 00537dc9  ff06                 inc dword ptr [esi]
// 00537dcb  834604ff             add dword ptr [esi + 4], -1
// 00537dcf  751d                 jne 0x537dee
// 00537dd1  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537dd4  8b7818               mov edi, dword ptr [eax + 0x18]
// 00537dd7  8b570c               mov edx, dword ptr [edi + 0xc]
// 00537dda  50                   push eax
// 00537ddb  ffd2                 call edx
// 00537ddd  83c404               add esp, 4
// 00537de0  84c0                 test al, al
// 00537de2  743c                 je 0x537e20
// 00537de4  8b07                 mov eax, dword ptr [edi]
// 00537de6  8906                 mov dword ptr [esi], eax
// 00537de8  8b4f04               mov ecx, dword ptr [edi + 4]
// 00537deb  894e04               mov dword ptr [esi + 4], ecx
// 00537dee  8b5620               mov edx, dword ptr [esi + 0x20]
// 00537df1  33c0                 xor eax, eax
// 00537df3  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 00537df9  7e1a                 jle 0x537e15
// 00537dfb  8d4e10               lea ecx, [esi + 0x10]
// 00537dfe  8bff                 mov edi, edi
// 00537e00  c70100000000         mov dword ptr [ecx], 0
// 00537e06  8b5620               mov edx, dword ptr [esi + 0x20]
// 00537e09  40                   inc eax
// 00537e0a  83c104               add ecx, 4
// 00537e0d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00537e13  7ceb                 jl 0x537e00
// 00537e15  5f                   pop edi
// 00537e16  5e                   pop esi
// 00537e17  b001                 mov al, 1
// 00537e19  5b                   pop ebx
// 00537e1a  c3                   ret 
// 00537e1b  5e                   pop esi
// 00537e1c  32c0                 xor al, al
// 00537e1e  5b                   pop ebx
// 00537e1f  c3                   ret 
// 00537e20  5f                   pop edi
// 00537e21  5e                   pop esi
// 00537e22  32c0                 xor al, al
// 00537e24  5b                   pop ebx
// 00537e25  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
