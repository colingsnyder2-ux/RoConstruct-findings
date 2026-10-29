// roc 2011-06 007d14e0  unit: RBX::ScoreHud  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d14e0
//
// 007d14e0  64a100000000         mov eax, dword ptr fs:[0]
// 007d14e6  6aff                 push -1
// 007d14e8  68221b9d00           push 0x9d1b22
// 007d14ed  50                   push eax
// 007d14ee  64892500000000       mov dword ptr fs:[0], esp
// 007d14f5  83ec44               sub esp, 0x44
// 007d14f8  57                   push edi
// 007d14f9  8bf9                 mov edi, ecx
// 007d14fb  817f08cbcccc0c       cmp dword ptr [edi + 8], 0xccccccb
// 007d1502  7259                 jb 0x7d155d
// 007d1504  683cb6a500           push 0xa5b63c
// 007d1509  8d4c2408             lea ecx, [esp + 8]
// 007d150d  ff15c404a400         call dword ptr [0xa404c4]
// 007d1513  8d4c2420             lea ecx, [esp + 0x20]
// 007d1517  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007d151f  ff15600aa400         call dword ptr [0xa40a60]
// 007d1525  8d442404             lea eax, [esp + 4]
// 007d1529  50                   push eax
// 007d152a  8d4c2430             lea ecx, [esp + 0x30]
// 007d152e  c644245401           mov byte ptr [esp + 0x54], 1
// 007d1533  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 007d153b  ff15c804a400         call dword ptr [0xa404c8]
// 007d1541  687073b800           push 0xb87370
// 007d1546  8d4c2424             lea ecx, [esp + 0x24]
// 007d154a  51                   push ecx
// 007d154b  c644245800           mov byte ptr [esp + 0x58], 0
// 007d1550  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 007d1558  e84f9b0300           call 0x80b0ac
// 007d155d  8b542464             mov edx, dword ptr [esp + 0x64]
// 007d1561  8b4704               mov eax, dword ptr [edi + 4]
// 007d1564  53                   push ebx
// 007d1565  55                   push ebp
// 007d1566  56                   push esi
// 007d1567  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007d156b  6a00                 push 0
// 007d156d  52                   push edx
// 007d156e  50                   push eax
// 007d156f  56                   push esi
// 007d1570  50                   push eax
// 007d1571  e85afcffff           call 0x7d11d0
// 007d1576  8be8                 mov ebp, eax
// 007d1578  8b4704               mov eax, dword ptr [edi + 4]
// 007d157b  bb01000000           mov ebx, 1
// 007d1580  015f08               add dword ptr [edi + 8], ebx
// 007d1583  3bf0                 cmp esi, eax
// 007d1585  7510                 jne 0x7d1597
// 007d1587  896804               mov dword ptr [eax + 4], ebp
// 007d158a  8b4704               mov eax, dword ptr [edi + 4]
// 007d158d  8928                 mov dword ptr [eax], ebp
// 007d158f  8b4f04               mov ecx, dword ptr [edi + 4]
// 007d1592  896908               mov dword ptr [ecx + 8], ebp
// 007d1595  eb22                 jmp 0x7d15b9
// 007d1597  807c246800           cmp byte ptr [esp + 0x68], 0
// 007d159c  740d                 je 0x7d15ab
// 007d159e  892e                 mov dword ptr [esi], ebp
// 007d15a0  8b4704               mov eax, dword ptr [edi + 4]
// 007d15a3  3b30                 cmp esi, dword ptr [eax]
// 007d15a5  7512                 jne 0x7d15b9
// 007d15a7  8928                 mov dword ptr [eax], ebp
// 007d15a9  eb0e                 jmp 0x7d15b9
// 007d15ab  896e08               mov dword ptr [esi + 8], ebp
// 007d15ae  8b4704               mov eax, dword ptr [edi + 4]
// 007d15b1  3b7008               cmp esi, dword ptr [eax + 8]
// 007d15b4  7503                 jne 0x7d15b9
// 007d15b6  896808               mov dword ptr [eax + 8], ebp
// 007d15b9  8b5504               mov edx, dword ptr [ebp + 4]
// 007d15bc  807a2000             cmp byte ptr [edx + 0x20], 0
// 007d15c0  8d4504               lea eax, [ebp + 4]
// 007d15c3  8bf5                 mov esi, ebp
// 007d15c5  0f85ea000000         jne 0x7d16b5
// 007d15cb  eb03                 jmp 0x7d15d0
// 007d15cd  8d4900               lea ecx, [ecx]
// 007d15d0  8b08                 mov ecx, dword ptr [eax]
// 007d15d2  8b5104               mov edx, dword ptr [ecx + 4]
// 007d15d5  3b0a                 cmp ecx, dword ptr [edx]
// 007d15d7  7551                 jne 0x7d162a
// 007d15d9  8b5208               mov edx, dword ptr [edx + 8]
// 007d15dc  807a2000             cmp byte ptr [edx + 0x20], 0
// 007d15e0  7519                 jne 0x7d15fb
// 007d15e2  885920               mov byte ptr [ecx + 0x20], bl
// 007d15e5  885a20               mov byte ptr [edx + 0x20], bl
// 007d15e8  8b10                 mov edx, dword ptr [eax]
// 007d15ea  8b4a04               mov ecx, dword ptr [edx + 4]
// 007d15ed  c6412000             mov byte ptr [ecx + 0x20], 0
// 007d15f1  8b10                 mov edx, dword ptr [eax]
// 007d15f3  8b7204               mov esi, dword ptr [edx + 4]
// 007d15f6  e9aa000000           jmp 0x7d16a5
// 007d15fb  3b7108               cmp esi, dword ptr [ecx + 8]
// 007d15fe  750a                 jne 0x7d160a
// 007d1600  8bf1                 mov esi, ecx
// 007d1602  56                   push esi
// 007d1603  8bcf                 mov ecx, edi
// 007d1605  e88631c7ff           call 0x444790
// 007d160a  8b4604               mov eax, dword ptr [esi + 4]
// 007d160d  885820               mov byte ptr [eax + 0x20], bl
// 007d1610  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d1613  8b5104               mov edx, dword ptr [ecx + 4]
// 007d1616  c6422000             mov byte ptr [edx + 0x20], 0
// 007d161a  8b4604               mov eax, dword ptr [esi + 4]
// 007d161d  8b4804               mov ecx, dword ptr [eax + 4]
// 007d1620  51                   push ecx
// 007d1621  8bcf                 mov ecx, edi
// 007d1623  e878a3e7ff           call 0x64b9a0
// 007d1628  eb7b                 jmp 0x7d16a5
// 007d162a  8b12                 mov edx, dword ptr [edx]
// 007d162c  807a2000             cmp byte ptr [edx + 0x20], 0
// 007d1630  7516                 jne 0x7d1648
// 007d1632  885920               mov byte ptr [ecx + 0x20], bl
// 007d1635  885a20               mov byte ptr [edx + 0x20], bl
// 007d1638  8b10                 mov edx, dword ptr [eax]
// 007d163a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007d163d  c6412000             mov byte ptr [ecx + 0x20], 0
// 007d1641  8b10                 mov edx, dword ptr [eax]
// 007d1643  8b7204               mov esi, dword ptr [edx + 4]
// 007d1646  eb5d                 jmp 0x7d16a5
// 007d1648  3b31                 cmp esi, dword ptr [ecx]
// 007d164a  750a                 jne 0x7d1656
// 007d164c  8bf1                 mov esi, ecx
// 007d164e  56                   push esi
// 007d164f  8bcf                 mov ecx, edi
// 007d1651  e84aa3e7ff           call 0x64b9a0
// 007d1656  8b4604               mov eax, dword ptr [esi + 4]
// 007d1659  885820               mov byte ptr [eax + 0x20], bl
// 007d165c  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d165f  8b5104               mov edx, dword ptr [ecx + 4]
// 007d1662  c6422000             mov byte ptr [edx + 0x20], 0
// 007d1666  8b4604               mov eax, dword ptr [esi + 4]
// 007d1669  8b4004               mov eax, dword ptr [eax + 4]
// 007d166c  8b4808               mov ecx, dword ptr [eax + 8]
// 007d166f  8b11                 mov edx, dword ptr [ecx]
// 007d1671  895008               mov dword ptr [eax + 8], edx
// 007d1674  8b11                 mov edx, dword ptr [ecx]
// 007d1676  807a2100             cmp byte ptr [edx + 0x21], 0
// 007d167a  7503                 jne 0x7d167f
// 007d167c  894204               mov dword ptr [edx + 4], eax
// 007d167f  8b5004               mov edx, dword ptr [eax + 4]
// 007d1682  895104               mov dword ptr [ecx + 4], edx
// 007d1685  8b5704               mov edx, dword ptr [edi + 4]
// 007d1688  3b4204               cmp eax, dword ptr [edx + 4]
// 007d168b  7505                 jne 0x7d1692
// 007d168d  894a04               mov dword ptr [edx + 4], ecx
// 007d1690  eb0e                 jmp 0x7d16a0
// 007d1692  8b5004               mov edx, dword ptr [eax + 4]
// 007d1695  3b02                 cmp eax, dword ptr [edx]
// 007d1697  7504                 jne 0x7d169d
// 007d1699  890a                 mov dword ptr [edx], ecx
// 007d169b  eb03                 jmp 0x7d16a0
// 007d169d  894a08               mov dword ptr [edx + 8], ecx
// 007d16a0  8901                 mov dword ptr [ecx], eax
// 007d16a2  894804               mov dword ptr [eax + 4], ecx
// 007d16a5  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d16a8  80792000             cmp byte ptr [ecx + 0x20], 0
// 007d16ac  8d4604               lea eax, [esi + 4]
// 007d16af  0f841bffffff         je 0x7d15d0
// 007d16b5  8b5704               mov edx, dword ptr [edi + 4]
// 007d16b8  8b4204               mov eax, dword ptr [edx + 4]
// 007d16bb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007d16bf  885820               mov byte ptr [eax + 0x20], bl
// 007d16c2  8b442464             mov eax, dword ptr [esp + 0x64]
// 007d16c6  5e                   pop esi
// 007d16c7  8928                 mov dword ptr [eax], ebp
// 007d16c9  5d                   pop ebp
// 007d16ca  5b                   pop ebx
// 007d16cb  5f                   pop edi
// 007d16cc  64890d00000000       mov dword ptr fs:[0], ecx
// 007d16d3  83c450               add esp, 0x50
// 007d16d6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;