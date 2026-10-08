// from server: 100% by auto
// roc 2012-06 009d25d0  unit: CXTPControlToolbars  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d25d0
//
// 009d25d0  56                   push esi
// 009d25d1  8bf1                 mov esi, ecx
// 009d25d3  e8a8730400           call 0xa19980
// 009d25d8  c7065c4ec100         mov dword ptr [esi], 0xc14e5c
// 009d25de  c74620fc4dc100       mov dword ptr [esi + 0x20], 0xc14dfc
// 009d25e5  8bc6                 mov eax, esi
// 009d25e7  5e                   pop esi
// 009d25e8  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
