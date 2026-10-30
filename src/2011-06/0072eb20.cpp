// roc 2011-06 0072eb20  unit: RBX::MeshContentProvider  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072eb20
//
// 0072eb20  64a100000000         mov eax, dword ptr fs:[0]
// 0072eb26  6aff                 push -1
// 0072eb28  68221b9d00           push 0x9d1b22
// 0072eb2d  50                   push eax
// 0072eb2e  64892500000000       mov dword ptr fs:[0], esp
// 0072eb35  83ec44               sub esp, 0x44
// 0072eb38  57                   push edi
// 0072eb39  8bf9                 mov edi, ecx
// 0072eb3b  817f08c6711c07       cmp dword ptr [edi + 8], 0x71c71c6
// 0072eb42  7259                 jb 0x72eb9d
// 0072eb44  683cb6a500           push 0xa5b63c
// 0072eb49  8d4c2408             lea ecx, [esp + 8]
// 0072eb4d  ff15c404a400         call dword ptr [0xa404c4]
// 0072eb53  8d4c2420             lea ecx, [esp + 0x20]
// 0072eb57  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0072eb5f  ff15600aa400         call dword ptr [0xa40a60]
// 0072eb65  8d442404             lea eax, [esp + 4]
// 0072eb69  50                   push eax
// 0072eb6a  8d4c2430             lea ecx, [esp + 0x30]
// 0072eb6e  c644245401           mov byte ptr [esp + 0x54], 1
// 0072eb73  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0072eb7b  ff15c804a400         call dword ptr [0xa404c8]
// 0072eb81  687073b800           push 0xb87370
// 0072eb86  8d4c2424             lea ecx, [esp + 0x24]
// 0072eb8a  51                   push ecx
// 0072eb8b  c644245800           mov byte ptr [esp + 0x58], 0
// 0072eb90  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0072eb98  e80fc50d00           call 0x80b0ac
// 0072eb9d  8b542464             mov edx, dword ptr [esp + 0x64]
// 0072eba1  8b4704               mov eax, dword ptr [edi + 4]
// 0072eba4  53                   push ebx
// 0072eba5  55                   push ebp
// 0072eba6  56                   push esi
// 0072eba7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0072ebab  6a00                 push 0
// 0072ebad  52                   push edx
// 0072ebae  50                   push eax
// 0072ebaf  56                   push esi
// 0072ebb0  50                   push eax
// 0072ebb1  e8fa19d6ff           call 0x4905b0
// 0072ebb6  8be8                 mov ebp, eax
// 0072ebb8  8b4704               mov eax, dword ptr [edi + 4]
// 0072ebbb  bb01000000           mov ebx, 1
// 0072ebc0  015f08               add dword ptr [edi + 8], ebx
// 0072ebc3  3bf0                 cmp esi, eax
// 0072ebc5  7510                 jne 0x72ebd7
// 0072ebc7  896804               mov dword ptr [eax + 4], ebp
// 0072ebca  8b4704               mov eax, dword ptr [edi + 4]
// 0072ebcd  8928                 mov dword ptr [eax], ebp
// 0072ebcf  8b4f04               mov ecx, dword ptr [edi + 4]
// 0072ebd2  896908               mov dword ptr [ecx + 8], ebp
// 0072ebd5  eb22                 jmp 0x72ebf9
// 0072ebd7  807c246800           cmp byte ptr [esp + 0x68], 0
// 0072ebdc  740d                 je 0x72ebeb
// 0072ebde  892e                 mov dword ptr [esi], ebp
// 0072ebe0  8b4704               mov eax, dword ptr [edi + 4]
// 0072ebe3  3b30                 cmp esi, dword ptr [eax]
// 0072ebe5  7512                 jne 0x72ebf9
// 0072ebe7  8928                 mov dword ptr [eax], ebp
// 0072ebe9  eb0e                 jmp 0x72ebf9
// 0072ebeb  896e08               mov dword ptr [esi + 8], ebp
// 0072ebee  8b4704               mov eax, dword ptr [edi + 4]
// 0072ebf1  3b7008               cmp esi, dword ptr [eax + 8]
// 0072ebf4  7503                 jne 0x72ebf9
// 0072ebf6  896808               mov dword ptr [eax + 8], ebp
// 0072ebf9  8b5504               mov edx, dword ptr [ebp + 4]
// 0072ebfc  807a3000             cmp byte ptr [edx + 0x30], 0
// 0072ec00  8d4504               lea eax, [ebp + 4]
// 0072ec03  8bf5                 mov esi, ebp
// 0072ec05  0f85ea000000         jne 0x72ecf5
// 0072ec0b  eb03                 jmp 0x72ec10
// 0072ec0d  8d4900               lea ecx, [ecx]
// 0072ec10  8b08                 mov ecx, dword ptr [eax]
// 0072ec12  8b5104               mov edx, dword ptr [ecx + 4]
// 0072ec15  3b0a                 cmp ecx, dword ptr [edx]
// 0072ec17  7551                 jne 0x72ec6a
// 0072ec19  8b5208               mov edx, dword ptr [edx + 8]
// 0072ec1c  807a3000             cmp byte ptr [edx + 0x30], 0
// 0072ec20  7519                 jne 0x72ec3b
// 0072ec22  885930               mov byte ptr [ecx + 0x30], bl
// 0072ec25  885a30               mov byte ptr [edx + 0x30], bl
// 0072ec28  8b10                 mov edx, dword ptr [eax]
// 0072ec2a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0072ec2d  c6413000             mov byte ptr [ecx + 0x30], 0
// 0072ec31  8b10                 mov edx, dword ptr [eax]
// 0072ec33  8b7204               mov esi, dword ptr [edx + 4]
// 0072ec36  e9aa000000           jmp 0x72ece5
// 0072ec3b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0072ec3e  750a                 jne 0x72ec4a
// 0072ec40  8bf1                 mov esi, ecx
// 0072ec42  56                   push esi
// 0072ec43  8bcf                 mov ecx, edi
// 0072ec45  e8164deeff           call 0x613960
// 0072ec4a  8b4604               mov eax, dword ptr [esi + 4]
// 0072ec4d  885830               mov byte ptr [eax + 0x30], bl
// 0072ec50  8b4e04               mov ecx, dword ptr [esi + 4]
// 0072ec53  8b5104               mov edx, dword ptr [ecx + 4]
// 0072ec56  c6423000             mov byte ptr [edx + 0x30], 0
// 0072ec5a  8b4604               mov eax, dword ptr [esi + 4]
// 0072ec5d  8b4804               mov ecx, dword ptr [eax + 4]
// 0072ec60  51                   push ecx
// 0072ec61  8bcf                 mov ecx, edi
// 0072ec63  e8f8faffff           call 0x72e760
// 0072ec68  eb7b                 jmp 0x72ece5
// 0072ec6a  8b12                 mov edx, dword ptr [edx]
// 0072ec6c  807a3000             cmp byte ptr [edx + 0x30], 0
// 0072ec70  7516                 jne 0x72ec88
// 0072ec72  885930               mov byte ptr [ecx + 0x30], bl
// 0072ec75  885a30               mov byte ptr [edx + 0x30], bl
// 0072ec78  8b10                 mov edx, dword ptr [eax]
// 0072ec7a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0072ec7d  c6413000             mov byte ptr [ecx + 0x30], 0
// 0072ec81  8b10                 mov edx, dword ptr [eax]
// 0072ec83  8b7204               mov esi, dword ptr [edx + 4]
// 0072ec86  eb5d                 jmp 0x72ece5
// 0072ec88  3b31                 cmp esi, dword ptr [ecx]
// 0072ec8a  750a                 jne 0x72ec96
// 0072ec8c  8bf1                 mov esi, ecx
// 0072ec8e  56                   push esi
// 0072ec8f  8bcf                 mov ecx, edi
// 0072ec91  e8cafaffff           call 0x72e760
// 0072ec96  8b4604               mov eax, dword ptr [esi + 4]
// 0072ec99  885830               mov byte ptr [eax + 0x30], bl
// 0072ec9c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0072ec9f  8b5104               mov edx, dword ptr [ecx + 4]
// 0072eca2  c6423000             mov byte ptr [edx + 0x30], 0
// 0072eca6  8b4604               mov eax, dword ptr [esi + 4]
// 0072eca9  8b4004               mov eax, dword ptr [eax + 4]
// 0072ecac  8b4808               mov ecx, dword ptr [eax + 8]
// 0072ecaf  8b11                 mov edx, dword ptr [ecx]
// 0072ecb1  895008               mov dword ptr [eax + 8], edx
// 0072ecb4  8b11                 mov edx, dword ptr [ecx]
// 0072ecb6  807a3100             cmp byte ptr [edx + 0x31], 0
// 0072ecba  7503                 jne 0x72ecbf
// 0072ecbc  894204               mov dword ptr [edx + 4], eax
// 0072ecbf  8b5004               mov edx, dword ptr [eax + 4]
// 0072ecc2  895104               mov dword ptr [ecx + 4], edx
// 0072ecc5  8b5704               mov edx, dword ptr [edi + 4]
// 0072ecc8  3b4204               cmp eax, dword ptr [edx + 4]
// 0072eccb  7505                 jne 0x72ecd2
// 0072eccd  894a04               mov dword ptr [edx + 4], ecx
// 0072ecd0  eb0e                 jmp 0x72ece0
// 0072ecd2  8b5004               mov edx, dword ptr [eax + 4]
// 0072ecd5  3b02                 cmp eax, dword ptr [edx]
// 0072ecd7  7504                 jne 0x72ecdd
// 0072ecd9  890a                 mov dword ptr [edx], ecx
// 0072ecdb  eb03                 jmp 0x72ece0
// 0072ecdd  894a08               mov dword ptr [edx + 8], ecx
// 0072ece0  8901                 mov dword ptr [ecx], eax
// 0072ece2  894804               mov dword ptr [eax + 4], ecx
// 0072ece5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0072ece8  80793000             cmp byte ptr [ecx + 0x30], 0
// 0072ecec  8d4604               lea eax, [esi + 4]
// 0072ecef  0f841bffffff         je 0x72ec10
// 0072ecf5  8b5704               mov edx, dword ptr [edi + 4]
// 0072ecf8  8b4204               mov eax, dword ptr [edx + 4]
// 0072ecfb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0072ecff  885830               mov byte ptr [eax + 0x30], bl
// 0072ed02  8b442464             mov eax, dword ptr [esp + 0x64]
// 0072ed06  5e                   pop esi
// 0072ed07  8928                 mov dword ptr [eax], ebp
// 0072ed09  5d                   pop ebp
// 0072ed0a  5b                   pop ebx
// 0072ed0b  5f                   pop edi
// 0072ed0c  64890d00000000       mov dword ptr fs:[0], ecx
// 0072ed13  83c450               add esp, 0x50
// 0072ed16  c21000               ret 0x10
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