// roc 2007-08 006a5970  unit: CXTPShortcutManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5970
//
// 006a5970  56                   push esi
// 006a5971  8bf1                 mov esi, ecx
// 006a5973  e8e84a0200           call 0x6ca460
// 006a5978  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 006a597f  c7068c3d7d00         mov dword ptr [esi], 0x7d3d8c
// 006a5985  c746202c3d7d00       mov dword ptr [esi + 0x20], 0x7d3d2c
// 006a598c  8bc6                 mov eax, esi
// 006a598e  5e                   pop esi
// 006a598f  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
