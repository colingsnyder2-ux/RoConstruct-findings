// roc 2009-06 0044f9e0  unit: VCWorkspace::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044f9e0
//
// 0044f9e0  8b0d50529e00         mov ecx, dword ptr [0x9e5250]
// 0044f9e6  33c0                 xor eax, eax
// 0044f9e8  85c9                 test ecx, ecx
// 0044f9ea  7408                 je 0x44f9f4
// 0044f9ec  390558529e00         cmp dword ptr [0x9e5258], eax
// 0044f9f2  7515                 jne 0x44fa09
// 0044f9f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f9f8  50                   push eax
// 0044f9f9  b944529e00           mov ecx, 0x9e5244
// 0044f9fe  e83d74fbff           call 0x406e40
// 0044fa03  8b0d50529e00         mov ecx, dword ptr [0x9e5250]
// 0044fa09  85c9                 test ecx, ecx
// 0044fa0b  742b                 je 0x44fa38
// 0044fa0d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044fa11  8b11                 mov edx, dword ptr [ecx]
// 0044fa13  50                   push eax
// 0044fa14  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044fa18  50                   push eax
// 0044fa19  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044fa1d  50                   push eax
// 0044fa1e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044fa22  50                   push eax
// 0044fa23  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044fa27  50                   push eax
// 0044fa28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044fa2c  50                   push eax
// 0044fa2d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044fa31  50                   push eax
// 0044fa32  51                   push ecx
// 0044fa33  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0044fa36  ffd1                 call ecx
// 0044fa38  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp