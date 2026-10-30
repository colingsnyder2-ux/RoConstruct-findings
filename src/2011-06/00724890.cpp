// roc 2011-06 00724890  unit: RBX::VInstance::?$NonFactoryProduct  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00724890
//
// 00724890  64a100000000         mov eax, dword ptr fs:[0]
// 00724896  6aff                 push -1
// 00724898  68221b9d00           push 0x9d1b22
// 0072489d  50                   push eax
// 0072489e  64892500000000       mov dword ptr fs:[0], esp
// 007248a5  83ec44               sub esp, 0x44
// 007248a8  57                   push edi
// 007248a9  8bf9                 mov edi, ecx
// 007248ab  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 007248b2  7259                 jb 0x72490d
// 007248b4  683cb6a500           push 0xa5b63c
// 007248b9  8d4c2408             lea ecx, [esp + 8]
// 007248bd  ff15c404a400         call dword ptr [0xa404c4]
// 007248c3  8d4c2420             lea ecx, [esp + 0x20]
// 007248c7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007248cf  ff15600aa400         call dword ptr [0xa40a60]
// 007248d5  8d442404             lea eax, [esp + 4]
// 007248d9  50                   push eax
// 007248da  8d4c2430             lea ecx, [esp + 0x30]
// 007248de  c644245401           mov byte ptr [esp + 0x54], 1
// 007248e3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 007248eb  ff15c804a400         call dword ptr [0xa404c8]
// 007248f1  687073b800           push 0xb87370
// 007248f6  8d4c2424             lea ecx, [esp + 0x24]
// 007248fa  51                   push ecx
// 007248fb  c644245800           mov byte ptr [esp + 0x58], 0
// 00724900  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00724908  e89f670e00           call 0x80b0ac
// 0072490d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00724911  8b4704               mov eax, dword ptr [edi + 4]
// 00724914  53                   push ebx
// 00724915  55                   push ebp
// 00724916  56                   push esi
// 00724917  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0072491b  6a00                 push 0
// 0072491d  52                   push edx
// 0072491e  50                   push eax
// 0072491f  56                   push esi
// 00724920  50                   push eax
// 00724921  e83afaffff           call 0x724360
// 00724926  8be8                 mov ebp, eax
// 00724928  8b4704               mov eax, dword ptr [edi + 4]
// 0072492b  bb01000000           mov ebx, 1
// 00724930  015f08               add dword ptr [edi + 8], ebx
// 00724933  3bf0                 cmp esi, eax
// 00724935  7510                 jne 0x724947
// 00724937  896804               mov dword ptr [eax + 4], ebp
// 0072493a  8b4704               mov eax, dword ptr [edi + 4]
// 0072493d  8928                 mov dword ptr [eax], ebp
// 0072493f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00724942  896908               mov dword ptr [ecx + 8], ebp
// 00724945  eb22                 jmp 0x724969
// 00724947  807c246800           cmp byte ptr [esp + 0x68], 0
// 0072494c  740d                 je 0x72495b
// 0072494e  892e                 mov dword ptr [esi], ebp
// 00724950  8b4704               mov eax, dword ptr [edi + 4]
// 00724953  3b30                 cmp esi, dword ptr [eax]
// 00724955  7512                 jne 0x724969
// 00724957  8928                 mov dword ptr [eax], ebp
// 00724959  eb0e                 jmp 0x724969
// 0072495b  896e08               mov dword ptr [esi + 8], ebp
// 0072495e  8b4704               mov eax, dword ptr [edi + 4]
// 00724961  3b7008               cmp esi, dword ptr [eax + 8]
// 00724964  7503                 jne 0x724969
// 00724966  896808               mov dword ptr [eax + 8], ebp
// 00724969  8b5504               mov edx, dword ptr [ebp + 4]
// 0072496c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00724970  8d4504               lea eax, [ebp + 4]
// 00724973  8bf5                 mov esi, ebp
// 00724975  0f85ea000000         jne 0x724a65
// 0072497b  eb03                 jmp 0x724980
// 0072497d  8d4900               lea ecx, [ecx]
// 00724980  8b08                 mov ecx, dword ptr [eax]
// 00724982  8b5104               mov edx, dword ptr [ecx + 4]
// 00724985  3b0a                 cmp ecx, dword ptr [edx]
// 00724987  7551                 jne 0x7249da
// 00724989  8b5208               mov edx, dword ptr [edx + 8]
// 0072498c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00724990  7519                 jne 0x7249ab
// 00724992  88591c               mov byte ptr [ecx + 0x1c], bl
// 00724995  885a1c               mov byte ptr [edx + 0x1c], bl
// 00724998  8b10                 mov edx, dword ptr [eax]
// 0072499a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0072499d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 007249a1  8b10                 mov edx, dword ptr [eax]
// 007249a3  8b7204               mov esi, dword ptr [edx + 4]
// 007249a6  e9aa000000           jmp 0x724a55
// 007249ab  3b7108               cmp esi, dword ptr [ecx + 8]
// 007249ae  750a                 jne 0x7249ba
// 007249b0  8bf1                 mov esi, ecx
// 007249b2  56                   push esi
// 007249b3  8bcf                 mov ecx, edi
// 007249b5  e8e6e1ffff           call 0x722ba0
// 007249ba  8b4604               mov eax, dword ptr [esi + 4]
// 007249bd  88581c               mov byte ptr [eax + 0x1c], bl
// 007249c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 007249c3  8b5104               mov edx, dword ptr [ecx + 4]
// 007249c6  c6421c00             mov byte ptr [edx + 0x1c], 0
// 007249ca  8b4604               mov eax, dword ptr [esi + 4]
// 007249cd  8b4804               mov ecx, dword ptr [eax + 4]
// 007249d0  51                   push ecx
// 007249d1  8bcf                 mov ecx, edi
// 007249d3  e8e81e0100           call 0x7368c0
// 007249d8  eb7b                 jmp 0x724a55
// 007249da  8b12                 mov edx, dword ptr [edx]
// 007249dc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 007249e0  7516                 jne 0x7249f8
// 007249e2  88591c               mov byte ptr [ecx + 0x1c], bl
// 007249e5  885a1c               mov byte ptr [edx + 0x1c], bl
// 007249e8  8b10                 mov edx, dword ptr [eax]
// 007249ea  8b4a04               mov ecx, dword ptr [edx + 4]
// 007249ed  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 007249f1  8b10                 mov edx, dword ptr [eax]
// 007249f3  8b7204               mov esi, dword ptr [edx + 4]
// 007249f6  eb5d                 jmp 0x724a55
// 007249f8  3b31                 cmp esi, dword ptr [ecx]
// 007249fa  750a                 jne 0x724a06
// 007249fc  8bf1                 mov esi, ecx
// 007249fe  56                   push esi
// 007249ff  8bcf                 mov ecx, edi
// 00724a01  e8ba1e0100           call 0x7368c0
// 00724a06  8b4604               mov eax, dword ptr [esi + 4]
// 00724a09  88581c               mov byte ptr [eax + 0x1c], bl
// 00724a0c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00724a0f  8b5104               mov edx, dword ptr [ecx + 4]
// 00724a12  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00724a16  8b4604               mov eax, dword ptr [esi + 4]
// 00724a19  8b4004               mov eax, dword ptr [eax + 4]
// 00724a1c  8b4808               mov ecx, dword ptr [eax + 8]
// 00724a1f  8b11                 mov edx, dword ptr [ecx]
// 00724a21  895008               mov dword ptr [eax + 8], edx
// 00724a24  8b11                 mov edx, dword ptr [ecx]
// 00724a26  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00724a2a  7503                 jne 0x724a2f
// 00724a2c  894204               mov dword ptr [edx + 4], eax
// 00724a2f  8b5004               mov edx, dword ptr [eax + 4]
// 00724a32  895104               mov dword ptr [ecx + 4], edx
// 00724a35  8b5704               mov edx, dword ptr [edi + 4]
// 00724a38  3b4204               cmp eax, dword ptr [edx + 4]
// 00724a3b  7505                 jne 0x724a42
// 00724a3d  894a04               mov dword ptr [edx + 4], ecx
// 00724a40  eb0e                 jmp 0x724a50
// 00724a42  8b5004               mov edx, dword ptr [eax + 4]
// 00724a45  3b02                 cmp eax, dword ptr [edx]
// 00724a47  7504                 jne 0x724a4d
// 00724a49  890a                 mov dword ptr [edx], ecx
// 00724a4b  eb03                 jmp 0x724a50
// 00724a4d  894a08               mov dword ptr [edx + 8], ecx
// 00724a50  8901                 mov dword ptr [ecx], eax
// 00724a52  894804               mov dword ptr [eax + 4], ecx
// 00724a55  8b4e04               mov ecx, dword ptr [esi + 4]
// 00724a58  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00724a5c  8d4604               lea eax, [esi + 4]
// 00724a5f  0f841bffffff         je 0x724980
// 00724a65  8b5704               mov edx, dword ptr [edi + 4]
// 00724a68  8b4204               mov eax, dword ptr [edx + 4]
// 00724a6b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00724a6f  88581c               mov byte ptr [eax + 0x1c], bl
// 00724a72  8b442464             mov eax, dword ptr [esp + 0x64]
// 00724a76  5e                   pop esi
// 00724a77  8928                 mov dword ptr [eax], ebp
// 00724a79  5d                   pop ebp
// 00724a7a  5b                   pop ebx
// 00724a7b  5f                   pop edi
// 00724a7c  64890d00000000       mov dword ptr fs:[0], ecx
// 00724a83  83c450               add esp, 0x50
// 00724a86  c21000               ret 0x10
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