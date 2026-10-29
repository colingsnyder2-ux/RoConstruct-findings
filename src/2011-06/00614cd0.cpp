// roc 2011-06 00614cd0  unit: RBX::MergeBinder  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614cd0
//
// 00614cd0  64a100000000         mov eax, dword ptr fs:[0]
// 00614cd6  6aff                 push -1
// 00614cd8  68221b9d00           push 0x9d1b22
// 00614cdd  50                   push eax
// 00614cde  64892500000000       mov dword ptr fs:[0], esp
// 00614ce5  83ec44               sub esp, 0x44
// 00614ce8  57                   push edi
// 00614ce9  8bf9                 mov edi, ecx
// 00614ceb  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 00614cf2  7259                 jb 0x614d4d
// 00614cf4  683cb6a500           push 0xa5b63c
// 00614cf9  8d4c2408             lea ecx, [esp + 8]
// 00614cfd  ff15c404a400         call dword ptr [0xa404c4]
// 00614d03  8d4c2420             lea ecx, [esp + 0x20]
// 00614d07  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00614d0f  ff15600aa400         call dword ptr [0xa40a60]
// 00614d15  8d442404             lea eax, [esp + 4]
// 00614d19  50                   push eax
// 00614d1a  8d4c2430             lea ecx, [esp + 0x30]
// 00614d1e  c644245401           mov byte ptr [esp + 0x54], 1
// 00614d23  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 00614d2b  ff15c804a400         call dword ptr [0xa404c8]
// 00614d31  687073b800           push 0xb87370
// 00614d36  8d4c2424             lea ecx, [esp + 0x24]
// 00614d3a  51                   push ecx
// 00614d3b  c644245800           mov byte ptr [esp + 0x58], 0
// 00614d40  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00614d48  e85f631f00           call 0x80b0ac
// 00614d4d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00614d51  8b4704               mov eax, dword ptr [edi + 4]
// 00614d54  53                   push ebx
// 00614d55  55                   push ebp
// 00614d56  56                   push esi
// 00614d57  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00614d5b  6a00                 push 0
// 00614d5d  52                   push edx
// 00614d5e  50                   push eax
// 00614d5f  56                   push esi
// 00614d60  50                   push eax
// 00614d61  e82affffff           call 0x614c90
// 00614d66  8be8                 mov ebp, eax
// 00614d68  8b4704               mov eax, dword ptr [edi + 4]
// 00614d6b  bb01000000           mov ebx, 1
// 00614d70  015f08               add dword ptr [edi + 8], ebx
// 00614d73  3bf0                 cmp esi, eax
// 00614d75  7510                 jne 0x614d87
// 00614d77  896804               mov dword ptr [eax + 4], ebp
// 00614d7a  8b4704               mov eax, dword ptr [edi + 4]
// 00614d7d  8928                 mov dword ptr [eax], ebp
// 00614d7f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00614d82  896908               mov dword ptr [ecx + 8], ebp
// 00614d85  eb22                 jmp 0x614da9
// 00614d87  807c246800           cmp byte ptr [esp + 0x68], 0
// 00614d8c  740d                 je 0x614d9b
// 00614d8e  892e                 mov dword ptr [esi], ebp
// 00614d90  8b4704               mov eax, dword ptr [edi + 4]
// 00614d93  3b30                 cmp esi, dword ptr [eax]
// 00614d95  7512                 jne 0x614da9
// 00614d97  8928                 mov dword ptr [eax], ebp
// 00614d99  eb0e                 jmp 0x614da9
// 00614d9b  896e08               mov dword ptr [esi + 8], ebp
// 00614d9e  8b4704               mov eax, dword ptr [edi + 4]
// 00614da1  3b7008               cmp esi, dword ptr [eax + 8]
// 00614da4  7503                 jne 0x614da9
// 00614da6  896808               mov dword ptr [eax + 8], ebp
// 00614da9  8b5504               mov edx, dword ptr [ebp + 4]
// 00614dac  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00614db0  8d4504               lea eax, [ebp + 4]
// 00614db3  8bf5                 mov esi, ebp
// 00614db5  0f85ea000000         jne 0x614ea5
// 00614dbb  eb03                 jmp 0x614dc0
// 00614dbd  8d4900               lea ecx, [ecx]
// 00614dc0  8b08                 mov ecx, dword ptr [eax]
// 00614dc2  8b5104               mov edx, dword ptr [ecx + 4]
// 00614dc5  3b0a                 cmp ecx, dword ptr [edx]
// 00614dc7  7551                 jne 0x614e1a
// 00614dc9  8b5208               mov edx, dword ptr [edx + 8]
// 00614dcc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00614dd0  7519                 jne 0x614deb
// 00614dd2  88591c               mov byte ptr [ecx + 0x1c], bl
// 00614dd5  885a1c               mov byte ptr [edx + 0x1c], bl
// 00614dd8  8b10                 mov edx, dword ptr [eax]
// 00614dda  8b4a04               mov ecx, dword ptr [edx + 4]
// 00614ddd  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00614de1  8b10                 mov edx, dword ptr [eax]
// 00614de3  8b7204               mov esi, dword ptr [edx + 4]
// 00614de6  e9aa000000           jmp 0x614e95
// 00614deb  3b7108               cmp esi, dword ptr [ecx + 8]
// 00614dee  750a                 jne 0x614dfa
// 00614df0  8bf1                 mov esi, ecx
// 00614df2  56                   push esi
// 00614df3  8bcf                 mov ecx, edi
// 00614df5  e8a6dd1000           call 0x722ba0
// 00614dfa  8b4604               mov eax, dword ptr [esi + 4]
// 00614dfd  88581c               mov byte ptr [eax + 0x1c], bl
// 00614e00  8b4e04               mov ecx, dword ptr [esi + 4]
// 00614e03  8b5104               mov edx, dword ptr [ecx + 4]
// 00614e06  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00614e0a  8b4604               mov eax, dword ptr [esi + 4]
// 00614e0d  8b4804               mov ecx, dword ptr [eax + 4]
// 00614e10  51                   push ecx
// 00614e11  8bcf                 mov ecx, edi
// 00614e13  e8a81a1200           call 0x7368c0
// 00614e18  eb7b                 jmp 0x614e95
// 00614e1a  8b12                 mov edx, dword ptr [edx]
// 00614e1c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00614e20  7516                 jne 0x614e38
// 00614e22  88591c               mov byte ptr [ecx + 0x1c], bl
// 00614e25  885a1c               mov byte ptr [edx + 0x1c], bl
// 00614e28  8b10                 mov edx, dword ptr [eax]
// 00614e2a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00614e2d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00614e31  8b10                 mov edx, dword ptr [eax]
// 00614e33  8b7204               mov esi, dword ptr [edx + 4]
// 00614e36  eb5d                 jmp 0x614e95
// 00614e38  3b31                 cmp esi, dword ptr [ecx]
// 00614e3a  750a                 jne 0x614e46
// 00614e3c  8bf1                 mov esi, ecx
// 00614e3e  56                   push esi
// 00614e3f  8bcf                 mov ecx, edi
// 00614e41  e87a1a1200           call 0x7368c0
// 00614e46  8b4604               mov eax, dword ptr [esi + 4]
// 00614e49  88581c               mov byte ptr [eax + 0x1c], bl
// 00614e4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00614e4f  8b5104               mov edx, dword ptr [ecx + 4]
// 00614e52  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00614e56  8b4604               mov eax, dword ptr [esi + 4]
// 00614e59  8b4004               mov eax, dword ptr [eax + 4]
// 00614e5c  8b4808               mov ecx, dword ptr [eax + 8]
// 00614e5f  8b11                 mov edx, dword ptr [ecx]
// 00614e61  895008               mov dword ptr [eax + 8], edx
// 00614e64  8b11                 mov edx, dword ptr [ecx]
// 00614e66  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00614e6a  7503                 jne 0x614e6f
// 00614e6c  894204               mov dword ptr [edx + 4], eax
// 00614e6f  8b5004               mov edx, dword ptr [eax + 4]
// 00614e72  895104               mov dword ptr [ecx + 4], edx
// 00614e75  8b5704               mov edx, dword ptr [edi + 4]
// 00614e78  3b4204               cmp eax, dword ptr [edx + 4]
// 00614e7b  7505                 jne 0x614e82
// 00614e7d  894a04               mov dword ptr [edx + 4], ecx
// 00614e80  eb0e                 jmp 0x614e90
// 00614e82  8b5004               mov edx, dword ptr [eax + 4]
// 00614e85  3b02                 cmp eax, dword ptr [edx]
// 00614e87  7504                 jne 0x614e8d
// 00614e89  890a                 mov dword ptr [edx], ecx
// 00614e8b  eb03                 jmp 0x614e90
// 00614e8d  894a08               mov dword ptr [edx + 8], ecx
// 00614e90  8901                 mov dword ptr [ecx], eax
// 00614e92  894804               mov dword ptr [eax + 4], ecx
// 00614e95  8b4e04               mov ecx, dword ptr [esi + 4]
// 00614e98  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00614e9c  8d4604               lea eax, [esi + 4]
// 00614e9f  0f841bffffff         je 0x614dc0
// 00614ea5  8b5704               mov edx, dword ptr [edi + 4]
// 00614ea8  8b4204               mov eax, dword ptr [edx + 4]
// 00614eab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00614eaf  88581c               mov byte ptr [eax + 0x1c], bl
// 00614eb2  8b442464             mov eax, dword ptr [esp + 0x64]
// 00614eb6  5e                   pop esi
// 00614eb7  8928                 mov dword ptr [eax], ebp
// 00614eb9  5d                   pop ebp
// 00614eba  5b                   pop ebx
// 00614ebb  5f                   pop edi
// 00614ebc  64890d00000000       mov dword ptr fs:[0], ecx
// 00614ec3  83c450               add esp, 0x50
// 00614ec6  c21000               ret 0x10
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