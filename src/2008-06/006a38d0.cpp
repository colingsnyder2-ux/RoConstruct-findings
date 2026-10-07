// roc 2008-06 006a38d0  unit: CXTPCommandBarKeyboardTip  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a38d0
//
// 006a38d0  56                   push esi
// 006a38d1  8bf1                 mov esi, ecx
// 006a38d3  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006a38d6  81c1a8000000         add ecx, 0xa8
// 006a38dc  e84ff8ffff           call 0x6a3130
// 006a38e1  8b4674               mov eax, dword ptr [esi + 0x74]
// 006a38e4  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006a38eb  5e                   pop esi
// 006a38ec  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ResetUsageData@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
