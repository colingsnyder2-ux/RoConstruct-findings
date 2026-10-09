// roc 2007-03 00656b20  unit: seg_00650000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00656b20
//
// 00656b20  56                   push esi
// 00656b21  8bf1                 mov esi, ecx
// 00656b23  e8807bfcff           call 0x61e6a8
// 00656b28  c786d400000000000000 mov dword ptr [esi + 0xd4], 0
// 00656b32  c706fc787c00         mov dword ptr [esi], 0x7c78fc
// 00656b38  8bc6                 mov eax, esi
// 00656b3a  5e                   pop esi
// 00656b3b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
