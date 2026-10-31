// roc 2007-03 00413360  unit: seg_00410000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00413360
//
// 00413360  56                   push esi
// 00413361  8bf1                 mov esi, ecx
// 00413363  c706585f7800         mov dword ptr [esi], 0x785f58
// 00413369  c74604345f7800       mov dword ptr [esi + 4], 0x785f34
// 00413370  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00413377  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 0041337d  8b01                 mov eax, dword ptr [ecx]
// 0041337f  8b5008               mov edx, dword ptr [eax + 8]
// 00413382  ffd2                 call edx
// 00413384  8d4e0c               lea ecx, [esi + 0xc]
// 00413387  ff158ce77700         call dword ptr [0x77e78c]
// 0041338d  f644240801           test byte ptr [esp + 8], 1
// 00413392  7409                 je 0x41339d
// 00413394  56                   push esi
// 00413395  e856ad2000           call 0x61e0f0
// 0041339a  83c404               add esp, 4
// 0041339d  8bc6                 mov eax, esi
// 0041339f  5e                   pop esi
// 004133a0  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CComObject@VCContent@@@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp