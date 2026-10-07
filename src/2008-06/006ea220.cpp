// roc 2008-06 006ea220  unit: CXTPCustomizeSheet  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea220
//
// 006ea220  56                   push esi
// 006ea221  8bf1                 mov esi, ecx
// 006ea223  e868780500           call 0x741a90
// 006ea228  c70664778500         mov dword ptr [esi], 0x857764
// 006ea22e  c7462004778500       mov dword ptr [esi + 0x20], 0x857704
// 006ea235  8bc6                 mov eax, esi
// 006ea237  5e                   pop esi
// 006ea238  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
