// roc 2008-06 0044df80  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044df80
//
// 0044df80  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0044df86  83f8ff               cmp eax, -1
// 0044df89  750f                 jne 0x44df9a
// 0044df8b  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 0044df91  85c9                 test ecx, ecx
// 0044df93  7405                 je 0x44df9a
// 0044df95  e926d82500           jmp 0x6ab7c0
// 0044df9a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetEnabled@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
