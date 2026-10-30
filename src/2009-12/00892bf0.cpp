// roc 2009-12 00892bf0  unit: CXTPDockBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892bf0
//
// 00892bf0  56                   push esi
// 00892bf1  8bf1                 mov esi, ecx
// 00892bf3  e868d5ffff           call 0x890160
// 00892bf8  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 00892bff  c706dc3da000         mov dword ptr [esi], 0xa03ddc
// 00892c05  c746207c3da000       mov dword ptr [esi + 0x20], 0xa03d7c
// 00892c0c  8bc6                 mov eax, esi
// 00892c0e  5e                   pop esi
// 00892c0f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
