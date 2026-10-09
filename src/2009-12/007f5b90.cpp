// roc 2009-12 007f5b90  unit: ActiveDocView  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5b90
//
// 007f5b90  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 007f5b96  83f8ff               cmp eax, -1
// 007f5b99  750d                 jne 0x7f5ba8
// 007f5b9b  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 007f5ba1  85c9                 test ecx, ecx
// 007f5ba3  7403                 je 0x7f5ba8
// 007f5ba5  8b4138               mov eax, dword ptr [ecx + 0x38]
// 007f5ba8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetChecked@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
