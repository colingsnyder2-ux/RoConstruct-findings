// from server: 100% by auto
// roc 2012-06 00a76c40  unit: CXTPRibbonControlSystemRecentFileList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76c40
//
// 00a76c40  56                   push esi
// 00a76c41  8bf1                 mov esi, ecx
// 00a76c43  e858ffffff           call 0xa76ba0
// 00a76c48  c7063c86c200         mov dword ptr [esi], 0xc2863c
// 00a76c4e  c74620dc85c200       mov dword ptr [esi + 0x20], 0xc285dc
// 00a76c55  8bc6                 mov eax, esi
// 00a76c57  5e                   pop esi
// 00a76c58  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
