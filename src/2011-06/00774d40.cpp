// roc 2011-06 00774d40  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00774d40
//
// 00774d40  64a100000000         mov eax, dword ptr fs:[0]
// 00774d46  6aff                 push -1
// 00774d48  68221b9d00           push 0x9d1b22
// 00774d4d  50                   push eax
// 00774d4e  64892500000000       mov dword ptr fs:[0], esp
// 00774d55  83ec44               sub esp, 0x44
// 00774d58  57                   push edi
// 00774d59  8bf9                 mov edi, ecx
// 00774d5b  817f08c6711c07       cmp dword ptr [edi + 8], 0x71c71c6
// 00774d62  7259                 jb 0x774dbd
// 00774d64  683cb6a500           push 0xa5b63c
// 00774d69  8d4c2408             lea ecx, [esp + 8]
// 00774d6d  ff15c404a400         call dword ptr [0xa404c4]
// 00774d73  8d4c2420             lea ecx, [esp + 0x20]
// 00774d77  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00774d7f  ff15600aa400         call dword ptr [0xa40a60]
// 00774d85  8d442404             lea eax, [esp + 4]
// 00774d89  50                   push eax
// 00774d8a  8d4c2430             lea ecx, [esp + 0x30]
// 00774d8e  c644245401           mov byte ptr [esp + 0x54], 1
// 00774d93  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 00774d9b  ff15c804a400         call dword ptr [0xa404c8]
// 00774da1  687073b800           push 0xb87370
// 00774da6  8d4c2424             lea ecx, [esp + 0x24]
// 00774daa  51                   push ecx
// 00774dab  c644245800           mov byte ptr [esp + 0x58], 0
// 00774db0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00774db8  e8ef620900           call 0x80b0ac
// 00774dbd  8b542464             mov edx, dword ptr [esp + 0x64]
// 00774dc1  8b4704               mov eax, dword ptr [edi + 4]
// 00774dc4  53                   push ebx
// 00774dc5  55                   push ebp
// 00774dc6  56                   push esi
// 00774dc7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00774dcb  6a00                 push 0
// 00774dcd  52                   push edx
// 00774dce  50                   push eax
// 00774dcf  56                   push esi
// 00774dd0  50                   push eax
// 00774dd1  e8ca05f0ff           call 0x6753a0
// 00774dd6  8be8                 mov ebp, eax
// 00774dd8  8b4704               mov eax, dword ptr [edi + 4]
// 00774ddb  bb01000000           mov ebx, 1
// 00774de0  015f08               add dword ptr [edi + 8], ebx
// 00774de3  3bf0                 cmp esi, eax
// 00774de5  7510                 jne 0x774df7
// 00774de7  896804               mov dword ptr [eax + 4], ebp
// 00774dea  8b4704               mov eax, dword ptr [edi + 4]
// 00774ded  8928                 mov dword ptr [eax], ebp
// 00774def  8b4f04               mov ecx, dword ptr [edi + 4]
// 00774df2  896908               mov dword ptr [ecx + 8], ebp
// 00774df5  eb22                 jmp 0x774e19
// 00774df7  807c246800           cmp byte ptr [esp + 0x68], 0
// 00774dfc  740d                 je 0x774e0b
// 00774dfe  892e                 mov dword ptr [esi], ebp
// 00774e00  8b4704               mov eax, dword ptr [edi + 4]
// 00774e03  3b30                 cmp esi, dword ptr [eax]
// 00774e05  7512                 jne 0x774e19
// 00774e07  8928                 mov dword ptr [eax], ebp
// 00774e09  eb0e                 jmp 0x774e19
// 00774e0b  896e08               mov dword ptr [esi + 8], ebp
// 00774e0e  8b4704               mov eax, dword ptr [edi + 4]
// 00774e11  3b7008               cmp esi, dword ptr [eax + 8]
// 00774e14  7503                 jne 0x774e19
// 00774e16  896808               mov dword ptr [eax + 8], ebp
// 00774e19  8b5504               mov edx, dword ptr [ebp + 4]
// 00774e1c  807a3000             cmp byte ptr [edx + 0x30], 0
// 00774e20  8d4504               lea eax, [ebp + 4]
// 00774e23  8bf5                 mov esi, ebp
// 00774e25  0f85ea000000         jne 0x774f15
// 00774e2b  eb03                 jmp 0x774e30
// 00774e2d  8d4900               lea ecx, [ecx]
// 00774e30  8b08                 mov ecx, dword ptr [eax]
// 00774e32  8b5104               mov edx, dword ptr [ecx + 4]
// 00774e35  3b0a                 cmp ecx, dword ptr [edx]
// 00774e37  7551                 jne 0x774e8a
// 00774e39  8b5208               mov edx, dword ptr [edx + 8]
// 00774e3c  807a3000             cmp byte ptr [edx + 0x30], 0
// 00774e40  7519                 jne 0x774e5b
// 00774e42  885930               mov byte ptr [ecx + 0x30], bl
// 00774e45  885a30               mov byte ptr [edx + 0x30], bl
// 00774e48  8b10                 mov edx, dword ptr [eax]
// 00774e4a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00774e4d  c6413000             mov byte ptr [ecx + 0x30], 0
// 00774e51  8b10                 mov edx, dword ptr [eax]
// 00774e53  8b7204               mov esi, dword ptr [edx + 4]
// 00774e56  e9aa000000           jmp 0x774f05
// 00774e5b  3b7108               cmp esi, dword ptr [ecx + 8]
// 00774e5e  750a                 jne 0x774e6a
// 00774e60  8bf1                 mov esi, ecx
// 00774e62  56                   push esi
// 00774e63  8bcf                 mov ecx, edi
// 00774e65  e8f6eae9ff           call 0x613960
// 00774e6a  8b4604               mov eax, dword ptr [esi + 4]
// 00774e6d  885830               mov byte ptr [eax + 0x30], bl
// 00774e70  8b4e04               mov ecx, dword ptr [esi + 4]
// 00774e73  8b5104               mov edx, dword ptr [ecx + 4]
// 00774e76  c6423000             mov byte ptr [edx + 0x30], 0
// 00774e7a  8b4604               mov eax, dword ptr [esi + 4]
// 00774e7d  8b4804               mov ecx, dword ptr [eax + 4]
// 00774e80  51                   push ecx
// 00774e81  8bcf                 mov ecx, edi
// 00774e83  e8d898fbff           call 0x72e760
// 00774e88  eb7b                 jmp 0x774f05
// 00774e8a  8b12                 mov edx, dword ptr [edx]
// 00774e8c  807a3000             cmp byte ptr [edx + 0x30], 0
// 00774e90  7516                 jne 0x774ea8
// 00774e92  885930               mov byte ptr [ecx + 0x30], bl
// 00774e95  885a30               mov byte ptr [edx + 0x30], bl
// 00774e98  8b10                 mov edx, dword ptr [eax]
// 00774e9a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00774e9d  c6413000             mov byte ptr [ecx + 0x30], 0
// 00774ea1  8b10                 mov edx, dword ptr [eax]
// 00774ea3  8b7204               mov esi, dword ptr [edx + 4]
// 00774ea6  eb5d                 jmp 0x774f05
// 00774ea8  3b31                 cmp esi, dword ptr [ecx]
// 00774eaa  750a                 jne 0x774eb6
// 00774eac  8bf1                 mov esi, ecx
// 00774eae  56                   push esi
// 00774eaf  8bcf                 mov ecx, edi
// 00774eb1  e8aa98fbff           call 0x72e760
// 00774eb6  8b4604               mov eax, dword ptr [esi + 4]
// 00774eb9  885830               mov byte ptr [eax + 0x30], bl
// 00774ebc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00774ebf  8b5104               mov edx, dword ptr [ecx + 4]
// 00774ec2  c6423000             mov byte ptr [edx + 0x30], 0
// 00774ec6  8b4604               mov eax, dword ptr [esi + 4]
// 00774ec9  8b4004               mov eax, dword ptr [eax + 4]
// 00774ecc  8b4808               mov ecx, dword ptr [eax + 8]
// 00774ecf  8b11                 mov edx, dword ptr [ecx]
// 00774ed1  895008               mov dword ptr [eax + 8], edx
// 00774ed4  8b11                 mov edx, dword ptr [ecx]
// 00774ed6  807a3100             cmp byte ptr [edx + 0x31], 0
// 00774eda  7503                 jne 0x774edf
// 00774edc  894204               mov dword ptr [edx + 4], eax
// 00774edf  8b5004               mov edx, dword ptr [eax + 4]
// 00774ee2  895104               mov dword ptr [ecx + 4], edx
// 00774ee5  8b5704               mov edx, dword ptr [edi + 4]
// 00774ee8  3b4204               cmp eax, dword ptr [edx + 4]
// 00774eeb  7505                 jne 0x774ef2
// 00774eed  894a04               mov dword ptr [edx + 4], ecx
// 00774ef0  eb0e                 jmp 0x774f00
// 00774ef2  8b5004               mov edx, dword ptr [eax + 4]
// 00774ef5  3b02                 cmp eax, dword ptr [edx]
// 00774ef7  7504                 jne 0x774efd
// 00774ef9  890a                 mov dword ptr [edx], ecx
// 00774efb  eb03                 jmp 0x774f00
// 00774efd  894a08               mov dword ptr [edx + 8], ecx
// 00774f00  8901                 mov dword ptr [ecx], eax
// 00774f02  894804               mov dword ptr [eax + 4], ecx
// 00774f05  8b4e04               mov ecx, dword ptr [esi + 4]
// 00774f08  80793000             cmp byte ptr [ecx + 0x30], 0
// 00774f0c  8d4604               lea eax, [esi + 4]
// 00774f0f  0f841bffffff         je 0x774e30
// 00774f15  8b5704               mov edx, dword ptr [edi + 4]
// 00774f18  8b4204               mov eax, dword ptr [edx + 4]
// 00774f1b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00774f1f  885830               mov byte ptr [eax + 0x30], bl
// 00774f22  8b442464             mov eax, dword ptr [esp + 0x64]
// 00774f26  5e                   pop esi
// 00774f27  8928                 mov dword ptr [eax], ebp
// 00774f29  5d                   pop ebp
// 00774f2a  5b                   pop ebx
// 00774f2b  5f                   pop edi
// 00774f2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00774f33  83c450               add esp, 0x50
// 00774f36  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;