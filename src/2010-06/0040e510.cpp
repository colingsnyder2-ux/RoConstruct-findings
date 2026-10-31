// roc 2010-06 0040e510  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e510
//
// 0040e510  56                   push esi
// 0040e511  8bf1                 mov esi, ecx
// 0040e513  8d4e08               lea ecx, [esi + 8]
// 0040e516  c706d81da000         mov dword ptr [esi], 0xa01dd8
// 0040e51c  c74604c01da000       mov dword ptr [esi + 4], 0xa01dc0
// 0040e523  c7019c1da000         mov dword ptr [ecx], 0xa01d9c
// 0040e529  c746146c1da000       mov dword ptr [esi + 0x14], 0xa01d6c
// 0040e530  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040e537  e894f3ffff           call 0x40d8d0
// 0040e53c  f644240801           test byte ptr [esp + 8], 1
// 0040e541  7409                 je 0x40e54c
// 0040e543  56                   push esi
// 0040e544  e851943900           call 0x7a799a
// 0040e549  83c404               add esp, 4
// 0040e54c  8bc6                 mov eax, esi
// 0040e54e  5e                   pop esi
// 0040e54f  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObjectNoLock@VCBrowserViewExternal@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_king_originala_browser_dispatch_4935761f6beb402b.cpp