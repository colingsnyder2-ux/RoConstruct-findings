// roc 2009-12 0040ebf0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040ebf0
//
// 0040ebf0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040ebf4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040ebf8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040ebfc  50                   push eax
// 0040ebfd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040ec01  51                   push ecx
// 0040ec02  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040ec06  52                   push edx
// 0040ec07  50                   push eax
// 0040ec08  51                   push ecx
// 0040ec09  b93427b000           mov ecx, 0xb02734
// 0040ec0e  e8bd81ffff           call 0x406dd0
// 0040ec13  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp