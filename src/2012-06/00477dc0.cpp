// roc 2012-06 00477dc0  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477dc0
//
// 00477dc0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00477dc6  83f8ff               cmp eax, -1
// 00477dc9  750f                 jne 0x477dda
// 00477dcb  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 00477dd1  85c9                 test ecx, ecx
// 00477dd3  7405                 je 0x477dda
// 00477dd5  e946d15000           jmp 0x984f20
// 00477dda  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetEnabled@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
