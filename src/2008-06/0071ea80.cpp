// roc 2008-06 0071ea80  unit: CXTPShortcutManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071ea80
//
// 0071ea80  51                   push ecx
// 0071ea81  8d442408             lea eax, [esp + 8]
// 0071ea85  50                   push eax
// 0071ea86  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071ea8a  8d542404             lea edx, [esp + 4]
// 0071ea8e  52                   push edx
// 0071ea8f  50                   push eax
// 0071ea90  e8eb95feff           call 0x708080
// 0071ea95  85c0                 test eax, eax
// 0071ea97  7504                 jne 0x71ea9d
// 0071ea99  59                   pop ecx
// 0071ea9a  c20800               ret 8
// 0071ea9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071eaa1  83c004               add eax, 4
// 0071eaa4  50                   push eax
// 0071eaa5  ff1544318000         call dword ptr [0x803144]
// 0071eaab  b801000000           mov eax, 1
// 0071eab0  59                   pop ecx
// 0071eab1  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPShortcutManager.cpp (function ?Lookup@?$CMap@IIV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V12@@@QBEHIAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPShortcutManager.cpp
