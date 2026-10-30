// from server: 100% by auto
// roc 2011-06 0084aa70  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084aa70
//
// 0084aa70  56                   push esi
// 0084aa71  8bf1                 mov esi, ecx
// 0084aa73  e86a1e1800           call 0x9cc8e2
// 0084aa78  c786ec00000000000000 mov dword ptr [esi + 0xec], 0
// 0084aa82  c706fc75ac00         mov dword ptr [esi], 0xac75fc
// 0084aa88  8bc6                 mov eax, esi
// 0084aa8a  5e                   pop esi
// 0084aa8b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCMDIFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
