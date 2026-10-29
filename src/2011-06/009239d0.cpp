// roc 2011-06 009239d0  unit: RBX::AdornRbxGfx  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009239d0
//
// 009239d0  64a100000000         mov eax, dword ptr fs:[0]
// 009239d6  6aff                 push -1
// 009239d8  68221b9d00           push 0x9d1b22
// 009239dd  50                   push eax
// 009239de  64892500000000       mov dword ptr fs:[0], esp
// 009239e5  83ec44               sub esp, 0x44
// 009239e8  57                   push edi
// 009239e9  8bf9                 mov edi, ecx
// 009239eb  817f085c74d105       cmp dword ptr [edi + 8], 0x5d1745c
// 009239f2  7259                 jb 0x923a4d
// 009239f4  683cb6a500           push 0xa5b63c
// 009239f9  8d4c2408             lea ecx, [esp + 8]
// 009239fd  ff15c404a400         call dword ptr [0xa404c4]
// 00923a03  8d4c2420             lea ecx, [esp + 0x20]
// 00923a07  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00923a0f  ff15600aa400         call dword ptr [0xa40a60]
// 00923a15  8d442404             lea eax, [esp + 4]
// 00923a19  50                   push eax
// 00923a1a  8d4c2430             lea ecx, [esp + 0x30]
// 00923a1e  c644245401           mov byte ptr [esp + 0x54], 1
// 00923a23  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 00923a2b  ff15c804a400         call dword ptr [0xa404c8]
// 00923a31  687073b800           push 0xb87370
// 00923a36  8d4c2424             lea ecx, [esp + 0x24]
// 00923a3a  51                   push ecx
// 00923a3b  c644245800           mov byte ptr [esp + 0x58], 0
// 00923a40  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00923a48  e85f76eeff           call 0x80b0ac
// 00923a4d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00923a51  8b4704               mov eax, dword ptr [edi + 4]
// 00923a54  53                   push ebx
// 00923a55  55                   push ebp
// 00923a56  56                   push esi
// 00923a57  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00923a5b  6a00                 push 0
// 00923a5d  52                   push edx
// 00923a5e  50                   push eax
// 00923a5f  56                   push esi
// 00923a60  50                   push eax
// 00923a61  e8daf9ffff           call 0x923440
// 00923a66  8be8                 mov ebp, eax
// 00923a68  8b4704               mov eax, dword ptr [edi + 4]
// 00923a6b  bb01000000           mov ebx, 1
// 00923a70  015f08               add dword ptr [edi + 8], ebx
// 00923a73  3bf0                 cmp esi, eax
// 00923a75  7510                 jne 0x923a87
// 00923a77  896804               mov dword ptr [eax + 4], ebp
// 00923a7a  8b4704               mov eax, dword ptr [edi + 4]
// 00923a7d  8928                 mov dword ptr [eax], ebp
// 00923a7f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00923a82  896908               mov dword ptr [ecx + 8], ebp
// 00923a85  eb22                 jmp 0x923aa9
// 00923a87  807c246800           cmp byte ptr [esp + 0x68], 0
// 00923a8c  740d                 je 0x923a9b
// 00923a8e  892e                 mov dword ptr [esi], ebp
// 00923a90  8b4704               mov eax, dword ptr [edi + 4]
// 00923a93  3b30                 cmp esi, dword ptr [eax]
// 00923a95  7512                 jne 0x923aa9
// 00923a97  8928                 mov dword ptr [eax], ebp
// 00923a99  eb0e                 jmp 0x923aa9
// 00923a9b  896e08               mov dword ptr [esi + 8], ebp
// 00923a9e  8b4704               mov eax, dword ptr [edi + 4]
// 00923aa1  3b7008               cmp esi, dword ptr [eax + 8]
// 00923aa4  7503                 jne 0x923aa9
// 00923aa6  896808               mov dword ptr [eax + 8], ebp
// 00923aa9  8b5504               mov edx, dword ptr [ebp + 4]
// 00923aac  807a3800             cmp byte ptr [edx + 0x38], 0
// 00923ab0  8d4504               lea eax, [ebp + 4]
// 00923ab3  8bf5                 mov esi, ebp
// 00923ab5  0f85ea000000         jne 0x923ba5
// 00923abb  eb03                 jmp 0x923ac0
// 00923abd  8d4900               lea ecx, [ecx]
// 00923ac0  8b08                 mov ecx, dword ptr [eax]
// 00923ac2  8b5104               mov edx, dword ptr [ecx + 4]
// 00923ac5  3b0a                 cmp ecx, dword ptr [edx]
// 00923ac7  7551                 jne 0x923b1a
// 00923ac9  8b5208               mov edx, dword ptr [edx + 8]
// 00923acc  807a3800             cmp byte ptr [edx + 0x38], 0
// 00923ad0  7519                 jne 0x923aeb
// 00923ad2  885938               mov byte ptr [ecx + 0x38], bl
// 00923ad5  885a38               mov byte ptr [edx + 0x38], bl
// 00923ad8  8b10                 mov edx, dword ptr [eax]
// 00923ada  8b4a04               mov ecx, dword ptr [edx + 4]
// 00923add  c6413800             mov byte ptr [ecx + 0x38], 0
// 00923ae1  8b10                 mov edx, dword ptr [eax]
// 00923ae3  8b7204               mov esi, dword ptr [edx + 4]
// 00923ae6  e9aa000000           jmp 0x923b95
// 00923aeb  3b7108               cmp esi, dword ptr [ecx + 8]
// 00923aee  750a                 jne 0x923afa
// 00923af0  8bf1                 mov esi, ecx
// 00923af2  56                   push esi
// 00923af3  8bcf                 mov ecx, edi
// 00923af5  e8a6f4ffff           call 0x922fa0
// 00923afa  8b4604               mov eax, dword ptr [esi + 4]
// 00923afd  885838               mov byte ptr [eax + 0x38], bl
// 00923b00  8b4e04               mov ecx, dword ptr [esi + 4]
// 00923b03  8b5104               mov edx, dword ptr [ecx + 4]
// 00923b06  c6423800             mov byte ptr [edx + 0x38], 0
// 00923b0a  8b4604               mov eax, dword ptr [esi + 4]
// 00923b0d  8b4804               mov ecx, dword ptr [eax + 4]
// 00923b10  51                   push ecx
// 00923b11  8bcf                 mov ecx, edi
// 00923b13  e8185d0000           call 0x929830
// 00923b18  eb7b                 jmp 0x923b95
// 00923b1a  8b12                 mov edx, dword ptr [edx]
// 00923b1c  807a3800             cmp byte ptr [edx + 0x38], 0
// 00923b20  7516                 jne 0x923b38
// 00923b22  885938               mov byte ptr [ecx + 0x38], bl
// 00923b25  885a38               mov byte ptr [edx + 0x38], bl
// 00923b28  8b10                 mov edx, dword ptr [eax]
// 00923b2a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00923b2d  c6413800             mov byte ptr [ecx + 0x38], 0
// 00923b31  8b10                 mov edx, dword ptr [eax]
// 00923b33  8b7204               mov esi, dword ptr [edx + 4]
// 00923b36  eb5d                 jmp 0x923b95
// 00923b38  3b31                 cmp esi, dword ptr [ecx]
// 00923b3a  750a                 jne 0x923b46
// 00923b3c  8bf1                 mov esi, ecx
// 00923b3e  56                   push esi
// 00923b3f  8bcf                 mov ecx, edi
// 00923b41  e8ea5c0000           call 0x929830
// 00923b46  8b4604               mov eax, dword ptr [esi + 4]
// 00923b49  885838               mov byte ptr [eax + 0x38], bl
// 00923b4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00923b4f  8b5104               mov edx, dword ptr [ecx + 4]
// 00923b52  c6423800             mov byte ptr [edx + 0x38], 0
// 00923b56  8b4604               mov eax, dword ptr [esi + 4]
// 00923b59  8b4004               mov eax, dword ptr [eax + 4]
// 00923b5c  8b4808               mov ecx, dword ptr [eax + 8]
// 00923b5f  8b11                 mov edx, dword ptr [ecx]
// 00923b61  895008               mov dword ptr [eax + 8], edx
// 00923b64  8b11                 mov edx, dword ptr [ecx]
// 00923b66  807a3900             cmp byte ptr [edx + 0x39], 0
// 00923b6a  7503                 jne 0x923b6f
// 00923b6c  894204               mov dword ptr [edx + 4], eax
// 00923b6f  8b5004               mov edx, dword ptr [eax + 4]
// 00923b72  895104               mov dword ptr [ecx + 4], edx
// 00923b75  8b5704               mov edx, dword ptr [edi + 4]
// 00923b78  3b4204               cmp eax, dword ptr [edx + 4]
// 00923b7b  7505                 jne 0x923b82
// 00923b7d  894a04               mov dword ptr [edx + 4], ecx
// 00923b80  eb0e                 jmp 0x923b90
// 00923b82  8b5004               mov edx, dword ptr [eax + 4]
// 00923b85  3b02                 cmp eax, dword ptr [edx]
// 00923b87  7504                 jne 0x923b8d
// 00923b89  890a                 mov dword ptr [edx], ecx
// 00923b8b  eb03                 jmp 0x923b90
// 00923b8d  894a08               mov dword ptr [edx + 8], ecx
// 00923b90  8901                 mov dword ptr [ecx], eax
// 00923b92  894804               mov dword ptr [eax + 4], ecx
// 00923b95  8b4e04               mov ecx, dword ptr [esi + 4]
// 00923b98  80793800             cmp byte ptr [ecx + 0x38], 0
// 00923b9c  8d4604               lea eax, [esi + 4]
// 00923b9f  0f841bffffff         je 0x923ac0
// 00923ba5  8b5704               mov edx, dword ptr [edi + 4]
// 00923ba8  8b4204               mov eax, dword ptr [edx + 4]
// 00923bab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00923baf  885838               mov byte ptr [eax + 0x38], bl
// 00923bb2  8b442464             mov eax, dword ptr [esp + 0x64]
// 00923bb6  5e                   pop esi
// 00923bb7  8928                 mov dword ptr [eax], ebp
// 00923bb9  5d                   pop ebp
// 00923bba  5b                   pop ebx
// 00923bbb  5f                   pop edi
// 00923bbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00923bc3  83c450               add esp, 0x50
// 00923bc6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;