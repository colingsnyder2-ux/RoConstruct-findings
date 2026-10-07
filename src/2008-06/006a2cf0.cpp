// roc 2008-06 006a2cf0  unit: MyXTPCommandBars  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2cf0
//
// 006a2cf0  56                   push esi
// 006a2cf1  51                   push ecx
// 006a2cf2  e8d9b40400           call 0x6ee1d0
// 006a2cf7  6a00                 push 0
// 006a2cf9  6a01                 push 1
// 006a2cfb  6800e80000           push 0xe800
// 006a2d00  8bf0                 mov esi, eax
// 006a2d02  6a00                 push 0
// 006a2d04  56                   push esi
// 006a2d05  e866290500           call 0x6f5670
// 006a2d0a  83c418               add esp, 0x18
// 006a2d0d  8bc6                 mov eax, esi
// 006a2d0f  5e                   pop esi
// 006a2d10  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetToolbarsPopup@CXTPCommandBars@@UAEPAVCXTPPopupBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
