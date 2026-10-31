// roc 2010-06 0047d300  unit: VCContent::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047d300
//
// 0047d300  8b0d7458b800         mov ecx, dword ptr [0xb85874]
// 0047d306  33c0                 xor eax, eax
// 0047d308  85c9                 test ecx, ecx
// 0047d30a  7408                 je 0x47d314
// 0047d30c  39057c58b800         cmp dword ptr [0xb8587c], eax
// 0047d312  7515                 jne 0x47d329
// 0047d314  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047d318  50                   push eax
// 0047d319  b96858b800           mov ecx, 0xb85868
// 0047d31e  e80d97f8ff           call 0x406a30
// 0047d323  8b0d7458b800         mov ecx, dword ptr [0xb85874]
// 0047d329  85c9                 test ecx, ecx
// 0047d32b  742b                 je 0x47d358
// 0047d32d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047d331  8b11                 mov edx, dword ptr [ecx]
// 0047d333  50                   push eax
// 0047d334  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047d338  50                   push eax
// 0047d339  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047d33d  50                   push eax
// 0047d33e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047d342  50                   push eax
// 0047d343  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047d347  50                   push eax
// 0047d348  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047d34c  50                   push eax
// 0047d34d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047d351  50                   push eax
// 0047d352  51                   push ecx
// 0047d353  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0047d356  ffd1                 call ecx
// 0047d358  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp