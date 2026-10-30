// roc 2009-12 00814e80  unit: CXTPCommandBarKeyboardTip  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814e80
//
// 00814e80  56                   push esi
// 00814e81  8bf1                 mov esi, ecx
// 00814e83  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00814e86  81c1a8000000         add ecx, 0xa8
// 00814e8c  e88f16feff           call 0x7f6520
// 00814e91  8b4674               mov eax, dword ptr [esi + 0x74]
// 00814e94  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 00814e9b  5e                   pop esi
// 00814e9c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ResetUsageData@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
