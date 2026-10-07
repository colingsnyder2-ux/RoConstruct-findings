// roc 2012-06 0098dd70  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098dd70
//
// 0098dd70  6a0c                 push 0xc
// 0098dd72  e8199bffff           call 0x987890
// 0098dd77  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0098dd7b  50                   push eax
// 0098dd7c  8d44240c             lea eax, [esp + 0xc]
// 0098dd80  50                   push eax
// 0098dd81  e82651ffff           call 0x982eac
// 0098dd86  c22400               ret 0x24
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?FillWorkspace@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
