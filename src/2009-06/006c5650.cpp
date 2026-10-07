// roc 2009-06 006c5650  unit: lua_exception  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5650
//
// 006c5650  56                   push esi
// 006c5651  57                   push edi
// 006c5652  8bf8                 mov edi, eax
// 006c5654  803f00               cmp byte ptr [edi], 0
// 006c5657  8bf1                 mov esi, ecx
// 006c5659  7406                 je 0x6c5661
// 006c565b  807f0100             cmp byte ptr [edi + 1], 0
// 006c565f  7511                 jne 0x6c5672
// 006c5661  8b4308               mov eax, dword ptr [ebx + 8]
// 006c5664  68fcbb8e00           push 0x8ebbfc
// 006c5669  50                   push eax
// 006c566a  e8d14bffff           call 0x6ba240
// 006c566f  83c408               add esp, 8
// 006c5672  8a07                 mov al, byte ptr [edi]
// 006c5674  3806                 cmp byte ptr [esi], al
// 006c5676  7405                 je 0x6c567d
// 006c5678  5f                   pop edi
// 006c5679  33c0                 xor eax, eax
// 006c567b  5e                   pop esi
// 006c567c  c3                   ret 
// 006c567d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006c5680  0fbe7f01             movsx edi, byte ptr [edi + 1]
// 006c5684  46                   inc esi
// 006c5685  55                   push ebp
// 006c5686  0fbee8               movsx ebp, al
// 006c5689  ba01000000           mov edx, 1
// 006c568e  3bf1                 cmp esi, ecx
// 006c5690  731d                 jae 0x6c56af
// 006c5692  0fbe06               movsx eax, byte ptr [esi]
// 006c5695  3bc7                 cmp eax, edi
// 006c5697  750c                 jne 0x6c56a5
// 006c5699  83ea01               sub edx, 1
// 006c569c  750c                 jne 0x6c56aa
// 006c569e  5d                   pop ebp
// 006c569f  5f                   pop edi
// 006c56a0  8d4601               lea eax, [esi + 1]
// 006c56a3  5e                   pop esi
// 006c56a4  c3                   ret 
// 006c56a5  3bc5                 cmp eax, ebp
// 006c56a7  7501                 jne 0x6c56aa
// 006c56a9  42                   inc edx
// 006c56aa  46                   inc esi
// 006c56ab  3bf1                 cmp esi, ecx
// 006c56ad  72e3                 jb 0x6c5692
// 006c56af  5d                   pop ebp
// 006c56b0  5f                   pop edi
// 006c56b1  33c0                 xor eax, eax
// 006c56b3  5e                   pop esi
// 006c56b4  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _matchbalance)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
