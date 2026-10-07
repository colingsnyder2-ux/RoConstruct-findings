// roc 2007-08 00642f80  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00642f80
//
// 00642f80  6a0c                 push 0xc
// 00642f82  e8e99dffff           call 0x63cd70
// 00642f87  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00642f8b  50                   push eax
// 00642f8c  8d44240c             lea eax, [esp + 0xc]
// 00642f90  50                   push eax
// 00642f91  e81ad9feff           call 0x6308b0
// 00642f96  c22400               ret 0x24
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?FillWorkspace@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
