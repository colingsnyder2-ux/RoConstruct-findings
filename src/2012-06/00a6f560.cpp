// roc 2012-06 00a6f560  unit: CXTPRibbonGroup  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f560
//
// 00a6f560  6aff                 push -1
// 00a6f562  68b88aae00           push 0xae8ab8
// 00a6f567  64a100000000         mov eax, dword ptr fs:[0]
// 00a6f56d  50                   push eax
// 00a6f56e  83ec20               sub esp, 0x20
// 00a6f571  53                   push ebx
// 00a6f572  56                   push esi
// 00a6f573  57                   push edi
// 00a6f574  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6f579  33c4                 xor eax, esp
// 00a6f57b  50                   push eax
// 00a6f57c  8d442430             lea eax, [esp + 0x30]
// 00a6f580  64a300000000         mov dword ptr fs:[0], eax
// 00a6f586  8bf1                 mov esi, ecx
// 00a6f588  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a6f58b  e860eefaff           call 0xa1e3f0
// 00a6f590  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00a6f594  0554060000           add eax, 0x654
// 00a6f599  50                   push eax
// 00a6f59a  53                   push ebx
// 00a6f59b  8d4c2428             lea ecx, [esp + 0x28]
// 00a6f59f  e88c5ff6ff           call 0x9d5530
// 00a6f5a4  8d442410             lea eax, [esp + 0x10]
// 00a6f5a8  8d7e28               lea edi, [esi + 0x28]
// 00a6f5ab  50                   push eax
// 00a6f5ac  8bcf                 mov ecx, edi
// 00a6f5ae  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a6f5b6  ff155846b200         call dword ptr [0xb24658]
// 00a6f5bc  50                   push eax
// 00a6f5bd  8bcf                 mov ecx, edi
// 00a6f5bf  ff159847b200         call dword ptr [0xb24798]
// 00a6f5c5  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a6f5c8  50                   push eax
// 00a6f5c9  51                   push ecx
// 00a6f5ca  ff154021b200         call dword ptr [0xb22140]
// 00a6f5d0  837e7400             cmp dword ptr [esi + 0x74], 0
// 00a6f5d4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a6f5d8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a6f5dc  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a6f5e0  7410                 je 0xa6f5f2
// 00a6f5e2  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a6f5e5  e806eefaff           call 0xa1e3f0
// 00a6f5ea  8b8060060000         mov eax, dword ptr [eax + 0x660]
// 00a6f5f0  03f8                 add edi, eax
// 00a6f5f2  8d4c2420             lea ecx, [esp + 0x20]
// 00a6f5f6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00a6f5fe  e8ad5ff6ff           call 0x9d55b0
// 00a6f603  8bc7                 mov eax, edi
// 00a6f605  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a6f609  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6f610  59                   pop ecx
// 00a6f611  5f                   pop edi
// 00a6f612  5e                   pop esi
// 00a6f613  5b                   pop ebx
// 00a6f614  83c42c               add esp, 0x2c
// 00a6f617  c20400               ret 4
// copied from an identical function in another client (function ?GetMinimumWidth@CXTPRibbonGroup@@MAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonGroup.cpp