// from server: 100% by auto
// roc 2007-08 0066aaf0  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066aaf0
//
// 0066aaf0  56                   push esi
// 0066aaf1  8bf1                 mov esi, ecx
// 0066aaf3  e82257fcff           call 0x63021a
// 0066aaf8  c786d400000000000000 mov dword ptr [esi + 0xd4], 0
// 0066ab02  c7069ca87c00         mov dword ptr [esi], 0x7ca89c
// 0066ab08  8bc6                 mov eax, esi
// 0066ab0a  5e                   pop esi
// 0066ab0b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
