// roc 2010-06 0040f020  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f020
//
// 0040f020  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040f024  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040f028  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040f02c  50                   push eax
// 0040f02d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040f031  51                   push ecx
// 0040f032  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040f036  52                   push edx
// 0040f037  50                   push eax
// 0040f038  51                   push ecx
// 0040f039  b934b7b700           mov ecx, 0xb7b734
// 0040f03e  e8ed7effff           call 0x406f30
// 0040f043  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp