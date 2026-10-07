// roc 2011-06 008f50a0  unit: CXTPTabPaintManager::CColorSetDefault  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f50a0
//
// 008f50a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f50a4  8b4004               mov eax, dword ptr [eax + 4]
// 008f50a7  56                   push esi
// 008f50a8  85c0                 test eax, eax
// 008f50aa  741f                 je 0x8f50cb
// 008f50ac  8b11                 mov edx, dword ptr [ecx]
// 008f50ae  50                   push eax
// 008f50af  8b4224               mov eax, dword ptr [edx + 0x24]
// 008f50b2  ffd0                 call eax
// 008f50b4  8bf0                 mov esi, eax
// 008f50b6  56                   push esi
// 008f50b7  8d4c2410             lea ecx, [esp + 0x10]
// 008f50bb  51                   push ecx
// 008f50bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f50c0  e85b5df1ff           call 0x80ae20
// 008f50c5  8bc6                 mov eax, esi
// 008f50c7  5e                   pop esi
// 008f50c8  c21800               ret 0x18
// 008f50cb  8b717c               mov esi, dword ptr [ecx + 0x7c]
// 008f50ce  83feff               cmp esi, -1
// 008f50d1  7503                 jne 0x8f50d6
// 008f50d3  8b7178               mov esi, dword ptr [ecx + 0x78]
// 008f50d6  56                   push esi
// 008f50d7  8d4c2410             lea ecx, [esp + 0x10]
// 008f50db  51                   push ecx
// 008f50dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f50e0  e83b5df1ff           call 0x80ae20
// 008f50e5  8bc6                 mov eax, esi
// 008f50e7  5e                   pop esi
// 008f50e8  c21800               ret 0x18
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CXTPTabPaintManagerColorSet@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
