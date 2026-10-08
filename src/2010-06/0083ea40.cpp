// roc 2010-06 0083ea40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083ea40
//
// 0083ea40  56                   push esi
// 0083ea41  8bf1                 mov esi, ecx
// 0083ea43  8b4660               mov eax, dword ptr [esi + 0x60]
// 0083ea46  85c0                 test eax, eax
// 0083ea48  740b                 je 0x83ea55
// 0083ea4a  0598010000           add eax, 0x198
// 0083ea4f  50                   push eax
// 0083ea50  e84b53f7ff           call 0x7b3da0
// 0083ea55  8bce                 mov ecx, esi
// 0083ea57  5e                   pop esi
// 0083ea58  e9ff99f6ff           jmp 0x7a845c
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnDestroy@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
