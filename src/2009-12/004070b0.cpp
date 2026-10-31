// roc 2009-12 004070b0  unit: VCApp::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004070b0
//
// 004070b0  8b0ddcfaaf00         mov ecx, dword ptr [0xaffadc]
// 004070b6  33c0                 xor eax, eax
// 004070b8  85c9                 test ecx, ecx
// 004070ba  7408                 je 0x4070c4
// 004070bc  3905e4faaf00         cmp dword ptr [0xaffae4], eax
// 004070c2  7515                 jne 0x4070d9
// 004070c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004070c8  50                   push eax
// 004070c9  b9d0faaf00           mov ecx, 0xaffad0
// 004070ce  e85dfaffff           call 0x406b30
// 004070d3  8b0ddcfaaf00         mov ecx, dword ptr [0xaffadc]
// 004070d9  85c9                 test ecx, ecx
// 004070db  742b                 je 0x407108
// 004070dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004070e1  8b11                 mov edx, dword ptr [ecx]
// 004070e3  50                   push eax
// 004070e4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004070e8  50                   push eax
// 004070e9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004070ed  50                   push eax
// 004070ee  8b442424             mov eax, dword ptr [esp + 0x24]
// 004070f2  50                   push eax
// 004070f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004070f7  50                   push eax
// 004070f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004070fc  50                   push eax
// 004070fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00407101  50                   push eax
// 00407102  51                   push ecx
// 00407103  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00407106  ffd1                 call ecx
// 00407108  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp