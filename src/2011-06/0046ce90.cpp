// roc 2011-06 0046ce90  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046ce90
//
// 0046ce90  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0046ce96  83f8ff               cmp eax, -1
// 0046ce99  750f                 jne 0x46ceaa
// 0046ce9b  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 0046cea1  85c9                 test ecx, ecx
// 0046cea3  7405                 je 0x46ceaa
// 0046cea5  e9b6fd3900           jmp 0x80cc60
// 0046ceaa  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetEnabled@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
