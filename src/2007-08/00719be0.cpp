// from server: 100% by auto
// roc 2007-08 00719be0  unit: CXTPRibbonControlSystemRecentFileList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719be0
//
// 00719be0  56                   push esi
// 00719be1  8bf1                 mov esi, ecx
// 00719be3  e858ffffff           call 0x719b40
// 00719be8  c706dc057e00         mov dword ptr [esi], 0x7e05dc
// 00719bee  c746207c057e00       mov dword ptr [esi + 0x20], 0x7e057c
// 00719bf5  8bc6                 mov eax, esi
// 00719bf7  5e                   pop esi
// 00719bf8  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlExt.cpp
