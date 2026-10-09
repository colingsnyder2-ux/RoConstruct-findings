// roc 2009-12 0088b440  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b440
//
// 0088b440  56                   push esi
// 0088b441  8bf1                 mov esi, ecx
// 0088b443  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088b446  85c0                 test eax, eax
// 0088b448  740b                 je 0x88b455
// 0088b44a  0598010000           add eax, 0x198
// 0088b44f  50                   push eax
// 0088b450  e87bdbf6ff           call 0x7f8fd0
// 0088b455  8bce                 mov ecx, esi
// 0088b457  5e                   pop esi
// 0088b458  e9bf8ef6ff           jmp 0x7f431c
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnDestroy@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
