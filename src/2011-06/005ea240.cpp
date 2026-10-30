// roc 2011-06 005ea240  unit: RBX::SimpleThrottlingArbiter  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ea240
//
// 005ea240  64a100000000         mov eax, dword ptr fs:[0]
// 005ea246  6aff                 push -1
// 005ea248  68221b9d00           push 0x9d1b22
// 005ea24d  50                   push eax
// 005ea24e  64892500000000       mov dword ptr fs:[0], esp
// 005ea255  83ec44               sub esp, 0x44
// 005ea258  57                   push edi
// 005ea259  8bf9                 mov edi, ecx
// 005ea25b  817f08feffff07       cmp dword ptr [edi + 8], 0x7fffffe
// 005ea262  7259                 jb 0x5ea2bd
// 005ea264  683cb6a500           push 0xa5b63c
// 005ea269  8d4c2408             lea ecx, [esp + 8]
// 005ea26d  ff15c404a400         call dword ptr [0xa404c4]
// 005ea273  8d4c2420             lea ecx, [esp + 0x20]
// 005ea277  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005ea27f  ff15600aa400         call dword ptr [0xa40a60]
// 005ea285  8d442404             lea eax, [esp + 4]
// 005ea289  50                   push eax
// 005ea28a  8d4c2430             lea ecx, [esp + 0x30]
// 005ea28e  c644245401           mov byte ptr [esp + 0x54], 1
// 005ea293  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 005ea29b  ff15c804a400         call dword ptr [0xa404c8]
// 005ea2a1  687073b800           push 0xb87370
// 005ea2a6  8d4c2424             lea ecx, [esp + 0x24]
// 005ea2aa  51                   push ecx
// 005ea2ab  c644245800           mov byte ptr [esp + 0x58], 0
// 005ea2b0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 005ea2b8  e8ef0d2200           call 0x80b0ac
// 005ea2bd  8b542464             mov edx, dword ptr [esp + 0x64]
// 005ea2c1  8b4704               mov eax, dword ptr [edi + 4]
// 005ea2c4  53                   push ebx
// 005ea2c5  55                   push ebp
// 005ea2c6  56                   push esi
// 005ea2c7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005ea2cb  6a00                 push 0
// 005ea2cd  52                   push edx
// 005ea2ce  50                   push eax
// 005ea2cf  56                   push esi
// 005ea2d0  50                   push eax
// 005ea2d1  e88a331a00           call 0x78d660
// 005ea2d6  8be8                 mov ebp, eax
// 005ea2d8  8b4704               mov eax, dword ptr [edi + 4]
// 005ea2db  bb01000000           mov ebx, 1
// 005ea2e0  015f08               add dword ptr [edi + 8], ebx
// 005ea2e3  3bf0                 cmp esi, eax
// 005ea2e5  7510                 jne 0x5ea2f7
// 005ea2e7  896804               mov dword ptr [eax + 4], ebp
// 005ea2ea  8b4704               mov eax, dword ptr [edi + 4]
// 005ea2ed  8928                 mov dword ptr [eax], ebp
// 005ea2ef  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ea2f2  896908               mov dword ptr [ecx + 8], ebp
// 005ea2f5  eb22                 jmp 0x5ea319
// 005ea2f7  807c246800           cmp byte ptr [esp + 0x68], 0
// 005ea2fc  740d                 je 0x5ea30b
// 005ea2fe  892e                 mov dword ptr [esi], ebp
// 005ea300  8b4704               mov eax, dword ptr [edi + 4]
// 005ea303  3b30                 cmp esi, dword ptr [eax]
// 005ea305  7512                 jne 0x5ea319
// 005ea307  8928                 mov dword ptr [eax], ebp
// 005ea309  eb0e                 jmp 0x5ea319
// 005ea30b  896e08               mov dword ptr [esi + 8], ebp
// 005ea30e  8b4704               mov eax, dword ptr [edi + 4]
// 005ea311  3b7008               cmp esi, dword ptr [eax + 8]
// 005ea314  7503                 jne 0x5ea319
// 005ea316  896808               mov dword ptr [eax + 8], ebp
// 005ea319  8b5504               mov edx, dword ptr [ebp + 4]
// 005ea31c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 005ea320  8d4504               lea eax, [ebp + 4]
// 005ea323  8bf5                 mov esi, ebp
// 005ea325  0f85ea000000         jne 0x5ea415
// 005ea32b  eb03                 jmp 0x5ea330
// 005ea32d  8d4900               lea ecx, [ecx]
// 005ea330  8b08                 mov ecx, dword ptr [eax]
// 005ea332  8b5104               mov edx, dword ptr [ecx + 4]
// 005ea335  3b0a                 cmp ecx, dword ptr [edx]
// 005ea337  7551                 jne 0x5ea38a
// 005ea339  8b5208               mov edx, dword ptr [edx + 8]
// 005ea33c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 005ea340  7519                 jne 0x5ea35b
// 005ea342  88592c               mov byte ptr [ecx + 0x2c], bl
// 005ea345  885a2c               mov byte ptr [edx + 0x2c], bl
// 005ea348  8b10                 mov edx, dword ptr [eax]
// 005ea34a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005ea34d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 005ea351  8b10                 mov edx, dword ptr [eax]
// 005ea353  8b7204               mov esi, dword ptr [edx + 4]
// 005ea356  e9aa000000           jmp 0x5ea405
// 005ea35b  3b7108               cmp esi, dword ptr [ecx + 8]
// 005ea35e  750a                 jne 0x5ea36a
// 005ea360  8bf1                 mov esi, ecx
// 005ea362  56                   push esi
// 005ea363  8bcf                 mov ecx, edi
// 005ea365  e8b61a3800           call 0x96be20
// 005ea36a  8b4604               mov eax, dword ptr [esi + 4]
// 005ea36d  88582c               mov byte ptr [eax + 0x2c], bl
// 005ea370  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ea373  8b5104               mov edx, dword ptr [ecx + 4]
// 005ea376  c6422c00             mov byte ptr [edx + 0x2c], 0
// 005ea37a  8b4604               mov eax, dword ptr [esi + 4]
// 005ea37d  8b4804               mov ecx, dword ptr [eax + 4]
// 005ea380  51                   push ecx
// 005ea381  8bcf                 mov ecx, edi
// 005ea383  e8f8d8ffff           call 0x5e7c80
// 005ea388  eb7b                 jmp 0x5ea405
// 005ea38a  8b12                 mov edx, dword ptr [edx]
// 005ea38c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 005ea390  7516                 jne 0x5ea3a8
// 005ea392  88592c               mov byte ptr [ecx + 0x2c], bl
// 005ea395  885a2c               mov byte ptr [edx + 0x2c], bl
// 005ea398  8b10                 mov edx, dword ptr [eax]
// 005ea39a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005ea39d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 005ea3a1  8b10                 mov edx, dword ptr [eax]
// 005ea3a3  8b7204               mov esi, dword ptr [edx + 4]
// 005ea3a6  eb5d                 jmp 0x5ea405
// 005ea3a8  3b31                 cmp esi, dword ptr [ecx]
// 005ea3aa  750a                 jne 0x5ea3b6
// 005ea3ac  8bf1                 mov esi, ecx
// 005ea3ae  56                   push esi
// 005ea3af  8bcf                 mov ecx, edi
// 005ea3b1  e8cad8ffff           call 0x5e7c80
// 005ea3b6  8b4604               mov eax, dword ptr [esi + 4]
// 005ea3b9  88582c               mov byte ptr [eax + 0x2c], bl
// 005ea3bc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ea3bf  8b5104               mov edx, dword ptr [ecx + 4]
// 005ea3c2  c6422c00             mov byte ptr [edx + 0x2c], 0
// 005ea3c6  8b4604               mov eax, dword ptr [esi + 4]
// 005ea3c9  8b4004               mov eax, dword ptr [eax + 4]
// 005ea3cc  8b4808               mov ecx, dword ptr [eax + 8]
// 005ea3cf  8b11                 mov edx, dword ptr [ecx]
// 005ea3d1  895008               mov dword ptr [eax + 8], edx
// 005ea3d4  8b11                 mov edx, dword ptr [ecx]
// 005ea3d6  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 005ea3da  7503                 jne 0x5ea3df
// 005ea3dc  894204               mov dword ptr [edx + 4], eax
// 005ea3df  8b5004               mov edx, dword ptr [eax + 4]
// 005ea3e2  895104               mov dword ptr [ecx + 4], edx
// 005ea3e5  8b5704               mov edx, dword ptr [edi + 4]
// 005ea3e8  3b4204               cmp eax, dword ptr [edx + 4]
// 005ea3eb  7505                 jne 0x5ea3f2
// 005ea3ed  894a04               mov dword ptr [edx + 4], ecx
// 005ea3f0  eb0e                 jmp 0x5ea400
// 005ea3f2  8b5004               mov edx, dword ptr [eax + 4]
// 005ea3f5  3b02                 cmp eax, dword ptr [edx]
// 005ea3f7  7504                 jne 0x5ea3fd
// 005ea3f9  890a                 mov dword ptr [edx], ecx
// 005ea3fb  eb03                 jmp 0x5ea400
// 005ea3fd  894a08               mov dword ptr [edx + 8], ecx
// 005ea400  8901                 mov dword ptr [ecx], eax
// 005ea402  894804               mov dword ptr [eax + 4], ecx
// 005ea405  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ea408  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 005ea40c  8d4604               lea eax, [esi + 4]
// 005ea40f  0f841bffffff         je 0x5ea330
// 005ea415  8b5704               mov edx, dword ptr [edi + 4]
// 005ea418  8b4204               mov eax, dword ptr [edx + 4]
// 005ea41b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005ea41f  88582c               mov byte ptr [eax + 0x2c], bl
// 005ea422  8b442464             mov eax, dword ptr [esp + 0x64]
// 005ea426  5e                   pop esi
// 005ea427  8928                 mov dword ptr [eax], ebp
// 005ea429  5d                   pop ebp
// 005ea42a  5b                   pop ebx
// 005ea42b  5f                   pop edi
// 005ea42c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea433  83c450               add esp, 0x50
// 005ea436  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x2d (isnil = 0xd + sizeof(pair)).
struct Value { int words[7]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;