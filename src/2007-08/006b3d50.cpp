// roc 2007-08 006b3d50  unit: CXTPControlGalleryPaintManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3d50
//
// 006b3d50  e82bf8ffff           call 0x6b3580
// 006b3d55  85c0                 test eax, eax
// 006b3d57  7407                 je 0x6b3d60
// 006b3d59  8bc8                 mov ecx, eax
// 006b3d5b  e900a8faff           jmp 0x65e560
// 006b3d60  33c0                 xor eax, eax
// 006b3d62  c3                   ret 
// library xtp-11.2.2-vc8/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?GetDataManager@CXTPSyntaxEditView@@QAEPAVCXTPSyntaxEditBufferManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SyntaxEdit/XTPSyntaxEditView.cpp
