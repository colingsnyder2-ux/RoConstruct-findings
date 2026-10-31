// roc 2009-06 0040e380  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e380
//
// 0040e380  56                   push esi
// 0040e381  8bf1                 mov esi, ecx
// 0040e383  8d4e08               lea ecx, [esi + 8]
// 0040e386  c70698e58a00         mov dword ptr [esi], 0x8ae598
// 0040e38c  c7460480e58a00       mov dword ptr [esi + 4], 0x8ae580
// 0040e393  c7015ce58a00         mov dword ptr [ecx], 0x8ae55c
// 0040e399  c746142ce58a00       mov dword ptr [esi + 0x14], 0x8ae52c
// 0040e3a0  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040e3a7  e874f3ffff           call 0x40d720
// 0040e3ac  f644240801           test byte ptr [esp + 8], 1
// 0040e3b1  7409                 je 0x40e3bc
// 0040e3b3  56                   push esi
// 0040e3b4  e879a63000           call 0x718a32
// 0040e3b9  83c404               add esp, 4
// 0040e3bc  8bc6                 mov eax, esi
// 0040e3be  5e                   pop esi
// 0040e3bf  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObjectNoLock@VCBrowserViewExternal@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_king_originala_browser_dispatch_4935761f6beb402b.cpp