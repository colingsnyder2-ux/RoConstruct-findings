// roc 2011-06 0044e5b0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044e5b0
//
// 0044e5b0  64a100000000         mov eax, dword ptr fs:[0]
// 0044e5b6  6aff                 push -1
// 0044e5b8  68221b9d00           push 0x9d1b22
// 0044e5bd  50                   push eax
// 0044e5be  64892500000000       mov dword ptr fs:[0], esp
// 0044e5c5  83ec44               sub esp, 0x44
// 0044e5c8  57                   push edi
// 0044e5c9  8bf9                 mov edi, ecx
// 0044e5cb  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 0044e5d2  7259                 jb 0x44e62d
// 0044e5d4  683cb6a500           push 0xa5b63c
// 0044e5d9  8d4c2408             lea ecx, [esp + 8]
// 0044e5dd  ff15c404a400         call dword ptr [0xa404c4]
// 0044e5e3  8d4c2420             lea ecx, [esp + 0x20]
// 0044e5e7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0044e5ef  ff15600aa400         call dword ptr [0xa40a60]
// 0044e5f5  8d442404             lea eax, [esp + 4]
// 0044e5f9  50                   push eax
// 0044e5fa  8d4c2430             lea ecx, [esp + 0x30]
// 0044e5fe  c644245401           mov byte ptr [esp + 0x54], 1
// 0044e603  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0044e60b  ff15c804a400         call dword ptr [0xa404c8]
// 0044e611  687073b800           push 0xb87370
// 0044e616  8d4c2424             lea ecx, [esp + 0x24]
// 0044e61a  51                   push ecx
// 0044e61b  c644245800           mov byte ptr [esp + 0x58], 0
// 0044e620  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0044e628  e87fca3b00           call 0x80b0ac
// 0044e62d  8b542464             mov edx, dword ptr [esp + 0x64]
// 0044e631  8b4704               mov eax, dword ptr [edi + 4]
// 0044e634  53                   push ebx
// 0044e635  55                   push ebp
// 0044e636  56                   push esi
// 0044e637  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0044e63b  6a00                 push 0
// 0044e63d  52                   push edx
// 0044e63e  50                   push eax
// 0044e63f  56                   push esi
// 0044e640  50                   push eax
// 0044e641  e8eaf9ffff           call 0x44e030
// 0044e646  8be8                 mov ebp, eax
// 0044e648  8b4704               mov eax, dword ptr [edi + 4]
// 0044e64b  bb01000000           mov ebx, 1
// 0044e650  015f08               add dword ptr [edi + 8], ebx
// 0044e653  3bf0                 cmp esi, eax
// 0044e655  7510                 jne 0x44e667
// 0044e657  896804               mov dword ptr [eax + 4], ebp
// 0044e65a  8b4704               mov eax, dword ptr [edi + 4]
// 0044e65d  8928                 mov dword ptr [eax], ebp
// 0044e65f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044e662  896908               mov dword ptr [ecx + 8], ebp
// 0044e665  eb22                 jmp 0x44e689
// 0044e667  807c246800           cmp byte ptr [esp + 0x68], 0
// 0044e66c  740d                 je 0x44e67b
// 0044e66e  892e                 mov dword ptr [esi], ebp
// 0044e670  8b4704               mov eax, dword ptr [edi + 4]
// 0044e673  3b30                 cmp esi, dword ptr [eax]
// 0044e675  7512                 jne 0x44e689
// 0044e677  8928                 mov dword ptr [eax], ebp
// 0044e679  eb0e                 jmp 0x44e689
// 0044e67b  896e08               mov dword ptr [esi + 8], ebp
// 0044e67e  8b4704               mov eax, dword ptr [edi + 4]
// 0044e681  3b7008               cmp esi, dword ptr [eax + 8]
// 0044e684  7503                 jne 0x44e689
// 0044e686  896808               mov dword ptr [eax + 8], ebp
// 0044e689  8b5504               mov edx, dword ptr [ebp + 4]
// 0044e68c  807a1400             cmp byte ptr [edx + 0x14], 0
// 0044e690  8d4504               lea eax, [ebp + 4]
// 0044e693  8bf5                 mov esi, ebp
// 0044e695  0f85ea000000         jne 0x44e785
// 0044e69b  eb03                 jmp 0x44e6a0
// 0044e69d  8d4900               lea ecx, [ecx]
// 0044e6a0  8b08                 mov ecx, dword ptr [eax]
// 0044e6a2  8b5104               mov edx, dword ptr [ecx + 4]
// 0044e6a5  3b0a                 cmp ecx, dword ptr [edx]
// 0044e6a7  7551                 jne 0x44e6fa
// 0044e6a9  8b5208               mov edx, dword ptr [edx + 8]
// 0044e6ac  807a1400             cmp byte ptr [edx + 0x14], 0
// 0044e6b0  7519                 jne 0x44e6cb
// 0044e6b2  885914               mov byte ptr [ecx + 0x14], bl
// 0044e6b5  885a14               mov byte ptr [edx + 0x14], bl
// 0044e6b8  8b10                 mov edx, dword ptr [eax]
// 0044e6ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044e6bd  c6411400             mov byte ptr [ecx + 0x14], 0
// 0044e6c1  8b10                 mov edx, dword ptr [eax]
// 0044e6c3  8b7204               mov esi, dword ptr [edx + 4]
// 0044e6c6  e9aa000000           jmp 0x44e775
// 0044e6cb  3b7108               cmp esi, dword ptr [ecx + 8]
// 0044e6ce  750a                 jne 0x44e6da
// 0044e6d0  8bf1                 mov esi, ecx
// 0044e6d2  56                   push esi
// 0044e6d3  8bcf                 mov ecx, edi
// 0044e6d5  e8262b1700           call 0x5c1200
// 0044e6da  8b4604               mov eax, dword ptr [esi + 4]
// 0044e6dd  885814               mov byte ptr [eax + 0x14], bl
// 0044e6e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044e6e3  8b5104               mov edx, dword ptr [ecx + 4]
// 0044e6e6  c6421400             mov byte ptr [edx + 0x14], 0
// 0044e6ea  8b4604               mov eax, dword ptr [esi + 4]
// 0044e6ed  8b4804               mov ecx, dword ptr [eax + 4]
// 0044e6f0  51                   push ecx
// 0044e6f1  8bcf                 mov ecx, edi
// 0044e6f3  e8f8e60800           call 0x4dcdf0
// 0044e6f8  eb7b                 jmp 0x44e775
// 0044e6fa  8b12                 mov edx, dword ptr [edx]
// 0044e6fc  807a1400             cmp byte ptr [edx + 0x14], 0
// 0044e700  7516                 jne 0x44e718
// 0044e702  885914               mov byte ptr [ecx + 0x14], bl
// 0044e705  885a14               mov byte ptr [edx + 0x14], bl
// 0044e708  8b10                 mov edx, dword ptr [eax]
// 0044e70a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044e70d  c6411400             mov byte ptr [ecx + 0x14], 0
// 0044e711  8b10                 mov edx, dword ptr [eax]
// 0044e713  8b7204               mov esi, dword ptr [edx + 4]
// 0044e716  eb5d                 jmp 0x44e775
// 0044e718  3b31                 cmp esi, dword ptr [ecx]
// 0044e71a  750a                 jne 0x44e726
// 0044e71c  8bf1                 mov esi, ecx
// 0044e71e  56                   push esi
// 0044e71f  8bcf                 mov ecx, edi
// 0044e721  e8cae60800           call 0x4dcdf0
// 0044e726  8b4604               mov eax, dword ptr [esi + 4]
// 0044e729  885814               mov byte ptr [eax + 0x14], bl
// 0044e72c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044e72f  8b5104               mov edx, dword ptr [ecx + 4]
// 0044e732  c6421400             mov byte ptr [edx + 0x14], 0
// 0044e736  8b4604               mov eax, dword ptr [esi + 4]
// 0044e739  8b4004               mov eax, dword ptr [eax + 4]
// 0044e73c  8b4808               mov ecx, dword ptr [eax + 8]
// 0044e73f  8b11                 mov edx, dword ptr [ecx]
// 0044e741  895008               mov dword ptr [eax + 8], edx
// 0044e744  8b11                 mov edx, dword ptr [ecx]
// 0044e746  807a1500             cmp byte ptr [edx + 0x15], 0
// 0044e74a  7503                 jne 0x44e74f
// 0044e74c  894204               mov dword ptr [edx + 4], eax
// 0044e74f  8b5004               mov edx, dword ptr [eax + 4]
// 0044e752  895104               mov dword ptr [ecx + 4], edx
// 0044e755  8b5704               mov edx, dword ptr [edi + 4]
// 0044e758  3b4204               cmp eax, dword ptr [edx + 4]
// 0044e75b  7505                 jne 0x44e762
// 0044e75d  894a04               mov dword ptr [edx + 4], ecx
// 0044e760  eb0e                 jmp 0x44e770
// 0044e762  8b5004               mov edx, dword ptr [eax + 4]
// 0044e765  3b02                 cmp eax, dword ptr [edx]
// 0044e767  7504                 jne 0x44e76d
// 0044e769  890a                 mov dword ptr [edx], ecx
// 0044e76b  eb03                 jmp 0x44e770
// 0044e76d  894a08               mov dword ptr [edx + 8], ecx
// 0044e770  8901                 mov dword ptr [ecx], eax
// 0044e772  894804               mov dword ptr [eax + 4], ecx
// 0044e775  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044e778  80791400             cmp byte ptr [ecx + 0x14], 0
// 0044e77c  8d4604               lea eax, [esi + 4]
// 0044e77f  0f841bffffff         je 0x44e6a0
// 0044e785  8b5704               mov edx, dword ptr [edi + 4]
// 0044e788  8b4204               mov eax, dword ptr [edx + 4]
// 0044e78b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0044e78f  885814               mov byte ptr [eax + 0x14], bl
// 0044e792  8b442464             mov eax, dword ptr [esp + 0x64]
// 0044e796  5e                   pop esi
// 0044e797  8928                 mov dword ptr [eax], ebp
// 0044e799  5d                   pop ebp
// 0044e79a  5b                   pop ebx
// 0044e79b  5f                   pop edi
// 0044e79c  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e7a3  83c450               add esp, 0x50
// 0044e7a6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBHH@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;