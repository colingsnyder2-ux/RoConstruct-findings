// roc 2011-06 008f7230  unit: CXTPRibbonGroup  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7230
//
// 008f7230  6aff                 push -1
// 008f7232  6898eea000           push 0xa0ee98
// 008f7237  64a100000000         mov eax, dword ptr fs:[0]
// 008f723d  50                   push eax
// 008f723e  83ec20               sub esp, 0x20
// 008f7241  53                   push ebx
// 008f7242  56                   push esi
// 008f7243  57                   push edi
// 008f7244  a12058c900           mov eax, dword ptr [0xc95820]
// 008f7249  33c4                 xor eax, esp
// 008f724b  50                   push eax
// 008f724c  8d442430             lea eax, [esp + 0x30]
// 008f7250  64a300000000         mov dword ptr fs:[0], eax
// 008f7256  8bf1                 mov esi, ecx
// 008f7258  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008f725b  e8e0ecfaff           call 0x8a5f40
// 008f7260  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008f7264  0554060000           add eax, 0x654
// 008f7269  50                   push eax
// 008f726a  53                   push ebx
// 008f726b  8d4c2428             lea ecx, [esp + 0x28]
// 008f726f  e8ac5ef6ff           call 0x85d120
// 008f7274  8d442410             lea eax, [esp + 0x10]
// 008f7278  8d7e28               lea edi, [esi + 0x28]
// 008f727b  50                   push eax
// 008f727c  8bcf                 mov ecx, edi
// 008f727e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008f7286  ff15a826a400         call dword ptr [0xa426a8]
// 008f728c  50                   push eax
// 008f728d  8bcf                 mov ecx, edi
// 008f728f  ff15c82da400         call dword ptr [0xa42dc8]
// 008f7295  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008f7298  50                   push eax
// 008f7299  51                   push ecx
// 008f729a  ff153801a400         call dword ptr [0xa40138]
// 008f72a0  837e7400             cmp dword ptr [esi + 0x74], 0
// 008f72a4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f72a8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f72ac  8954241c             mov dword ptr [esp + 0x1c], edx
// 008f72b0  7410                 je 0x8f72c2
// 008f72b2  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008f72b5  e886ecfaff           call 0x8a5f40
// 008f72ba  8b8060060000         mov eax, dword ptr [eax + 0x660]
// 008f72c0  03f8                 add edi, eax
// 008f72c2  8d4c2420             lea ecx, [esp + 0x20]
// 008f72c6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008f72ce  e8cd5ef6ff           call 0x85d1a0
// 008f72d3  8bc7                 mov eax, edi
// 008f72d5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f72d9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f72e0  59                   pop ecx
// 008f72e1  5f                   pop edi
// 008f72e2  5e                   pop esi
// 008f72e3  5b                   pop ebx
// 008f72e4  83c42c               add esp, 0x2c
// 008f72e7  c20400               ret 4
// copied from an identical function in another client (function ?GetMinimumWidth@CXTPRibbonGroup@@MAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonGroup.cpp