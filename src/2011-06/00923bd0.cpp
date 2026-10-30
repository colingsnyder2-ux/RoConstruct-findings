// roc 2011-06 00923bd0  unit: RBX::AdornRbxGfx  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00923bd0
//
// 00923bd0  64a100000000         mov eax, dword ptr fs:[0]
// 00923bd6  6aff                 push -1
// 00923bd8  68221b9d00           push 0x9d1b22
// 00923bdd  50                   push eax
// 00923bde  64892500000000       mov dword ptr fs:[0], esp
// 00923be5  83ec44               sub esp, 0x44
// 00923be8  57                   push edi
// 00923be9  8bf9                 mov edi, ecx
// 00923beb  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 00923bf2  7259                 jb 0x923c4d
// 00923bf4  683cb6a500           push 0xa5b63c
// 00923bf9  8d4c2408             lea ecx, [esp + 8]
// 00923bfd  ff15c404a400         call dword ptr [0xa404c4]
// 00923c03  8d4c2420             lea ecx, [esp + 0x20]
// 00923c07  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00923c0f  ff15600aa400         call dword ptr [0xa40a60]
// 00923c15  8d442404             lea eax, [esp + 4]
// 00923c19  50                   push eax
// 00923c1a  8d4c2430             lea ecx, [esp + 0x30]
// 00923c1e  c644245401           mov byte ptr [esp + 0x54], 1
// 00923c23  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 00923c2b  ff15c804a400         call dword ptr [0xa404c8]
// 00923c31  687073b800           push 0xb87370
// 00923c36  8d4c2424             lea ecx, [esp + 0x24]
// 00923c3a  51                   push ecx
// 00923c3b  c644245800           mov byte ptr [esp + 0x58], 0
// 00923c40  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00923c48  e85f74eeff           call 0x80b0ac
// 00923c4d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00923c51  8b4704               mov eax, dword ptr [edi + 4]
// 00923c54  53                   push ebx
// 00923c55  55                   push ebp
// 00923c56  56                   push esi
// 00923c57  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00923c5b  6a00                 push 0
// 00923c5d  52                   push edx
// 00923c5e  50                   push eax
// 00923c5f  56                   push esi
// 00923c60  50                   push eax
// 00923c61  e84a6ce6ff           call 0x78a8b0
// 00923c66  8be8                 mov ebp, eax
// 00923c68  8b4704               mov eax, dword ptr [edi + 4]
// 00923c6b  bb01000000           mov ebx, 1
// 00923c70  015f08               add dword ptr [edi + 8], ebx
// 00923c73  3bf0                 cmp esi, eax
// 00923c75  7510                 jne 0x923c87
// 00923c77  896804               mov dword ptr [eax + 4], ebp
// 00923c7a  8b4704               mov eax, dword ptr [edi + 4]
// 00923c7d  8928                 mov dword ptr [eax], ebp
// 00923c7f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00923c82  896908               mov dword ptr [ecx + 8], ebp
// 00923c85  eb22                 jmp 0x923ca9
// 00923c87  807c246800           cmp byte ptr [esp + 0x68], 0
// 00923c8c  740d                 je 0x923c9b
// 00923c8e  892e                 mov dword ptr [esi], ebp
// 00923c90  8b4704               mov eax, dword ptr [edi + 4]
// 00923c93  3b30                 cmp esi, dword ptr [eax]
// 00923c95  7512                 jne 0x923ca9
// 00923c97  8928                 mov dword ptr [eax], ebp
// 00923c99  eb0e                 jmp 0x923ca9
// 00923c9b  896e08               mov dword ptr [esi + 8], ebp
// 00923c9e  8b4704               mov eax, dword ptr [edi + 4]
// 00923ca1  3b7008               cmp esi, dword ptr [eax + 8]
// 00923ca4  7503                 jne 0x923ca9
// 00923ca6  896808               mov dword ptr [eax + 8], ebp
// 00923ca9  8b5504               mov edx, dword ptr [ebp + 4]
// 00923cac  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00923cb0  8d4504               lea eax, [ebp + 4]
// 00923cb3  8bf5                 mov esi, ebp
// 00923cb5  0f85ea000000         jne 0x923da5
// 00923cbb  eb03                 jmp 0x923cc0
// 00923cbd  8d4900               lea ecx, [ecx]
// 00923cc0  8b08                 mov ecx, dword ptr [eax]
// 00923cc2  8b5104               mov edx, dword ptr [ecx + 4]
// 00923cc5  3b0a                 cmp ecx, dword ptr [edx]
// 00923cc7  7551                 jne 0x923d1a
// 00923cc9  8b5208               mov edx, dword ptr [edx + 8]
// 00923ccc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00923cd0  7519                 jne 0x923ceb
// 00923cd2  88591c               mov byte ptr [ecx + 0x1c], bl
// 00923cd5  885a1c               mov byte ptr [edx + 0x1c], bl
// 00923cd8  8b10                 mov edx, dword ptr [eax]
// 00923cda  8b4a04               mov ecx, dword ptr [edx + 4]
// 00923cdd  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00923ce1  8b10                 mov edx, dword ptr [eax]
// 00923ce3  8b7204               mov esi, dword ptr [edx + 4]
// 00923ce6  e9aa000000           jmp 0x923d95
// 00923ceb  3b7108               cmp esi, dword ptr [ecx + 8]
// 00923cee  750a                 jne 0x923cfa
// 00923cf0  8bf1                 mov esi, ecx
// 00923cf2  56                   push esi
// 00923cf3  8bcf                 mov ecx, edi
// 00923cf5  e8a6eedfff           call 0x722ba0
// 00923cfa  8b4604               mov eax, dword ptr [esi + 4]
// 00923cfd  88581c               mov byte ptr [eax + 0x1c], bl
// 00923d00  8b4e04               mov ecx, dword ptr [esi + 4]
// 00923d03  8b5104               mov edx, dword ptr [ecx + 4]
// 00923d06  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00923d0a  8b4604               mov eax, dword ptr [esi + 4]
// 00923d0d  8b4804               mov ecx, dword ptr [eax + 4]
// 00923d10  51                   push ecx
// 00923d11  8bcf                 mov ecx, edi
// 00923d13  e8a82be1ff           call 0x7368c0
// 00923d18  eb7b                 jmp 0x923d95
// 00923d1a  8b12                 mov edx, dword ptr [edx]
// 00923d1c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00923d20  7516                 jne 0x923d38
// 00923d22  88591c               mov byte ptr [ecx + 0x1c], bl
// 00923d25  885a1c               mov byte ptr [edx + 0x1c], bl
// 00923d28  8b10                 mov edx, dword ptr [eax]
// 00923d2a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00923d2d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00923d31  8b10                 mov edx, dword ptr [eax]
// 00923d33  8b7204               mov esi, dword ptr [edx + 4]
// 00923d36  eb5d                 jmp 0x923d95
// 00923d38  3b31                 cmp esi, dword ptr [ecx]
// 00923d3a  750a                 jne 0x923d46
// 00923d3c  8bf1                 mov esi, ecx
// 00923d3e  56                   push esi
// 00923d3f  8bcf                 mov ecx, edi
// 00923d41  e87a2be1ff           call 0x7368c0
// 00923d46  8b4604               mov eax, dword ptr [esi + 4]
// 00923d49  88581c               mov byte ptr [eax + 0x1c], bl
// 00923d4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00923d4f  8b5104               mov edx, dword ptr [ecx + 4]
// 00923d52  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00923d56  8b4604               mov eax, dword ptr [esi + 4]
// 00923d59  8b4004               mov eax, dword ptr [eax + 4]
// 00923d5c  8b4808               mov ecx, dword ptr [eax + 8]
// 00923d5f  8b11                 mov edx, dword ptr [ecx]
// 00923d61  895008               mov dword ptr [eax + 8], edx
// 00923d64  8b11                 mov edx, dword ptr [ecx]
// 00923d66  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00923d6a  7503                 jne 0x923d6f
// 00923d6c  894204               mov dword ptr [edx + 4], eax
// 00923d6f  8b5004               mov edx, dword ptr [eax + 4]
// 00923d72  895104               mov dword ptr [ecx + 4], edx
// 00923d75  8b5704               mov edx, dword ptr [edi + 4]
// 00923d78  3b4204               cmp eax, dword ptr [edx + 4]
// 00923d7b  7505                 jne 0x923d82
// 00923d7d  894a04               mov dword ptr [edx + 4], ecx
// 00923d80  eb0e                 jmp 0x923d90
// 00923d82  8b5004               mov edx, dword ptr [eax + 4]
// 00923d85  3b02                 cmp eax, dword ptr [edx]
// 00923d87  7504                 jne 0x923d8d
// 00923d89  890a                 mov dword ptr [edx], ecx
// 00923d8b  eb03                 jmp 0x923d90
// 00923d8d  894a08               mov dword ptr [edx + 8], ecx
// 00923d90  8901                 mov dword ptr [ecx], eax
// 00923d92  894804               mov dword ptr [eax + 4], ecx
// 00923d95  8b4e04               mov ecx, dword ptr [esi + 4]
// 00923d98  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00923d9c  8d4604               lea eax, [esi + 4]
// 00923d9f  0f841bffffff         je 0x923cc0
// 00923da5  8b5704               mov edx, dword ptr [edi + 4]
// 00923da8  8b4204               mov eax, dword ptr [edx + 4]
// 00923dab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00923daf  88581c               mov byte ptr [eax + 0x1c], bl
// 00923db2  8b442464             mov eax, dword ptr [esp + 0x64]
// 00923db6  5e                   pop esi
// 00923db7  8928                 mov dword ptr [eax], ebp
// 00923db9  5d                   pop ebp
// 00923dba  5b                   pop ebx
// 00923dbb  5f                   pop edi
// 00923dbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00923dc3  83c450               add esp, 0x50
// 00923dc6  c21000               ret 0x10
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