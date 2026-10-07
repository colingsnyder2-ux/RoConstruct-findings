// roc 2008-06 006e1980  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1980
//
// 006e1980  56                   push esi
// 006e1981  8bf1                 mov esi, ecx
// 006e1983  e8dca90d00           call 0x7bc364
// 006e1988  c786ec00000000000000 mov dword ptr [esi + 0xec], 0
// 006e1992  c706dc618500         mov dword ptr [esi], 0x8561dc
// 006e1998  8bc6                 mov eax, esi
// 006e199a  5e                   pop esi
// 006e199b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCMDIFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
