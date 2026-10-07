// roc 2008-06 0072e260  unit: CXTPControlGallery  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e260
//
// 0072e260  8b8118ffffff         mov eax, dword ptr [ecx - 0xe8]
// 0072e266  83f8ff               cmp eax, -1
// 0072e269  750c                 jne 0x72e277
// 0072e26b  8b49d8               mov ecx, dword ptr [ecx - 0x28]
// 0072e26e  85c9                 test ecx, ecx
// 0072e270  7405                 je 0x72e277
// 0072e272  e949d5f7ff           jmp 0x6ab7c0
// 0072e277  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsScrollBarEnabled@CXTPControlGallery@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
