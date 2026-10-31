// roc 2007-03 0040a600  unit: seg_00400000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040a600
//
// 0040a600  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040a604  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040a608  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040a60c  50                   push eax
// 0040a60d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a611  51                   push ecx
// 0040a612  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a616  52                   push edx
// 0040a617  50                   push eax
// 0040a618  51                   push ecx
// 0040a619  b9f0078800           mov ecx, 0x8807f0
// 0040a61e  e81db8ffff           call 0x405e40
// 0040a623  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp