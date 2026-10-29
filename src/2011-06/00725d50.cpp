// roc 2011-06 00725d50  unit: RBX::VBadgeService::?$BoundFuncDesc  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00725d50
//
// 00725d50  83ec08               sub esp, 8
// 00725d53  56                   push esi
// 00725d54  57                   push edi
// 00725d55  8bf9                 mov edi, ecx
// 00725d57  837f0800             cmp dword ptr [edi + 8], 0
// 00725d5b  7521                 jne 0x725d7e
// 00725d5d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00725d61  8b4f04               mov ecx, dword ptr [edi + 4]
// 00725d64  8b742414             mov esi, dword ptr [esp + 0x14]
// 00725d68  50                   push eax
// 00725d69  51                   push ecx
// 00725d6a  6a01                 push 1
// 00725d6c  56                   push esi
// 00725d6d  8bcf                 mov ecx, edi
// 00725d6f  e81cebffff           call 0x724890
// 00725d74  5f                   pop edi
// 00725d75  8bc6                 mov eax, esi
// 00725d77  5e                   pop esi
// 00725d78  83c408               add esp, 8
// 00725d7b  c20c00               ret 0xc
// 00725d7e  8b4704               mov eax, dword ptr [edi + 4]
// 00725d81  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00725d85  53                   push ebx
// 00725d86  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00725d8a  55                   push ebp
// 00725d8b  3b18                 cmp ebx, dword ptr [eax]
// 00725d8d  7525                 jne 0x725db4
// 00725d8f  8b16                 mov edx, dword ptr [esi]
// 00725d91  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 00725d94  0f8df9000000         jge 0x725e93
// 00725d9a  56                   push esi
// 00725d9b  8b742420             mov esi, dword ptr [esp + 0x20]
// 00725d9f  53                   push ebx
// 00725da0  6a01                 push 1
// 00725da2  56                   push esi
// 00725da3  e8e8eaffff           call 0x724890
// 00725da8  5d                   pop ebp
// 00725da9  5b                   pop ebx
// 00725daa  5f                   pop edi
// 00725dab  8bc6                 mov eax, esi
// 00725dad  5e                   pop esi
// 00725dae  83c408               add esp, 8
// 00725db1  c20c00               ret 0xc
// 00725db4  3bd8                 cmp ebx, eax
// 00725db6  752a                 jne 0x725de2
// 00725db8  8b4008               mov eax, dword ptr [eax + 8]
// 00725dbb  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00725dbe  3b0e                 cmp ecx, dword ptr [esi]
// 00725dc0  0f8dcd000000         jge 0x725e93
// 00725dc6  56                   push esi
// 00725dc7  8b742420             mov esi, dword ptr [esp + 0x20]
// 00725dcb  50                   push eax
// 00725dcc  6a00                 push 0
// 00725dce  56                   push esi
// 00725dcf  8bcf                 mov ecx, edi
// 00725dd1  e8baeaffff           call 0x724890
// 00725dd6  5d                   pop ebp
// 00725dd7  5b                   pop ebx
// 00725dd8  5f                   pop edi
// 00725dd9  8bc6                 mov eax, esi
// 00725ddb  5e                   pop esi
// 00725ddc  83c408               add esp, 8
// 00725ddf  c20c00               ret 0xc
// 00725de2  8b2e                 mov ebp, dword ptr [esi]
// 00725de4  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00725de7  7e53                 jle 0x725e3c
// 00725de9  8d4c2424             lea ecx, [esp + 0x24]
// 00725ded  895c2424             mov dword ptr [esp + 0x24], ebx
// 00725df1  e8da380800           call 0x7a96d0
// 00725df6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725dfa  39680c               cmp dword ptr [eax + 0xc], ebp
// 00725dfd  7d3a                 jge 0x725e39
// 00725dff  8b5008               mov edx, dword ptr [eax + 8]
// 00725e02  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00725e06  56                   push esi
// 00725e07  8b742420             mov esi, dword ptr [esp + 0x20]
// 00725e0b  8bcf                 mov ecx, edi
// 00725e0d  7415                 je 0x725e24
// 00725e0f  50                   push eax
// 00725e10  6a00                 push 0
// 00725e12  56                   push esi
// 00725e13  e878eaffff           call 0x724890
// 00725e18  5d                   pop ebp
// 00725e19  5b                   pop ebx
// 00725e1a  5f                   pop edi
// 00725e1b  8bc6                 mov eax, esi
// 00725e1d  5e                   pop esi
// 00725e1e  83c408               add esp, 8
// 00725e21  c20c00               ret 0xc
// 00725e24  53                   push ebx
// 00725e25  6a01                 push 1
// 00725e27  56                   push esi
// 00725e28  e863eaffff           call 0x724890
// 00725e2d  5d                   pop ebp
// 00725e2e  5b                   pop ebx
// 00725e2f  5f                   pop edi
// 00725e30  8bc6                 mov eax, esi
// 00725e32  5e                   pop esi
// 00725e33  83c408               add esp, 8
// 00725e36  c20c00               ret 0xc
// 00725e39  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00725e3c  7d55                 jge 0x725e93
// 00725e3e  8d4c2424             lea ecx, [esp + 0x24]
// 00725e42  895c2424             mov dword ptr [esp + 0x24], ebx
// 00725e46  e8f5c51f00           call 0x922440
// 00725e4b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725e4f  3b4704               cmp eax, dword ptr [edi + 4]
// 00725e52  7405                 je 0x725e59
// 00725e54  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 00725e57  7d3a                 jge 0x725e93
// 00725e59  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00725e5c  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00725e60  56                   push esi
// 00725e61  8b742420             mov esi, dword ptr [esp + 0x20]
// 00725e65  8bcf                 mov ecx, edi
// 00725e67  7415                 je 0x725e7e
// 00725e69  53                   push ebx
// 00725e6a  6a00                 push 0
// 00725e6c  56                   push esi
// 00725e6d  e81eeaffff           call 0x724890
// 00725e72  5d                   pop ebp
// 00725e73  5b                   pop ebx
// 00725e74  5f                   pop edi
// 00725e75  8bc6                 mov eax, esi
// 00725e77  5e                   pop esi
// 00725e78  83c408               add esp, 8
// 00725e7b  c20c00               ret 0xc
// 00725e7e  50                   push eax
// 00725e7f  6a01                 push 1
// 00725e81  56                   push esi
// 00725e82  e809eaffff           call 0x724890
// 00725e87  5d                   pop ebp
// 00725e88  5b                   pop ebx
// 00725e89  5f                   pop edi
// 00725e8a  8bc6                 mov eax, esi
// 00725e8c  5e                   pop esi
// 00725e8d  83c408               add esp, 8
// 00725e90  c20c00               ret 0xc
// 00725e93  56                   push esi
// 00725e94  8d542414             lea edx, [esp + 0x14]
// 00725e98  52                   push edx
// 00725e99  8bcf                 mov ecx, edi
// 00725e9b  e890f6ffff           call 0x725530
// 00725ea0  8b08                 mov ecx, dword ptr [eax]
// 00725ea2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00725ea6  5d                   pop ebp
// 00725ea7  5b                   pop ebx
// 00725ea8  5f                   pop edi
// 00725ea9  8908                 mov dword ptr [eax], ecx
// 00725eab  5e                   pop esi
// 00725eac  83c408               add esp, 8
// 00725eaf  c20c00               ret 0xc
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