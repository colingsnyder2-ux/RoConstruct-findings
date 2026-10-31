// roc 2007-03 004176b0  unit: seg_00410000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004176b0
//
// 004176b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004176b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004176b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004176bc  50                   push eax
// 004176bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004176c1  51                   push ecx
// 004176c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004176c6  52                   push edx
// 004176c7  50                   push eax
// 004176c8  51                   push ecx
// 004176c9  b910238800           mov ecx, 0x882310
// 004176ce  e86de7feff           call 0x405e40
// 004176d3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp