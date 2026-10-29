// roc 2011-06 005a7fa0  unit: RBX::VFriendService::?$FactoryProduct  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7fa0
//
// 005a7fa0  64a100000000         mov eax, dword ptr fs:[0]
// 005a7fa6  6aff                 push -1
// 005a7fa8  68221b9d00           push 0x9d1b22
// 005a7fad  50                   push eax
// 005a7fae  64892500000000       mov dword ptr fs:[0], esp
// 005a7fb5  83ec44               sub esp, 0x44
// 005a7fb8  57                   push edi
// 005a7fb9  8bf9                 mov edi, ecx
// 005a7fbb  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 005a7fc2  7259                 jb 0x5a801d
// 005a7fc4  683cb6a500           push 0xa5b63c
// 005a7fc9  8d4c2408             lea ecx, [esp + 8]
// 005a7fcd  ff15c404a400         call dword ptr [0xa404c4]
// 005a7fd3  8d4c2420             lea ecx, [esp + 0x20]
// 005a7fd7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005a7fdf  ff15600aa400         call dword ptr [0xa40a60]
// 005a7fe5  8d442404             lea eax, [esp + 4]
// 005a7fe9  50                   push eax
// 005a7fea  8d4c2430             lea ecx, [esp + 0x30]
// 005a7fee  c644245401           mov byte ptr [esp + 0x54], 1
// 005a7ff3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 005a7ffb  ff15c804a400         call dword ptr [0xa404c8]
// 005a8001  687073b800           push 0xb87370
// 005a8006  8d4c2424             lea ecx, [esp + 0x24]
// 005a800a  51                   push ecx
// 005a800b  c644245800           mov byte ptr [esp + 0x58], 0
// 005a8010  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 005a8018  e88f302600           call 0x80b0ac
// 005a801d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005a8021  8b4704               mov eax, dword ptr [edi + 4]
// 005a8024  53                   push ebx
// 005a8025  55                   push ebp
// 005a8026  56                   push esi
// 005a8027  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005a802b  6a00                 push 0
// 005a802d  52                   push edx
// 005a802e  50                   push eax
// 005a802f  56                   push esi
// 005a8030  50                   push eax
// 005a8031  e84a9beaff           call 0x451b80
// 005a8036  8be8                 mov ebp, eax
// 005a8038  8b4704               mov eax, dword ptr [edi + 4]
// 005a803b  bb01000000           mov ebx, 1
// 005a8040  015f08               add dword ptr [edi + 8], ebx
// 005a8043  3bf0                 cmp esi, eax
// 005a8045  7510                 jne 0x5a8057
// 005a8047  896804               mov dword ptr [eax + 4], ebp
// 005a804a  8b4704               mov eax, dword ptr [edi + 4]
// 005a804d  8928                 mov dword ptr [eax], ebp
// 005a804f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a8052  896908               mov dword ptr [ecx + 8], ebp
// 005a8055  eb22                 jmp 0x5a8079
// 005a8057  807c246800           cmp byte ptr [esp + 0x68], 0
// 005a805c  740d                 je 0x5a806b
// 005a805e  892e                 mov dword ptr [esi], ebp
// 005a8060  8b4704               mov eax, dword ptr [edi + 4]
// 005a8063  3b30                 cmp esi, dword ptr [eax]
// 005a8065  7512                 jne 0x5a8079
// 005a8067  8928                 mov dword ptr [eax], ebp
// 005a8069  eb0e                 jmp 0x5a8079
// 005a806b  896e08               mov dword ptr [esi + 8], ebp
// 005a806e  8b4704               mov eax, dword ptr [edi + 4]
// 005a8071  3b7008               cmp esi, dword ptr [eax + 8]
// 005a8074  7503                 jne 0x5a8079
// 005a8076  896808               mov dword ptr [eax + 8], ebp
// 005a8079  8b5504               mov edx, dword ptr [ebp + 4]
// 005a807c  807a1400             cmp byte ptr [edx + 0x14], 0
// 005a8080  8d4504               lea eax, [ebp + 4]
// 005a8083  8bf5                 mov esi, ebp
// 005a8085  0f85ea000000         jne 0x5a8175
// 005a808b  eb03                 jmp 0x5a8090
// 005a808d  8d4900               lea ecx, [ecx]
// 005a8090  8b08                 mov ecx, dword ptr [eax]
// 005a8092  8b5104               mov edx, dword ptr [ecx + 4]
// 005a8095  3b0a                 cmp ecx, dword ptr [edx]
// 005a8097  7551                 jne 0x5a80ea
// 005a8099  8b5208               mov edx, dword ptr [edx + 8]
// 005a809c  807a1400             cmp byte ptr [edx + 0x14], 0
// 005a80a0  7519                 jne 0x5a80bb
// 005a80a2  885914               mov byte ptr [ecx + 0x14], bl
// 005a80a5  885a14               mov byte ptr [edx + 0x14], bl
// 005a80a8  8b10                 mov edx, dword ptr [eax]
// 005a80aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a80ad  c6411400             mov byte ptr [ecx + 0x14], 0
// 005a80b1  8b10                 mov edx, dword ptr [eax]
// 005a80b3  8b7204               mov esi, dword ptr [edx + 4]
// 005a80b6  e9aa000000           jmp 0x5a8165
// 005a80bb  3b7108               cmp esi, dword ptr [ecx + 8]
// 005a80be  750a                 jne 0x5a80ca
// 005a80c0  8bf1                 mov esi, ecx
// 005a80c2  56                   push esi
// 005a80c3  8bcf                 mov ecx, edi
// 005a80c5  e836910100           call 0x5c1200
// 005a80ca  8b4604               mov eax, dword ptr [esi + 4]
// 005a80cd  885814               mov byte ptr [eax + 0x14], bl
// 005a80d0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a80d3  8b5104               mov edx, dword ptr [ecx + 4]
// 005a80d6  c6421400             mov byte ptr [edx + 0x14], 0
// 005a80da  8b4604               mov eax, dword ptr [esi + 4]
// 005a80dd  8b4804               mov ecx, dword ptr [eax + 4]
// 005a80e0  51                   push ecx
// 005a80e1  8bcf                 mov ecx, edi
// 005a80e3  e8084df3ff           call 0x4dcdf0
// 005a80e8  eb7b                 jmp 0x5a8165
// 005a80ea  8b12                 mov edx, dword ptr [edx]
// 005a80ec  807a1400             cmp byte ptr [edx + 0x14], 0
// 005a80f0  7516                 jne 0x5a8108
// 005a80f2  885914               mov byte ptr [ecx + 0x14], bl
// 005a80f5  885a14               mov byte ptr [edx + 0x14], bl
// 005a80f8  8b10                 mov edx, dword ptr [eax]
// 005a80fa  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a80fd  c6411400             mov byte ptr [ecx + 0x14], 0
// 005a8101  8b10                 mov edx, dword ptr [eax]
// 005a8103  8b7204               mov esi, dword ptr [edx + 4]
// 005a8106  eb5d                 jmp 0x5a8165
// 005a8108  3b31                 cmp esi, dword ptr [ecx]
// 005a810a  750a                 jne 0x5a8116
// 005a810c  8bf1                 mov esi, ecx
// 005a810e  56                   push esi
// 005a810f  8bcf                 mov ecx, edi
// 005a8111  e8da4cf3ff           call 0x4dcdf0
// 005a8116  8b4604               mov eax, dword ptr [esi + 4]
// 005a8119  885814               mov byte ptr [eax + 0x14], bl
// 005a811c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a811f  8b5104               mov edx, dword ptr [ecx + 4]
// 005a8122  c6421400             mov byte ptr [edx + 0x14], 0
// 005a8126  8b4604               mov eax, dword ptr [esi + 4]
// 005a8129  8b4004               mov eax, dword ptr [eax + 4]
// 005a812c  8b4808               mov ecx, dword ptr [eax + 8]
// 005a812f  8b11                 mov edx, dword ptr [ecx]
// 005a8131  895008               mov dword ptr [eax + 8], edx
// 005a8134  8b11                 mov edx, dword ptr [ecx]
// 005a8136  807a1500             cmp byte ptr [edx + 0x15], 0
// 005a813a  7503                 jne 0x5a813f
// 005a813c  894204               mov dword ptr [edx + 4], eax
// 005a813f  8b5004               mov edx, dword ptr [eax + 4]
// 005a8142  895104               mov dword ptr [ecx + 4], edx
// 005a8145  8b5704               mov edx, dword ptr [edi + 4]
// 005a8148  3b4204               cmp eax, dword ptr [edx + 4]
// 005a814b  7505                 jne 0x5a8152
// 005a814d  894a04               mov dword ptr [edx + 4], ecx
// 005a8150  eb0e                 jmp 0x5a8160
// 005a8152  8b5004               mov edx, dword ptr [eax + 4]
// 005a8155  3b02                 cmp eax, dword ptr [edx]
// 005a8157  7504                 jne 0x5a815d
// 005a8159  890a                 mov dword ptr [edx], ecx
// 005a815b  eb03                 jmp 0x5a8160
// 005a815d  894a08               mov dword ptr [edx + 8], ecx
// 005a8160  8901                 mov dword ptr [ecx], eax
// 005a8162  894804               mov dword ptr [eax + 4], ecx
// 005a8165  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a8168  80791400             cmp byte ptr [ecx + 0x14], 0
// 005a816c  8d4604               lea eax, [esi + 4]
// 005a816f  0f841bffffff         je 0x5a8090
// 005a8175  8b5704               mov edx, dword ptr [edi + 4]
// 005a8178  8b4204               mov eax, dword ptr [edx + 4]
// 005a817b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005a817f  885814               mov byte ptr [eax + 0x14], bl
// 005a8182  8b442464             mov eax, dword ptr [esp + 0x64]
// 005a8186  5e                   pop esi
// 005a8187  8928                 mov dword ptr [eax], ebp
// 005a8189  5d                   pop ebp
// 005a818a  5b                   pop ebx
// 005a818b  5f                   pop edi
// 005a818c  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8193  83c450               add esp, 0x50
// 005a8196  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBHH@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;