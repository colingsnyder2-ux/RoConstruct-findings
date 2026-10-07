// roc 2012-06 009c2f20  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2f20
//
// 009c2f20  56                   push esi
// 009c2f21  8bf1                 mov esi, ecx
// 009c2f23  e874690d00           call 0xa9989c
// 009c2f28  c786ec00000000000000 mov dword ptr [esi + 0xec], 0
// 009c2f32  c706dc2cc100         mov dword ptr [esi], 0xc12cdc
// 009c2f38  8bc6                 mov eax, esi
// 009c2f3a  5e                   pop esi
// 009c2f3b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCMDIFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
