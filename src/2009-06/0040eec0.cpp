// roc 2009-06 0040eec0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040eec0
//
// 0040eec0  8b0d58e69d00         mov ecx, dword ptr [0x9de658]
// 0040eec6  33c0                 xor eax, eax
// 0040eec8  85c9                 test ecx, ecx
// 0040eeca  7408                 je 0x40eed4
// 0040eecc  390560e69d00         cmp dword ptr [0x9de660], eax
// 0040eed2  7515                 jne 0x40eee9
// 0040eed4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040eed8  50                   push eax
// 0040eed9  b94ce69d00           mov ecx, 0x9de64c
// 0040eede  e85d7fffff           call 0x406e40
// 0040eee3  8b0d58e69d00         mov ecx, dword ptr [0x9de658]
// 0040eee9  85c9                 test ecx, ecx
// 0040eeeb  742b                 je 0x40ef18
// 0040eeed  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040eef1  8b11                 mov edx, dword ptr [ecx]
// 0040eef3  50                   push eax
// 0040eef4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040eef8  50                   push eax
// 0040eef9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040eefd  50                   push eax
// 0040eefe  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ef02  50                   push eax
// 0040ef03  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ef07  50                   push eax
// 0040ef08  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ef0c  50                   push eax
// 0040ef0d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ef11  50                   push eax
// 0040ef12  51                   push ecx
// 0040ef13  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040ef16  ffd1                 call ecx
// 0040ef18  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp