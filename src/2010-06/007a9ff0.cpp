// roc 2010-06 007a9ff0  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9ff0
//
// 007a9ff0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007a9ff6  85c9                 test ecx, ecx
// 007a9ff8  7405                 je 0x7a9fff
// 007a9ffa  e901e60000           jmp 0x7b8600
// 007a9fff  33c0                 xor eax, eax
// 007aa001  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCustomizeMode@CXTPControl@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
