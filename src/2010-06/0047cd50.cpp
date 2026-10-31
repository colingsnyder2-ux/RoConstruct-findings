// roc 2010-06 0047cd50  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cd50
//
// 0047cd50  56                   push esi
// 0047cd51  8bf1                 mov esi, ecx
// 0047cd53  c706ac2ca100         mov dword ptr [esi], 0xa12cac
// 0047cd59  c74604882ca100       mov dword ptr [esi + 4], 0xa12c88
// 0047cd60  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 0047cd67  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 0047cd6d  8b01                 mov eax, dword ptr [ecx]
// 0047cd6f  8b5008               mov edx, dword ptr [eax + 8]
// 0047cd72  ffd2                 call edx
// 0047cd74  8d4e0c               lea ecx, [esi + 0xc]
// 0047cd77  ff1550a49e00         call dword ptr [0x9ea450]
// 0047cd7d  f644240801           test byte ptr [esp + 8], 1
// 0047cd82  7409                 je 0x47cd8d
// 0047cd84  56                   push esi
// 0047cd85  e810ac3200           call 0x7a799a
// 0047cd8a  83c404               add esp, 4
// 0047cd8d  8bc6                 mov eax, esi
// 0047cd8f  5e                   pop esi
// 0047cd90  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp