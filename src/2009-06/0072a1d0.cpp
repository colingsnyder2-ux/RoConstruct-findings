// roc 2009-06 0072a1d0  unit: CXTPCommandBarKeyboardTip  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072a1d0
//
// 0072a1d0  56                   push esi
// 0072a1d1  8bf1                 mov esi, ecx
// 0072a1d3  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0072a1d6  81c1a8000000         add ecx, 0xa8
// 0072a1dc  e89f840000           call 0x732680
// 0072a1e1  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072a1e4  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 0072a1eb  5e                   pop esi
// 0072a1ec  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ResetUsageData@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
