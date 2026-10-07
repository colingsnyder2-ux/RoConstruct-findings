// roc 2008-06 0079a870  unit: CXTPRibbonControlSystemRecentFileList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a870
//
// 0079a870  56                   push esi
// 0079a871  8bf1                 mov esi, ecx
// 0079a873  e858ffffff           call 0x79a7d0
// 0079a878  c70644d38600         mov dword ptr [esi], 0x86d344
// 0079a87e  c74620e4d28600       mov dword ptr [esi + 0x20], 0x86d2e4
// 0079a885  8bc6                 mov eax, esi
// 0079a887  5e                   pop esi
// 0079a888  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
