// roc 2007-03 004134c0  unit: seg_00410000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004134c0
//
// 004134c0  8b0d8c1c8800         mov ecx, dword ptr [0x881c8c]
// 004134c6  33c0                 xor eax, eax
// 004134c8  85c9                 test ecx, ecx
// 004134ca  7408                 je 0x4134d4
// 004134cc  3905941c8800         cmp dword ptr [0x881c94], eax
// 004134d2  7515                 jne 0x4134e9
// 004134d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004134d8  50                   push eax
// 004134d9  b9801c8800           mov ecx, 0x881c80
// 004134de  e80d20ffff           call 0x4054f0
// 004134e3  8b0d8c1c8800         mov ecx, dword ptr [0x881c8c]
// 004134e9  85c9                 test ecx, ecx
// 004134eb  742b                 je 0x413518
// 004134ed  8b442424             mov eax, dword ptr [esp + 0x24]
// 004134f1  8b11                 mov edx, dword ptr [ecx]
// 004134f3  50                   push eax
// 004134f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004134f8  50                   push eax
// 004134f9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004134fd  50                   push eax
// 004134fe  8b442424             mov eax, dword ptr [esp + 0x24]
// 00413502  50                   push eax
// 00413503  8b442424             mov eax, dword ptr [esp + 0x24]
// 00413507  50                   push eax
// 00413508  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041350c  50                   push eax
// 0041350d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00413511  50                   push eax
// 00413512  51                   push ecx
// 00413513  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00413516  ffd1                 call ecx
// 00413518  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp