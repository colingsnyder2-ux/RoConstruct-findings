// roc 2007-03 0040d960  unit: seg_00400000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040d960
//
// 0040d960  8b0de00e8800         mov ecx, dword ptr [0x880ee0]
// 0040d966  33c0                 xor eax, eax
// 0040d968  85c9                 test ecx, ecx
// 0040d96a  7408                 je 0x40d974
// 0040d96c  3905e80e8800         cmp dword ptr [0x880ee8], eax
// 0040d972  7515                 jne 0x40d989
// 0040d974  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040d978  50                   push eax
// 0040d979  b9d40e8800           mov ecx, 0x880ed4
// 0040d97e  e86d7bffff           call 0x4054f0
// 0040d983  8b0de00e8800         mov ecx, dword ptr [0x880ee0]
// 0040d989  85c9                 test ecx, ecx
// 0040d98b  742b                 je 0x40d9b8
// 0040d98d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040d991  8b11                 mov edx, dword ptr [ecx]
// 0040d993  50                   push eax
// 0040d994  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040d998  50                   push eax
// 0040d999  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040d99d  50                   push eax
// 0040d99e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040d9a2  50                   push eax
// 0040d9a3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040d9a7  50                   push eax
// 0040d9a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040d9ac  50                   push eax
// 0040d9ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040d9b1  50                   push eax
// 0040d9b2  51                   push ecx
// 0040d9b3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040d9b6  ffd1                 call ecx
// 0040d9b8  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp