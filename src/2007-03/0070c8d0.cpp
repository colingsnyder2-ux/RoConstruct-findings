// roc 2007-03 0070c8d0  unit: seg_00700000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070c8d0
//
// 0070c8d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070c8d4  8b4004               mov eax, dword ptr [eax + 4]
// 0070c8d7  85c0                 test eax, eax
// 0070c8d9  56                   push esi
// 0070c8da  741f                 je 0x70c8fb
// 0070c8dc  8b11                 mov edx, dword ptr [ecx]
// 0070c8de  50                   push eax
// 0070c8df  8b4224               mov eax, dword ptr [edx + 0x24]
// 0070c8e2  ffd0                 call eax
// 0070c8e4  8bf0                 mov esi, eax
// 0070c8e6  56                   push esi
// 0070c8e7  8d4c2410             lea ecx, [esp + 0x10]
// 0070c8eb  51                   push ecx
// 0070c8ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070c8f0  e82524f1ff           call 0x61ed1a
// 0070c8f5  8bc6                 mov eax, esi
// 0070c8f7  5e                   pop esi
// 0070c8f8  c21800               ret 0x18
// 0070c8fb  8b717c               mov esi, dword ptr [ecx + 0x7c]
// 0070c8fe  83feff               cmp esi, -1
// 0070c901  7503                 jne 0x70c906
// 0070c903  8b7178               mov esi, dword ptr [ecx + 0x78]
// 0070c906  56                   push esi
// 0070c907  8d4c2410             lea ecx, [esp + 0x10]
// 0070c90b  51                   push ecx
// 0070c90c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070c910  e80524f1ff           call 0x61ed1a
// 0070c915  8bc6                 mov eax, esi
// 0070c917  5e                   pop esi
// 0070c918  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSet@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
