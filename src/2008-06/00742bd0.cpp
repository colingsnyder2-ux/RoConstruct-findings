// roc 2008-06 00742bd0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742bd0
//
// 00742bd0  56                   push esi
// 00742bd1  8bf1                 mov esi, ecx
// 00742bd3  e83849f6ff           call 0x6a7510
// 00742bd8  c706d4378600         mov dword ptr [esi], 0x8637d4
// 00742bde  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00742be5  8bc6                 mov eax, esi
// 00742be7  5e                   pop esi
// 00742be8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ??0CXTPControlEditCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
