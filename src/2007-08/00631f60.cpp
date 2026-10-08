// from server: 100% by auto
// roc 2007-08 00631f60  unit: MyXTPCommandBars  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631f60
//
// 00631f60  56                   push esi
// 00631f61  51                   push ecx
// 00631f62  e829540400           call 0x677390
// 00631f67  6a00                 push 0
// 00631f69  6a01                 push 1
// 00631f6b  6800e80000           push 0xe800
// 00631f70  8bf0                 mov esi, eax
// 00631f72  6a00                 push 0
// 00631f74  56                   push esi
// 00631f75  e876bf0400           call 0x67def0
// 00631f7a  83c418               add esp, 0x18
// 00631f7d  8bc6                 mov eax, esi
// 00631f7f  5e                   pop esi
// 00631f80  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetToolbarsPopup@CXTPCommandBars@@UAEPAVCXTPPopupBar@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
