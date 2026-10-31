// roc 2009-06 0044f9b0  unit: VCWorkspace::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044f9b0
//
// 0044f9b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044f9b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044f9b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044f9bc  50                   push eax
// 0044f9bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f9c1  51                   push ecx
// 0044f9c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044f9c6  52                   push edx
// 0044f9c7  50                   push eax
// 0044f9c8  51                   push ecx
// 0044f9c9  b944529e00           mov ecx, 0x9e5244
// 0044f9ce  e80d77fbff           call 0x4070e0
// 0044f9d3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp