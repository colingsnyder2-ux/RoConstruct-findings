// from server: 100% by auto
// roc 2008-06 006b44d0  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b44d0
//
// 006b44d0  6a0c                 push 0xc
// 006b44d2  e8999bffff           call 0x6ae070
// 006b44d7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b44db  50                   push eax
// 006b44dc  8d44240c             lea eax, [esp + 0xc]
// 006b44e0  50                   push eax
// 006b44e1  e878cefeff           call 0x6a135e
// 006b44e6  c22400               ret 0x24
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?FillWorkspace@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
