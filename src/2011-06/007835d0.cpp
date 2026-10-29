// roc 2011-06 007835d0  unit: RBX::Tasks::VExclusive::?$sp_counted_impl_p  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007835d0
//
// 007835d0  64a100000000         mov eax, dword ptr fs:[0]
// 007835d6  6aff                 push -1
// 007835d8  68221b9d00           push 0x9d1b22
// 007835dd  50                   push eax
// 007835de  64892500000000       mov dword ptr fs:[0], esp
// 007835e5  83ec44               sub esp, 0x44
// 007835e8  57                   push edi
// 007835e9  8bf9                 mov edi, ecx
// 007835eb  817f085c74d105       cmp dword ptr [edi + 8], 0x5d1745c
// 007835f2  7259                 jb 0x78364d
// 007835f4  683cb6a500           push 0xa5b63c
// 007835f9  8d4c2408             lea ecx, [esp + 8]
// 007835fd  ff15c404a400         call dword ptr [0xa404c4]
// 00783603  8d4c2420             lea ecx, [esp + 0x20]
// 00783607  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0078360f  ff15600aa400         call dword ptr [0xa40a60]
// 00783615  8d442404             lea eax, [esp + 4]
// 00783619  50                   push eax
// 0078361a  8d4c2430             lea ecx, [esp + 0x30]
// 0078361e  c644245401           mov byte ptr [esp + 0x54], 1
// 00783623  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0078362b  ff15c804a400         call dword ptr [0xa404c8]
// 00783631  687073b800           push 0xb87370
// 00783636  8d4c2424             lea ecx, [esp + 0x24]
// 0078363a  51                   push ecx
// 0078363b  c644245800           mov byte ptr [esp + 0x58], 0
// 00783640  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00783648  e85f7a0800           call 0x80b0ac
// 0078364d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00783651  8b4704               mov eax, dword ptr [edi + 4]
// 00783654  53                   push ebx
// 00783655  55                   push ebp
// 00783656  56                   push esi
// 00783657  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0078365b  6a00                 push 0
// 0078365d  52                   push edx
// 0078365e  50                   push eax
// 0078365f  56                   push esi
// 00783660  50                   push eax
// 00783661  e88afeffff           call 0x7834f0
// 00783666  8be8                 mov ebp, eax
// 00783668  8b4704               mov eax, dword ptr [edi + 4]
// 0078366b  bb01000000           mov ebx, 1
// 00783670  015f08               add dword ptr [edi + 8], ebx
// 00783673  3bf0                 cmp esi, eax
// 00783675  7510                 jne 0x783687
// 00783677  896804               mov dword ptr [eax + 4], ebp
// 0078367a  8b4704               mov eax, dword ptr [edi + 4]
// 0078367d  8928                 mov dword ptr [eax], ebp
// 0078367f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00783682  896908               mov dword ptr [ecx + 8], ebp
// 00783685  eb22                 jmp 0x7836a9
// 00783687  807c246800           cmp byte ptr [esp + 0x68], 0
// 0078368c  740d                 je 0x78369b
// 0078368e  892e                 mov dword ptr [esi], ebp
// 00783690  8b4704               mov eax, dword ptr [edi + 4]
// 00783693  3b30                 cmp esi, dword ptr [eax]
// 00783695  7512                 jne 0x7836a9
// 00783697  8928                 mov dword ptr [eax], ebp
// 00783699  eb0e                 jmp 0x7836a9
// 0078369b  896e08               mov dword ptr [esi + 8], ebp
// 0078369e  8b4704               mov eax, dword ptr [edi + 4]
// 007836a1  3b7008               cmp esi, dword ptr [eax + 8]
// 007836a4  7503                 jne 0x7836a9
// 007836a6  896808               mov dword ptr [eax + 8], ebp
// 007836a9  8b5504               mov edx, dword ptr [ebp + 4]
// 007836ac  807a3800             cmp byte ptr [edx + 0x38], 0
// 007836b0  8d4504               lea eax, [ebp + 4]
// 007836b3  8bf5                 mov esi, ebp
// 007836b5  0f85ea000000         jne 0x7837a5
// 007836bb  eb03                 jmp 0x7836c0
// 007836bd  8d4900               lea ecx, [ecx]
// 007836c0  8b08                 mov ecx, dword ptr [eax]
// 007836c2  8b5104               mov edx, dword ptr [ecx + 4]
// 007836c5  3b0a                 cmp ecx, dword ptr [edx]
// 007836c7  7551                 jne 0x78371a
// 007836c9  8b5208               mov edx, dword ptr [edx + 8]
// 007836cc  807a3800             cmp byte ptr [edx + 0x38], 0
// 007836d0  7519                 jne 0x7836eb
// 007836d2  885938               mov byte ptr [ecx + 0x38], bl
// 007836d5  885a38               mov byte ptr [edx + 0x38], bl
// 007836d8  8b10                 mov edx, dword ptr [eax]
// 007836da  8b4a04               mov ecx, dword ptr [edx + 4]
// 007836dd  c6413800             mov byte ptr [ecx + 0x38], 0
// 007836e1  8b10                 mov edx, dword ptr [eax]
// 007836e3  8b7204               mov esi, dword ptr [edx + 4]
// 007836e6  e9aa000000           jmp 0x783795
// 007836eb  3b7108               cmp esi, dword ptr [ecx + 8]
// 007836ee  750a                 jne 0x7836fa
// 007836f0  8bf1                 mov esi, ecx
// 007836f2  56                   push esi
// 007836f3  8bcf                 mov ecx, edi
// 007836f5  e8a6f81900           call 0x922fa0
// 007836fa  8b4604               mov eax, dword ptr [esi + 4]
// 007836fd  885838               mov byte ptr [eax + 0x38], bl
// 00783700  8b4e04               mov ecx, dword ptr [esi + 4]
// 00783703  8b5104               mov edx, dword ptr [ecx + 4]
// 00783706  c6423800             mov byte ptr [edx + 0x38], 0
// 0078370a  8b4604               mov eax, dword ptr [esi + 4]
// 0078370d  8b4804               mov ecx, dword ptr [eax + 4]
// 00783710  51                   push ecx
// 00783711  8bcf                 mov ecx, edi
// 00783713  e818611a00           call 0x929830
// 00783718  eb7b                 jmp 0x783795
// 0078371a  8b12                 mov edx, dword ptr [edx]
// 0078371c  807a3800             cmp byte ptr [edx + 0x38], 0
// 00783720  7516                 jne 0x783738
// 00783722  885938               mov byte ptr [ecx + 0x38], bl
// 00783725  885a38               mov byte ptr [edx + 0x38], bl
// 00783728  8b10                 mov edx, dword ptr [eax]
// 0078372a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0078372d  c6413800             mov byte ptr [ecx + 0x38], 0
// 00783731  8b10                 mov edx, dword ptr [eax]
// 00783733  8b7204               mov esi, dword ptr [edx + 4]
// 00783736  eb5d                 jmp 0x783795
// 00783738  3b31                 cmp esi, dword ptr [ecx]
// 0078373a  750a                 jne 0x783746
// 0078373c  8bf1                 mov esi, ecx
// 0078373e  56                   push esi
// 0078373f  8bcf                 mov ecx, edi
// 00783741  e8ea601a00           call 0x929830
// 00783746  8b4604               mov eax, dword ptr [esi + 4]
// 00783749  885838               mov byte ptr [eax + 0x38], bl
// 0078374c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0078374f  8b5104               mov edx, dword ptr [ecx + 4]
// 00783752  c6423800             mov byte ptr [edx + 0x38], 0
// 00783756  8b4604               mov eax, dword ptr [esi + 4]
// 00783759  8b4004               mov eax, dword ptr [eax + 4]
// 0078375c  8b4808               mov ecx, dword ptr [eax + 8]
// 0078375f  8b11                 mov edx, dword ptr [ecx]
// 00783761  895008               mov dword ptr [eax + 8], edx
// 00783764  8b11                 mov edx, dword ptr [ecx]
// 00783766  807a3900             cmp byte ptr [edx + 0x39], 0
// 0078376a  7503                 jne 0x78376f
// 0078376c  894204               mov dword ptr [edx + 4], eax
// 0078376f  8b5004               mov edx, dword ptr [eax + 4]
// 00783772  895104               mov dword ptr [ecx + 4], edx
// 00783775  8b5704               mov edx, dword ptr [edi + 4]
// 00783778  3b4204               cmp eax, dword ptr [edx + 4]
// 0078377b  7505                 jne 0x783782
// 0078377d  894a04               mov dword ptr [edx + 4], ecx
// 00783780  eb0e                 jmp 0x783790
// 00783782  8b5004               mov edx, dword ptr [eax + 4]
// 00783785  3b02                 cmp eax, dword ptr [edx]
// 00783787  7504                 jne 0x78378d
// 00783789  890a                 mov dword ptr [edx], ecx
// 0078378b  eb03                 jmp 0x783790
// 0078378d  894a08               mov dword ptr [edx + 8], ecx
// 00783790  8901                 mov dword ptr [ecx], eax
// 00783792  894804               mov dword ptr [eax + 4], ecx
// 00783795  8b4e04               mov ecx, dword ptr [esi + 4]
// 00783798  80793800             cmp byte ptr [ecx + 0x38], 0
// 0078379c  8d4604               lea eax, [esi + 4]
// 0078379f  0f841bffffff         je 0x7836c0
// 007837a5  8b5704               mov edx, dword ptr [edi + 4]
// 007837a8  8b4204               mov eax, dword ptr [edx + 4]
// 007837ab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007837af  885838               mov byte ptr [eax + 0x38], bl
// 007837b2  8b442464             mov eax, dword ptr [esp + 0x64]
// 007837b6  5e                   pop esi
// 007837b7  8928                 mov dword ptr [eax], ebp
// 007837b9  5d                   pop ebp
// 007837ba  5b                   pop ebx
// 007837bb  5f                   pop edi
// 007837bc  64890d00000000       mov dword ptr fs:[0], ecx
// 007837c3  83c450               add esp, 0x50
// 007837c6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;