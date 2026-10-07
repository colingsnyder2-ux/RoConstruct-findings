// roc 2008-06 00626a40  unit: seg_00620000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626a40
//
// 00626a40  56                   push esi
// 00626a41  57                   push edi
// 00626a42  8bf8                 mov edi, eax
// 00626a44  803f00               cmp byte ptr [edi], 0
// 00626a47  8bf1                 mov esi, ecx
// 00626a49  7406                 je 0x626a51
// 00626a4b  807f0100             cmp byte ptr [edi + 1], 0
// 00626a4f  7511                 jne 0x626a62
// 00626a51  8b4308               mov eax, dword ptr [ebx + 8]
// 00626a54  68b4518400           push 0x8451b4
// 00626a59  50                   push eax
// 00626a5a  e801a2feff           call 0x610c60
// 00626a5f  83c408               add esp, 8
// 00626a62  8a07                 mov al, byte ptr [edi]
// 00626a64  3806                 cmp byte ptr [esi], al
// 00626a66  7405                 je 0x626a6d
// 00626a68  5f                   pop edi
// 00626a69  33c0                 xor eax, eax
// 00626a6b  5e                   pop esi
// 00626a6c  c3                   ret 
// 00626a6d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00626a70  0fbe7f01             movsx edi, byte ptr [edi + 1]
// 00626a74  46                   inc esi
// 00626a75  55                   push ebp
// 00626a76  0fbee8               movsx ebp, al
// 00626a79  ba01000000           mov edx, 1
// 00626a7e  3bf1                 cmp esi, ecx
// 00626a80  731d                 jae 0x626a9f
// 00626a82  0fbe06               movsx eax, byte ptr [esi]
// 00626a85  3bc7                 cmp eax, edi
// 00626a87  750c                 jne 0x626a95
// 00626a89  83ea01               sub edx, 1
// 00626a8c  750c                 jne 0x626a9a
// 00626a8e  5d                   pop ebp
// 00626a8f  5f                   pop edi
// 00626a90  8d4601               lea eax, [esi + 1]
// 00626a93  5e                   pop esi
// 00626a94  c3                   ret 
// 00626a95  3bc5                 cmp eax, ebp
// 00626a97  7501                 jne 0x626a9a
// 00626a99  42                   inc edx
// 00626a9a  46                   inc esi
// 00626a9b  3bf1                 cmp esi, ecx
// 00626a9d  72e3                 jb 0x626a82
// 00626a9f  5d                   pop ebp
// 00626aa0  5f                   pop edi
// 00626aa1  33c0                 xor eax, eax
// 00626aa3  5e                   pop esi
// 00626aa4  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _matchbalance)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
