// roc 2007-08 0040c070  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c070
//
// 0040c070  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040c074  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040c078  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040c07c  50                   push eax
// 0040c07d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040c081  51                   push ecx
// 0040c082  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040c086  52                   push edx
// 0040c087  50                   push eax
// 0040c088  51                   push ecx
// 0040c089  b99c1d8800           mov ecx, 0x881d9c
// 0040c08e  e88d9cffff           call 0x405d20
// 0040c093  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp