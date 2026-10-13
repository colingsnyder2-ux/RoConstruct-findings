// roc 2008-06 00516b70  unit: G3D::TextInput::WrongSymbol  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516b70
//
// 00516b70  33c0                 xor eax, eax
// 00516b72  807c240427           cmp byte ptr [esp + 4], 0x27
// 00516b77  53                   push ebx
// 00516b78  0f95c0               setne al
// 00516b7b  55                   push ebp
// 00516b7c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00516b80  56                   push esi
// 00516b81  57                   push edi
// 00516b82  8bf1                 mov esi, ecx
// 00516b84  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 00516b8b  894528               mov dword ptr [ebp + 0x28], eax
// 00516b8e  bb01000000           mov ebx, 1
// 00516b93  8b7e24               mov edi, dword ptr [esi + 0x24]
// 00516b96  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00516b99  3bc7                 cmp eax, edi
// 00516b9b  0f83f7000000         jae 0x516c98
// 00516ba1  8b5620               mov edx, dword ptr [esi + 0x20]
// 00516ba4  8a0c02               mov cl, byte ptr [edx + eax]
// 00516ba7  40                   inc eax
// 00516ba8  89462c               mov dword ptr [esi + 0x2c], eax
// 00516bab  80f90a               cmp cl, 0xa
// 00516bae  7508                 jne 0x516bb8
// 00516bb0  015e30               add dword ptr [esi + 0x30], ebx
// 00516bb3  895e34               mov dword ptr [esi + 0x34], ebx
// 00516bb6  eb03                 jmp 0x516bbb
// 00516bb8  015e34               add dword ptr [esi + 0x34], ebx
// 00516bbb  0fb6c9               movzx ecx, cl
// 00516bbe  83f9ff               cmp ecx, -1
// 00516bc1  0f84d1000000         je 0x516c98
// 00516bc7  807e3a00             cmp byte ptr [esi + 0x3a], 0
// 00516bcb  0f84b0000000         je 0x516c81
// 00516bd1  83f95c               cmp ecx, 0x5c
// 00516bd4  0f85a7000000         jne 0x516c81
// 00516bda  3bc7                 cmp eax, edi
// 00516bdc  7205                 jb 0x516be3
// 00516bde  83c8ff               or eax, 0xffffffff
// 00516be1  eb1a                 jmp 0x516bfd
// 00516be3  8a1410               mov dl, byte ptr [eax + edx]
// 00516be6  40                   inc eax
// 00516be7  89462c               mov dword ptr [esi + 0x2c], eax
// 00516bea  80fa0a               cmp dl, 0xa
// 00516bed  7508                 jne 0x516bf7
// 00516bef  015e30               add dword ptr [esi + 0x30], ebx
// 00516bf2  895e34               mov dword ptr [esi + 0x34], ebx
// 00516bf5  eb03                 jmp 0x516bfa
// 00516bf7  015e34               add dword ptr [esi + 0x34], ebx
// 00516bfa  0fb6c2               movzx eax, dl
// 00516bfd  8d48de               lea ecx, [eax - 0x22]
// 00516c00  83f952               cmp ecx, 0x52
// 00516c03  774a                 ja 0x516c4f
// 00516c05  0fb689b86c5100       movzx ecx, byte ptr [ecx + 0x516cb8]
// 00516c0c  ff248da06c5100       jmp dword ptr [ecx*4 + 0x516ca0]
// 00516c13  6a0d                 push 0xd
// 00516c15  8bcd                 mov ecx, ebp
// 00516c17  ff15b4248000         call dword ptr [0x8024b4]
// 00516c1d  e971ffffff           jmp 0x516b93
// 00516c22  6a0a                 push 0xa
// 00516c24  8bcd                 mov ecx, ebp
// 00516c26  ff15b4248000         call dword ptr [0x8024b4]
// 00516c2c  e962ffffff           jmp 0x516b93
// 00516c31  6a09                 push 9
// 00516c33  8bcd                 mov ecx, ebp
// 00516c35  ff15b4248000         call dword ptr [0x8024b4]
// 00516c3b  e953ffffff           jmp 0x516b93
// 00516c40  6a00                 push 0
// 00516c42  8bcd                 mov ecx, ebp
// 00516c44  ff15b4248000         call dword ptr [0x8024b4]
// 00516c4a  e944ffffff           jmp 0x516b93
// 00516c4f  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 00516c52  0fbed1               movsx edx, cl
// 00516c55  3bc2                 cmp eax, edx
// 00516c57  7504                 jne 0x516c5d
// 00516c59  84c9                 test cl, cl
// 00516c5b  7516                 jne 0x516c73
// 00516c5d  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 00516c60  0fbed1               movsx edx, cl
// 00516c63  3bc2                 cmp eax, edx
// 00516c65  0f8528ffffff         jne 0x516b93
// 00516c6b  84c9                 test cl, cl
// 00516c6d  0f8420ffffff         je 0x516b93
// 00516c73  50                   push eax
// 00516c74  8bcd                 mov ecx, ebp
// 00516c76  ff15b4248000         call dword ptr [0x8024b4]
// 00516c7c  e912ffffff           jmp 0x516b93
// 00516c81  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 00516c86  3bc8                 cmp ecx, eax
// 00516c88  740e                 je 0x516c98
// 00516c8a  51                   push ecx
// 00516c8b  8bcd                 mov ecx, ebp
// 00516c8d  ff15b4248000         call dword ptr [0x8024b4]
// 00516c93  e9fbfeffff           jmp 0x516b93
// 00516c98  5f                   pop edi
// 00516c99  5e                   pop esi
// 00516c9a  5d                   pop ebp
// 00516c9b  5b                   pop ebx
// 00516c9c  c20800               ret 8
// 00516c9f  90                   nop 
// 00516ca0  736c                 jae 0x516d0e
// 00516ca2  51                   push ecx
// 00516ca3  00406c               add byte ptr [eax + 0x6c], al
// 00516ca6  51                   push ecx
// 00516ca7  0022                 add byte ptr [edx], ah
// 00516ca9  6c                   insb byte ptr es:[edi], dx
// 00516caa  51                   push ecx
// 00516cab  0013                 add byte ptr [ebx], dl
// 00516cad  6c                   insb byte ptr es:[edi], dx
// 00516cae  51                   push ecx
// 00516caf  0031                 add byte ptr [ecx], dh
// 00516cb1  6c                   insb byte ptr es:[edi], dx
// 00516cb2  51                   push ecx
// 00516cb3  004f6c               add byte ptr [edi + 0x6c], cl
// 00516cb6  51                   push ecx
// 00516cb7  0000                 add byte ptr [eax], al
// 00516cb9  0505050500           add eax, 0x50505
// 00516cbe  0505050505           add eax, 0x5050505
// 00516cc3  0505050105           add eax, 0x5010505
// 00516cc8  0505050505           add eax, 0x5050505
// 00516ccd  0505050505           add eax, 0x5050505
// 00516cd2  0505050505           add eax, 0x5050505
// 00516cd7  0505050505           add eax, 0x5050505
// 00516cdc  0505050505           add eax, 0x5050505
// 00516ce1  0505050505           add eax, 0x5050505
// 00516ce6  0505050505           add eax, 0x5050505
// 00516ceb  0505050505           add eax, 0x5050505
// 00516cf0  0505000505           add eax, 0x5050005
// 00516cf5  0505050505           add eax, 0x5050505
// 00516cfa  0505050505           add eax, 0x5050505
// 00516cff  0505050505           add eax, 0x5050505
// 00516d04  020505050305         add al, byte ptr [0x5030505]
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?parseQuotedString@TextInput@G3D@@AAEXEAAVToken@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
