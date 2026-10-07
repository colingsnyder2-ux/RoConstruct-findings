// roc 2011-06 0084aa50  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084aa50
//
// 0084aa50  56                   push esi
// 0084aa51  8bf1                 mov esi, ecx
// 0084aa53  e8b2fbfbff           call 0x80a60a
// 0084aa58  c786e800000000000000 mov dword ptr [esi + 0xe8], 0
// 0084aa62  c7065c74ac00         mov dword ptr [esi], 0xac745c
// 0084aa68  8bc6                 mov eax, esi
// 0084aa6a  5e                   pop esi
// 0084aa6b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
