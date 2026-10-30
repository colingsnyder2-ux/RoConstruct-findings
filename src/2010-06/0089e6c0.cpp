// roc 2010-06 0089e6c0  unit: CXTPRibbonGroup  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e6c0
//
// 0089e6c0  6aff                 push -1
// 0089e6c2  6838be9b00           push 0x9bbe38
// 0089e6c7  64a100000000         mov eax, dword ptr fs:[0]
// 0089e6cd  50                   push eax
// 0089e6ce  83ec20               sub esp, 0x20
// 0089e6d1  53                   push ebx
// 0089e6d2  56                   push esi
// 0089e6d3  57                   push edi
// 0089e6d4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089e6d9  33c4                 xor eax, esp
// 0089e6db  50                   push eax
// 0089e6dc  8d442430             lea eax, [esp + 0x30]
// 0089e6e0  64a300000000         mov dword ptr fs:[0], eax
// 0089e6e6  8bf1                 mov esi, ecx
// 0089e6e8  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0089e6eb  e810a7faff           call 0x848e00
// 0089e6f0  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0089e6f4  0554060000           add eax, 0x654
// 0089e6f9  50                   push eax
// 0089e6fa  53                   push ebx
// 0089e6fb  8d4c2428             lea ecx, [esp + 0x28]
// 0089e6ff  e89c0ff6ff           call 0x7ff6a0
// 0089e704  8d442410             lea eax, [esp + 0x10]
// 0089e708  8d7e28               lea edi, [esi + 0x28]
// 0089e70b  50                   push eax
// 0089e70c  8bcf                 mov ecx, edi
// 0089e70e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0089e716  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0089e71c  50                   push eax
// 0089e71d  8bcf                 mov ecx, edi
// 0089e71f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0089e725  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0089e728  50                   push eax
// 0089e729  51                   push ecx
// 0089e72a  ff1594a19e00         call dword ptr [0x9ea194]
// 0089e730  837e7400             cmp dword ptr [esi + 0x74], 0
// 0089e734  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089e738  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0089e73c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0089e740  7410                 je 0x89e752
// 0089e742  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0089e745  e8b6a6faff           call 0x848e00
// 0089e74a  8b8060060000         mov eax, dword ptr [eax + 0x660]
// 0089e750  03f8                 add edi, eax
// 0089e752  8d4c2420             lea ecx, [esp + 0x20]
// 0089e756  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0089e75e  e8bd0ff6ff           call 0x7ff720
// 0089e763  8bc7                 mov eax, edi
// 0089e765  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089e769  64890d00000000       mov dword ptr fs:[0], ecx
// 0089e770  59                   pop ecx
// 0089e771  5f                   pop edi
// 0089e772  5e                   pop esi
// 0089e773  5b                   pop ebx
// 0089e774  83c42c               add esp, 0x2c
// 0089e777  c20400               ret 4
// copied from an identical function in another client (function ?GetMinimumWidth@CXTPRibbonGroup@@MAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonGroup.cpp