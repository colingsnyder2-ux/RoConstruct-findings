// roc 2011-06 004e49d0  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e49d0
//
// 004e49d0  64a100000000         mov eax, dword ptr fs:[0]
// 004e49d6  6aff                 push -1
// 004e49d8  68221b9d00           push 0x9d1b22
// 004e49dd  50                   push eax
// 004e49de  64892500000000       mov dword ptr fs:[0], esp
// 004e49e5  83ec44               sub esp, 0x44
// 004e49e8  57                   push edi
// 004e49e9  8bf9                 mov edi, ecx
// 004e49eb  817f08c6711c07       cmp dword ptr [edi + 8], 0x71c71c6
// 004e49f2  7259                 jb 0x4e4a4d
// 004e49f4  683cb6a500           push 0xa5b63c
// 004e49f9  8d4c2408             lea ecx, [esp + 8]
// 004e49fd  ff15c404a400         call dword ptr [0xa404c4]
// 004e4a03  8d4c2420             lea ecx, [esp + 0x20]
// 004e4a07  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004e4a0f  ff15600aa400         call dword ptr [0xa40a60]
// 004e4a15  8d442404             lea eax, [esp + 4]
// 004e4a19  50                   push eax
// 004e4a1a  8d4c2430             lea ecx, [esp + 0x30]
// 004e4a1e  c644245401           mov byte ptr [esp + 0x54], 1
// 004e4a23  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 004e4a2b  ff15c804a400         call dword ptr [0xa404c8]
// 004e4a31  687073b800           push 0xb87370
// 004e4a36  8d4c2424             lea ecx, [esp + 0x24]
// 004e4a3a  51                   push ecx
// 004e4a3b  c644245800           mov byte ptr [esp + 0x58], 0
// 004e4a40  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 004e4a48  e85f663200           call 0x80b0ac
// 004e4a4d  8b542464             mov edx, dword ptr [esp + 0x64]
// 004e4a51  8b4704               mov eax, dword ptr [edi + 4]
// 004e4a54  53                   push ebx
// 004e4a55  55                   push ebp
// 004e4a56  56                   push esi
// 004e4a57  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 004e4a5b  6a00                 push 0
// 004e4a5d  52                   push edx
// 004e4a5e  50                   push eax
// 004e4a5f  56                   push esi
// 004e4a60  50                   push eax
// 004e4a61  e8cafeffff           call 0x4e4930
// 004e4a66  8be8                 mov ebp, eax
// 004e4a68  8b4704               mov eax, dword ptr [edi + 4]
// 004e4a6b  bb01000000           mov ebx, 1
// 004e4a70  015f08               add dword ptr [edi + 8], ebx
// 004e4a73  3bf0                 cmp esi, eax
// 004e4a75  7510                 jne 0x4e4a87
// 004e4a77  896804               mov dword ptr [eax + 4], ebp
// 004e4a7a  8b4704               mov eax, dword ptr [edi + 4]
// 004e4a7d  8928                 mov dword ptr [eax], ebp
// 004e4a7f  8b4f04               mov ecx, dword ptr [edi + 4]
// 004e4a82  896908               mov dword ptr [ecx + 8], ebp
// 004e4a85  eb22                 jmp 0x4e4aa9
// 004e4a87  807c246800           cmp byte ptr [esp + 0x68], 0
// 004e4a8c  740d                 je 0x4e4a9b
// 004e4a8e  892e                 mov dword ptr [esi], ebp
// 004e4a90  8b4704               mov eax, dword ptr [edi + 4]
// 004e4a93  3b30                 cmp esi, dword ptr [eax]
// 004e4a95  7512                 jne 0x4e4aa9
// 004e4a97  8928                 mov dword ptr [eax], ebp
// 004e4a99  eb0e                 jmp 0x4e4aa9
// 004e4a9b  896e08               mov dword ptr [esi + 8], ebp
// 004e4a9e  8b4704               mov eax, dword ptr [edi + 4]
// 004e4aa1  3b7008               cmp esi, dword ptr [eax + 8]
// 004e4aa4  7503                 jne 0x4e4aa9
// 004e4aa6  896808               mov dword ptr [eax + 8], ebp
// 004e4aa9  8b5504               mov edx, dword ptr [ebp + 4]
// 004e4aac  807a3000             cmp byte ptr [edx + 0x30], 0
// 004e4ab0  8d4504               lea eax, [ebp + 4]
// 004e4ab3  8bf5                 mov esi, ebp
// 004e4ab5  0f85ea000000         jne 0x4e4ba5
// 004e4abb  eb03                 jmp 0x4e4ac0
// 004e4abd  8d4900               lea ecx, [ecx]
// 004e4ac0  8b08                 mov ecx, dword ptr [eax]
// 004e4ac2  8b5104               mov edx, dword ptr [ecx + 4]
// 004e4ac5  3b0a                 cmp ecx, dword ptr [edx]
// 004e4ac7  7551                 jne 0x4e4b1a
// 004e4ac9  8b5208               mov edx, dword ptr [edx + 8]
// 004e4acc  807a3000             cmp byte ptr [edx + 0x30], 0
// 004e4ad0  7519                 jne 0x4e4aeb
// 004e4ad2  885930               mov byte ptr [ecx + 0x30], bl
// 004e4ad5  885a30               mov byte ptr [edx + 0x30], bl
// 004e4ad8  8b10                 mov edx, dword ptr [eax]
// 004e4ada  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e4add  c6413000             mov byte ptr [ecx + 0x30], 0
// 004e4ae1  8b10                 mov edx, dword ptr [eax]
// 004e4ae3  8b7204               mov esi, dword ptr [edx + 4]
// 004e4ae6  e9aa000000           jmp 0x4e4b95
// 004e4aeb  3b7108               cmp esi, dword ptr [ecx + 8]
// 004e4aee  750a                 jne 0x4e4afa
// 004e4af0  8bf1                 mov esi, ecx
// 004e4af2  56                   push esi
// 004e4af3  8bcf                 mov ecx, edi
// 004e4af5  e866ee1200           call 0x613960
// 004e4afa  8b4604               mov eax, dword ptr [esi + 4]
// 004e4afd  885830               mov byte ptr [eax + 0x30], bl
// 004e4b00  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4b03  8b5104               mov edx, dword ptr [ecx + 4]
// 004e4b06  c6423000             mov byte ptr [edx + 0x30], 0
// 004e4b0a  8b4604               mov eax, dword ptr [esi + 4]
// 004e4b0d  8b4804               mov ecx, dword ptr [eax + 4]
// 004e4b10  51                   push ecx
// 004e4b11  8bcf                 mov ecx, edi
// 004e4b13  e8489c2400           call 0x72e760
// 004e4b18  eb7b                 jmp 0x4e4b95
// 004e4b1a  8b12                 mov edx, dword ptr [edx]
// 004e4b1c  807a3000             cmp byte ptr [edx + 0x30], 0
// 004e4b20  7516                 jne 0x4e4b38
// 004e4b22  885930               mov byte ptr [ecx + 0x30], bl
// 004e4b25  885a30               mov byte ptr [edx + 0x30], bl
// 004e4b28  8b10                 mov edx, dword ptr [eax]
// 004e4b2a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e4b2d  c6413000             mov byte ptr [ecx + 0x30], 0
// 004e4b31  8b10                 mov edx, dword ptr [eax]
// 004e4b33  8b7204               mov esi, dword ptr [edx + 4]
// 004e4b36  eb5d                 jmp 0x4e4b95
// 004e4b38  3b31                 cmp esi, dword ptr [ecx]
// 004e4b3a  750a                 jne 0x4e4b46
// 004e4b3c  8bf1                 mov esi, ecx
// 004e4b3e  56                   push esi
// 004e4b3f  8bcf                 mov ecx, edi
// 004e4b41  e81a9c2400           call 0x72e760
// 004e4b46  8b4604               mov eax, dword ptr [esi + 4]
// 004e4b49  885830               mov byte ptr [eax + 0x30], bl
// 004e4b4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4b4f  8b5104               mov edx, dword ptr [ecx + 4]
// 004e4b52  c6423000             mov byte ptr [edx + 0x30], 0
// 004e4b56  8b4604               mov eax, dword ptr [esi + 4]
// 004e4b59  8b4004               mov eax, dword ptr [eax + 4]
// 004e4b5c  8b4808               mov ecx, dword ptr [eax + 8]
// 004e4b5f  8b11                 mov edx, dword ptr [ecx]
// 004e4b61  895008               mov dword ptr [eax + 8], edx
// 004e4b64  8b11                 mov edx, dword ptr [ecx]
// 004e4b66  807a3100             cmp byte ptr [edx + 0x31], 0
// 004e4b6a  7503                 jne 0x4e4b6f
// 004e4b6c  894204               mov dword ptr [edx + 4], eax
// 004e4b6f  8b5004               mov edx, dword ptr [eax + 4]
// 004e4b72  895104               mov dword ptr [ecx + 4], edx
// 004e4b75  8b5704               mov edx, dword ptr [edi + 4]
// 004e4b78  3b4204               cmp eax, dword ptr [edx + 4]
// 004e4b7b  7505                 jne 0x4e4b82
// 004e4b7d  894a04               mov dword ptr [edx + 4], ecx
// 004e4b80  eb0e                 jmp 0x4e4b90
// 004e4b82  8b5004               mov edx, dword ptr [eax + 4]
// 004e4b85  3b02                 cmp eax, dword ptr [edx]
// 004e4b87  7504                 jne 0x4e4b8d
// 004e4b89  890a                 mov dword ptr [edx], ecx
// 004e4b8b  eb03                 jmp 0x4e4b90
// 004e4b8d  894a08               mov dword ptr [edx + 8], ecx
// 004e4b90  8901                 mov dword ptr [ecx], eax
// 004e4b92  894804               mov dword ptr [eax + 4], ecx
// 004e4b95  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4b98  80793000             cmp byte ptr [ecx + 0x30], 0
// 004e4b9c  8d4604               lea eax, [esi + 4]
// 004e4b9f  0f841bffffff         je 0x4e4ac0
// 004e4ba5  8b5704               mov edx, dword ptr [edi + 4]
// 004e4ba8  8b4204               mov eax, dword ptr [edx + 4]
// 004e4bab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004e4baf  885830               mov byte ptr [eax + 0x30], bl
// 004e4bb2  8b442464             mov eax, dword ptr [esp + 0x64]
// 004e4bb6  5e                   pop esi
// 004e4bb7  8928                 mov dword ptr [eax], ebp
// 004e4bb9  5d                   pop ebp
// 004e4bba  5b                   pop ebx
// 004e4bbb  5f                   pop edi
// 004e4bbc  64890d00000000       mov dword ptr fs:[0], ecx
// 004e4bc3  83c450               add esp, 0x50
// 004e4bc6  c21000               ret 0x10
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