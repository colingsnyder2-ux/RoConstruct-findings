// roc 2011-06 0049c5b0  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049c5b0
//
// 0049c5b0  56                   push esi
// 0049c5b1  8bf1                 mov esi, ecx
// 0049c5b3  c7063c62a700         mov dword ptr [esi], 0xa7623c
// 0049c5b9  c746041862a700       mov dword ptr [esi + 4], 0xa76218
// 0049c5c0  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 0049c5c7  8b0db415cb00         mov ecx, dword ptr [0xcb15b4]
// 0049c5cd  8b01                 mov eax, dword ptr [ecx]
// 0049c5cf  8b5008               mov edx, dword ptr [eax + 8]
// 0049c5d2  ffd2                 call edx
// 0049c5d4  8d4e0c               lea ecx, [esi + 0xc]
// 0049c5d7  ff153c04a400         call dword ptr [0xa4043c]
// 0049c5dd  f644240801           test byte ptr [esp + 8], 1
// 0049c5e2  7409                 je 0x49c5ed
// 0049c5e4  56                   push esi
// 0049c5e5  e86eda3600           call 0x80a058
// 0049c5ea  83c404               add esp, 4
// 0049c5ed  8bc6                 mov eax, esi
// 0049c5ef  5e                   pop esi
// 0049c5f0  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp