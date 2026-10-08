// roc 2010-06 007c8f50  unit: CXTPCommandBarKeyboardTip  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8f50
//
// 007c8f50  56                   push esi
// 007c8f51  8bf1                 mov esi, ecx
// 007c8f53  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007c8f56  81c1a8000000         add ecx, 0xa8
// 007c8f5c  e85f4affff           call 0x7bd9c0
// 007c8f61  8b4674               mov eax, dword ptr [esi + 0x74]
// 007c8f64  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 007c8f6b  5e                   pop esi
// 007c8f6c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ResetUsageData@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
