// roc 2009-06 00407aa0  unit: VCApp::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407aa0
//
// 00407aa0  8b0ddcba9d00         mov ecx, dword ptr [0x9dbadc]
// 00407aa6  33c0                 xor eax, eax
// 00407aa8  85c9                 test ecx, ecx
// 00407aaa  7408                 je 0x407ab4
// 00407aac  3905e4ba9d00         cmp dword ptr [0x9dbae4], eax
// 00407ab2  7515                 jne 0x407ac9
// 00407ab4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00407ab8  50                   push eax
// 00407ab9  b9d0ba9d00           mov ecx, 0x9dbad0
// 00407abe  e87df3ffff           call 0x406e40
// 00407ac3  8b0ddcba9d00         mov ecx, dword ptr [0x9dbadc]
// 00407ac9  85c9                 test ecx, ecx
// 00407acb  742b                 je 0x407af8
// 00407acd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407ad1  8b11                 mov edx, dword ptr [ecx]
// 00407ad3  50                   push eax
// 00407ad4  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407ad8  50                   push eax
// 00407ad9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407add  50                   push eax
// 00407ade  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407ae2  50                   push eax
// 00407ae3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407ae7  50                   push eax
// 00407ae8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00407aec  50                   push eax
// 00407aed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00407af1  50                   push eax
// 00407af2  51                   push ecx
// 00407af3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00407af6  ffd1                 call ecx
// 00407af8  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp