// roc 2007-03 00413490  unit: seg_00410000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00413490
//
// 00413490  8b442418             mov eax, dword ptr [esp + 0x18]
// 00413494  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00413498  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041349c  50                   push eax
// 0041349d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004134a1  51                   push ecx
// 004134a2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004134a6  52                   push edx
// 004134a7  50                   push eax
// 004134a8  51                   push ecx
// 004134a9  b9801c8800           mov ecx, 0x881c80
// 004134ae  e88d29ffff           call 0x405e40
// 004134b3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp