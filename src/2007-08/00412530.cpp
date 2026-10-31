// roc 2007-08 00412530  unit: VCContent::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412530
//
// 00412530  8b442418             mov eax, dword ptr [esp + 0x18]
// 00412534  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00412538  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041253c  50                   push eax
// 0041253d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00412541  51                   push ecx
// 00412542  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00412546  52                   push edx
// 00412547  50                   push eax
// 00412548  51                   push ecx
// 00412549  b9c82a8800           mov ecx, 0x882ac8
// 0041254e  e8cd37ffff           call 0x405d20
// 00412553  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp