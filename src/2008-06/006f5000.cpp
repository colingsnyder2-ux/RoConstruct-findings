// roc 2008-06 006f5000  unit: CXTPControlToolbars  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5000
//
// 006f5000  56                   push esi
// 006f5001  8bf1                 mov esi, ecx
// 006f5003  e838060500           call 0x745640
// 006f5008  c706b4968500         mov dword ptr [esi], 0x8596b4
// 006f500e  c7462054968500       mov dword ptr [esi + 0x20], 0x859654
// 006f5015  8bc6                 mov eax, esi
// 006f5017  5e                   pop esi
// 006f5018  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
