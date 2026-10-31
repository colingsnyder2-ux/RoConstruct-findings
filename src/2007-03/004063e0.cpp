// roc 2007-03 004063e0  unit: seg_00400000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004063e0
//
// 004063e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004063e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004063e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004063ec  50                   push eax
// 004063ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 004063f1  51                   push ecx
// 004063f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004063f6  52                   push edx
// 004063f7  50                   push eax
// 004063f8  51                   push ecx
// 004063f9  b9e4fd8700           mov ecx, 0x87fde4
// 004063fe  e83dfaffff           call 0x405e40
// 00406403  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp