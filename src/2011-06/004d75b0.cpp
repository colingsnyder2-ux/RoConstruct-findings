// roc 2011-06 004d75b0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d75b0
//
// 004d75b0  83ec08               sub esp, 8
// 004d75b3  56                   push esi
// 004d75b4  57                   push edi
// 004d75b5  8bf9                 mov edi, ecx
// 004d75b7  837f0800             cmp dword ptr [edi + 8], 0
// 004d75bb  7521                 jne 0x4d75de
// 004d75bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d75c1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004d75c4  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d75c8  50                   push eax
// 004d75c9  51                   push ecx
// 004d75ca  6a01                 push 1
// 004d75cc  56                   push esi
// 004d75cd  8bcf                 mov ecx, edi
// 004d75cf  e81ce5ffff           call 0x4d5af0
// 004d75d4  5f                   pop edi
// 004d75d5  8bc6                 mov eax, esi
// 004d75d7  5e                   pop esi
// 004d75d8  83c408               add esp, 8
// 004d75db  c20c00               ret 0xc
// 004d75de  8b4704               mov eax, dword ptr [edi + 4]
// 004d75e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004d75e5  53                   push ebx
// 004d75e6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004d75ea  55                   push ebp
// 004d75eb  3b18                 cmp ebx, dword ptr [eax]
// 004d75ed  7525                 jne 0x4d7614
// 004d75ef  8b16                 mov edx, dword ptr [esi]
// 004d75f1  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 004d75f4  0f8df9000000         jge 0x4d76f3
// 004d75fa  56                   push esi
// 004d75fb  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d75ff  53                   push ebx
// 004d7600  6a01                 push 1
// 004d7602  56                   push esi
// 004d7603  e8e8e4ffff           call 0x4d5af0
// 004d7608  5d                   pop ebp
// 004d7609  5b                   pop ebx
// 004d760a  5f                   pop edi
// 004d760b  8bc6                 mov eax, esi
// 004d760d  5e                   pop esi
// 004d760e  83c408               add esp, 8
// 004d7611  c20c00               ret 0xc
// 004d7614  3bd8                 cmp ebx, eax
// 004d7616  752a                 jne 0x4d7642
// 004d7618  8b4008               mov eax, dword ptr [eax + 8]
// 004d761b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004d761e  3b0e                 cmp ecx, dword ptr [esi]
// 004d7620  0f8dcd000000         jge 0x4d76f3
// 004d7626  56                   push esi
// 004d7627  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d762b  50                   push eax
// 004d762c  6a00                 push 0
// 004d762e  56                   push esi
// 004d762f  8bcf                 mov ecx, edi
// 004d7631  e8bae4ffff           call 0x4d5af0
// 004d7636  5d                   pop ebp
// 004d7637  5b                   pop ebx
// 004d7638  5f                   pop edi
// 004d7639  8bc6                 mov eax, esi
// 004d763b  5e                   pop esi
// 004d763c  83c408               add esp, 8
// 004d763f  c20c00               ret 0xc
// 004d7642  8b2e                 mov ebp, dword ptr [esi]
// 004d7644  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d7647  7e53                 jle 0x4d769c
// 004d7649  8d4c2424             lea ecx, [esp + 0x24]
// 004d764d  895c2424             mov dword ptr [esp + 0x24], ebx
// 004d7651  e87a202d00           call 0x7a96d0
// 004d7656  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d765a  39680c               cmp dword ptr [eax + 0xc], ebp
// 004d765d  7d3a                 jge 0x4d7699
// 004d765f  8b5008               mov edx, dword ptr [eax + 8]
// 004d7662  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 004d7666  56                   push esi
// 004d7667  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d766b  8bcf                 mov ecx, edi
// 004d766d  7415                 je 0x4d7684
// 004d766f  50                   push eax
// 004d7670  6a00                 push 0
// 004d7672  56                   push esi
// 004d7673  e878e4ffff           call 0x4d5af0
// 004d7678  5d                   pop ebp
// 004d7679  5b                   pop ebx
// 004d767a  5f                   pop edi
// 004d767b  8bc6                 mov eax, esi
// 004d767d  5e                   pop esi
// 004d767e  83c408               add esp, 8
// 004d7681  c20c00               ret 0xc
// 004d7684  53                   push ebx
// 004d7685  6a01                 push 1
// 004d7687  56                   push esi
// 004d7688  e863e4ffff           call 0x4d5af0
// 004d768d  5d                   pop ebp
// 004d768e  5b                   pop ebx
// 004d768f  5f                   pop edi
// 004d7690  8bc6                 mov eax, esi
// 004d7692  5e                   pop esi
// 004d7693  83c408               add esp, 8
// 004d7696  c20c00               ret 0xc
// 004d7699  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d769c  7d55                 jge 0x4d76f3
// 004d769e  8d4c2424             lea ecx, [esp + 0x24]
// 004d76a2  895c2424             mov dword ptr [esp + 0x24], ebx
// 004d76a6  e895ad4400           call 0x922440
// 004d76ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d76af  3b4704               cmp eax, dword ptr [edi + 4]
// 004d76b2  7405                 je 0x4d76b9
// 004d76b4  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 004d76b7  7d3a                 jge 0x4d76f3
// 004d76b9  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d76bc  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004d76c0  56                   push esi
// 004d76c1  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d76c5  8bcf                 mov ecx, edi
// 004d76c7  7415                 je 0x4d76de
// 004d76c9  53                   push ebx
// 004d76ca  6a00                 push 0
// 004d76cc  56                   push esi
// 004d76cd  e81ee4ffff           call 0x4d5af0
// 004d76d2  5d                   pop ebp
// 004d76d3  5b                   pop ebx
// 004d76d4  5f                   pop edi
// 004d76d5  8bc6                 mov eax, esi
// 004d76d7  5e                   pop esi
// 004d76d8  83c408               add esp, 8
// 004d76db  c20c00               ret 0xc
// 004d76de  50                   push eax
// 004d76df  6a01                 push 1
// 004d76e1  56                   push esi
// 004d76e2  e809e4ffff           call 0x4d5af0
// 004d76e7  5d                   pop ebp
// 004d76e8  5b                   pop ebx
// 004d76e9  5f                   pop edi
// 004d76ea  8bc6                 mov eax, esi
// 004d76ec  5e                   pop esi
// 004d76ed  83c408               add esp, 8
// 004d76f0  c20c00               ret 0xc
// 004d76f3  56                   push esi
// 004d76f4  8d542414             lea edx, [esp + 0x14]
// 004d76f8  52                   push edx
// 004d76f9  8bcf                 mov ecx, edi
// 004d76fb  e820edffff           call 0x4d6420
// 004d7700  8b08                 mov ecx, dword ptr [eax]
// 004d7702  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d7706  5d                   pop ebp
// 004d7707  5b                   pop ebx
// 004d7708  5f                   pop edi
// 004d7709  8908                 mov dword ptr [eax], ecx
// 004d770b  5e                   pop esi
// 004d770c  83c408               add esp, 8
// 004d770f  c20c00               ret 0xc
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