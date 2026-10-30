// roc 2011-06 0089ba10  unit: CXTPControlEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ba10
//
// 0089ba10  56                   push esi
// 0089ba11  8bf1                 mov esi, ecx
// 0089ba13  8b4660               mov eax, dword ptr [esi + 0x60]
// 0089ba16  85c0                 test eax, eax
// 0089ba18  740b                 je 0x89ba25
// 0089ba1a  0598010000           add eax, 0x198
// 0089ba1f  50                   push eax
// 0089ba20  e8bba7f7ff           call 0x8161e0
// 0089ba25  8bce                 mov ecx, esi
// 0089ba27  5e                   pop esi
// 0089ba28  e9f3f0f6ff           jmp 0x80ab20
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnDestroy@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
