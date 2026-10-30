// roc 2007-03 0062c1e0  unit: seg_00620000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062c1e0
//
// 0062c1e0  56                   push esi
// 0062c1e1  8bf1                 mov esi, ecx
// 0062c1e3  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0062c1e6  81c1a8000000         add ecx, 0xa8
// 0062c1ec  e8cff7ffff           call 0x62b9c0
// 0062c1f1  8b4674               mov eax, dword ptr [esi + 0x74]
// 0062c1f4  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 0062c1fb  5e                   pop esi
// 0062c1fc  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ResetUsageData@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
