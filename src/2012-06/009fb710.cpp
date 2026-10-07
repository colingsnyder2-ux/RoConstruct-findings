// roc 2012-06 009fb710  unit: CXTPControlGallery  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb710
//
// 009fb710  56                   push esi
// 009fb711  8bf1                 mov esi, ecx
// 009fb713  e81833f9ff           call 0x98ea30
// 009fb718  c7063cb4c100         mov dword ptr [esi], 0xc1b43c
// 009fb71e  c746542cb4c100       mov dword ptr [esi + 0x54], 0xc1b42c
// 009fb725  c7465cccb3c100       mov dword ptr [esi + 0x5c], 0xc1b3cc
// 009fb72c  8bc6                 mov eax, esi
// 009fb72e  5e                   pop esi
// 009fb72f  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
