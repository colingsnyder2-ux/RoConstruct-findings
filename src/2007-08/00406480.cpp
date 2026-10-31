// roc 2007-08 00406480  unit: VCWorkspace::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00406480
//
// 00406480  8b442418             mov eax, dword ptr [esp + 0x18]
// 00406484  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00406488  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040648c  50                   push eax
// 0040648d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406491  51                   push ecx
// 00406492  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406496  52                   push edx
// 00406497  50                   push eax
// 00406498  51                   push ecx
// 00406499  b9e40d8800           mov ecx, 0x880de4
// 0040649e  e87df8ffff           call 0x405d20
// 004064a3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp