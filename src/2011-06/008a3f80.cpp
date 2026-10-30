// roc 2011-06 008a3f80  unit: CXTPDockBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3f80
//
// 008a3f80  56                   push esi
// 008a3f81  8bf1                 mov esi, ecx
// 008a3f83  e8a8d5ffff           call 0x8a1530
// 008a3f88  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 008a3f8f  c706dc2aad00         mov dword ptr [esi], 0xad2adc
// 008a3f95  c746207c2aad00       mov dword ptr [esi + 0x20], 0xad2a7c
// 008a3f9c  8bc6                 mov eax, esi
// 008a3f9e  5e                   pop esi
// 008a3f9f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
