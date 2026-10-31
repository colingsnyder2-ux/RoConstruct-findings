// roc 2009-06 0046e170  unit: VCContent::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046e170
//
// 0046e170  8b0d886f9e00         mov ecx, dword ptr [0x9e6f88]
// 0046e176  33c0                 xor eax, eax
// 0046e178  85c9                 test ecx, ecx
// 0046e17a  7408                 je 0x46e184
// 0046e17c  3905906f9e00         cmp dword ptr [0x9e6f90], eax
// 0046e182  7515                 jne 0x46e199
// 0046e184  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046e188  50                   push eax
// 0046e189  b97c6f9e00           mov ecx, 0x9e6f7c
// 0046e18e  e8ad8cf9ff           call 0x406e40
// 0046e193  8b0d886f9e00         mov ecx, dword ptr [0x9e6f88]
// 0046e199  85c9                 test ecx, ecx
// 0046e19b  742b                 je 0x46e1c8
// 0046e19d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046e1a1  8b11                 mov edx, dword ptr [ecx]
// 0046e1a3  50                   push eax
// 0046e1a4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046e1a8  50                   push eax
// 0046e1a9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046e1ad  50                   push eax
// 0046e1ae  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046e1b2  50                   push eax
// 0046e1b3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046e1b7  50                   push eax
// 0046e1b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046e1bc  50                   push eax
// 0046e1bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046e1c1  50                   push eax
// 0046e1c2  51                   push ecx
// 0046e1c3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0046e1c6  ffd1                 call ecx
// 0046e1c8  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp