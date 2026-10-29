// roc 2011-06 0064c5d0  unit: RBX::GameBasicSettings  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064c5d0
//
// 0064c5d0  83ec08               sub esp, 8
// 0064c5d3  56                   push esi
// 0064c5d4  57                   push edi
// 0064c5d5  8bf9                 mov edi, ecx
// 0064c5d7  837f0800             cmp dword ptr [edi + 8], 0
// 0064c5db  7521                 jne 0x64c5fe
// 0064c5dd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064c5e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064c5e4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064c5e8  50                   push eax
// 0064c5e9  51                   push ecx
// 0064c5ea  6a01                 push 1
// 0064c5ec  56                   push esi
// 0064c5ed  8bcf                 mov ecx, edi
// 0064c5ef  e85cfaffff           call 0x64c050
// 0064c5f4  5f                   pop edi
// 0064c5f5  8bc6                 mov eax, esi
// 0064c5f7  5e                   pop esi
// 0064c5f8  83c408               add esp, 8
// 0064c5fb  c20c00               ret 0xc
// 0064c5fe  8b4704               mov eax, dword ptr [edi + 4]
// 0064c601  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0064c605  53                   push ebx
// 0064c606  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0064c60a  55                   push ebp
// 0064c60b  3b18                 cmp ebx, dword ptr [eax]
// 0064c60d  7525                 jne 0x64c634
// 0064c60f  8b16                 mov edx, dword ptr [esi]
// 0064c611  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 0064c614  0f8df9000000         jge 0x64c713
// 0064c61a  56                   push esi
// 0064c61b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0064c61f  53                   push ebx
// 0064c620  6a01                 push 1
// 0064c622  56                   push esi
// 0064c623  e828faffff           call 0x64c050
// 0064c628  5d                   pop ebp
// 0064c629  5b                   pop ebx
// 0064c62a  5f                   pop edi
// 0064c62b  8bc6                 mov eax, esi
// 0064c62d  5e                   pop esi
// 0064c62e  83c408               add esp, 8
// 0064c631  c20c00               ret 0xc
// 0064c634  3bd8                 cmp ebx, eax
// 0064c636  752a                 jne 0x64c662
// 0064c638  8b4008               mov eax, dword ptr [eax + 8]
// 0064c63b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0064c63e  3b0e                 cmp ecx, dword ptr [esi]
// 0064c640  0f8dcd000000         jge 0x64c713
// 0064c646  56                   push esi
// 0064c647  8b742420             mov esi, dword ptr [esp + 0x20]
// 0064c64b  50                   push eax
// 0064c64c  6a00                 push 0
// 0064c64e  56                   push esi
// 0064c64f  8bcf                 mov ecx, edi
// 0064c651  e8faf9ffff           call 0x64c050
// 0064c656  5d                   pop ebp
// 0064c657  5b                   pop ebx
// 0064c658  5f                   pop edi
// 0064c659  8bc6                 mov eax, esi
// 0064c65b  5e                   pop esi
// 0064c65c  83c408               add esp, 8
// 0064c65f  c20c00               ret 0xc
// 0064c662  8b2e                 mov ebp, dword ptr [esi]
// 0064c664  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0064c667  7e53                 jle 0x64c6bc
// 0064c669  8d4c2424             lea ecx, [esp + 0x24]
// 0064c66d  895c2424             mov dword ptr [esp + 0x24], ebx
// 0064c671  e8daf3ffff           call 0x64ba50
// 0064c676  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064c67a  39680c               cmp dword ptr [eax + 0xc], ebp
// 0064c67d  7d3a                 jge 0x64c6b9
// 0064c67f  8b5008               mov edx, dword ptr [eax + 8]
// 0064c682  807a2100             cmp byte ptr [edx + 0x21], 0
// 0064c686  56                   push esi
// 0064c687  8b742420             mov esi, dword ptr [esp + 0x20]
// 0064c68b  8bcf                 mov ecx, edi
// 0064c68d  7415                 je 0x64c6a4
// 0064c68f  50                   push eax
// 0064c690  6a00                 push 0
// 0064c692  56                   push esi
// 0064c693  e8b8f9ffff           call 0x64c050
// 0064c698  5d                   pop ebp
// 0064c699  5b                   pop ebx
// 0064c69a  5f                   pop edi
// 0064c69b  8bc6                 mov eax, esi
// 0064c69d  5e                   pop esi
// 0064c69e  83c408               add esp, 8
// 0064c6a1  c20c00               ret 0xc
// 0064c6a4  53                   push ebx
// 0064c6a5  6a01                 push 1
// 0064c6a7  56                   push esi
// 0064c6a8  e8a3f9ffff           call 0x64c050
// 0064c6ad  5d                   pop ebp
// 0064c6ae  5b                   pop ebx
// 0064c6af  5f                   pop edi
// 0064c6b0  8bc6                 mov eax, esi
// 0064c6b2  5e                   pop esi
// 0064c6b3  83c408               add esp, 8
// 0064c6b6  c20c00               ret 0xc
// 0064c6b9  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0064c6bc  7d55                 jge 0x64c713
// 0064c6be  8d4c2424             lea ecx, [esp + 0x24]
// 0064c6c2  895c2424             mov dword ptr [esp + 0x24], ebx
// 0064c6c6  e835f3ffff           call 0x64ba00
// 0064c6cb  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064c6cf  3b4704               cmp eax, dword ptr [edi + 4]
// 0064c6d2  7405                 je 0x64c6d9
// 0064c6d4  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 0064c6d7  7d3a                 jge 0x64c713
// 0064c6d9  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0064c6dc  80792100             cmp byte ptr [ecx + 0x21], 0
// 0064c6e0  56                   push esi
// 0064c6e1  8b742420             mov esi, dword ptr [esp + 0x20]
// 0064c6e5  8bcf                 mov ecx, edi
// 0064c6e7  7415                 je 0x64c6fe
// 0064c6e9  53                   push ebx
// 0064c6ea  6a00                 push 0
// 0064c6ec  56                   push esi
// 0064c6ed  e85ef9ffff           call 0x64c050
// 0064c6f2  5d                   pop ebp
// 0064c6f3  5b                   pop ebx
// 0064c6f4  5f                   pop edi
// 0064c6f5  8bc6                 mov eax, esi
// 0064c6f7  5e                   pop esi
// 0064c6f8  83c408               add esp, 8
// 0064c6fb  c20c00               ret 0xc
// 0064c6fe  50                   push eax
// 0064c6ff  6a01                 push 1
// 0064c701  56                   push esi
// 0064c702  e849f9ffff           call 0x64c050
// 0064c707  5d                   pop ebp
// 0064c708  5b                   pop ebx
// 0064c709  5f                   pop edi
// 0064c70a  8bc6                 mov eax, esi
// 0064c70c  5e                   pop esi
// 0064c70d  83c408               add esp, 8
// 0064c710  c20c00               ret 0xc
// 0064c713  56                   push esi
// 0064c714  8d542414             lea edx, [esp + 0x14]
// 0064c718  52                   push edx
// 0064c719  8bcf                 mov ecx, edi
// 0064c71b  e830fdffff           call 0x64c450
// 0064c720  8b08                 mov ecx, dword ptr [eax]
// 0064c722  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064c726  5d                   pop ebp
// 0064c727  5b                   pop ebx
// 0064c728  5f                   pop edi
// 0064c729  8908                 mov dword ptr [eax], ecx
// 0064c72b  5e                   pop esi
// 0064c72c  83c408               add esp, 8
// 0064c72f  c20c00               ret 0xc
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;