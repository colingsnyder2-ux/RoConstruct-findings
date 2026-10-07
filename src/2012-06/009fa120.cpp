// roc 2012-06 009fa120  unit: CXTPControlGallery  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa120
//
// 009fa120  8b8118ffffff         mov eax, dword ptr [ecx - 0xe8]
// 009fa126  83f8ff               cmp eax, -1
// 009fa129  750c                 jne 0x9fa137
// 009fa12b  8b49d8               mov ecx, dword ptr [ecx - 0x28]
// 009fa12e  85c9                 test ecx, ecx
// 009fa130  7405                 je 0x9fa137
// 009fa132  e9e9adf8ff           jmp 0x984f20
// 009fa137  c3                   ret 
// library xtp-13.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?IsScrollBarEnabled@CXTPControlGallery@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPControlGallery.cpp
