// roc 2007-08 0040a1d0  unit: VCApp::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a1d0
//
// 0040a1d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040a1d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040a1d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040a1dc  50                   push eax
// 0040a1dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a1e1  51                   push ecx
// 0040a1e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a1e6  52                   push edx
// 0040a1e7  50                   push eax
// 0040a1e8  51                   push ecx
// 0040a1e9  b950178800           mov ecx, 0x881750
// 0040a1ee  e82dbbffff           call 0x405d20
// 0040a1f3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp