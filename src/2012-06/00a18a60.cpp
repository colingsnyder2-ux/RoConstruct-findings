// roc 2012-06 00a18a60  unit: CXTPShortcutManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18a60
//
// 00a18a60  51                   push ecx
// 00a18a61  8d442408             lea eax, [esp + 8]
// 00a18a65  50                   push eax
// 00a18a66  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a18a6a  8d542404             lea edx, [esp + 4]
// 00a18a6e  52                   push edx
// 00a18a6f  50                   push eax
// 00a18a70  e89bd8f6ff           call 0x986310
// 00a18a75  85c0                 test eax, eax
// 00a18a77  7504                 jne 0xa18a7d
// 00a18a79  59                   pop ecx
// 00a18a7a  c20800               ret 8
// 00a18a7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a18a81  83c004               add eax, 4
// 00a18a84  50                   push eax
// 00a18a85  ff152045b200         call dword ptr [0xb24520]
// 00a18a8b  b801000000           mov eax, 1
// 00a18a90  59                   pop ecx
// 00a18a91  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPShortcutManager.cpp (function ?Lookup@?$CMap@GGV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V12@@@QBEHGAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPShortcutManager.cpp
