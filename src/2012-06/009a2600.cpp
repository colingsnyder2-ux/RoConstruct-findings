// roc 2012-06 009a2600  unit: MyXTPCommandBars  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2600
//
// 009a2600  56                   push esi
// 009a2601  51                   push ecx
// 009a2602  e8b9910200           call 0x9cb7c0
// 009a2607  6a00                 push 0
// 009a2609  6a01                 push 1
// 009a260b  6800e80000           push 0xe800
// 009a2610  8bf0                 mov esi, eax
// 009a2612  6a00                 push 0
// 009a2614  56                   push esi
// 009a2615  e826060300           call 0x9d2c40
// 009a261a  83c418               add esp, 0x18
// 009a261d  8bc6                 mov eax, esi
// 009a261f  5e                   pop esi
// 009a2620  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetToolbarsPopup@CXTPCommandBars@@UAEPAVCXTPPopupBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
