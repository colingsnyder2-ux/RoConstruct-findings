// roc 2007-08 00632ac0  unit: CXTPCommandBarKeyboardTip  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632ac0
//
// 00632ac0  56                   push esi
// 00632ac1  8bf1                 mov esi, ecx
// 00632ac3  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00632ac6  81c1a8000000         add ecx, 0xa8
// 00632acc  e81f520a00           call 0x6d7cf0
// 00632ad1  8b4674               mov eax, dword ptr [esi + 0x74]
// 00632ad4  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 00632adb  5e                   pop esi
// 00632adc  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?ResetUsageData@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
