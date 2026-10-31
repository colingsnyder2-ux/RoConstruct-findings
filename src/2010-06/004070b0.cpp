// roc 2010-06 004070b0  unit: VCApp::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004070b0
//
// 004070b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004070b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004070b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004070bc  50                   push eax
// 004070bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004070c1  51                   push ecx
// 004070c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004070c6  52                   push edx
// 004070c7  50                   push eax
// 004070c8  51                   push ecx
// 004070c9  b9d08ab700           mov ecx, 0xb78ad0
// 004070ce  e85dfeffff           call 0x406f30
// 004070d3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp