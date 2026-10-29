// roc 2011-06 004d5af0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d5af0
//
// 004d5af0  64a100000000         mov eax, dword ptr fs:[0]
// 004d5af6  6aff                 push -1
// 004d5af8  68221b9d00           push 0x9d1b22
// 004d5afd  50                   push eax
// 004d5afe  64892500000000       mov dword ptr fs:[0], esp
// 004d5b05  83ec44               sub esp, 0x44
// 004d5b08  57                   push edi
// 004d5b09  8bf9                 mov edi, ecx
// 004d5b0b  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 004d5b12  7259                 jb 0x4d5b6d
// 004d5b14  683cb6a500           push 0xa5b63c
// 004d5b19  8d4c2408             lea ecx, [esp + 8]
// 004d5b1d  ff15c404a400         call dword ptr [0xa404c4]
// 004d5b23  8d4c2420             lea ecx, [esp + 0x20]
// 004d5b27  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004d5b2f  ff15600aa400         call dword ptr [0xa40a60]
// 004d5b35  8d442404             lea eax, [esp + 4]
// 004d5b39  50                   push eax
// 004d5b3a  8d4c2430             lea ecx, [esp + 0x30]
// 004d5b3e  c644245401           mov byte ptr [esp + 0x54], 1
// 004d5b43  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 004d5b4b  ff15c804a400         call dword ptr [0xa404c8]
// 004d5b51  687073b800           push 0xb87370
// 004d5b56  8d4c2424             lea ecx, [esp + 0x24]
// 004d5b5a  51                   push ecx
// 004d5b5b  c644245800           mov byte ptr [esp + 0x58], 0
// 004d5b60  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 004d5b68  e83f553300           call 0x80b0ac
// 004d5b6d  8b542464             mov edx, dword ptr [esp + 0x64]
// 004d5b71  8b4704               mov eax, dword ptr [edi + 4]
// 004d5b74  53                   push ebx
// 004d5b75  55                   push ebp
// 004d5b76  56                   push esi
// 004d5b77  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 004d5b7b  6a00                 push 0
// 004d5b7d  52                   push edx
// 004d5b7e  50                   push eax
// 004d5b7f  56                   push esi
// 004d5b80  50                   push eax
// 004d5b81  e8aafbffff           call 0x4d5730
// 004d5b86  8be8                 mov ebp, eax
// 004d5b88  8b4704               mov eax, dword ptr [edi + 4]
// 004d5b8b  bb01000000           mov ebx, 1
// 004d5b90  015f08               add dword ptr [edi + 8], ebx
// 004d5b93  3bf0                 cmp esi, eax
// 004d5b95  7510                 jne 0x4d5ba7
// 004d5b97  896804               mov dword ptr [eax + 4], ebp
// 004d5b9a  8b4704               mov eax, dword ptr [edi + 4]
// 004d5b9d  8928                 mov dword ptr [eax], ebp
// 004d5b9f  8b4f04               mov ecx, dword ptr [edi + 4]
// 004d5ba2  896908               mov dword ptr [ecx + 8], ebp
// 004d5ba5  eb22                 jmp 0x4d5bc9
// 004d5ba7  807c246800           cmp byte ptr [esp + 0x68], 0
// 004d5bac  740d                 je 0x4d5bbb
// 004d5bae  892e                 mov dword ptr [esi], ebp
// 004d5bb0  8b4704               mov eax, dword ptr [edi + 4]
// 004d5bb3  3b30                 cmp esi, dword ptr [eax]
// 004d5bb5  7512                 jne 0x4d5bc9
// 004d5bb7  8928                 mov dword ptr [eax], ebp
// 004d5bb9  eb0e                 jmp 0x4d5bc9
// 004d5bbb  896e08               mov dword ptr [esi + 8], ebp
// 004d5bbe  8b4704               mov eax, dword ptr [edi + 4]
// 004d5bc1  3b7008               cmp esi, dword ptr [eax + 8]
// 004d5bc4  7503                 jne 0x4d5bc9
// 004d5bc6  896808               mov dword ptr [eax + 8], ebp
// 004d5bc9  8b5504               mov edx, dword ptr [ebp + 4]
// 004d5bcc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 004d5bd0  8d4504               lea eax, [ebp + 4]
// 004d5bd3  8bf5                 mov esi, ebp
// 004d5bd5  0f85ea000000         jne 0x4d5cc5
// 004d5bdb  eb03                 jmp 0x4d5be0
// 004d5bdd  8d4900               lea ecx, [ecx]
// 004d5be0  8b08                 mov ecx, dword ptr [eax]
// 004d5be2  8b5104               mov edx, dword ptr [ecx + 4]
// 004d5be5  3b0a                 cmp ecx, dword ptr [edx]
// 004d5be7  7551                 jne 0x4d5c3a
// 004d5be9  8b5208               mov edx, dword ptr [edx + 8]
// 004d5bec  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 004d5bf0  7519                 jne 0x4d5c0b
// 004d5bf2  88591c               mov byte ptr [ecx + 0x1c], bl
// 004d5bf5  885a1c               mov byte ptr [edx + 0x1c], bl
// 004d5bf8  8b10                 mov edx, dword ptr [eax]
// 004d5bfa  8b4a04               mov ecx, dword ptr [edx + 4]
// 004d5bfd  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 004d5c01  8b10                 mov edx, dword ptr [eax]
// 004d5c03  8b7204               mov esi, dword ptr [edx + 4]
// 004d5c06  e9aa000000           jmp 0x4d5cb5
// 004d5c0b  3b7108               cmp esi, dword ptr [ecx + 8]
// 004d5c0e  750a                 jne 0x4d5c1a
// 004d5c10  8bf1                 mov esi, ecx
// 004d5c12  56                   push esi
// 004d5c13  8bcf                 mov ecx, edi
// 004d5c15  e886cf2400           call 0x722ba0
// 004d5c1a  8b4604               mov eax, dword ptr [esi + 4]
// 004d5c1d  88581c               mov byte ptr [eax + 0x1c], bl
// 004d5c20  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d5c23  8b5104               mov edx, dword ptr [ecx + 4]
// 004d5c26  c6421c00             mov byte ptr [edx + 0x1c], 0
// 004d5c2a  8b4604               mov eax, dword ptr [esi + 4]
// 004d5c2d  8b4804               mov ecx, dword ptr [eax + 4]
// 004d5c30  51                   push ecx
// 004d5c31  8bcf                 mov ecx, edi
// 004d5c33  e8880c2600           call 0x7368c0
// 004d5c38  eb7b                 jmp 0x4d5cb5
// 004d5c3a  8b12                 mov edx, dword ptr [edx]
// 004d5c3c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 004d5c40  7516                 jne 0x4d5c58
// 004d5c42  88591c               mov byte ptr [ecx + 0x1c], bl
// 004d5c45  885a1c               mov byte ptr [edx + 0x1c], bl
// 004d5c48  8b10                 mov edx, dword ptr [eax]
// 004d5c4a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004d5c4d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 004d5c51  8b10                 mov edx, dword ptr [eax]
// 004d5c53  8b7204               mov esi, dword ptr [edx + 4]
// 004d5c56  eb5d                 jmp 0x4d5cb5
// 004d5c58  3b31                 cmp esi, dword ptr [ecx]
// 004d5c5a  750a                 jne 0x4d5c66
// 004d5c5c  8bf1                 mov esi, ecx
// 004d5c5e  56                   push esi
// 004d5c5f  8bcf                 mov ecx, edi
// 004d5c61  e85a0c2600           call 0x7368c0
// 004d5c66  8b4604               mov eax, dword ptr [esi + 4]
// 004d5c69  88581c               mov byte ptr [eax + 0x1c], bl
// 004d5c6c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d5c6f  8b5104               mov edx, dword ptr [ecx + 4]
// 004d5c72  c6421c00             mov byte ptr [edx + 0x1c], 0
// 004d5c76  8b4604               mov eax, dword ptr [esi + 4]
// 004d5c79  8b4004               mov eax, dword ptr [eax + 4]
// 004d5c7c  8b4808               mov ecx, dword ptr [eax + 8]
// 004d5c7f  8b11                 mov edx, dword ptr [ecx]
// 004d5c81  895008               mov dword ptr [eax + 8], edx
// 004d5c84  8b11                 mov edx, dword ptr [ecx]
// 004d5c86  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 004d5c8a  7503                 jne 0x4d5c8f
// 004d5c8c  894204               mov dword ptr [edx + 4], eax
// 004d5c8f  8b5004               mov edx, dword ptr [eax + 4]
// 004d5c92  895104               mov dword ptr [ecx + 4], edx
// 004d5c95  8b5704               mov edx, dword ptr [edi + 4]
// 004d5c98  3b4204               cmp eax, dword ptr [edx + 4]
// 004d5c9b  7505                 jne 0x4d5ca2
// 004d5c9d  894a04               mov dword ptr [edx + 4], ecx
// 004d5ca0  eb0e                 jmp 0x4d5cb0
// 004d5ca2  8b5004               mov edx, dword ptr [eax + 4]
// 004d5ca5  3b02                 cmp eax, dword ptr [edx]
// 004d5ca7  7504                 jne 0x4d5cad
// 004d5ca9  890a                 mov dword ptr [edx], ecx
// 004d5cab  eb03                 jmp 0x4d5cb0
// 004d5cad  894a08               mov dword ptr [edx + 8], ecx
// 004d5cb0  8901                 mov dword ptr [ecx], eax
// 004d5cb2  894804               mov dword ptr [eax + 4], ecx
// 004d5cb5  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d5cb8  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 004d5cbc  8d4604               lea eax, [esi + 4]
// 004d5cbf  0f841bffffff         je 0x4d5be0
// 004d5cc5  8b5704               mov edx, dword ptr [edi + 4]
// 004d5cc8  8b4204               mov eax, dword ptr [edx + 4]
// 004d5ccb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004d5ccf  88581c               mov byte ptr [eax + 0x1c], bl
// 004d5cd2  8b442464             mov eax, dword ptr [esp + 0x64]
// 004d5cd6  5e                   pop esi
// 004d5cd7  8928                 mov dword ptr [eax], ebp
// 004d5cd9  5d                   pop ebp
// 004d5cda  5b                   pop ebx
// 004d5cdb  5f                   pop edi
// 004d5cdc  64890d00000000       mov dword ptr fs:[0], ecx
// 004d5ce3  83c450               add esp, 0x50
// 004d5ce6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;