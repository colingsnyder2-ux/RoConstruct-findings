// roc 2009-12 00407080  unit: VCApp::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407080
//
// 00407080  8b442418             mov eax, dword ptr [esp + 0x18]
// 00407084  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00407088  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040708c  50                   push eax
// 0040708d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00407091  51                   push ecx
// 00407092  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00407096  52                   push edx
// 00407097  50                   push eax
// 00407098  51                   push ecx
// 00407099  b9d0faaf00           mov ecx, 0xaffad0
// 0040709e  e82dfdffff           call 0x406dd0
// 004070a3  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp