// roc 2007-03 0040d930  unit: seg_00400000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040d930
//
// 0040d930  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040d934  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040d938  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040d93c  50                   push eax
// 0040d93d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040d941  51                   push ecx
// 0040d942  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040d946  52                   push edx
// 0040d947  50                   push eax
// 0040d948  51                   push ecx
// 0040d949  b9d40e8800           mov ecx, 0x880ed4
// 0040d94e  e8ed84ffff           call 0x405e40
// 0040d953  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp