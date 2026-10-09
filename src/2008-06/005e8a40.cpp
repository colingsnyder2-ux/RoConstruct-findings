// roc 2008-06 005e8a40  unit: RBX::Primitive  size: 510 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8a40
//
// 005e8a40  64a100000000         mov eax, dword ptr fs:[0]
// 005e8a46  6aff                 push -1
// 005e8a48  6842e87d00           push 0x7de842
// 005e8a4d  50                   push eax
// 005e8a4e  64892500000000       mov dword ptr fs:[0], esp
// 005e8a55  83ec44               sub esp, 0x44
// 005e8a58  57                   push edi
// 005e8a59  8bf9                 mov edi, ecx
// 005e8a5b  817f1cfeffff3f       cmp dword ptr [edi + 0x1c], 0x3ffffffe
// 005e8a62  7259                 jb 0x5e8abd
// 005e8a64  688cb28000           push 0x80b28c
// 005e8a69  8d4c2408             lea ecx, [esp + 8]
// 005e8a6d  ff1558248000         call dword ptr [0x802458]
// 005e8a73  8d4c2420             lea ecx, [esp + 0x20]
// 005e8a77  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005e8a7f  ff1598288000         call dword ptr [0x802898]
// 005e8a85  8d442404             lea eax, [esp + 4]
// 005e8a89  50                   push eax
// 005e8a8a  8d4c2430             lea ecx, [esp + 0x30]
// 005e8a8e  c644245401           mov byte ptr [esp + 0x54], 1
// 005e8a93  c744242410b18000     mov dword ptr [esp + 0x24], 0x80b110
// 005e8a9b  ff155c248000         call dword ptr [0x80245c]
// 005e8aa1  68c00c8d00           push 0x8d0cc0
// 005e8aa6  8d4c2424             lea ecx, [esp + 0x24]
// 005e8aaa  51                   push ecx
// 005e8aab  c644245800           mov byte ptr [esp + 0x58], 0
// 005e8ab0  c74424281cb18000     mov dword ptr [esp + 0x28], 0x80b11c
// 005e8ab8  e8cf8a0b00           call 0x6a158c
// 005e8abd  8b542464             mov edx, dword ptr [esp + 0x64]
// 005e8ac1  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e8ac4  53                   push ebx
// 005e8ac5  55                   push ebp
// 005e8ac6  56                   push esi
// 005e8ac7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005e8acb  6a00                 push 0
// 005e8acd  52                   push edx
// 005e8ace  50                   push eax
// 005e8acf  56                   push esi
// 005e8ad0  50                   push eax
// 005e8ad1  e86aaee3ff           call 0x423940
// 005e8ad6  8be8                 mov ebp, eax
// 005e8ad8  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e8adb  bb01000000           mov ebx, 1
// 005e8ae0  015f1c               add dword ptr [edi + 0x1c], ebx
// 005e8ae3  3bf0                 cmp esi, eax
// 005e8ae5  7510                 jne 0x5e8af7
// 005e8ae7  896804               mov dword ptr [eax + 4], ebp
// 005e8aea  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e8aed  8928                 mov dword ptr [eax], ebp
// 005e8aef  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005e8af2  896908               mov dword ptr [ecx + 8], ebp
// 005e8af5  eb22                 jmp 0x5e8b19
// 005e8af7  807c246800           cmp byte ptr [esp + 0x68], 0
// 005e8afc  740d                 je 0x5e8b0b
// 005e8afe  892e                 mov dword ptr [esi], ebp
// 005e8b00  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e8b03  3b30                 cmp esi, dword ptr [eax]
// 005e8b05  7512                 jne 0x5e8b19
// 005e8b07  8928                 mov dword ptr [eax], ebp
// 005e8b09  eb0e                 jmp 0x5e8b19
// 005e8b0b  896e08               mov dword ptr [esi + 8], ebp
// 005e8b0e  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e8b11  3b7008               cmp esi, dword ptr [eax + 8]
// 005e8b14  7503                 jne 0x5e8b19
// 005e8b16  896808               mov dword ptr [eax + 8], ebp
// 005e8b19  8b5504               mov edx, dword ptr [ebp + 4]
// 005e8b1c  807a1000             cmp byte ptr [edx + 0x10], 0
// 005e8b20  8d4504               lea eax, [ebp + 4]
// 005e8b23  8bf5                 mov esi, ebp
// 005e8b25  0f85ea000000         jne 0x5e8c15
// 005e8b2b  eb03                 jmp 0x5e8b30
// 005e8b2d  8d4900               lea ecx, [ecx]
// 005e8b30  8b08                 mov ecx, dword ptr [eax]
// 005e8b32  8b5104               mov edx, dword ptr [ecx + 4]
// 005e8b35  3b0a                 cmp ecx, dword ptr [edx]
// 005e8b37  7551                 jne 0x5e8b8a
// 005e8b39  8b5208               mov edx, dword ptr [edx + 8]
// 005e8b3c  807a1000             cmp byte ptr [edx + 0x10], 0
// 005e8b40  7519                 jne 0x5e8b5b
// 005e8b42  885910               mov byte ptr [ecx + 0x10], bl
// 005e8b45  885a10               mov byte ptr [edx + 0x10], bl
// 005e8b48  8b10                 mov edx, dword ptr [eax]
// 005e8b4a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e8b4d  c6411000             mov byte ptr [ecx + 0x10], 0
// 005e8b51  8b10                 mov edx, dword ptr [eax]
// 005e8b53  8b7204               mov esi, dword ptr [edx + 4]
// 005e8b56  e9aa000000           jmp 0x5e8c05
// 005e8b5b  3b7108               cmp esi, dword ptr [ecx + 8]
// 005e8b5e  750a                 jne 0x5e8b6a
// 005e8b60  8bf1                 mov esi, ecx
// 005e8b62  56                   push esi
// 005e8b63  8bcf                 mov ecx, edi
// 005e8b65  e826fbe4ff           call 0x438690
// 005e8b6a  8b4604               mov eax, dword ptr [esi + 4]
// 005e8b6d  885810               mov byte ptr [eax + 0x10], bl
// 005e8b70  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e8b73  8b5104               mov edx, dword ptr [ecx + 4]
// 005e8b76  c6421000             mov byte ptr [edx + 0x10], 0
// 005e8b7a  8b4604               mov eax, dword ptr [esi + 4]
// 005e8b7d  8b4804               mov ecx, dword ptr [eax + 4]
// 005e8b80  51                   push ecx
// 005e8b81  8bcf                 mov ecx, edi
// 005e8b83  e818450a00           call 0x68d0a0
// 005e8b88  eb7b                 jmp 0x5e8c05
// 005e8b8a  8b12                 mov edx, dword ptr [edx]
// 005e8b8c  807a1000             cmp byte ptr [edx + 0x10], 0
// 005e8b90  7516                 jne 0x5e8ba8
// 005e8b92  885910               mov byte ptr [ecx + 0x10], bl
// 005e8b95  885a10               mov byte ptr [edx + 0x10], bl
// 005e8b98  8b10                 mov edx, dword ptr [eax]
// 005e8b9a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e8b9d  c6411000             mov byte ptr [ecx + 0x10], 0
// 005e8ba1  8b10                 mov edx, dword ptr [eax]
// 005e8ba3  8b7204               mov esi, dword ptr [edx + 4]
// 005e8ba6  eb5d                 jmp 0x5e8c05
// 005e8ba8  3b31                 cmp esi, dword ptr [ecx]
// 005e8baa  750a                 jne 0x5e8bb6
// 005e8bac  8bf1                 mov esi, ecx
// 005e8bae  56                   push esi
// 005e8baf  8bcf                 mov ecx, edi
// 005e8bb1  e8ea440a00           call 0x68d0a0
// 005e8bb6  8b4604               mov eax, dword ptr [esi + 4]
// 005e8bb9  885810               mov byte ptr [eax + 0x10], bl
// 005e8bbc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e8bbf  8b5104               mov edx, dword ptr [ecx + 4]
// 005e8bc2  c6421000             mov byte ptr [edx + 0x10], 0
// 005e8bc6  8b4604               mov eax, dword ptr [esi + 4]
// 005e8bc9  8b4004               mov eax, dword ptr [eax + 4]
// 005e8bcc  8b4808               mov ecx, dword ptr [eax + 8]
// 005e8bcf  8b11                 mov edx, dword ptr [ecx]
// 005e8bd1  895008               mov dword ptr [eax + 8], edx
// 005e8bd4  8b11                 mov edx, dword ptr [ecx]
// 005e8bd6  807a1100             cmp byte ptr [edx + 0x11], 0
// 005e8bda  7503                 jne 0x5e8bdf
// 005e8bdc  894204               mov dword ptr [edx + 4], eax
// 005e8bdf  8b5004               mov edx, dword ptr [eax + 4]
// 005e8be2  895104               mov dword ptr [ecx + 4], edx
// 005e8be5  8b5718               mov edx, dword ptr [edi + 0x18]
// 005e8be8  3b4204               cmp eax, dword ptr [edx + 4]
// 005e8beb  7505                 jne 0x5e8bf2
// 005e8bed  894a04               mov dword ptr [edx + 4], ecx
// 005e8bf0  eb0e                 jmp 0x5e8c00
// 005e8bf2  8b5004               mov edx, dword ptr [eax + 4]
// 005e8bf5  3b02                 cmp eax, dword ptr [edx]
// 005e8bf7  7504                 jne 0x5e8bfd
// 005e8bf9  890a                 mov dword ptr [edx], ecx
// 005e8bfb  eb03                 jmp 0x5e8c00
// 005e8bfd  894a08               mov dword ptr [edx + 8], ecx
// 005e8c00  8901                 mov dword ptr [ecx], eax
// 005e8c02  894804               mov dword ptr [eax + 4], ecx
// 005e8c05  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e8c08  80791000             cmp byte ptr [ecx + 0x10], 0
// 005e8c0c  8d4604               lea eax, [esi + 4]
// 005e8c0f  0f841bffffff         je 0x5e8b30
// 005e8c15  8b5718               mov edx, dword ptr [edi + 0x18]
// 005e8c18  8b4204               mov eax, dword ptr [edx + 4]
// 005e8c1b  885810               mov byte ptr [eax + 0x10], bl
// 005e8c1e  8b442464             mov eax, dword ptr [esp + 0x64]
// 005e8c22  8b0f                 mov ecx, dword ptr [edi]
// 005e8c24  5e                   pop esi
// 005e8c25  896804               mov dword ptr [eax + 4], ebp
// 005e8c28  5d                   pop ebp
// 005e8c29  8908                 mov dword ptr [eax], ecx
// 005e8c2b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005e8c2f  5b                   pop ebx
// 005e8c30  5f                   pop edi
// 005e8c31  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8c38  83c450               add esp, 0x50
// 005e8c3b  c21000               ret 0x10
// library openrbx-client/App\v8world\ContactManager.cpp (function ?_Insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
