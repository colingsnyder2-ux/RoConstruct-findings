// roc 2007-08 0071b8b0  unit: CXTPTabPaintManager::CColorSetDefault  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b8b0
//
// 0071b8b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0071b8b4  8b4004               mov eax, dword ptr [eax + 4]
// 0071b8b7  85c0                 test eax, eax
// 0071b8b9  56                   push esi
// 0071b8ba  741f                 je 0x71b8db
// 0071b8bc  8b11                 mov edx, dword ptr [ecx]
// 0071b8be  50                   push eax
// 0071b8bf  8b4224               mov eax, dword ptr [edx + 0x24]
// 0071b8c2  ffd0                 call eax
// 0071b8c4  8bf0                 mov esi, eax
// 0071b8c6  56                   push esi
// 0071b8c7  8d4c2410             lea ecx, [esp + 0x10]
// 0071b8cb  51                   push ecx
// 0071b8cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071b8d0  e8db4ff1ff           call 0x6308b0
// 0071b8d5  8bc6                 mov eax, esi
// 0071b8d7  5e                   pop esi
// 0071b8d8  c21800               ret 0x18
// 0071b8db  8b717c               mov esi, dword ptr [ecx + 0x7c]
// 0071b8de  83feff               cmp esi, -1
// 0071b8e1  7503                 jne 0x71b8e6
// 0071b8e3  8b7178               mov esi, dword ptr [ecx + 0x78]
// 0071b8e6  56                   push esi
// 0071b8e7  8d4c2410             lea ecx, [esp + 0x10]
// 0071b8eb  51                   push ecx
// 0071b8ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071b8f0  e8bb4ff1ff           call 0x6308b0
// 0071b8f5  8bc6                 mov eax, esi
// 0071b8f7  5e                   pop esi
// 0071b8f8  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSet@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
