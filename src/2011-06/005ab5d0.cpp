// roc 2011-06 005ab5d0  unit: RBX::VFriendService::?$BoundFuncDesc  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ab5d0
//
// 005ab5d0  83ec08               sub esp, 8
// 005ab5d3  56                   push esi
// 005ab5d4  57                   push edi
// 005ab5d5  8bf9                 mov edi, ecx
// 005ab5d7  837f0800             cmp dword ptr [edi + 8], 0
// 005ab5db  7521                 jne 0x5ab5fe
// 005ab5dd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ab5e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ab5e4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ab5e8  50                   push eax
// 005ab5e9  51                   push ecx
// 005ab5ea  6a01                 push 1
// 005ab5ec  56                   push esi
// 005ab5ed  8bcf                 mov ecx, edi
// 005ab5ef  e8dce7ffff           call 0x5a9dd0
// 005ab5f4  5f                   pop edi
// 005ab5f5  8bc6                 mov eax, esi
// 005ab5f7  5e                   pop esi
// 005ab5f8  83c408               add esp, 8
// 005ab5fb  c20c00               ret 0xc
// 005ab5fe  8b4704               mov eax, dword ptr [edi + 4]
// 005ab601  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005ab605  53                   push ebx
// 005ab606  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ab60a  55                   push ebp
// 005ab60b  3b18                 cmp ebx, dword ptr [eax]
// 005ab60d  7525                 jne 0x5ab634
// 005ab60f  8b16                 mov edx, dword ptr [esi]
// 005ab611  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 005ab614  0f8df9000000         jge 0x5ab713
// 005ab61a  56                   push esi
// 005ab61b  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab61f  53                   push ebx
// 005ab620  6a01                 push 1
// 005ab622  56                   push esi
// 005ab623  e8a8e7ffff           call 0x5a9dd0
// 005ab628  5d                   pop ebp
// 005ab629  5b                   pop ebx
// 005ab62a  5f                   pop edi
// 005ab62b  8bc6                 mov eax, esi
// 005ab62d  5e                   pop esi
// 005ab62e  83c408               add esp, 8
// 005ab631  c20c00               ret 0xc
// 005ab634  3bd8                 cmp ebx, eax
// 005ab636  752a                 jne 0x5ab662
// 005ab638  8b4008               mov eax, dword ptr [eax + 8]
// 005ab63b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005ab63e  3b0e                 cmp ecx, dword ptr [esi]
// 005ab640  0f8dcd000000         jge 0x5ab713
// 005ab646  56                   push esi
// 005ab647  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab64b  50                   push eax
// 005ab64c  6a00                 push 0
// 005ab64e  56                   push esi
// 005ab64f  8bcf                 mov ecx, edi
// 005ab651  e87ae7ffff           call 0x5a9dd0
// 005ab656  5d                   pop ebp
// 005ab657  5b                   pop ebx
// 005ab658  5f                   pop edi
// 005ab659  8bc6                 mov eax, esi
// 005ab65b  5e                   pop esi
// 005ab65c  83c408               add esp, 8
// 005ab65f  c20c00               ret 0xc
// 005ab662  8b2e                 mov ebp, dword ptr [esi]
// 005ab664  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 005ab667  7e53                 jle 0x5ab6bc
// 005ab669  8d4c2424             lea ecx, [esp + 0x24]
// 005ab66d  895c2424             mov dword ptr [esp + 0x24], ebx
// 005ab671  e85ae01f00           call 0x7a96d0
// 005ab676  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ab67a  39680c               cmp dword ptr [eax + 0xc], ebp
// 005ab67d  7d3a                 jge 0x5ab6b9
// 005ab67f  8b5008               mov edx, dword ptr [eax + 8]
// 005ab682  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 005ab686  56                   push esi
// 005ab687  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab68b  8bcf                 mov ecx, edi
// 005ab68d  7415                 je 0x5ab6a4
// 005ab68f  50                   push eax
// 005ab690  6a00                 push 0
// 005ab692  56                   push esi
// 005ab693  e838e7ffff           call 0x5a9dd0
// 005ab698  5d                   pop ebp
// 005ab699  5b                   pop ebx
// 005ab69a  5f                   pop edi
// 005ab69b  8bc6                 mov eax, esi
// 005ab69d  5e                   pop esi
// 005ab69e  83c408               add esp, 8
// 005ab6a1  c20c00               ret 0xc
// 005ab6a4  53                   push ebx
// 005ab6a5  6a01                 push 1
// 005ab6a7  56                   push esi
// 005ab6a8  e823e7ffff           call 0x5a9dd0
// 005ab6ad  5d                   pop ebp
// 005ab6ae  5b                   pop ebx
// 005ab6af  5f                   pop edi
// 005ab6b0  8bc6                 mov eax, esi
// 005ab6b2  5e                   pop esi
// 005ab6b3  83c408               add esp, 8
// 005ab6b6  c20c00               ret 0xc
// 005ab6b9  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 005ab6bc  7d55                 jge 0x5ab713
// 005ab6be  8d4c2424             lea ecx, [esp + 0x24]
// 005ab6c2  895c2424             mov dword ptr [esp + 0x24], ebx
// 005ab6c6  e8756d3700           call 0x922440
// 005ab6cb  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ab6cf  3b4704               cmp eax, dword ptr [edi + 4]
// 005ab6d2  7405                 je 0x5ab6d9
// 005ab6d4  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 005ab6d7  7d3a                 jge 0x5ab713
// 005ab6d9  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005ab6dc  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 005ab6e0  56                   push esi
// 005ab6e1  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab6e5  8bcf                 mov ecx, edi
// 005ab6e7  7415                 je 0x5ab6fe
// 005ab6e9  53                   push ebx
// 005ab6ea  6a00                 push 0
// 005ab6ec  56                   push esi
// 005ab6ed  e8dee6ffff           call 0x5a9dd0
// 005ab6f2  5d                   pop ebp
// 005ab6f3  5b                   pop ebx
// 005ab6f4  5f                   pop edi
// 005ab6f5  8bc6                 mov eax, esi
// 005ab6f7  5e                   pop esi
// 005ab6f8  83c408               add esp, 8
// 005ab6fb  c20c00               ret 0xc
// 005ab6fe  50                   push eax
// 005ab6ff  6a01                 push 1
// 005ab701  56                   push esi
// 005ab702  e8c9e6ffff           call 0x5a9dd0
// 005ab707  5d                   pop ebp
// 005ab708  5b                   pop ebx
// 005ab709  5f                   pop edi
// 005ab70a  8bc6                 mov eax, esi
// 005ab70c  5e                   pop esi
// 005ab70d  83c408               add esp, 8
// 005ab710  c20c00               ret 0xc
// 005ab713  56                   push esi
// 005ab714  8d542414             lea edx, [esp + 0x14]
// 005ab718  52                   push edx
// 005ab719  8bcf                 mov ecx, edi
// 005ab71b  e880f0ffff           call 0x5aa7a0
// 005ab720  8b08                 mov ecx, dword ptr [eax]
// 005ab722  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ab726  5d                   pop ebp
// 005ab727  5b                   pop ebx
// 005ab728  5f                   pop edi
// 005ab729  8908                 mov dword ptr [eax], ecx
// 005ab72b  5e                   pop esi
// 005ab72c  83c408               add esp, 8
// 005ab72f  c20c00               ret 0xc
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;