// from server: 100% by auto
// roc 2011-06 00829fd0  unit: MyXTPCommandBars  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829fd0
//
// 00829fd0  56                   push esi
// 00829fd1  51                   push ecx
// 00829fd2  e809930200           call 0x8532e0
// 00829fd7  6a00                 push 0
// 00829fd9  6a01                 push 1
// 00829fdb  6800e80000           push 0xe800
// 00829fe0  8bf0                 mov esi, eax
// 00829fe2  6a00                 push 0
// 00829fe4  56                   push esi
// 00829fe5  e876080300           call 0x85a860
// 00829fea  83c418               add esp, 0x18
// 00829fed  8bc6                 mov eax, esi
// 00829fef  5e                   pop esi
// 00829ff0  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetToolbarsPopup@CXTPCommandBars@@UAEPAVCXTPPopupBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
