// roc 2007-08 0040c0a0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c0a0
//
// 0040c0a0  8b0da81d8800         mov ecx, dword ptr [0x881da8]
// 0040c0a6  33c0                 xor eax, eax
// 0040c0a8  85c9                 test ecx, ecx
// 0040c0aa  7408                 je 0x40c0b4
// 0040c0ac  3905b01d8800         cmp dword ptr [0x881db0], eax
// 0040c0b2  7515                 jne 0x40c0c9
// 0040c0b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040c0b8  50                   push eax
// 0040c0b9  b99c1d8800           mov ecx, 0x881d9c
// 0040c0be  e82d95ffff           call 0x4055f0
// 0040c0c3  8b0da81d8800         mov ecx, dword ptr [0x881da8]
// 0040c0c9  85c9                 test ecx, ecx
// 0040c0cb  742b                 je 0x40c0f8
// 0040c0cd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040c0d1  8b11                 mov edx, dword ptr [ecx]
// 0040c0d3  50                   push eax
// 0040c0d4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040c0d8  50                   push eax
// 0040c0d9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040c0dd  50                   push eax
// 0040c0de  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040c0e2  50                   push eax
// 0040c0e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040c0e7  50                   push eax
// 0040c0e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040c0ec  50                   push eax
// 0040c0ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040c0f1  50                   push eax
// 0040c0f2  51                   push ecx
// 0040c0f3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040c0f6  ffd1                 call ecx
// 0040c0f8  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp