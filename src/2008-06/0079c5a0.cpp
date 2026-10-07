// roc 2008-06 0079c5a0  unit: CXTPTabPaintManager::CColorSetDefault  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079c5a0
//
// 0079c5a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079c5a4  8b4004               mov eax, dword ptr [eax + 4]
// 0079c5a7  56                   push esi
// 0079c5a8  85c0                 test eax, eax
// 0079c5aa  741f                 je 0x79c5cb
// 0079c5ac  8b11                 mov edx, dword ptr [ecx]
// 0079c5ae  50                   push eax
// 0079c5af  8b4224               mov eax, dword ptr [edx + 0x24]
// 0079c5b2  ffd0                 call eax
// 0079c5b4  8bf0                 mov esi, eax
// 0079c5b6  56                   push esi
// 0079c5b7  8d4c2410             lea ecx, [esp + 0x10]
// 0079c5bb  51                   push ecx
// 0079c5bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079c5c0  e8994df0ff           call 0x6a135e
// 0079c5c5  8bc6                 mov eax, esi
// 0079c5c7  5e                   pop esi
// 0079c5c8  c21800               ret 0x18
// 0079c5cb  8b717c               mov esi, dword ptr [ecx + 0x7c]
// 0079c5ce  83feff               cmp esi, -1
// 0079c5d1  7503                 jne 0x79c5d6
// 0079c5d3  8b7178               mov esi, dword ptr [ecx + 0x78]
// 0079c5d6  56                   push esi
// 0079c5d7  8d4c2410             lea ecx, [esp + 0x10]
// 0079c5db  51                   push ecx
// 0079c5dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079c5e0  e8794df0ff           call 0x6a135e
// 0079c5e5  8bc6                 mov eax, esi
// 0079c5e7  5e                   pop esi
// 0079c5e8  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSet@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
