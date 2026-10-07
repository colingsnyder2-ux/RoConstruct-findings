// roc 2007-08 0067d830  unit: CXTPControlToolbars  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d830
//
// 0067d830  56                   push esi
// 0067d831  8bf1                 mov esi, ecx
// 0067d833  e828cc0400           call 0x6ca460
// 0067d838  c7064cdd7c00         mov dword ptr [esi], 0x7cdd4c
// 0067d83e  c74620ecdc7c00       mov dword ptr [esi + 0x20], 0x7cdcec
// 0067d845  8bc6                 mov eax, esi
// 0067d847  5e                   pop esi
// 0067d848  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlExt.cpp
