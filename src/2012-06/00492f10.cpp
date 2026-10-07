// roc 2012-06 00492f10  unit: HelpCommand  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00492f10
//
// 00492f10  56                   push esi
// 00492f11  8bf1                 mov esi, ecx
// 00492f13  e8c6f74e00           call 0x9826de
// 00492f18  8bce                 mov ecx, esi
// 00492f1a  e811ffffff           call 0x492e30
// 00492f1f  5e                   pop esi
// 00492f20  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPGalleryListBox.cpp (function ?OnSize@CXTPGalleryListBox@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPGalleryListBox.cpp
