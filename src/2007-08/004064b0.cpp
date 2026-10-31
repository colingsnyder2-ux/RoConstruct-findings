// roc 2007-08 004064b0  unit: VCWorkspace::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004064b0
//
// 004064b0  8b0df00d8800         mov ecx, dword ptr [0x880df0]
// 004064b6  33c0                 xor eax, eax
// 004064b8  85c9                 test ecx, ecx
// 004064ba  7408                 je 0x4064c4
// 004064bc  3905f80d8800         cmp dword ptr [0x880df8], eax
// 004064c2  7515                 jne 0x4064d9
// 004064c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004064c8  50                   push eax
// 004064c9  b9e40d8800           mov ecx, 0x880de4
// 004064ce  e81df1ffff           call 0x4055f0
// 004064d3  8b0df00d8800         mov ecx, dword ptr [0x880df0]
// 004064d9  85c9                 test ecx, ecx
// 004064db  742b                 je 0x406508
// 004064dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004064e1  8b11                 mov edx, dword ptr [ecx]
// 004064e3  50                   push eax
// 004064e4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004064e8  50                   push eax
// 004064e9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004064ed  50                   push eax
// 004064ee  8b442424             mov eax, dword ptr [esp + 0x24]
// 004064f2  50                   push eax
// 004064f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004064f7  50                   push eax
// 004064f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004064fc  50                   push eax
// 004064fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00406501  50                   push eax
// 00406502  51                   push ecx
// 00406503  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00406506  ffd1                 call ecx
// 00406508  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp