// roc 2009-12 0088f7e0  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f7e0
//
// 0088f7e0  51                   push ecx
// 0088f7e1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0088f7e5  56                   push esi
// 0088f7e6  51                   push ecx
// 0088f7e7  8bf1                 mov esi, ecx
// 0088f7e9  8bcc                 mov ecx, esp
// 0088f7eb  89642408             mov dword ptr [esp + 8], esp
// 0088f7ef  50                   push eax
// 0088f7f0  ff15b8de9800         call dword ptr [0x98deb8]
// 0088f7f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088f7fa  51                   push ecx
// 0088f7fb  8bce                 mov ecx, esi
// 0088f7fd  e82efeffff           call 0x88f630
// 0088f802  5e                   pop esi
// 0088f803  59                   pop ecx
// 0088f804  c20800               ret 8
// copied from an identical function in another client (function ?SetAt@CKeyNameText@CXTPShortcutManager@@QAEXIPBD@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp