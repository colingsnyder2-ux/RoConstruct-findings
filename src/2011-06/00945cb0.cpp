// roc 2011-06 00945cb0  unit: RBX::RbxTextureProxy  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00945cb0
//
// 00945cb0  64a100000000         mov eax, dword ptr fs:[0]
// 00945cb6  6aff                 push -1
// 00945cb8  68221b9d00           push 0x9d1b22
// 00945cbd  50                   push eax
// 00945cbe  64892500000000       mov dword ptr fs:[0], esp
// 00945cc5  83ec44               sub esp, 0x44
// 00945cc8  57                   push edi
// 00945cc9  8bf9                 mov edi, ecx
// 00945ccb  817f08cbcccc0c       cmp dword ptr [edi + 8], 0xccccccb
// 00945cd2  7259                 jb 0x945d2d
// 00945cd4  683cb6a500           push 0xa5b63c
// 00945cd9  8d4c2408             lea ecx, [esp + 8]
// 00945cdd  ff15c404a400         call dword ptr [0xa404c4]
// 00945ce3  8d4c2420             lea ecx, [esp + 0x20]
// 00945ce7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00945cef  ff15600aa400         call dword ptr [0xa40a60]
// 00945cf5  8d442404             lea eax, [esp + 4]
// 00945cf9  50                   push eax
// 00945cfa  8d4c2430             lea ecx, [esp + 0x30]
// 00945cfe  c644245401           mov byte ptr [esp + 0x54], 1
// 00945d03  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 00945d0b  ff15c804a400         call dword ptr [0xa404c8]
// 00945d11  687073b800           push 0xb87370
// 00945d16  8d4c2424             lea ecx, [esp + 0x24]
// 00945d1a  51                   push ecx
// 00945d1b  c644245800           mov byte ptr [esp + 0x58], 0
// 00945d20  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00945d28  e87f53ecff           call 0x80b0ac
// 00945d2d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00945d31  8b4704               mov eax, dword ptr [edi + 4]
// 00945d34  53                   push ebx
// 00945d35  55                   push ebp
// 00945d36  56                   push esi
// 00945d37  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00945d3b  6a00                 push 0
// 00945d3d  52                   push edx
// 00945d3e  50                   push eax
// 00945d3f  56                   push esi
// 00945d40  50                   push eax
// 00945d41  e80affffff           call 0x945c50
// 00945d46  8be8                 mov ebp, eax
// 00945d48  8b4704               mov eax, dword ptr [edi + 4]
// 00945d4b  bb01000000           mov ebx, 1
// 00945d50  015f08               add dword ptr [edi + 8], ebx
// 00945d53  3bf0                 cmp esi, eax
// 00945d55  7510                 jne 0x945d67
// 00945d57  896804               mov dword ptr [eax + 4], ebp
// 00945d5a  8b4704               mov eax, dword ptr [edi + 4]
// 00945d5d  8928                 mov dword ptr [eax], ebp
// 00945d5f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00945d62  896908               mov dword ptr [ecx + 8], ebp
// 00945d65  eb22                 jmp 0x945d89
// 00945d67  807c246800           cmp byte ptr [esp + 0x68], 0
// 00945d6c  740d                 je 0x945d7b
// 00945d6e  892e                 mov dword ptr [esi], ebp
// 00945d70  8b4704               mov eax, dword ptr [edi + 4]
// 00945d73  3b30                 cmp esi, dword ptr [eax]
// 00945d75  7512                 jne 0x945d89
// 00945d77  8928                 mov dword ptr [eax], ebp
// 00945d79  eb0e                 jmp 0x945d89
// 00945d7b  896e08               mov dword ptr [esi + 8], ebp
// 00945d7e  8b4704               mov eax, dword ptr [edi + 4]
// 00945d81  3b7008               cmp esi, dword ptr [eax + 8]
// 00945d84  7503                 jne 0x945d89
// 00945d86  896808               mov dword ptr [eax + 8], ebp
// 00945d89  8b5504               mov edx, dword ptr [ebp + 4]
// 00945d8c  807a2000             cmp byte ptr [edx + 0x20], 0
// 00945d90  8d4504               lea eax, [ebp + 4]
// 00945d93  8bf5                 mov esi, ebp
// 00945d95  0f85ea000000         jne 0x945e85
// 00945d9b  eb03                 jmp 0x945da0
// 00945d9d  8d4900               lea ecx, [ecx]
// 00945da0  8b08                 mov ecx, dword ptr [eax]
// 00945da2  8b5104               mov edx, dword ptr [ecx + 4]
// 00945da5  3b0a                 cmp ecx, dword ptr [edx]
// 00945da7  7551                 jne 0x945dfa
// 00945da9  8b5208               mov edx, dword ptr [edx + 8]
// 00945dac  807a2000             cmp byte ptr [edx + 0x20], 0
// 00945db0  7519                 jne 0x945dcb
// 00945db2  885920               mov byte ptr [ecx + 0x20], bl
// 00945db5  885a20               mov byte ptr [edx + 0x20], bl
// 00945db8  8b10                 mov edx, dword ptr [eax]
// 00945dba  8b4a04               mov ecx, dword ptr [edx + 4]
// 00945dbd  c6412000             mov byte ptr [ecx + 0x20], 0
// 00945dc1  8b10                 mov edx, dword ptr [eax]
// 00945dc3  8b7204               mov esi, dword ptr [edx + 4]
// 00945dc6  e9aa000000           jmp 0x945e75
// 00945dcb  3b7108               cmp esi, dword ptr [ecx + 8]
// 00945dce  750a                 jne 0x945dda
// 00945dd0  8bf1                 mov esi, ecx
// 00945dd2  56                   push esi
// 00945dd3  8bcf                 mov ecx, edi
// 00945dd5  e8b6e9afff           call 0x444790
// 00945dda  8b4604               mov eax, dword ptr [esi + 4]
// 00945ddd  885820               mov byte ptr [eax + 0x20], bl
// 00945de0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00945de3  8b5104               mov edx, dword ptr [ecx + 4]
// 00945de6  c6422000             mov byte ptr [edx + 0x20], 0
// 00945dea  8b4604               mov eax, dword ptr [esi + 4]
// 00945ded  8b4804               mov ecx, dword ptr [eax + 4]
// 00945df0  51                   push ecx
// 00945df1  8bcf                 mov ecx, edi
// 00945df3  e8a85bd0ff           call 0x64b9a0
// 00945df8  eb7b                 jmp 0x945e75
// 00945dfa  8b12                 mov edx, dword ptr [edx]
// 00945dfc  807a2000             cmp byte ptr [edx + 0x20], 0
// 00945e00  7516                 jne 0x945e18
// 00945e02  885920               mov byte ptr [ecx + 0x20], bl
// 00945e05  885a20               mov byte ptr [edx + 0x20], bl
// 00945e08  8b10                 mov edx, dword ptr [eax]
// 00945e0a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00945e0d  c6412000             mov byte ptr [ecx + 0x20], 0
// 00945e11  8b10                 mov edx, dword ptr [eax]
// 00945e13  8b7204               mov esi, dword ptr [edx + 4]
// 00945e16  eb5d                 jmp 0x945e75
// 00945e18  3b31                 cmp esi, dword ptr [ecx]
// 00945e1a  750a                 jne 0x945e26
// 00945e1c  8bf1                 mov esi, ecx
// 00945e1e  56                   push esi
// 00945e1f  8bcf                 mov ecx, edi
// 00945e21  e87a5bd0ff           call 0x64b9a0
// 00945e26  8b4604               mov eax, dword ptr [esi + 4]
// 00945e29  885820               mov byte ptr [eax + 0x20], bl
// 00945e2c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00945e2f  8b5104               mov edx, dword ptr [ecx + 4]
// 00945e32  c6422000             mov byte ptr [edx + 0x20], 0
// 00945e36  8b4604               mov eax, dword ptr [esi + 4]
// 00945e39  8b4004               mov eax, dword ptr [eax + 4]
// 00945e3c  8b4808               mov ecx, dword ptr [eax + 8]
// 00945e3f  8b11                 mov edx, dword ptr [ecx]
// 00945e41  895008               mov dword ptr [eax + 8], edx
// 00945e44  8b11                 mov edx, dword ptr [ecx]
// 00945e46  807a2100             cmp byte ptr [edx + 0x21], 0
// 00945e4a  7503                 jne 0x945e4f
// 00945e4c  894204               mov dword ptr [edx + 4], eax
// 00945e4f  8b5004               mov edx, dword ptr [eax + 4]
// 00945e52  895104               mov dword ptr [ecx + 4], edx
// 00945e55  8b5704               mov edx, dword ptr [edi + 4]
// 00945e58  3b4204               cmp eax, dword ptr [edx + 4]
// 00945e5b  7505                 jne 0x945e62
// 00945e5d  894a04               mov dword ptr [edx + 4], ecx
// 00945e60  eb0e                 jmp 0x945e70
// 00945e62  8b5004               mov edx, dword ptr [eax + 4]
// 00945e65  3b02                 cmp eax, dword ptr [edx]
// 00945e67  7504                 jne 0x945e6d
// 00945e69  890a                 mov dword ptr [edx], ecx
// 00945e6b  eb03                 jmp 0x945e70
// 00945e6d  894a08               mov dword ptr [edx + 8], ecx
// 00945e70  8901                 mov dword ptr [ecx], eax
// 00945e72  894804               mov dword ptr [eax + 4], ecx
// 00945e75  8b4e04               mov ecx, dword ptr [esi + 4]
// 00945e78  80792000             cmp byte ptr [ecx + 0x20], 0
// 00945e7c  8d4604               lea eax, [esi + 4]
// 00945e7f  0f841bffffff         je 0x945da0
// 00945e85  8b5704               mov edx, dword ptr [edi + 4]
// 00945e88  8b4204               mov eax, dword ptr [edx + 4]
// 00945e8b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00945e8f  885820               mov byte ptr [eax + 0x20], bl
// 00945e92  8b442464             mov eax, dword ptr [esp + 0x64]
// 00945e96  5e                   pop esi
// 00945e97  8928                 mov dword ptr [eax], ebp
// 00945e99  5d                   pop ebp
// 00945e9a  5b                   pop ebx
// 00945e9b  5f                   pop edi
// 00945e9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00945ea3  83c450               add esp, 0x50
// 00945ea6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;