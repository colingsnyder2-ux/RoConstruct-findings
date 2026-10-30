// from server: 100% by auto
// roc 2008-06 006e1960  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1960
//
// 006e1960  56                   push esi
// 006e1961  8bf1                 mov esi, ecx
// 006e1963  e8d6f2fbff           call 0x6a0c3e
// 006e1968  c786e800000000000000 mov dword ptr [esi + 0xe8], 0
// 006e1972  c7063c608500         mov dword ptr [esi], 0x85603c
// 006e1978  8bc6                 mov eax, esi
// 006e197a  5e                   pop esi
// 006e197b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
