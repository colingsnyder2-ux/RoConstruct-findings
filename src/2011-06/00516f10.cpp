// roc 2011-06 00516f10  unit: RBX::Network::NetworkOwnerJob  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00516f10
//
// 00516f10  64a100000000         mov eax, dword ptr fs:[0]
// 00516f16  6aff                 push -1
// 00516f18  68221b9d00           push 0x9d1b22
// 00516f1d  50                   push eax
// 00516f1e  64892500000000       mov dword ptr fs:[0], esp
// 00516f25  83ec44               sub esp, 0x44
// 00516f28  57                   push edi
// 00516f29  8bf9                 mov edi, ecx
// 00516f2b  817f08feffff07       cmp dword ptr [edi + 8], 0x7fffffe
// 00516f32  7259                 jb 0x516f8d
// 00516f34  683cb6a500           push 0xa5b63c
// 00516f39  8d4c2408             lea ecx, [esp + 8]
// 00516f3d  ff15c404a400         call dword ptr [0xa404c4]
// 00516f43  8d4c2420             lea ecx, [esp + 0x20]
// 00516f47  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00516f4f  ff15600aa400         call dword ptr [0xa40a60]
// 00516f55  8d442404             lea eax, [esp + 4]
// 00516f59  50                   push eax
// 00516f5a  8d4c2430             lea ecx, [esp + 0x30]
// 00516f5e  c644245401           mov byte ptr [esp + 0x54], 1
// 00516f63  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 00516f6b  ff15c804a400         call dword ptr [0xa404c8]
// 00516f71  687073b800           push 0xb87370
// 00516f76  8d4c2424             lea ecx, [esp + 0x24]
// 00516f7a  51                   push ecx
// 00516f7b  c644245800           mov byte ptr [esp + 0x58], 0
// 00516f80  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00516f88  e81f412f00           call 0x80b0ac
// 00516f8d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00516f91  8b4704               mov eax, dword ptr [edi + 4]
// 00516f94  53                   push ebx
// 00516f95  55                   push ebp
// 00516f96  56                   push esi
// 00516f97  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00516f9b  6a00                 push 0
// 00516f9d  52                   push edx
// 00516f9e  50                   push eax
// 00516f9f  56                   push esi
// 00516fa0  50                   push eax
// 00516fa1  e8bafaffff           call 0x516a60
// 00516fa6  8be8                 mov ebp, eax
// 00516fa8  8b4704               mov eax, dword ptr [edi + 4]
// 00516fab  bb01000000           mov ebx, 1
// 00516fb0  015f08               add dword ptr [edi + 8], ebx
// 00516fb3  3bf0                 cmp esi, eax
// 00516fb5  7510                 jne 0x516fc7
// 00516fb7  896804               mov dword ptr [eax + 4], ebp
// 00516fba  8b4704               mov eax, dword ptr [edi + 4]
// 00516fbd  8928                 mov dword ptr [eax], ebp
// 00516fbf  8b4f04               mov ecx, dword ptr [edi + 4]
// 00516fc2  896908               mov dword ptr [ecx + 8], ebp
// 00516fc5  eb22                 jmp 0x516fe9
// 00516fc7  807c246800           cmp byte ptr [esp + 0x68], 0
// 00516fcc  740d                 je 0x516fdb
// 00516fce  892e                 mov dword ptr [esi], ebp
// 00516fd0  8b4704               mov eax, dword ptr [edi + 4]
// 00516fd3  3b30                 cmp esi, dword ptr [eax]
// 00516fd5  7512                 jne 0x516fe9
// 00516fd7  8928                 mov dword ptr [eax], ebp
// 00516fd9  eb0e                 jmp 0x516fe9
// 00516fdb  896e08               mov dword ptr [esi + 8], ebp
// 00516fde  8b4704               mov eax, dword ptr [edi + 4]
// 00516fe1  3b7008               cmp esi, dword ptr [eax + 8]
// 00516fe4  7503                 jne 0x516fe9
// 00516fe6  896808               mov dword ptr [eax + 8], ebp
// 00516fe9  8b5504               mov edx, dword ptr [ebp + 4]
// 00516fec  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00516ff0  8d4504               lea eax, [ebp + 4]
// 00516ff3  8bf5                 mov esi, ebp
// 00516ff5  0f85ea000000         jne 0x5170e5
// 00516ffb  eb03                 jmp 0x517000
// 00516ffd  8d4900               lea ecx, [ecx]
// 00517000  8b08                 mov ecx, dword ptr [eax]
// 00517002  8b5104               mov edx, dword ptr [ecx + 4]
// 00517005  3b0a                 cmp ecx, dword ptr [edx]
// 00517007  7551                 jne 0x51705a
// 00517009  8b5208               mov edx, dword ptr [edx + 8]
// 0051700c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00517010  7519                 jne 0x51702b
// 00517012  88592c               mov byte ptr [ecx + 0x2c], bl
// 00517015  885a2c               mov byte ptr [edx + 0x2c], bl
// 00517018  8b10                 mov edx, dword ptr [eax]
// 0051701a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0051701d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 00517021  8b10                 mov edx, dword ptr [eax]
// 00517023  8b7204               mov esi, dword ptr [edx + 4]
// 00517026  e9aa000000           jmp 0x5170d5
// 0051702b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0051702e  750a                 jne 0x51703a
// 00517030  8bf1                 mov esi, ecx
// 00517032  56                   push esi
// 00517033  8bcf                 mov ecx, edi
// 00517035  e8e64d4500           call 0x96be20
// 0051703a  8b4604               mov eax, dword ptr [esi + 4]
// 0051703d  88582c               mov byte ptr [eax + 0x2c], bl
// 00517040  8b4e04               mov ecx, dword ptr [esi + 4]
// 00517043  8b5104               mov edx, dword ptr [ecx + 4]
// 00517046  c6422c00             mov byte ptr [edx + 0x2c], 0
// 0051704a  8b4604               mov eax, dword ptr [esi + 4]
// 0051704d  8b4804               mov ecx, dword ptr [eax + 4]
// 00517050  51                   push ecx
// 00517051  8bcf                 mov ecx, edi
// 00517053  e8280c0d00           call 0x5e7c80
// 00517058  eb7b                 jmp 0x5170d5
// 0051705a  8b12                 mov edx, dword ptr [edx]
// 0051705c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00517060  7516                 jne 0x517078
// 00517062  88592c               mov byte ptr [ecx + 0x2c], bl
// 00517065  885a2c               mov byte ptr [edx + 0x2c], bl
// 00517068  8b10                 mov edx, dword ptr [eax]
// 0051706a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0051706d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 00517071  8b10                 mov edx, dword ptr [eax]
// 00517073  8b7204               mov esi, dword ptr [edx + 4]
// 00517076  eb5d                 jmp 0x5170d5
// 00517078  3b31                 cmp esi, dword ptr [ecx]
// 0051707a  750a                 jne 0x517086
// 0051707c  8bf1                 mov esi, ecx
// 0051707e  56                   push esi
// 0051707f  8bcf                 mov ecx, edi
// 00517081  e8fa0b0d00           call 0x5e7c80
// 00517086  8b4604               mov eax, dword ptr [esi + 4]
// 00517089  88582c               mov byte ptr [eax + 0x2c], bl
// 0051708c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051708f  8b5104               mov edx, dword ptr [ecx + 4]
// 00517092  c6422c00             mov byte ptr [edx + 0x2c], 0
// 00517096  8b4604               mov eax, dword ptr [esi + 4]
// 00517099  8b4004               mov eax, dword ptr [eax + 4]
// 0051709c  8b4808               mov ecx, dword ptr [eax + 8]
// 0051709f  8b11                 mov edx, dword ptr [ecx]
// 005170a1  895008               mov dword ptr [eax + 8], edx
// 005170a4  8b11                 mov edx, dword ptr [ecx]
// 005170a6  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 005170aa  7503                 jne 0x5170af
// 005170ac  894204               mov dword ptr [edx + 4], eax
// 005170af  8b5004               mov edx, dword ptr [eax + 4]
// 005170b2  895104               mov dword ptr [ecx + 4], edx
// 005170b5  8b5704               mov edx, dword ptr [edi + 4]
// 005170b8  3b4204               cmp eax, dword ptr [edx + 4]
// 005170bb  7505                 jne 0x5170c2
// 005170bd  894a04               mov dword ptr [edx + 4], ecx
// 005170c0  eb0e                 jmp 0x5170d0
// 005170c2  8b5004               mov edx, dword ptr [eax + 4]
// 005170c5  3b02                 cmp eax, dword ptr [edx]
// 005170c7  7504                 jne 0x5170cd
// 005170c9  890a                 mov dword ptr [edx], ecx
// 005170cb  eb03                 jmp 0x5170d0
// 005170cd  894a08               mov dword ptr [edx + 8], ecx
// 005170d0  8901                 mov dword ptr [ecx], eax
// 005170d2  894804               mov dword ptr [eax + 4], ecx
// 005170d5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005170d8  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 005170dc  8d4604               lea eax, [esi + 4]
// 005170df  0f841bffffff         je 0x517000
// 005170e5  8b5704               mov edx, dword ptr [edi + 4]
// 005170e8  8b4204               mov eax, dword ptr [edx + 4]
// 005170eb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005170ef  88582c               mov byte ptr [eax + 0x2c], bl
// 005170f2  8b442464             mov eax, dword ptr [esp + 0x64]
// 005170f6  5e                   pop esi
// 005170f7  8928                 mov dword ptr [eax], ebp
// 005170f9  5d                   pop ebp
// 005170fa  5b                   pop ebx
// 005170fb  5f                   pop edi
// 005170fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00517103  83c450               add esp, 0x50
// 00517106  c21000               ret 0x10
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