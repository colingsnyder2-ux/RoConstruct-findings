// roc 2011-06 0064c250  unit: RBX::GameBasicSettings  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064c250
//
// 0064c250  64a100000000         mov eax, dword ptr fs:[0]
// 0064c256  6aff                 push -1
// 0064c258  68221b9d00           push 0x9d1b22
// 0064c25d  50                   push eax
// 0064c25e  64892500000000       mov dword ptr fs:[0], esp
// 0064c265  83ec44               sub esp, 0x44
// 0064c268  57                   push edi
// 0064c269  8bf9                 mov edi, ecx
// 0064c26b  817f08feffff07       cmp dword ptr [edi + 8], 0x7fffffe
// 0064c272  7259                 jb 0x64c2cd
// 0064c274  683cb6a500           push 0xa5b63c
// 0064c279  8d4c2408             lea ecx, [esp + 8]
// 0064c27d  ff15c404a400         call dword ptr [0xa404c4]
// 0064c283  8d4c2420             lea ecx, [esp + 0x20]
// 0064c287  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0064c28f  ff15600aa400         call dword ptr [0xa40a60]
// 0064c295  8d442404             lea eax, [esp + 4]
// 0064c299  50                   push eax
// 0064c29a  8d4c2430             lea ecx, [esp + 0x30]
// 0064c29e  c644245401           mov byte ptr [esp + 0x54], 1
// 0064c2a3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0064c2ab  ff15c804a400         call dword ptr [0xa404c8]
// 0064c2b1  687073b800           push 0xb87370
// 0064c2b6  8d4c2424             lea ecx, [esp + 0x24]
// 0064c2ba  51                   push ecx
// 0064c2bb  c644245800           mov byte ptr [esp + 0x58], 0
// 0064c2c0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0064c2c8  e8dfed1b00           call 0x80b0ac
// 0064c2cd  8b542464             mov edx, dword ptr [esp + 0x64]
// 0064c2d1  8b4704               mov eax, dword ptr [edi + 4]
// 0064c2d4  53                   push ebx
// 0064c2d5  55                   push ebp
// 0064c2d6  56                   push esi
// 0064c2d7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0064c2db  6a00                 push 0
// 0064c2dd  52                   push edx
// 0064c2de  50                   push eax
// 0064c2df  56                   push esi
// 0064c2e0  50                   push eax
// 0064c2e1  e82af8ffff           call 0x64bb10
// 0064c2e6  8be8                 mov ebp, eax
// 0064c2e8  8b4704               mov eax, dword ptr [edi + 4]
// 0064c2eb  bb01000000           mov ebx, 1
// 0064c2f0  015f08               add dword ptr [edi + 8], ebx
// 0064c2f3  3bf0                 cmp esi, eax
// 0064c2f5  7510                 jne 0x64c307
// 0064c2f7  896804               mov dword ptr [eax + 4], ebp
// 0064c2fa  8b4704               mov eax, dword ptr [edi + 4]
// 0064c2fd  8928                 mov dword ptr [eax], ebp
// 0064c2ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064c302  896908               mov dword ptr [ecx + 8], ebp
// 0064c305  eb22                 jmp 0x64c329
// 0064c307  807c246800           cmp byte ptr [esp + 0x68], 0
// 0064c30c  740d                 je 0x64c31b
// 0064c30e  892e                 mov dword ptr [esi], ebp
// 0064c310  8b4704               mov eax, dword ptr [edi + 4]
// 0064c313  3b30                 cmp esi, dword ptr [eax]
// 0064c315  7512                 jne 0x64c329
// 0064c317  8928                 mov dword ptr [eax], ebp
// 0064c319  eb0e                 jmp 0x64c329
// 0064c31b  896e08               mov dword ptr [esi + 8], ebp
// 0064c31e  8b4704               mov eax, dword ptr [edi + 4]
// 0064c321  3b7008               cmp esi, dword ptr [eax + 8]
// 0064c324  7503                 jne 0x64c329
// 0064c326  896808               mov dword ptr [eax + 8], ebp
// 0064c329  8b5504               mov edx, dword ptr [ebp + 4]
// 0064c32c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 0064c330  8d4504               lea eax, [ebp + 4]
// 0064c333  8bf5                 mov esi, ebp
// 0064c335  0f85ea000000         jne 0x64c425
// 0064c33b  eb03                 jmp 0x64c340
// 0064c33d  8d4900               lea ecx, [ecx]
// 0064c340  8b08                 mov ecx, dword ptr [eax]
// 0064c342  8b5104               mov edx, dword ptr [ecx + 4]
// 0064c345  3b0a                 cmp ecx, dword ptr [edx]
// 0064c347  7551                 jne 0x64c39a
// 0064c349  8b5208               mov edx, dword ptr [edx + 8]
// 0064c34c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 0064c350  7519                 jne 0x64c36b
// 0064c352  88592c               mov byte ptr [ecx + 0x2c], bl
// 0064c355  885a2c               mov byte ptr [edx + 0x2c], bl
// 0064c358  8b10                 mov edx, dword ptr [eax]
// 0064c35a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0064c35d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 0064c361  8b10                 mov edx, dword ptr [eax]
// 0064c363  8b7204               mov esi, dword ptr [edx + 4]
// 0064c366  e9aa000000           jmp 0x64c415
// 0064c36b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0064c36e  750a                 jne 0x64c37a
// 0064c370  8bf1                 mov esi, ecx
// 0064c372  56                   push esi
// 0064c373  8bcf                 mov ecx, edi
// 0064c375  e8a6fa3100           call 0x96be20
// 0064c37a  8b4604               mov eax, dword ptr [esi + 4]
// 0064c37d  88582c               mov byte ptr [eax + 0x2c], bl
// 0064c380  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c383  8b5104               mov edx, dword ptr [ecx + 4]
// 0064c386  c6422c00             mov byte ptr [edx + 0x2c], 0
// 0064c38a  8b4604               mov eax, dword ptr [esi + 4]
// 0064c38d  8b4804               mov ecx, dword ptr [eax + 4]
// 0064c390  51                   push ecx
// 0064c391  8bcf                 mov ecx, edi
// 0064c393  e8e8b8f9ff           call 0x5e7c80
// 0064c398  eb7b                 jmp 0x64c415
// 0064c39a  8b12                 mov edx, dword ptr [edx]
// 0064c39c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 0064c3a0  7516                 jne 0x64c3b8
// 0064c3a2  88592c               mov byte ptr [ecx + 0x2c], bl
// 0064c3a5  885a2c               mov byte ptr [edx + 0x2c], bl
// 0064c3a8  8b10                 mov edx, dword ptr [eax]
// 0064c3aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 0064c3ad  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 0064c3b1  8b10                 mov edx, dword ptr [eax]
// 0064c3b3  8b7204               mov esi, dword ptr [edx + 4]
// 0064c3b6  eb5d                 jmp 0x64c415
// 0064c3b8  3b31                 cmp esi, dword ptr [ecx]
// 0064c3ba  750a                 jne 0x64c3c6
// 0064c3bc  8bf1                 mov esi, ecx
// 0064c3be  56                   push esi
// 0064c3bf  8bcf                 mov ecx, edi
// 0064c3c1  e8bab8f9ff           call 0x5e7c80
// 0064c3c6  8b4604               mov eax, dword ptr [esi + 4]
// 0064c3c9  88582c               mov byte ptr [eax + 0x2c], bl
// 0064c3cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c3cf  8b5104               mov edx, dword ptr [ecx + 4]
// 0064c3d2  c6422c00             mov byte ptr [edx + 0x2c], 0
// 0064c3d6  8b4604               mov eax, dword ptr [esi + 4]
// 0064c3d9  8b4004               mov eax, dword ptr [eax + 4]
// 0064c3dc  8b4808               mov ecx, dword ptr [eax + 8]
// 0064c3df  8b11                 mov edx, dword ptr [ecx]
// 0064c3e1  895008               mov dword ptr [eax + 8], edx
// 0064c3e4  8b11                 mov edx, dword ptr [ecx]
// 0064c3e6  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0064c3ea  7503                 jne 0x64c3ef
// 0064c3ec  894204               mov dword ptr [edx + 4], eax
// 0064c3ef  8b5004               mov edx, dword ptr [eax + 4]
// 0064c3f2  895104               mov dword ptr [ecx + 4], edx
// 0064c3f5  8b5704               mov edx, dword ptr [edi + 4]
// 0064c3f8  3b4204               cmp eax, dword ptr [edx + 4]
// 0064c3fb  7505                 jne 0x64c402
// 0064c3fd  894a04               mov dword ptr [edx + 4], ecx
// 0064c400  eb0e                 jmp 0x64c410
// 0064c402  8b5004               mov edx, dword ptr [eax + 4]
// 0064c405  3b02                 cmp eax, dword ptr [edx]
// 0064c407  7504                 jne 0x64c40d
// 0064c409  890a                 mov dword ptr [edx], ecx
// 0064c40b  eb03                 jmp 0x64c410
// 0064c40d  894a08               mov dword ptr [edx + 8], ecx
// 0064c410  8901                 mov dword ptr [ecx], eax
// 0064c412  894804               mov dword ptr [eax + 4], ecx
// 0064c415  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c418  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 0064c41c  8d4604               lea eax, [esi + 4]
// 0064c41f  0f841bffffff         je 0x64c340
// 0064c425  8b5704               mov edx, dword ptr [edi + 4]
// 0064c428  8b4204               mov eax, dword ptr [edx + 4]
// 0064c42b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0064c42f  88582c               mov byte ptr [eax + 0x2c], bl
// 0064c432  8b442464             mov eax, dword ptr [esp + 0x64]
// 0064c436  5e                   pop esi
// 0064c437  8928                 mov dword ptr [eax], ebp
// 0064c439  5d                   pop ebp
// 0064c43a  5b                   pop ebx
// 0064c43b  5f                   pop edi
// 0064c43c  64890d00000000       mov dword ptr fs:[0], ecx
// 0064c443  83c450               add esp, 0x50
// 0064c446  c21000               ret 0x10
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