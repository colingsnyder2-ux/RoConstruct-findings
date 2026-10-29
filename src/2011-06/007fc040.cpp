// roc 2011-06 007fc040  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fc040
//
// 007fc040  64a100000000         mov eax, dword ptr fs:[0]
// 007fc046  6aff                 push -1
// 007fc048  68221b9d00           push 0x9d1b22
// 007fc04d  50                   push eax
// 007fc04e  64892500000000       mov dword ptr fs:[0], esp
// 007fc055  83ec44               sub esp, 0x44
// 007fc058  57                   push edi
// 007fc059  8bf9                 mov edi, ecx
// 007fc05b  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 007fc062  7259                 jb 0x7fc0bd
// 007fc064  683cb6a500           push 0xa5b63c
// 007fc069  8d4c2408             lea ecx, [esp + 8]
// 007fc06d  ff15c404a400         call dword ptr [0xa404c4]
// 007fc073  8d4c2420             lea ecx, [esp + 0x20]
// 007fc077  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007fc07f  ff15600aa400         call dword ptr [0xa40a60]
// 007fc085  8d442404             lea eax, [esp + 4]
// 007fc089  50                   push eax
// 007fc08a  8d4c2430             lea ecx, [esp + 0x30]
// 007fc08e  c644245401           mov byte ptr [esp + 0x54], 1
// 007fc093  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 007fc09b  ff15c804a400         call dword ptr [0xa404c8]
// 007fc0a1  687073b800           push 0xb87370
// 007fc0a6  8d4c2424             lea ecx, [esp + 0x24]
// 007fc0aa  51                   push ecx
// 007fc0ab  c644245800           mov byte ptr [esp + 0x58], 0
// 007fc0b0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 007fc0b8  e8efef0000           call 0x80b0ac
// 007fc0bd  8b542464             mov edx, dword ptr [esp + 0x64]
// 007fc0c1  8b4704               mov eax, dword ptr [edi + 4]
// 007fc0c4  53                   push ebx
// 007fc0c5  55                   push ebp
// 007fc0c6  56                   push esi
// 007fc0c7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007fc0cb  6a00                 push 0
// 007fc0cd  52                   push edx
// 007fc0ce  50                   push eax
// 007fc0cf  56                   push esi
// 007fc0d0  50                   push eax
// 007fc0d1  e8dafaffff           call 0x7fbbb0
// 007fc0d6  8be8                 mov ebp, eax
// 007fc0d8  8b4704               mov eax, dword ptr [edi + 4]
// 007fc0db  bb01000000           mov ebx, 1
// 007fc0e0  015f08               add dword ptr [edi + 8], ebx
// 007fc0e3  3bf0                 cmp esi, eax
// 007fc0e5  7510                 jne 0x7fc0f7
// 007fc0e7  896804               mov dword ptr [eax + 4], ebp
// 007fc0ea  8b4704               mov eax, dword ptr [edi + 4]
// 007fc0ed  8928                 mov dword ptr [eax], ebp
// 007fc0ef  8b4f04               mov ecx, dword ptr [edi + 4]
// 007fc0f2  896908               mov dword ptr [ecx + 8], ebp
// 007fc0f5  eb22                 jmp 0x7fc119
// 007fc0f7  807c246800           cmp byte ptr [esp + 0x68], 0
// 007fc0fc  740d                 je 0x7fc10b
// 007fc0fe  892e                 mov dword ptr [esi], ebp
// 007fc100  8b4704               mov eax, dword ptr [edi + 4]
// 007fc103  3b30                 cmp esi, dword ptr [eax]
// 007fc105  7512                 jne 0x7fc119
// 007fc107  8928                 mov dword ptr [eax], ebp
// 007fc109  eb0e                 jmp 0x7fc119
// 007fc10b  896e08               mov dword ptr [esi + 8], ebp
// 007fc10e  8b4704               mov eax, dword ptr [edi + 4]
// 007fc111  3b7008               cmp esi, dword ptr [eax + 8]
// 007fc114  7503                 jne 0x7fc119
// 007fc116  896808               mov dword ptr [eax + 8], ebp
// 007fc119  8b5504               mov edx, dword ptr [ebp + 4]
// 007fc11c  807a1400             cmp byte ptr [edx + 0x14], 0
// 007fc120  8d4504               lea eax, [ebp + 4]
// 007fc123  8bf5                 mov esi, ebp
// 007fc125  0f85ea000000         jne 0x7fc215
// 007fc12b  eb03                 jmp 0x7fc130
// 007fc12d  8d4900               lea ecx, [ecx]
// 007fc130  8b08                 mov ecx, dword ptr [eax]
// 007fc132  8b5104               mov edx, dword ptr [ecx + 4]
// 007fc135  3b0a                 cmp ecx, dword ptr [edx]
// 007fc137  7551                 jne 0x7fc18a
// 007fc139  8b5208               mov edx, dword ptr [edx + 8]
// 007fc13c  807a1400             cmp byte ptr [edx + 0x14], 0
// 007fc140  7519                 jne 0x7fc15b
// 007fc142  885914               mov byte ptr [ecx + 0x14], bl
// 007fc145  885a14               mov byte ptr [edx + 0x14], bl
// 007fc148  8b10                 mov edx, dword ptr [eax]
// 007fc14a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007fc14d  c6411400             mov byte ptr [ecx + 0x14], 0
// 007fc151  8b10                 mov edx, dword ptr [eax]
// 007fc153  8b7204               mov esi, dword ptr [edx + 4]
// 007fc156  e9aa000000           jmp 0x7fc205
// 007fc15b  3b7108               cmp esi, dword ptr [ecx + 8]
// 007fc15e  750a                 jne 0x7fc16a
// 007fc160  8bf1                 mov esi, ecx
// 007fc162  56                   push esi
// 007fc163  8bcf                 mov ecx, edi
// 007fc165  e89650dcff           call 0x5c1200
// 007fc16a  8b4604               mov eax, dword ptr [esi + 4]
// 007fc16d  885814               mov byte ptr [eax + 0x14], bl
// 007fc170  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fc173  8b5104               mov edx, dword ptr [ecx + 4]
// 007fc176  c6421400             mov byte ptr [edx + 0x14], 0
// 007fc17a  8b4604               mov eax, dword ptr [esi + 4]
// 007fc17d  8b4804               mov ecx, dword ptr [eax + 4]
// 007fc180  51                   push ecx
// 007fc181  8bcf                 mov ecx, edi
// 007fc183  e8680cceff           call 0x4dcdf0
// 007fc188  eb7b                 jmp 0x7fc205
// 007fc18a  8b12                 mov edx, dword ptr [edx]
// 007fc18c  807a1400             cmp byte ptr [edx + 0x14], 0
// 007fc190  7516                 jne 0x7fc1a8
// 007fc192  885914               mov byte ptr [ecx + 0x14], bl
// 007fc195  885a14               mov byte ptr [edx + 0x14], bl
// 007fc198  8b10                 mov edx, dword ptr [eax]
// 007fc19a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007fc19d  c6411400             mov byte ptr [ecx + 0x14], 0
// 007fc1a1  8b10                 mov edx, dword ptr [eax]
// 007fc1a3  8b7204               mov esi, dword ptr [edx + 4]
// 007fc1a6  eb5d                 jmp 0x7fc205
// 007fc1a8  3b31                 cmp esi, dword ptr [ecx]
// 007fc1aa  750a                 jne 0x7fc1b6
// 007fc1ac  8bf1                 mov esi, ecx
// 007fc1ae  56                   push esi
// 007fc1af  8bcf                 mov ecx, edi
// 007fc1b1  e83a0cceff           call 0x4dcdf0
// 007fc1b6  8b4604               mov eax, dword ptr [esi + 4]
// 007fc1b9  885814               mov byte ptr [eax + 0x14], bl
// 007fc1bc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fc1bf  8b5104               mov edx, dword ptr [ecx + 4]
// 007fc1c2  c6421400             mov byte ptr [edx + 0x14], 0
// 007fc1c6  8b4604               mov eax, dword ptr [esi + 4]
// 007fc1c9  8b4004               mov eax, dword ptr [eax + 4]
// 007fc1cc  8b4808               mov ecx, dword ptr [eax + 8]
// 007fc1cf  8b11                 mov edx, dword ptr [ecx]
// 007fc1d1  895008               mov dword ptr [eax + 8], edx
// 007fc1d4  8b11                 mov edx, dword ptr [ecx]
// 007fc1d6  807a1500             cmp byte ptr [edx + 0x15], 0
// 007fc1da  7503                 jne 0x7fc1df
// 007fc1dc  894204               mov dword ptr [edx + 4], eax
// 007fc1df  8b5004               mov edx, dword ptr [eax + 4]
// 007fc1e2  895104               mov dword ptr [ecx + 4], edx
// 007fc1e5  8b5704               mov edx, dword ptr [edi + 4]
// 007fc1e8  3b4204               cmp eax, dword ptr [edx + 4]
// 007fc1eb  7505                 jne 0x7fc1f2
// 007fc1ed  894a04               mov dword ptr [edx + 4], ecx
// 007fc1f0  eb0e                 jmp 0x7fc200
// 007fc1f2  8b5004               mov edx, dword ptr [eax + 4]
// 007fc1f5  3b02                 cmp eax, dword ptr [edx]
// 007fc1f7  7504                 jne 0x7fc1fd
// 007fc1f9  890a                 mov dword ptr [edx], ecx
// 007fc1fb  eb03                 jmp 0x7fc200
// 007fc1fd  894a08               mov dword ptr [edx + 8], ecx
// 007fc200  8901                 mov dword ptr [ecx], eax
// 007fc202  894804               mov dword ptr [eax + 4], ecx
// 007fc205  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fc208  80791400             cmp byte ptr [ecx + 0x14], 0
// 007fc20c  8d4604               lea eax, [esi + 4]
// 007fc20f  0f841bffffff         je 0x7fc130
// 007fc215  8b5704               mov edx, dword ptr [edi + 4]
// 007fc218  8b4204               mov eax, dword ptr [edx + 4]
// 007fc21b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007fc21f  885814               mov byte ptr [eax + 0x14], bl
// 007fc222  8b442464             mov eax, dword ptr [esp + 0x64]
// 007fc226  5e                   pop esi
// 007fc227  8928                 mov dword ptr [eax], ebp
// 007fc229  5d                   pop ebp
// 007fc22a  5b                   pop ebx
// 007fc22b  5f                   pop edi
// 007fc22c  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc233  83c450               add esp, 0x50
// 007fc236  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBHH@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;