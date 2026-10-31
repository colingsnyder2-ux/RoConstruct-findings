// roc 2009-06 00407a70  unit: VCApp::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407a70
//
// 00407a70  8b442418             mov eax, dword ptr [esp + 0x18]
// 00407a74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00407a78  8b542410             mov edx, dword ptr [esp + 0x10]
// 00407a7c  50                   push eax
// 00407a7d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00407a81  51                   push ecx
// 00407a82  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00407a86  52                   push edx
// 00407a87  50                   push eax
// 00407a88  51                   push ecx
// 00407a89  b9d0ba9d00           mov ecx, 0x9dbad0
// 00407a8e  e84df6ffff           call 0x4070e0
// 00407a93  c21800               ret 0x18
// copied from an identical function in another client (function ?GetIDsOfNames@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp