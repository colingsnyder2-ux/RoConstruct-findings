// roc 2008-06 0071fff0  unit: CXTPResourceManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071fff0
//
// 0071fff0  56                   push esi
// 0071fff1  8bf1                 mov esi, ecx
// 0071fff3  e848560200           call 0x745640
// 0071fff8  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 0071ffff  c7062c028600         mov dword ptr [esi], 0x86022c
// 00720005  c74620cc018600       mov dword ptr [esi + 0x20], 0x8601cc
// 0072000c  8bc6                 mov eax, esi
// 0072000e  5e                   pop esi
// 0072000f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
