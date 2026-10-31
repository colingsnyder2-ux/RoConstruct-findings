// roc 2009-12 00477690  unit: VCContent::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00477690
//
// 00477690  8b442418             mov eax, dword ptr [esp + 0x18]
// 00477694  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00477698  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047769c  50                   push eax
// 0047769d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004776a1  51                   push ecx
// 004776a2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004776a6  52                   push edx
// 004776a7  50                   push eax
// 004776a8  51                   push ecx
// 004776a9  b9b0beb000           mov ecx, 0xb0beb0
// 004776ae  e81df7f8ff           call 0x406dd0
// 004776b3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp