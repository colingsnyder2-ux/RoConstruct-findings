// roc 2007-03 00406410  unit: seg_00400000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00406410
//
// 00406410  8b0df0fd8700         mov ecx, dword ptr [0x87fdf0]
// 00406416  33c0                 xor eax, eax
// 00406418  85c9                 test ecx, ecx
// 0040641a  7408                 je 0x406424
// 0040641c  3905f8fd8700         cmp dword ptr [0x87fdf8], eax
// 00406422  7515                 jne 0x406439
// 00406424  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406428  50                   push eax
// 00406429  b9e4fd8700           mov ecx, 0x87fde4
// 0040642e  e8bdf0ffff           call 0x4054f0
// 00406433  8b0df0fd8700         mov ecx, dword ptr [0x87fdf0]
// 00406439  85c9                 test ecx, ecx
// 0040643b  742b                 je 0x406468
// 0040643d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00406441  8b11                 mov edx, dword ptr [ecx]
// 00406443  50                   push eax
// 00406444  8b442424             mov eax, dword ptr [esp + 0x24]
// 00406448  50                   push eax
// 00406449  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040644d  50                   push eax
// 0040644e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00406452  50                   push eax
// 00406453  8b442424             mov eax, dword ptr [esp + 0x24]
// 00406457  50                   push eax
// 00406458  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040645c  50                   push eax
// 0040645d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00406461  50                   push eax
// 00406462  51                   push ecx
// 00406463  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00406466  ffd1                 call ecx
// 00406468  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp