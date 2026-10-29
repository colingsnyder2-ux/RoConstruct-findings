// roc 2011-06 005a9dd0  unit: RBX::FriendService::W4FriendEventType::?$EnumDesc  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a9dd0
//
// 005a9dd0  64a100000000         mov eax, dword ptr fs:[0]
// 005a9dd6  6aff                 push -1
// 005a9dd8  68221b9d00           push 0x9d1b22
// 005a9ddd  50                   push eax
// 005a9dde  64892500000000       mov dword ptr fs:[0], esp
// 005a9de5  83ec44               sub esp, 0x44
// 005a9de8  57                   push edi
// 005a9de9  8bf9                 mov edi, ecx
// 005a9deb  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 005a9df2  7259                 jb 0x5a9e4d
// 005a9df4  683cb6a500           push 0xa5b63c
// 005a9df9  8d4c2408             lea ecx, [esp + 8]
// 005a9dfd  ff15c404a400         call dword ptr [0xa404c4]
// 005a9e03  8d4c2420             lea ecx, [esp + 0x20]
// 005a9e07  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005a9e0f  ff15600aa400         call dword ptr [0xa40a60]
// 005a9e15  8d442404             lea eax, [esp + 4]
// 005a9e19  50                   push eax
// 005a9e1a  8d4c2430             lea ecx, [esp + 0x30]
// 005a9e1e  c644245401           mov byte ptr [esp + 0x54], 1
// 005a9e23  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 005a9e2b  ff15c804a400         call dword ptr [0xa404c8]
// 005a9e31  687073b800           push 0xb87370
// 005a9e36  8d4c2424             lea ecx, [esp + 0x24]
// 005a9e3a  51                   push ecx
// 005a9e3b  c644245800           mov byte ptr [esp + 0x58], 0
// 005a9e40  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 005a9e48  e85f122600           call 0x80b0ac
// 005a9e4d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005a9e51  8b4704               mov eax, dword ptr [edi + 4]
// 005a9e54  53                   push ebx
// 005a9e55  55                   push ebp
// 005a9e56  56                   push esi
// 005a9e57  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005a9e5b  6a00                 push 0
// 005a9e5d  52                   push edx
// 005a9e5e  50                   push eax
// 005a9e5f  56                   push esi
// 005a9e60  50                   push eax
// 005a9e61  e8baf9ffff           call 0x5a9820
// 005a9e66  8be8                 mov ebp, eax
// 005a9e68  8b4704               mov eax, dword ptr [edi + 4]
// 005a9e6b  bb01000000           mov ebx, 1
// 005a9e70  015f08               add dword ptr [edi + 8], ebx
// 005a9e73  3bf0                 cmp esi, eax
// 005a9e75  7510                 jne 0x5a9e87
// 005a9e77  896804               mov dword ptr [eax + 4], ebp
// 005a9e7a  8b4704               mov eax, dword ptr [edi + 4]
// 005a9e7d  8928                 mov dword ptr [eax], ebp
// 005a9e7f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a9e82  896908               mov dword ptr [ecx + 8], ebp
// 005a9e85  eb22                 jmp 0x5a9ea9
// 005a9e87  807c246800           cmp byte ptr [esp + 0x68], 0
// 005a9e8c  740d                 je 0x5a9e9b
// 005a9e8e  892e                 mov dword ptr [esi], ebp
// 005a9e90  8b4704               mov eax, dword ptr [edi + 4]
// 005a9e93  3b30                 cmp esi, dword ptr [eax]
// 005a9e95  7512                 jne 0x5a9ea9
// 005a9e97  8928                 mov dword ptr [eax], ebp
// 005a9e99  eb0e                 jmp 0x5a9ea9
// 005a9e9b  896e08               mov dword ptr [esi + 8], ebp
// 005a9e9e  8b4704               mov eax, dword ptr [edi + 4]
// 005a9ea1  3b7008               cmp esi, dword ptr [eax + 8]
// 005a9ea4  7503                 jne 0x5a9ea9
// 005a9ea6  896808               mov dword ptr [eax + 8], ebp
// 005a9ea9  8b5504               mov edx, dword ptr [ebp + 4]
// 005a9eac  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 005a9eb0  8d4504               lea eax, [ebp + 4]
// 005a9eb3  8bf5                 mov esi, ebp
// 005a9eb5  0f85ea000000         jne 0x5a9fa5
// 005a9ebb  eb03                 jmp 0x5a9ec0
// 005a9ebd  8d4900               lea ecx, [ecx]
// 005a9ec0  8b08                 mov ecx, dword ptr [eax]
// 005a9ec2  8b5104               mov edx, dword ptr [ecx + 4]
// 005a9ec5  3b0a                 cmp ecx, dword ptr [edx]
// 005a9ec7  7551                 jne 0x5a9f1a
// 005a9ec9  8b5208               mov edx, dword ptr [edx + 8]
// 005a9ecc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 005a9ed0  7519                 jne 0x5a9eeb
// 005a9ed2  88591c               mov byte ptr [ecx + 0x1c], bl
// 005a9ed5  885a1c               mov byte ptr [edx + 0x1c], bl
// 005a9ed8  8b10                 mov edx, dword ptr [eax]
// 005a9eda  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a9edd  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 005a9ee1  8b10                 mov edx, dword ptr [eax]
// 005a9ee3  8b7204               mov esi, dword ptr [edx + 4]
// 005a9ee6  e9aa000000           jmp 0x5a9f95
// 005a9eeb  3b7108               cmp esi, dword ptr [ecx + 8]
// 005a9eee  750a                 jne 0x5a9efa
// 005a9ef0  8bf1                 mov esi, ecx
// 005a9ef2  56                   push esi
// 005a9ef3  8bcf                 mov ecx, edi
// 005a9ef5  e8a68c1700           call 0x722ba0
// 005a9efa  8b4604               mov eax, dword ptr [esi + 4]
// 005a9efd  88581c               mov byte ptr [eax + 0x1c], bl
// 005a9f00  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a9f03  8b5104               mov edx, dword ptr [ecx + 4]
// 005a9f06  c6421c00             mov byte ptr [edx + 0x1c], 0
// 005a9f0a  8b4604               mov eax, dword ptr [esi + 4]
// 005a9f0d  8b4804               mov ecx, dword ptr [eax + 4]
// 005a9f10  51                   push ecx
// 005a9f11  8bcf                 mov ecx, edi
// 005a9f13  e8a8c91800           call 0x7368c0
// 005a9f18  eb7b                 jmp 0x5a9f95
// 005a9f1a  8b12                 mov edx, dword ptr [edx]
// 005a9f1c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 005a9f20  7516                 jne 0x5a9f38
// 005a9f22  88591c               mov byte ptr [ecx + 0x1c], bl
// 005a9f25  885a1c               mov byte ptr [edx + 0x1c], bl
// 005a9f28  8b10                 mov edx, dword ptr [eax]
// 005a9f2a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a9f2d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 005a9f31  8b10                 mov edx, dword ptr [eax]
// 005a9f33  8b7204               mov esi, dword ptr [edx + 4]
// 005a9f36  eb5d                 jmp 0x5a9f95
// 005a9f38  3b31                 cmp esi, dword ptr [ecx]
// 005a9f3a  750a                 jne 0x5a9f46
// 005a9f3c  8bf1                 mov esi, ecx
// 005a9f3e  56                   push esi
// 005a9f3f  8bcf                 mov ecx, edi
// 005a9f41  e87ac91800           call 0x7368c0
// 005a9f46  8b4604               mov eax, dword ptr [esi + 4]
// 005a9f49  88581c               mov byte ptr [eax + 0x1c], bl
// 005a9f4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a9f4f  8b5104               mov edx, dword ptr [ecx + 4]
// 005a9f52  c6421c00             mov byte ptr [edx + 0x1c], 0
// 005a9f56  8b4604               mov eax, dword ptr [esi + 4]
// 005a9f59  8b4004               mov eax, dword ptr [eax + 4]
// 005a9f5c  8b4808               mov ecx, dword ptr [eax + 8]
// 005a9f5f  8b11                 mov edx, dword ptr [ecx]
// 005a9f61  895008               mov dword ptr [eax + 8], edx
// 005a9f64  8b11                 mov edx, dword ptr [ecx]
// 005a9f66  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 005a9f6a  7503                 jne 0x5a9f6f
// 005a9f6c  894204               mov dword ptr [edx + 4], eax
// 005a9f6f  8b5004               mov edx, dword ptr [eax + 4]
// 005a9f72  895104               mov dword ptr [ecx + 4], edx
// 005a9f75  8b5704               mov edx, dword ptr [edi + 4]
// 005a9f78  3b4204               cmp eax, dword ptr [edx + 4]
// 005a9f7b  7505                 jne 0x5a9f82
// 005a9f7d  894a04               mov dword ptr [edx + 4], ecx
// 005a9f80  eb0e                 jmp 0x5a9f90
// 005a9f82  8b5004               mov edx, dword ptr [eax + 4]
// 005a9f85  3b02                 cmp eax, dword ptr [edx]
// 005a9f87  7504                 jne 0x5a9f8d
// 005a9f89  890a                 mov dword ptr [edx], ecx
// 005a9f8b  eb03                 jmp 0x5a9f90
// 005a9f8d  894a08               mov dword ptr [edx + 8], ecx
// 005a9f90  8901                 mov dword ptr [ecx], eax
// 005a9f92  894804               mov dword ptr [eax + 4], ecx
// 005a9f95  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a9f98  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 005a9f9c  8d4604               lea eax, [esi + 4]
// 005a9f9f  0f841bffffff         je 0x5a9ec0
// 005a9fa5  8b5704               mov edx, dword ptr [edi + 4]
// 005a9fa8  8b4204               mov eax, dword ptr [edx + 4]
// 005a9fab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005a9faf  88581c               mov byte ptr [eax + 0x1c], bl
// 005a9fb2  8b442464             mov eax, dword ptr [esp + 0x64]
// 005a9fb6  5e                   pop esi
// 005a9fb7  8928                 mov dword ptr [eax], ebp
// 005a9fb9  5d                   pop ebp
// 005a9fba  5b                   pop ebx
// 005a9fbb  5f                   pop edi
// 005a9fbc  64890d00000000       mov dword ptr fs:[0], ecx
// 005a9fc3  83c450               add esp, 0x50
// 005a9fc6  c21000               ret 0x10
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