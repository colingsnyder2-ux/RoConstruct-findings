// roc 2009-06 0046e140  unit: VCContent::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046e140
//
// 0046e140  8b442418             mov eax, dword ptr [esp + 0x18]
// 0046e144  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046e148  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046e14c  50                   push eax
// 0046e14d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046e151  51                   push ecx
// 0046e152  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046e156  52                   push edx
// 0046e157  50                   push eax
// 0046e158  51                   push ecx
// 0046e159  b97c6f9e00           mov ecx, 0x9e6f7c
// 0046e15e  e87d8ff9ff           call 0x4070e0
// 0046e163  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp