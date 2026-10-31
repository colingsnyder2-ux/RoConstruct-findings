// roc 2007-03 004176e0  unit: seg_00410000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004176e0
//
// 004176e0  8b0d1c238800         mov ecx, dword ptr [0x88231c]
// 004176e6  33c0                 xor eax, eax
// 004176e8  85c9                 test ecx, ecx
// 004176ea  7408                 je 0x4176f4
// 004176ec  390524238800         cmp dword ptr [0x882324], eax
// 004176f2  7515                 jne 0x417709
// 004176f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004176f8  50                   push eax
// 004176f9  b910238800           mov ecx, 0x882310
// 004176fe  e8edddfeff           call 0x4054f0
// 00417703  8b0d1c238800         mov ecx, dword ptr [0x88231c]
// 00417709  85c9                 test ecx, ecx
// 0041770b  742b                 je 0x417738
// 0041770d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00417711  8b11                 mov edx, dword ptr [ecx]
// 00417713  50                   push eax
// 00417714  8b442424             mov eax, dword ptr [esp + 0x24]
// 00417718  50                   push eax
// 00417719  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041771d  50                   push eax
// 0041771e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00417722  50                   push eax
// 00417723  8b442424             mov eax, dword ptr [esp + 0x24]
// 00417727  50                   push eax
// 00417728  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041772c  50                   push eax
// 0041772d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00417731  50                   push eax
// 00417732  51                   push ecx
// 00417733  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00417736  ffd1                 call ecx
// 00417738  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp