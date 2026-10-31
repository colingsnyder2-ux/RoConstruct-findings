// roc 2010-06 0040f050  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f050
//
// 0040f050  8b0d40b7b700         mov ecx, dword ptr [0xb7b740]
// 0040f056  33c0                 xor eax, eax
// 0040f058  85c9                 test ecx, ecx
// 0040f05a  7408                 je 0x40f064
// 0040f05c  390548b7b700         cmp dword ptr [0xb7b748], eax
// 0040f062  7515                 jne 0x40f079
// 0040f064  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040f068  50                   push eax
// 0040f069  b934b7b700           mov ecx, 0xb7b734
// 0040f06e  e8bd79ffff           call 0x406a30
// 0040f073  8b0d40b7b700         mov ecx, dword ptr [0xb7b740]
// 0040f079  85c9                 test ecx, ecx
// 0040f07b  742b                 je 0x40f0a8
// 0040f07d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040f081  8b11                 mov edx, dword ptr [ecx]
// 0040f083  50                   push eax
// 0040f084  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040f088  50                   push eax
// 0040f089  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040f08d  50                   push eax
// 0040f08e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040f092  50                   push eax
// 0040f093  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040f097  50                   push eax
// 0040f098  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040f09c  50                   push eax
// 0040f09d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040f0a1  50                   push eax
// 0040f0a2  51                   push ecx
// 0040f0a3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040f0a6  ffd1                 call ecx
// 0040f0a8  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp