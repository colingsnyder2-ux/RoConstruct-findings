// roc 2009-12 0086e7b0  unit: CXTPResourceManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e7b0
//
// 0086e7b0  53                   push ebx
// 0086e7b1  55                   push ebp
// 0086e7b2  56                   push esi
// 0086e7b3  57                   push edi
// 0086e7b4  8bf9                 mov edi, ecx
// 0086e7b6  e805f9ffff           call 0x86e0c0
// 0086e7bb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0086e7bf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086e7c3  8bf0                 mov esi, eax
// 0086e7c5  85f6                 test esi, esi
// 0086e7c7  7431                 je 0x86e7fa
// 0086e7c9  8bc3                 mov eax, ebx
// 0086e7cb  c1e804               shr eax, 4
// 0086e7ce  40                   inc eax
// 0086e7cf  0fb7c8               movzx ecx, ax
// 0086e7d2  6a06                 push 6
// 0086e7d4  51                   push ecx
// 0086e7d5  56                   push esi
// 0086e7d6  ff15ecb19800         call dword ptr [0x98b1ec]
// 0086e7dc  85c0                 test eax, eax
// 0086e7de  741a                 je 0x86e7fa
// 0086e7e0  55                   push ebp
// 0086e7e1  53                   push ebx
// 0086e7e2  56                   push esi
// 0086e7e3  8bcf                 mov ecx, edi
// 0086e7e5  e866fdffff           call 0x86e550
// 0086e7ea  85c0                 test eax, eax
// 0086e7ec  740c                 je 0x86e7fa
// 0086e7ee  5f                   pop edi
// 0086e7ef  5e                   pop esi
// 0086e7f0  5d                   pop ebp
// 0086e7f1  b801000000           mov eax, 1
// 0086e7f6  5b                   pop ebx
// 0086e7f7  c20800               ret 8
// 0086e7fa  53                   push ebx
// 0086e7fb  8bcd                 mov ecx, ebp
// 0086e7fd  ff1560cf9800         call dword ptr [0x98cf60]
// 0086e803  5f                   pop edi
// 0086e804  5e                   pop esi
// 0086e805  5d                   pop ebp
// 0086e806  5b                   pop ebx
// 0086e807  c20800               ret 8
// copied from an identical function in another client (function ?LoadStringA@CXTPResourceManager@@UAEHPAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp