// roc 2009-12 008ebb10  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebb10
//
// 008ebb10  56                   push esi
// 008ebb11  8bf1                 mov esi, ecx
// 008ebb13  e84846faff           call 0x890160
// 008ebb18  c706ccd1a000         mov dword ptr [esi], 0xa0d1cc
// 008ebb1e  c746206cd1a000       mov dword ptr [esi + 0x20], 0xa0d16c
// 008ebb25  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 008ebb2f  8bc6                 mov eax, esi
// 008ebb31  5e                   pop esi
// 008ebb32  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
