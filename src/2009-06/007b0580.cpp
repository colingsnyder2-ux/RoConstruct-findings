// roc 2009-06 007b0580  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0580
//
// 007b0580  56                   push esi
// 007b0581  8bf1                 mov esi, ecx
// 007b0583  8b4660               mov eax, dword ptr [esi + 0x60]
// 007b0586  85c0                 test eax, eax
// 007b0588  740b                 je 0x7b0595
// 007b058a  0598010000           add eax, 0x198
// 007b058f  50                   push eax
// 007b0590  e82ba8f6ff           call 0x71adc0
// 007b0595  8bce                 mov ecx, esi
// 007b0597  5e                   pop esi
// 007b0598  e9518ff6ff           jmp 0x7194ee
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnDestroy@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
