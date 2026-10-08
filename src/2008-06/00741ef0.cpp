// from server: 100% by auto
// roc 2008-06 00741ef0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741ef0
//
// 00741ef0  56                   push esi
// 00741ef1  8bf1                 mov esi, ecx
// 00741ef3  8b4660               mov eax, dword ptr [esi + 0x60]
// 00741ef6  85c0                 test eax, eax
// 00741ef8  740b                 je 0x741f05
// 00741efa  0598010000           add eax, 0x198
// 00741eff  50                   push eax
// 00741f00  e87b49f6ff           call 0x6a6880
// 00741f05  8bce                 mov ecx, esi
// 00741f07  5e                   pop esi
// 00741f08  e96ff1f5ff           jmp 0x6a107c
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnDestroy@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
