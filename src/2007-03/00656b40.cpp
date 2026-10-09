// roc 2007-03 00656b40  unit: seg_00650000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00656b40
//
// 00656b40  56                   push esi
// 00656b41  8bf1                 mov esi, ecx
// 00656b43  e8a4420e00           call 0x73adec
// 00656b48  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 00656b52  c7067c7a7c00         mov dword ptr [esi], 0x7c7a7c
// 00656b58  8bc6                 mov eax, esi
// 00656b5a  5e                   pop esi
// 00656b5b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCMDIFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
