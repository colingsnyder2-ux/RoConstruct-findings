// roc 2012-06 00993820  unit: CXTPCommandBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993820
//
// 00993820  56                   push esi
// 00993821  8bf1                 mov esi, ecx
// 00993823  e8a8ffffff           call 0x9937d0
// 00993828  8bce                 mov ecx, esi
// 0099382a  e8afeefeff           call 0x9826de
// 0099382f  5e                   pop esi
// 00993830  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPGalleryListBox.cpp (function ?OnSize@CXTPGalleryListBox@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPGalleryListBox.cpp
