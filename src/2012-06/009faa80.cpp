// roc 2012-06 009faa80  unit: CXTPControlGallery  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009faa80
//
// 009faa80  e87bf1ffff           call 0x9f9c00
// 009faa85  85c0                 test eax, eax
// 009faa87  7407                 je 0x9faa90
// 009faa89  8bc8                 mov ecx, eax
// 009faa8b  e9e0f4feff           jmp 0x9e9f70
// 009faa90  33c0                 xor eax, eax
// 009faa92  c3                   ret 
// library xtp-13.2.1/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?GetDataManager@CXTPSyntaxEditView@@QAEPAVCXTPSyntaxEditBufferManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-13.2.1 Source/SyntaxEdit/XTPSyntaxEditView.cpp
