// roc 2011-06 0073a640  unit: RBX::VInstance::?$NonFactoryProduct  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073a640
//
// 0073a640  83ec08               sub esp, 8
// 0073a643  56                   push esi
// 0073a644  57                   push edi
// 0073a645  8bf9                 mov edi, ecx
// 0073a647  837f0800             cmp dword ptr [edi + 8], 0
// 0073a64b  7521                 jne 0x73a66e
// 0073a64d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073a651  8b4f04               mov ecx, dword ptr [edi + 4]
// 0073a654  8b742414             mov esi, dword ptr [esp + 0x14]
// 0073a658  50                   push eax
// 0073a659  51                   push ecx
// 0073a65a  6a01                 push 1
// 0073a65c  56                   push esi
// 0073a65d  8bcf                 mov ecx, edi
// 0073a65f  e84cf2ffff           call 0x7398b0
// 0073a664  5f                   pop edi
// 0073a665  8bc6                 mov eax, esi
// 0073a667  5e                   pop esi
// 0073a668  83c408               add esp, 8
// 0073a66b  c20c00               ret 0xc
// 0073a66e  8b4704               mov eax, dword ptr [edi + 4]
// 0073a671  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073a675  53                   push ebx
// 0073a676  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0073a67a  55                   push ebp
// 0073a67b  3b18                 cmp ebx, dword ptr [eax]
// 0073a67d  7525                 jne 0x73a6a4
// 0073a67f  8b16                 mov edx, dword ptr [esi]
// 0073a681  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 0073a684  0f8df9000000         jge 0x73a783
// 0073a68a  56                   push esi
// 0073a68b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073a68f  53                   push ebx
// 0073a690  6a01                 push 1
// 0073a692  56                   push esi
// 0073a693  e818f2ffff           call 0x7398b0
// 0073a698  5d                   pop ebp
// 0073a699  5b                   pop ebx
// 0073a69a  5f                   pop edi
// 0073a69b  8bc6                 mov eax, esi
// 0073a69d  5e                   pop esi
// 0073a69e  83c408               add esp, 8
// 0073a6a1  c20c00               ret 0xc
// 0073a6a4  3bd8                 cmp ebx, eax
// 0073a6a6  752a                 jne 0x73a6d2
// 0073a6a8  8b4008               mov eax, dword ptr [eax + 8]
// 0073a6ab  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0073a6ae  3b0e                 cmp ecx, dword ptr [esi]
// 0073a6b0  0f8dcd000000         jge 0x73a783
// 0073a6b6  56                   push esi
// 0073a6b7  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073a6bb  50                   push eax
// 0073a6bc  6a00                 push 0
// 0073a6be  56                   push esi
// 0073a6bf  8bcf                 mov ecx, edi
// 0073a6c1  e8eaf1ffff           call 0x7398b0
// 0073a6c6  5d                   pop ebp
// 0073a6c7  5b                   pop ebx
// 0073a6c8  5f                   pop edi
// 0073a6c9  8bc6                 mov eax, esi
// 0073a6cb  5e                   pop esi
// 0073a6cc  83c408               add esp, 8
// 0073a6cf  c20c00               ret 0xc
// 0073a6d2  8b2e                 mov ebp, dword ptr [esi]
// 0073a6d4  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0073a6d7  7e53                 jle 0x73a72c
// 0073a6d9  8d4c2424             lea ecx, [esp + 0x24]
// 0073a6dd  895c2424             mov dword ptr [esp + 0x24], ebx
// 0073a6e1  e8eaef0600           call 0x7a96d0
// 0073a6e6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073a6ea  39680c               cmp dword ptr [eax + 0xc], ebp
// 0073a6ed  7d3a                 jge 0x73a729
// 0073a6ef  8b5008               mov edx, dword ptr [eax + 8]
// 0073a6f2  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 0073a6f6  56                   push esi
// 0073a6f7  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073a6fb  8bcf                 mov ecx, edi
// 0073a6fd  7415                 je 0x73a714
// 0073a6ff  50                   push eax
// 0073a700  6a00                 push 0
// 0073a702  56                   push esi
// 0073a703  e8a8f1ffff           call 0x7398b0
// 0073a708  5d                   pop ebp
// 0073a709  5b                   pop ebx
// 0073a70a  5f                   pop edi
// 0073a70b  8bc6                 mov eax, esi
// 0073a70d  5e                   pop esi
// 0073a70e  83c408               add esp, 8
// 0073a711  c20c00               ret 0xc
// 0073a714  53                   push ebx
// 0073a715  6a01                 push 1
// 0073a717  56                   push esi
// 0073a718  e893f1ffff           call 0x7398b0
// 0073a71d  5d                   pop ebp
// 0073a71e  5b                   pop ebx
// 0073a71f  5f                   pop edi
// 0073a720  8bc6                 mov eax, esi
// 0073a722  5e                   pop esi
// 0073a723  83c408               add esp, 8
// 0073a726  c20c00               ret 0xc
// 0073a729  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0073a72c  7d55                 jge 0x73a783
// 0073a72e  8d4c2424             lea ecx, [esp + 0x24]
// 0073a732  895c2424             mov dword ptr [esp + 0x24], ebx
// 0073a736  e8057d1e00           call 0x922440
// 0073a73b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073a73f  3b4704               cmp eax, dword ptr [edi + 4]
// 0073a742  7405                 je 0x73a749
// 0073a744  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 0073a747  7d3a                 jge 0x73a783
// 0073a749  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0073a74c  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0073a750  56                   push esi
// 0073a751  8b742420             mov esi, dword ptr [esp + 0x20]
// 0073a755  8bcf                 mov ecx, edi
// 0073a757  7415                 je 0x73a76e
// 0073a759  53                   push ebx
// 0073a75a  6a00                 push 0
// 0073a75c  56                   push esi
// 0073a75d  e84ef1ffff           call 0x7398b0
// 0073a762  5d                   pop ebp
// 0073a763  5b                   pop ebx
// 0073a764  5f                   pop edi
// 0073a765  8bc6                 mov eax, esi
// 0073a767  5e                   pop esi
// 0073a768  83c408               add esp, 8
// 0073a76b  c20c00               ret 0xc
// 0073a76e  50                   push eax
// 0073a76f  6a01                 push 1
// 0073a771  56                   push esi
// 0073a772  e839f1ffff           call 0x7398b0
// 0073a777  5d                   pop ebp
// 0073a778  5b                   pop ebx
// 0073a779  5f                   pop edi
// 0073a77a  8bc6                 mov eax, esi
// 0073a77c  5e                   pop esi
// 0073a77d  83c408               add esp, 8
// 0073a780  c20c00               ret 0xc
// 0073a783  56                   push esi
// 0073a784  8d542414             lea edx, [esp + 0x14]
// 0073a788  52                   push edx
// 0073a789  8bcf                 mov ecx, edi
// 0073a78b  e870f4ffff           call 0x739c00
// 0073a790  8b08                 mov ecx, dword ptr [eax]
// 0073a792  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073a796  5d                   pop ebp
// 0073a797  5b                   pop ebx
// 0073a798  5f                   pop edi
// 0073a799  8908                 mov dword ptr [eax], ecx
// 0073a79b  5e                   pop esi
// 0073a79c  83c408               add esp, 8
// 0073a79f  c20c00               ret 0xc
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