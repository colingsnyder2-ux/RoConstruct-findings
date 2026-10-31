// roc 2009-12 004776c0  unit: VCContent::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004776c0
//
// 004776c0  8b0dbcbeb000         mov ecx, dword ptr [0xb0bebc]
// 004776c6  33c0                 xor eax, eax
// 004776c8  85c9                 test ecx, ecx
// 004776ca  7408                 je 0x4776d4
// 004776cc  3905c4beb000         cmp dword ptr [0xb0bec4], eax
// 004776d2  7515                 jne 0x4776e9
// 004776d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004776d8  50                   push eax
// 004776d9  b9b0beb000           mov ecx, 0xb0beb0
// 004776de  e84df4f8ff           call 0x406b30
// 004776e3  8b0dbcbeb000         mov ecx, dword ptr [0xb0bebc]
// 004776e9  85c9                 test ecx, ecx
// 004776eb  742b                 je 0x477718
// 004776ed  8b442424             mov eax, dword ptr [esp + 0x24]
// 004776f1  8b11                 mov edx, dword ptr [ecx]
// 004776f3  50                   push eax
// 004776f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004776f8  50                   push eax
// 004776f9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004776fd  50                   push eax
// 004776fe  8b442424             mov eax, dword ptr [esp + 0x24]
// 00477702  50                   push eax
// 00477703  8b442424             mov eax, dword ptr [esp + 0x24]
// 00477707  50                   push eax
// 00477708  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047770c  50                   push eax
// 0047770d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00477711  50                   push eax
// 00477712  51                   push ecx
// 00477713  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00477716  ffd1                 call ecx
// 00477718  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp