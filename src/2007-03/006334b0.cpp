// roc 2007-03 006334b0  unit: seg_00630000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006334b0
//
// 006334b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006334b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006334b8  56                   push esi
// 006334b9  8b742408             mov esi, dword ptr [esp + 8]
// 006334bd  50                   push eax
// 006334be  51                   push ecx
// 006334bf  8d542414             lea edx, [esp + 0x14]
// 006334c3  52                   push edx
// 006334c4  8bce                 mov ecx, esi
// 006334c6  e82db9feff           call 0x61edf8
// 006334cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 006334cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006334d3  50                   push eax
// 006334d4  51                   push ecx
// 006334d5  8bce                 mov ecx, esi
// 006334d7  e816b9feff           call 0x61edf2
// 006334dc  5e                   pop esi
// 006334dd  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@VCPoint@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
