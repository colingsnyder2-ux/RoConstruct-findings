// roc 2009-12 0040e0d0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040e0d0
//
// 0040e0d0  56                   push esi
// 0040e0d1  8bf1                 mov esi, ecx
// 0040e0d3  8d4e08               lea ecx, [esi + 8]
// 0040e0d6  c70668119a00         mov dword ptr [esi], 0x9a1168
// 0040e0dc  c7460450119a00       mov dword ptr [esi + 4], 0x9a1150
// 0040e0e3  c7012c119a00         mov dword ptr [ecx], 0x9a112c
// 0040e0e9  c74614fc109a00       mov dword ptr [esi + 0x14], 0x9a10fc
// 0040e0f0  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040e0f7  e884f3ffff           call 0x40d480
// 0040e0fc  f644240801           test byte ptr [esp + 8], 1
// 0040e101  7409                 je 0x40e10c
// 0040e103  56                   push esi
// 0040e104  e851573e00           call 0x7f385a
// 0040e109  83c404               add esp, 4
// 0040e10c  8bc6                 mov eax, esi
// 0040e10e  5e                   pop esi
// 0040e10f  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObjectNoLock@VCBrowserViewExternal@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_king_originala_browser_dispatch_4935761f6beb402b.cpp