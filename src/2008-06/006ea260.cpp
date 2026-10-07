// roc 2008-06 006ea260  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea260
//
// 006ea260  56                   push esi
// 006ea261  8bf1                 mov esi, ecx
// 006ea263  e8d8b30500           call 0x745640
// 006ea268  c7062c798500         mov dword ptr [esi], 0x85792c
// 006ea26e  c74620cc788500       mov dword ptr [esi + 0x20], 0x8578cc
// 006ea275  8bc6                 mov eax, esi
// 006ea277  5e                   pop esi
// 006ea278  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
