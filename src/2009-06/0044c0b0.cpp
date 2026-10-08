// roc 2009-06 0044c0b0  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c0b0
//
// 0044c0b0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0044c0b6  83f8ff               cmp eax, -1
// 0044c0b9  750f                 jne 0x44c0ca
// 0044c0bb  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 0044c0c1  85c9                 test ecx, ecx
// 0044c0c3  7405                 je 0x44c0ca
// 0044c0c5  e9d63d2d00           jmp 0x71fea0
// 0044c0ca  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetEnabled@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
