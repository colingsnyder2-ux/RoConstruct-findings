// roc 2010-06 00459780  unit: VCWorkspace::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00459780
//
// 00459780  8b442418             mov eax, dword ptr [esp + 0x18]
// 00459784  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00459788  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045978c  50                   push eax
// 0045978d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00459791  51                   push ecx
// 00459792  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00459796  52                   push edx
// 00459797  50                   push eax
// 00459798  51                   push ecx
// 00459799  b9d02db800           mov ecx, 0xb82dd0
// 0045979e  e88dd7faff           call 0x406f30
// 004597a3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp