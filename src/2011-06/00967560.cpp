// roc 2011-06 00967560  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00967560
//
// 00967560  64a100000000         mov eax, dword ptr fs:[0]
// 00967566  6aff                 push -1
// 00967568  68221b9d00           push 0x9d1b22
// 0096756d  50                   push eax
// 0096756e  64892500000000       mov dword ptr fs:[0], esp
// 00967575  83ec44               sub esp, 0x44
// 00967578  57                   push edi
// 00967579  8bf9                 mov edi, ecx
// 0096757b  817f0832333303       cmp dword ptr [edi + 8], 0x3333332
// 00967582  7259                 jb 0x9675dd
// 00967584  683cb6a500           push 0xa5b63c
// 00967589  8d4c2408             lea ecx, [esp + 8]
// 0096758d  ff15c404a400         call dword ptr [0xa404c4]
// 00967593  8d4c2420             lea ecx, [esp + 0x20]
// 00967597  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0096759f  ff15600aa400         call dword ptr [0xa40a60]
// 009675a5  8d442404             lea eax, [esp + 4]
// 009675a9  50                   push eax
// 009675aa  8d4c2430             lea ecx, [esp + 0x30]
// 009675ae  c644245401           mov byte ptr [esp + 0x54], 1
// 009675b3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 009675bb  ff15c804a400         call dword ptr [0xa404c8]
// 009675c1  687073b800           push 0xb87370
// 009675c6  8d4c2424             lea ecx, [esp + 0x24]
// 009675ca  51                   push ecx
// 009675cb  c644245800           mov byte ptr [esp + 0x58], 0
// 009675d0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 009675d8  e8cf3aeaff           call 0x80b0ac
// 009675dd  8b542464             mov edx, dword ptr [esp + 0x64]
// 009675e1  8b4704               mov eax, dword ptr [edi + 4]
// 009675e4  53                   push ebx
// 009675e5  55                   push ebp
// 009675e6  56                   push esi
// 009675e7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 009675eb  6a00                 push 0
// 009675ed  52                   push edx
// 009675ee  50                   push eax
// 009675ef  56                   push esi
// 009675f0  50                   push eax
// 009675f1  e84afbffff           call 0x967140
// 009675f6  8be8                 mov ebp, eax
// 009675f8  8b4704               mov eax, dword ptr [edi + 4]
// 009675fb  bb01000000           mov ebx, 1
// 00967600  015f08               add dword ptr [edi + 8], ebx
// 00967603  3bf0                 cmp esi, eax
// 00967605  7510                 jne 0x967617
// 00967607  896804               mov dword ptr [eax + 4], ebp
// 0096760a  8b4704               mov eax, dword ptr [edi + 4]
// 0096760d  8928                 mov dword ptr [eax], ebp
// 0096760f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00967612  896908               mov dword ptr [ecx + 8], ebp
// 00967615  eb22                 jmp 0x967639
// 00967617  807c246800           cmp byte ptr [esp + 0x68], 0
// 0096761c  740d                 je 0x96762b
// 0096761e  892e                 mov dword ptr [esi], ebp
// 00967620  8b4704               mov eax, dword ptr [edi + 4]
// 00967623  3b30                 cmp esi, dword ptr [eax]
// 00967625  7512                 jne 0x967639
// 00967627  8928                 mov dword ptr [eax], ebp
// 00967629  eb0e                 jmp 0x967639
// 0096762b  896e08               mov dword ptr [esi + 8], ebp
// 0096762e  8b4704               mov eax, dword ptr [edi + 4]
// 00967631  3b7008               cmp esi, dword ptr [eax + 8]
// 00967634  7503                 jne 0x967639
// 00967636  896808               mov dword ptr [eax + 8], ebp
// 00967639  8b5504               mov edx, dword ptr [ebp + 4]
// 0096763c  807a5c00             cmp byte ptr [edx + 0x5c], 0
// 00967640  8d4504               lea eax, [ebp + 4]
// 00967643  8bf5                 mov esi, ebp
// 00967645  0f85ea000000         jne 0x967735
// 0096764b  eb03                 jmp 0x967650
// 0096764d  8d4900               lea ecx, [ecx]
// 00967650  8b08                 mov ecx, dword ptr [eax]
// 00967652  8b5104               mov edx, dword ptr [ecx + 4]
// 00967655  3b0a                 cmp ecx, dword ptr [edx]
// 00967657  7551                 jne 0x9676aa
// 00967659  8b5208               mov edx, dword ptr [edx + 8]
// 0096765c  807a5c00             cmp byte ptr [edx + 0x5c], 0
// 00967660  7519                 jne 0x96767b
// 00967662  88595c               mov byte ptr [ecx + 0x5c], bl
// 00967665  885a5c               mov byte ptr [edx + 0x5c], bl
// 00967668  8b10                 mov edx, dword ptr [eax]
// 0096766a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0096766d  c6415c00             mov byte ptr [ecx + 0x5c], 0
// 00967671  8b10                 mov edx, dword ptr [eax]
// 00967673  8b7204               mov esi, dword ptr [edx + 4]
// 00967676  e9aa000000           jmp 0x967725
// 0096767b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0096767e  750a                 jne 0x96768a
// 00967680  8bf1                 mov esi, ecx
// 00967682  56                   push esi
// 00967683  8bcf                 mov ecx, edi
// 00967685  e8f6ecffff           call 0x966380
// 0096768a  8b4604               mov eax, dword ptr [esi + 4]
// 0096768d  88585c               mov byte ptr [eax + 0x5c], bl
// 00967690  8b4e04               mov ecx, dword ptr [esi + 4]
// 00967693  8b5104               mov edx, dword ptr [ecx + 4]
// 00967696  c6425c00             mov byte ptr [edx + 0x5c], 0
// 0096769a  8b4604               mov eax, dword ptr [esi + 4]
// 0096769d  8b4804               mov ecx, dword ptr [eax + 4]
// 009676a0  51                   push ecx
// 009676a1  8bcf                 mov ecx, edi
// 009676a3  e828edffff           call 0x9663d0
// 009676a8  eb7b                 jmp 0x967725
// 009676aa  8b12                 mov edx, dword ptr [edx]
// 009676ac  807a5c00             cmp byte ptr [edx + 0x5c], 0
// 009676b0  7516                 jne 0x9676c8
// 009676b2  88595c               mov byte ptr [ecx + 0x5c], bl
// 009676b5  885a5c               mov byte ptr [edx + 0x5c], bl
// 009676b8  8b10                 mov edx, dword ptr [eax]
// 009676ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 009676bd  c6415c00             mov byte ptr [ecx + 0x5c], 0
// 009676c1  8b10                 mov edx, dword ptr [eax]
// 009676c3  8b7204               mov esi, dword ptr [edx + 4]
// 009676c6  eb5d                 jmp 0x967725
// 009676c8  3b31                 cmp esi, dword ptr [ecx]
// 009676ca  750a                 jne 0x9676d6
// 009676cc  8bf1                 mov esi, ecx
// 009676ce  56                   push esi
// 009676cf  8bcf                 mov ecx, edi
// 009676d1  e8faecffff           call 0x9663d0
// 009676d6  8b4604               mov eax, dword ptr [esi + 4]
// 009676d9  88585c               mov byte ptr [eax + 0x5c], bl
// 009676dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 009676df  8b5104               mov edx, dword ptr [ecx + 4]
// 009676e2  c6425c00             mov byte ptr [edx + 0x5c], 0
// 009676e6  8b4604               mov eax, dword ptr [esi + 4]
// 009676e9  8b4004               mov eax, dword ptr [eax + 4]
// 009676ec  8b4808               mov ecx, dword ptr [eax + 8]
// 009676ef  8b11                 mov edx, dword ptr [ecx]
// 009676f1  895008               mov dword ptr [eax + 8], edx
// 009676f4  8b11                 mov edx, dword ptr [ecx]
// 009676f6  807a5d00             cmp byte ptr [edx + 0x5d], 0
// 009676fa  7503                 jne 0x9676ff
// 009676fc  894204               mov dword ptr [edx + 4], eax
// 009676ff  8b5004               mov edx, dword ptr [eax + 4]
// 00967702  895104               mov dword ptr [ecx + 4], edx
// 00967705  8b5704               mov edx, dword ptr [edi + 4]
// 00967708  3b4204               cmp eax, dword ptr [edx + 4]
// 0096770b  7505                 jne 0x967712
// 0096770d  894a04               mov dword ptr [edx + 4], ecx
// 00967710  eb0e                 jmp 0x967720
// 00967712  8b5004               mov edx, dword ptr [eax + 4]
// 00967715  3b02                 cmp eax, dword ptr [edx]
// 00967717  7504                 jne 0x96771d
// 00967719  890a                 mov dword ptr [edx], ecx
// 0096771b  eb03                 jmp 0x967720
// 0096771d  894a08               mov dword ptr [edx + 8], ecx
// 00967720  8901                 mov dword ptr [ecx], eax
// 00967722  894804               mov dword ptr [eax + 4], ecx
// 00967725  8b4e04               mov ecx, dword ptr [esi + 4]
// 00967728  80795c00             cmp byte ptr [ecx + 0x5c], 0
// 0096772c  8d4604               lea eax, [esi + 4]
// 0096772f  0f841bffffff         je 0x967650
// 00967735  8b5704               mov edx, dword ptr [edi + 4]
// 00967738  8b4204               mov eax, dword ptr [edx + 4]
// 0096773b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0096773f  88585c               mov byte ptr [eax + 0x5c], bl
// 00967742  8b442464             mov eax, dword ptr [esp + 0x64]
// 00967746  5e                   pop esi
// 00967747  8928                 mov dword ptr [eax], ebp
// 00967749  5d                   pop ebp
// 0096774a  5b                   pop ebx
// 0096774b  5f                   pop edi
// 0096774c  64890d00000000       mov dword ptr fs:[0], ecx
// 00967753  83c450               add esp, 0x50
// 00967756  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;