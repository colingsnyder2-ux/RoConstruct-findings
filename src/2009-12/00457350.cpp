// roc 2009-12 00457350  unit: VCWorkspace::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00457350
//
// 00457350  8b442418             mov eax, dword ptr [esp + 0x18]
// 00457354  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00457358  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045735c  50                   push eax
// 0045735d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00457361  51                   push ecx
// 00457362  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00457366  52                   push edx
// 00457367  50                   push eax
// 00457368  51                   push ecx
// 00457369  b9b49bb000           mov ecx, 0xb09bb4
// 0045736e  e85dfafaff           call 0x406dd0
// 00457373  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp