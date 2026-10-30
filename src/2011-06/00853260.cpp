// roc 2011-06 00853260  unit: CXTPControlColorSelector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853260
//
// 00853260  56                   push esi
// 00853261  8bf1                 mov esi, ecx
// 00853263  e8c8e20400           call 0x8a1530
// 00853268  c706048aac00         mov dword ptr [esi], 0xac8a04
// 0085326e  c74620a489ac00       mov dword ptr [esi + 0x20], 0xac89a4
// 00853275  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 0085327f  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 00853289  8bc6                 mov eax, esi
// 0085328b  5e                   pop esi
// 0085328c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CControlExpandButton@CXTPPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
