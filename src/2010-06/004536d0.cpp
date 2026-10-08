// roc 2010-06 004536d0  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004536d0
//
// 004536d0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 004536d6  83f8ff               cmp eax, -1
// 004536d9  750f                 jne 0x4536ea
// 004536db  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 004536e1  85c9                 test ecx, ecx
// 004536e3  7405                 je 0x4536ea
// 004536e5  e9a66f3500           jmp 0x7aa690
// 004536ea  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetEnabled@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
