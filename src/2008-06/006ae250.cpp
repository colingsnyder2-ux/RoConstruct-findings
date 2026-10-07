// roc 2008-06 006ae250  unit: CXTPPaintManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae250
//
// 006ae250  8b0d60e09700         mov ecx, dword ptr [0x97e060]
// 006ae256  85c9                 test ecx, ecx
// 006ae258  7405                 je 0x6ae25f
// 006ae25a  e88529ffff           call 0x6a0be4
// 006ae25f  c70560e0970000000000 mov dword ptr [0x97e060], 0
// 006ae269  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?Done@CXTPPaintManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
