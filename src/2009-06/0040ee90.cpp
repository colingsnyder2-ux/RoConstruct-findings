// roc 2009-06 0040ee90  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ee90
//
// 0040ee90  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040ee94  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040ee98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040ee9c  50                   push eax
// 0040ee9d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040eea1  51                   push ecx
// 0040eea2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040eea6  52                   push edx
// 0040eea7  50                   push eax
// 0040eea8  51                   push ecx
// 0040eea9  b94ce69d00           mov ecx, 0x9de64c
// 0040eeae  e82d82ffff           call 0x4070e0
// 0040eeb3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp