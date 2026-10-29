// roc 2011-06 0073e450  unit: RBX::VGuiService::?$EventDesc  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073e450
//
// 0073e450  64a100000000         mov eax, dword ptr fs:[0]
// 0073e456  6aff                 push -1
// 0073e458  68221b9d00           push 0x9d1b22
// 0073e45d  50                   push eax
// 0073e45e  64892500000000       mov dword ptr fs:[0], esp
// 0073e465  83ec44               sub esp, 0x44
// 0073e468  57                   push edi
// 0073e469  8bf9                 mov edi, ecx
// 0073e46b  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 0073e472  7259                 jb 0x73e4cd
// 0073e474  683cb6a500           push 0xa5b63c
// 0073e479  8d4c2408             lea ecx, [esp + 8]
// 0073e47d  ff15c404a400         call dword ptr [0xa404c4]
// 0073e483  8d4c2420             lea ecx, [esp + 0x20]
// 0073e487  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0073e48f  ff15600aa400         call dword ptr [0xa40a60]
// 0073e495  8d442404             lea eax, [esp + 4]
// 0073e499  50                   push eax
// 0073e49a  8d4c2430             lea ecx, [esp + 0x30]
// 0073e49e  c644245401           mov byte ptr [esp + 0x54], 1
// 0073e4a3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0073e4ab  ff15c804a400         call dword ptr [0xa404c8]
// 0073e4b1  687073b800           push 0xb87370
// 0073e4b6  8d4c2424             lea ecx, [esp + 0x24]
// 0073e4ba  51                   push ecx
// 0073e4bb  c644245800           mov byte ptr [esp + 0x58], 0
// 0073e4c0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0073e4c8  e8dfcb0c00           call 0x80b0ac
// 0073e4cd  8b542464             mov edx, dword ptr [esp + 0x64]
// 0073e4d1  8b4704               mov eax, dword ptr [edi + 4]
// 0073e4d4  53                   push ebx
// 0073e4d5  55                   push ebp
// 0073e4d6  56                   push esi
// 0073e4d7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0073e4db  6a00                 push 0
// 0073e4dd  52                   push edx
// 0073e4de  50                   push eax
// 0073e4df  56                   push esi
// 0073e4e0  50                   push eax
// 0073e4e1  e81affffff           call 0x73e400
// 0073e4e6  8be8                 mov ebp, eax
// 0073e4e8  8b4704               mov eax, dword ptr [edi + 4]
// 0073e4eb  bb01000000           mov ebx, 1
// 0073e4f0  015f08               add dword ptr [edi + 8], ebx
// 0073e4f3  3bf0                 cmp esi, eax
// 0073e4f5  7510                 jne 0x73e507
// 0073e4f7  896804               mov dword ptr [eax + 4], ebp
// 0073e4fa  8b4704               mov eax, dword ptr [edi + 4]
// 0073e4fd  8928                 mov dword ptr [eax], ebp
// 0073e4ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0073e502  896908               mov dword ptr [ecx + 8], ebp
// 0073e505  eb22                 jmp 0x73e529
// 0073e507  807c246800           cmp byte ptr [esp + 0x68], 0
// 0073e50c  740d                 je 0x73e51b
// 0073e50e  892e                 mov dword ptr [esi], ebp
// 0073e510  8b4704               mov eax, dword ptr [edi + 4]
// 0073e513  3b30                 cmp esi, dword ptr [eax]
// 0073e515  7512                 jne 0x73e529
// 0073e517  8928                 mov dword ptr [eax], ebp
// 0073e519  eb0e                 jmp 0x73e529
// 0073e51b  896e08               mov dword ptr [esi + 8], ebp
// 0073e51e  8b4704               mov eax, dword ptr [edi + 4]
// 0073e521  3b7008               cmp esi, dword ptr [eax + 8]
// 0073e524  7503                 jne 0x73e529
// 0073e526  896808               mov dword ptr [eax + 8], ebp
// 0073e529  8b5504               mov edx, dword ptr [ebp + 4]
// 0073e52c  807a1400             cmp byte ptr [edx + 0x14], 0
// 0073e530  8d4504               lea eax, [ebp + 4]
// 0073e533  8bf5                 mov esi, ebp
// 0073e535  0f85ea000000         jne 0x73e625
// 0073e53b  eb03                 jmp 0x73e540
// 0073e53d  8d4900               lea ecx, [ecx]
// 0073e540  8b08                 mov ecx, dword ptr [eax]
// 0073e542  8b5104               mov edx, dword ptr [ecx + 4]
// 0073e545  3b0a                 cmp ecx, dword ptr [edx]
// 0073e547  7551                 jne 0x73e59a
// 0073e549  8b5208               mov edx, dword ptr [edx + 8]
// 0073e54c  807a1400             cmp byte ptr [edx + 0x14], 0
// 0073e550  7519                 jne 0x73e56b
// 0073e552  885914               mov byte ptr [ecx + 0x14], bl
// 0073e555  885a14               mov byte ptr [edx + 0x14], bl
// 0073e558  8b10                 mov edx, dword ptr [eax]
// 0073e55a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0073e55d  c6411400             mov byte ptr [ecx + 0x14], 0
// 0073e561  8b10                 mov edx, dword ptr [eax]
// 0073e563  8b7204               mov esi, dword ptr [edx + 4]
// 0073e566  e9aa000000           jmp 0x73e615
// 0073e56b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0073e56e  750a                 jne 0x73e57a
// 0073e570  8bf1                 mov esi, ecx
// 0073e572  56                   push esi
// 0073e573  8bcf                 mov ecx, edi
// 0073e575  e8862ce8ff           call 0x5c1200
// 0073e57a  8b4604               mov eax, dword ptr [esi + 4]
// 0073e57d  885814               mov byte ptr [eax + 0x14], bl
// 0073e580  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073e583  8b5104               mov edx, dword ptr [ecx + 4]
// 0073e586  c6421400             mov byte ptr [edx + 0x14], 0
// 0073e58a  8b4604               mov eax, dword ptr [esi + 4]
// 0073e58d  8b4804               mov ecx, dword ptr [eax + 4]
// 0073e590  51                   push ecx
// 0073e591  8bcf                 mov ecx, edi
// 0073e593  e858e8d9ff           call 0x4dcdf0
// 0073e598  eb7b                 jmp 0x73e615
// 0073e59a  8b12                 mov edx, dword ptr [edx]
// 0073e59c  807a1400             cmp byte ptr [edx + 0x14], 0
// 0073e5a0  7516                 jne 0x73e5b8
// 0073e5a2  885914               mov byte ptr [ecx + 0x14], bl
// 0073e5a5  885a14               mov byte ptr [edx + 0x14], bl
// 0073e5a8  8b10                 mov edx, dword ptr [eax]
// 0073e5aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 0073e5ad  c6411400             mov byte ptr [ecx + 0x14], 0
// 0073e5b1  8b10                 mov edx, dword ptr [eax]
// 0073e5b3  8b7204               mov esi, dword ptr [edx + 4]
// 0073e5b6  eb5d                 jmp 0x73e615
// 0073e5b8  3b31                 cmp esi, dword ptr [ecx]
// 0073e5ba  750a                 jne 0x73e5c6
// 0073e5bc  8bf1                 mov esi, ecx
// 0073e5be  56                   push esi
// 0073e5bf  8bcf                 mov ecx, edi
// 0073e5c1  e82ae8d9ff           call 0x4dcdf0
// 0073e5c6  8b4604               mov eax, dword ptr [esi + 4]
// 0073e5c9  885814               mov byte ptr [eax + 0x14], bl
// 0073e5cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073e5cf  8b5104               mov edx, dword ptr [ecx + 4]
// 0073e5d2  c6421400             mov byte ptr [edx + 0x14], 0
// 0073e5d6  8b4604               mov eax, dword ptr [esi + 4]
// 0073e5d9  8b4004               mov eax, dword ptr [eax + 4]
// 0073e5dc  8b4808               mov ecx, dword ptr [eax + 8]
// 0073e5df  8b11                 mov edx, dword ptr [ecx]
// 0073e5e1  895008               mov dword ptr [eax + 8], edx
// 0073e5e4  8b11                 mov edx, dword ptr [ecx]
// 0073e5e6  807a1500             cmp byte ptr [edx + 0x15], 0
// 0073e5ea  7503                 jne 0x73e5ef
// 0073e5ec  894204               mov dword ptr [edx + 4], eax
// 0073e5ef  8b5004               mov edx, dword ptr [eax + 4]
// 0073e5f2  895104               mov dword ptr [ecx + 4], edx
// 0073e5f5  8b5704               mov edx, dword ptr [edi + 4]
// 0073e5f8  3b4204               cmp eax, dword ptr [edx + 4]
// 0073e5fb  7505                 jne 0x73e602
// 0073e5fd  894a04               mov dword ptr [edx + 4], ecx
// 0073e600  eb0e                 jmp 0x73e610
// 0073e602  8b5004               mov edx, dword ptr [eax + 4]
// 0073e605  3b02                 cmp eax, dword ptr [edx]
// 0073e607  7504                 jne 0x73e60d
// 0073e609  890a                 mov dword ptr [edx], ecx
// 0073e60b  eb03                 jmp 0x73e610
// 0073e60d  894a08               mov dword ptr [edx + 8], ecx
// 0073e610  8901                 mov dword ptr [ecx], eax
// 0073e612  894804               mov dword ptr [eax + 4], ecx
// 0073e615  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073e618  80791400             cmp byte ptr [ecx + 0x14], 0
// 0073e61c  8d4604               lea eax, [esi + 4]
// 0073e61f  0f841bffffff         je 0x73e540
// 0073e625  8b5704               mov edx, dword ptr [edi + 4]
// 0073e628  8b4204               mov eax, dword ptr [edx + 4]
// 0073e62b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0073e62f  885814               mov byte ptr [eax + 0x14], bl
// 0073e632  8b442464             mov eax, dword ptr [esp + 0x64]
// 0073e636  5e                   pop esi
// 0073e637  8928                 mov dword ptr [eax], ebp
// 0073e639  5d                   pop ebp
// 0073e63a  5b                   pop ebx
// 0073e63b  5f                   pop edi
// 0073e63c  64890d00000000       mov dword ptr fs:[0], ecx
// 0073e643  83c450               add esp, 0x50
// 0073e646  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBHH@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;