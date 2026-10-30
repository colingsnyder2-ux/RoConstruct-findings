// roc 2009-12 004526d0  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004526d0
//
// 004526d0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 004526d6  83f8ff               cmp eax, -1
// 004526d9  750f                 jne 0x4526ea
// 004526db  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 004526e1  85c9                 test ecx, ecx
// 004526e3  7405                 je 0x4526ea
// 004526e5  e9c63e3a00           jmp 0x7f65b0
// 004526ea  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetEnabled@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
