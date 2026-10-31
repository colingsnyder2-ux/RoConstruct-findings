// roc 2010-06 004597b0  unit: VCWorkspace::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004597b0
//
// 004597b0  8b0ddc2db800         mov ecx, dword ptr [0xb82ddc]
// 004597b6  33c0                 xor eax, eax
// 004597b8  85c9                 test ecx, ecx
// 004597ba  7408                 je 0x4597c4
// 004597bc  3905e42db800         cmp dword ptr [0xb82de4], eax
// 004597c2  7515                 jne 0x4597d9
// 004597c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004597c8  50                   push eax
// 004597c9  b9d02db800           mov ecx, 0xb82dd0
// 004597ce  e85dd2faff           call 0x406a30
// 004597d3  8b0ddc2db800         mov ecx, dword ptr [0xb82ddc]
// 004597d9  85c9                 test ecx, ecx
// 004597db  742b                 je 0x459808
// 004597dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004597e1  8b11                 mov edx, dword ptr [ecx]
// 004597e3  50                   push eax
// 004597e4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004597e8  50                   push eax
// 004597e9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004597ed  50                   push eax
// 004597ee  8b442424             mov eax, dword ptr [esp + 0x24]
// 004597f2  50                   push eax
// 004597f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004597f7  50                   push eax
// 004597f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004597fc  50                   push eax
// 004597fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00459801  50                   push eax
// 00459802  51                   push ecx
// 00459803  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00459806  ffd1                 call ecx
// 00459808  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp