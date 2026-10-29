// roc 2011-06 007cca80  unit: RBX::PlayerChatLine  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007cca80
//
// 007cca80  64a100000000         mov eax, dword ptr fs:[0]
// 007cca86  6aff                 push -1
// 007cca88  68221b9d00           push 0x9d1b22
// 007cca8d  50                   push eax
// 007cca8e  64892500000000       mov dword ptr fs:[0], esp
// 007cca95  83ec44               sub esp, 0x44
// 007cca98  57                   push edi
// 007cca99  8bf9                 mov edi, ecx
// 007cca9b  817f0854555505       cmp dword ptr [edi + 8], 0x5555554
// 007ccaa2  7259                 jb 0x7ccafd
// 007ccaa4  683cb6a500           push 0xa5b63c
// 007ccaa9  8d4c2408             lea ecx, [esp + 8]
// 007ccaad  ff15c404a400         call dword ptr [0xa404c4]
// 007ccab3  8d4c2420             lea ecx, [esp + 0x20]
// 007ccab7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007ccabf  ff15600aa400         call dword ptr [0xa40a60]
// 007ccac5  8d442404             lea eax, [esp + 4]
// 007ccac9  50                   push eax
// 007ccaca  8d4c2430             lea ecx, [esp + 0x30]
// 007ccace  c644245401           mov byte ptr [esp + 0x54], 1
// 007ccad3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 007ccadb  ff15c804a400         call dword ptr [0xa404c8]
// 007ccae1  687073b800           push 0xb87370
// 007ccae6  8d4c2424             lea ecx, [esp + 0x24]
// 007ccaea  51                   push ecx
// 007ccaeb  c644245800           mov byte ptr [esp + 0x58], 0
// 007ccaf0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 007ccaf8  e8afe50300           call 0x80b0ac
// 007ccafd  8b542464             mov edx, dword ptr [esp + 0x64]
// 007ccb01  8b4704               mov eax, dword ptr [edi + 4]
// 007ccb04  53                   push ebx
// 007ccb05  55                   push ebp
// 007ccb06  56                   push esi
// 007ccb07  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007ccb0b  6a00                 push 0
// 007ccb0d  52                   push edx
// 007ccb0e  50                   push eax
// 007ccb0f  56                   push esi
// 007ccb10  50                   push eax
// 007ccb11  e8cafbffff           call 0x7cc6e0
// 007ccb16  8be8                 mov ebp, eax
// 007ccb18  8b4704               mov eax, dword ptr [edi + 4]
// 007ccb1b  bb01000000           mov ebx, 1
// 007ccb20  015f08               add dword ptr [edi + 8], ebx
// 007ccb23  3bf0                 cmp esi, eax
// 007ccb25  7510                 jne 0x7ccb37
// 007ccb27  896804               mov dword ptr [eax + 4], ebp
// 007ccb2a  8b4704               mov eax, dword ptr [edi + 4]
// 007ccb2d  8928                 mov dword ptr [eax], ebp
// 007ccb2f  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ccb32  896908               mov dword ptr [ecx + 8], ebp
// 007ccb35  eb22                 jmp 0x7ccb59
// 007ccb37  807c246800           cmp byte ptr [esp + 0x68], 0
// 007ccb3c  740d                 je 0x7ccb4b
// 007ccb3e  892e                 mov dword ptr [esi], ebp
// 007ccb40  8b4704               mov eax, dword ptr [edi + 4]
// 007ccb43  3b30                 cmp esi, dword ptr [eax]
// 007ccb45  7512                 jne 0x7ccb59
// 007ccb47  8928                 mov dword ptr [eax], ebp
// 007ccb49  eb0e                 jmp 0x7ccb59
// 007ccb4b  896e08               mov dword ptr [esi + 8], ebp
// 007ccb4e  8b4704               mov eax, dword ptr [edi + 4]
// 007ccb51  3b7008               cmp esi, dword ptr [eax + 8]
// 007ccb54  7503                 jne 0x7ccb59
// 007ccb56  896808               mov dword ptr [eax + 8], ebp
// 007ccb59  8b5504               mov edx, dword ptr [ebp + 4]
// 007ccb5c  807a3c00             cmp byte ptr [edx + 0x3c], 0
// 007ccb60  8d4504               lea eax, [ebp + 4]
// 007ccb63  8bf5                 mov esi, ebp
// 007ccb65  0f85ea000000         jne 0x7ccc55
// 007ccb6b  eb03                 jmp 0x7ccb70
// 007ccb6d  8d4900               lea ecx, [ecx]
// 007ccb70  8b08                 mov ecx, dword ptr [eax]
// 007ccb72  8b5104               mov edx, dword ptr [ecx + 4]
// 007ccb75  3b0a                 cmp ecx, dword ptr [edx]
// 007ccb77  7551                 jne 0x7ccbca
// 007ccb79  8b5208               mov edx, dword ptr [edx + 8]
// 007ccb7c  807a3c00             cmp byte ptr [edx + 0x3c], 0
// 007ccb80  7519                 jne 0x7ccb9b
// 007ccb82  88593c               mov byte ptr [ecx + 0x3c], bl
// 007ccb85  885a3c               mov byte ptr [edx + 0x3c], bl
// 007ccb88  8b10                 mov edx, dword ptr [eax]
// 007ccb8a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007ccb8d  c6413c00             mov byte ptr [ecx + 0x3c], 0
// 007ccb91  8b10                 mov edx, dword ptr [eax]
// 007ccb93  8b7204               mov esi, dword ptr [edx + 4]
// 007ccb96  e9aa000000           jmp 0x7ccc45
// 007ccb9b  3b7108               cmp esi, dword ptr [ecx + 8]
// 007ccb9e  750a                 jne 0x7ccbaa
// 007ccba0  8bf1                 mov esi, ecx
// 007ccba2  56                   push esi
// 007ccba3  8bcf                 mov ecx, edi
// 007ccba5  e806bfffff           call 0x7c8ab0
// 007ccbaa  8b4604               mov eax, dword ptr [esi + 4]
// 007ccbad  88583c               mov byte ptr [eax + 0x3c], bl
// 007ccbb0  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ccbb3  8b5104               mov edx, dword ptr [ecx + 4]
// 007ccbb6  c6423c00             mov byte ptr [edx + 0x3c], 0
// 007ccbba  8b4604               mov eax, dword ptr [esi + 4]
// 007ccbbd  8b4804               mov ecx, dword ptr [eax + 4]
// 007ccbc0  51                   push ecx
// 007ccbc1  8bcf                 mov ecx, edi
// 007ccbc3  e818b8ffff           call 0x7c83e0
// 007ccbc8  eb7b                 jmp 0x7ccc45
// 007ccbca  8b12                 mov edx, dword ptr [edx]
// 007ccbcc  807a3c00             cmp byte ptr [edx + 0x3c], 0
// 007ccbd0  7516                 jne 0x7ccbe8
// 007ccbd2  88593c               mov byte ptr [ecx + 0x3c], bl
// 007ccbd5  885a3c               mov byte ptr [edx + 0x3c], bl
// 007ccbd8  8b10                 mov edx, dword ptr [eax]
// 007ccbda  8b4a04               mov ecx, dword ptr [edx + 4]
// 007ccbdd  c6413c00             mov byte ptr [ecx + 0x3c], 0
// 007ccbe1  8b10                 mov edx, dword ptr [eax]
// 007ccbe3  8b7204               mov esi, dword ptr [edx + 4]
// 007ccbe6  eb5d                 jmp 0x7ccc45
// 007ccbe8  3b31                 cmp esi, dword ptr [ecx]
// 007ccbea  750a                 jne 0x7ccbf6
// 007ccbec  8bf1                 mov esi, ecx
// 007ccbee  56                   push esi
// 007ccbef  8bcf                 mov ecx, edi
// 007ccbf1  e8eab7ffff           call 0x7c83e0
// 007ccbf6  8b4604               mov eax, dword ptr [esi + 4]
// 007ccbf9  88583c               mov byte ptr [eax + 0x3c], bl
// 007ccbfc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ccbff  8b5104               mov edx, dword ptr [ecx + 4]
// 007ccc02  c6423c00             mov byte ptr [edx + 0x3c], 0
// 007ccc06  8b4604               mov eax, dword ptr [esi + 4]
// 007ccc09  8b4004               mov eax, dword ptr [eax + 4]
// 007ccc0c  8b4808               mov ecx, dword ptr [eax + 8]
// 007ccc0f  8b11                 mov edx, dword ptr [ecx]
// 007ccc11  895008               mov dword ptr [eax + 8], edx
// 007ccc14  8b11                 mov edx, dword ptr [ecx]
// 007ccc16  807a3d00             cmp byte ptr [edx + 0x3d], 0
// 007ccc1a  7503                 jne 0x7ccc1f
// 007ccc1c  894204               mov dword ptr [edx + 4], eax
// 007ccc1f  8b5004               mov edx, dword ptr [eax + 4]
// 007ccc22  895104               mov dword ptr [ecx + 4], edx
// 007ccc25  8b5704               mov edx, dword ptr [edi + 4]
// 007ccc28  3b4204               cmp eax, dword ptr [edx + 4]
// 007ccc2b  7505                 jne 0x7ccc32
// 007ccc2d  894a04               mov dword ptr [edx + 4], ecx
// 007ccc30  eb0e                 jmp 0x7ccc40
// 007ccc32  8b5004               mov edx, dword ptr [eax + 4]
// 007ccc35  3b02                 cmp eax, dword ptr [edx]
// 007ccc37  7504                 jne 0x7ccc3d
// 007ccc39  890a                 mov dword ptr [edx], ecx
// 007ccc3b  eb03                 jmp 0x7ccc40
// 007ccc3d  894a08               mov dword ptr [edx + 8], ecx
// 007ccc40  8901                 mov dword ptr [ecx], eax
// 007ccc42  894804               mov dword ptr [eax + 4], ecx
// 007ccc45  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ccc48  80793c00             cmp byte ptr [ecx + 0x3c], 0
// 007ccc4c  8d4604               lea eax, [esi + 4]
// 007ccc4f  0f841bffffff         je 0x7ccb70
// 007ccc55  8b5704               mov edx, dword ptr [edi + 4]
// 007ccc58  8b4204               mov eax, dword ptr [edx + 4]
// 007ccc5b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007ccc5f  88583c               mov byte ptr [eax + 0x3c], bl
// 007ccc62  8b442464             mov eax, dword ptr [esp + 0x64]
// 007ccc66  5e                   pop esi
// 007ccc67  8928                 mov dword ptr [eax], ebp
// 007ccc69  5d                   pop ebp
// 007ccc6a  5b                   pop ebx
// 007ccc6b  5f                   pop edi
// 007ccc6c  64890d00000000       mov dword ptr fs:[0], ecx
// 007ccc73  83c450               add esp, 0x50
// 007ccc76  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x3d) - 0xd bytes.
struct Value { int words[11]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;