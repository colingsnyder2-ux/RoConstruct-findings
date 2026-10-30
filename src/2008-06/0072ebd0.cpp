// from server: 100% by auto
// roc 2008-06 0072ebd0  unit: CXTPControlGallery  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ebd0
//
// 0072ebd0  e86bf1ffff           call 0x72dd40
// 0072ebd5  85c0                 test eax, eax
// 0072ebd7  7407                 je 0x72ebe0
// 0072ebd9  8bc8                 mov ecx, eax
// 0072ebdb  e9901b0700           jmp 0x7a0770
// 0072ebe0  33c0                 xor eax, eax
// 0072ebe2  c3                   ret 
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?GetDataManager@CXTPSyntaxEditView@@QAEPAVCXTPSyntaxEditBufferManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditView.cpp
