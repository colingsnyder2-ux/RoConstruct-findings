// roc 2007-08 0066ab40  unit: CBrowserFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ab40
//
// 0066ab40  56                   push esi
// 0066ab41  8bf1                 mov esi, ecx
// 0066ab43  e858db0c00           call 0x7386a0
// 0066ab48  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 0066ab52  c7061caa7c00         mov dword ptr [esi], 0x7caa1c
// 0066ab58  8bc6                 mov eax, esi
// 0066ab5a  5e                   pop esi
// 0066ab5b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCMDIFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
