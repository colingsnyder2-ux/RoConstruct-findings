// roc 2010-06 007a9cd0  unit: ActiveDocView  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9cd0
//
// 007a9cd0  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 007a9cd6  83f8ff               cmp eax, -1
// 007a9cd9  750d                 jne 0x7a9ce8
// 007a9cdb  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 007a9ce1  85c9                 test ecx, ecx
// 007a9ce3  7403                 je 0x7a9ce8
// 007a9ce5  8b4138               mov eax, dword ptr [ecx + 0x38]
// 007a9ce8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetChecked@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
