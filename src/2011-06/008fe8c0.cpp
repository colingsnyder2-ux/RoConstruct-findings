// roc 2011-06 008fe8c0  unit: CXTPRibbonControlSystemRecentFileList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe8c0
//
// 008fe8c0  56                   push esi
// 008fe8c1  8bf1                 mov esi, ecx
// 008fe8c3  e858ffffff           call 0x8fe820
// 008fe8c8  c706b4cfad00         mov dword ptr [esi], 0xadcfb4
// 008fe8ce  c7462054cfad00       mov dword ptr [esi + 0x20], 0xadcf54
// 008fe8d5  8bc6                 mov eax, esi
// 008fe8d7  5e                   pop esi
// 008fe8d8  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
