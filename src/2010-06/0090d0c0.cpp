// roc 2010-06 0090d0c0  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090d0c0
//
// 0090d0c0  83ec18               sub esp, 0x18
// 0090d0c3  53                   push ebx
// 0090d0c4  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0090d0c7  55                   push ebp
// 0090d0c8  8b6908               mov ebp, dword ptr [ecx + 8]
// 0090d0cb  56                   push esi
// 0090d0cc  57                   push edi
// 0090d0cd  85db                 test ebx, ebx
// 0090d0cf  7546                 jne 0x90d117
// 0090d0d1  8b742414             mov esi, dword ptr [esp + 0x14]
// 0090d0d5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0090d0d9  c644242401           mov byte ptr [esp + 0x24], 1
// 0090d0de  8bff                 mov edi, edi
// 0090d0e0  807c242401           cmp byte ptr [esp + 0x24], 1
// 0090d0e5  744d                 je 0x90d134
// 0090d0e7  8b4640               mov eax, dword ptr [esi + 0x40]
// 0090d0ea  83c004               add eax, 4
// 0090d0ed  8b00                 mov eax, dword ptr [eax]
// 0090d0ef  83f801               cmp eax, 1
// 0090d0f2  750d                 jne 0x90d101
// 0090d0f4  8d4e08               lea ecx, [esi + 8]
// 0090d0f7  51                   push ecx
// 0090d0f8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0090d0fc  e83ffeffff           call 0x90cf40
// 0090d101  8b7648               mov esi, dword ptr [esi + 0x48]
// 0090d104  85f6                 test esi, esi
// 0090d106  75d8                 jne 0x90d0e0
// 0090d108  47                   inc edi
// 0090d109  3bfb                 cmp edi, ebx
// 0090d10b  7dcc                 jge 0x90d0d9
// 0090d10d  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 0090d111  85f6                 test esi, esi
// 0090d113  74f3                 je 0x90d108
// 0090d115  ebc9                 jmp 0x90d0e0
// 0090d117  8b7500               mov esi, dword ptr [ebp]
// 0090d11a  33ff                 xor edi, edi
// 0090d11c  c644242400           mov byte ptr [esp + 0x24], 0
// 0090d121  85f6                 test esi, esi
// 0090d123  75bb                 jne 0x90d0e0
// 0090d125  47                   inc edi
// 0090d126  3bfb                 cmp edi, ebx
// 0090d128  7daf                 jge 0x90d0d9
// 0090d12a  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 0090d12e  85f6                 test esi, esi
// 0090d130  74f3                 je 0x90d125
// 0090d132  ebb3                 jmp 0x90d0e7
// 0090d134  5f                   pop edi
// 0090d135  5e                   pop esi
// 0090d136  5d                   pop ebp
// 0090d137  5b                   pop ebx
// 0090d138  83c418               add esp, 0x18
// 0090d13b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?getStaleEntries@TextureManager@G3D@@AAEXAAV?$Array@VTextureArgs@TextureManager@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
