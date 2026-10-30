// roc 2009-12 007f5eb0  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5eb0
//
// 007f5eb0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007f5eb6  85c9                 test ecx, ecx
// 007f5eb8  7405                 je 0x7f5ebf
// 007f5eba  e941e60000           jmp 0x804500
// 007f5ebf  33c0                 xor eax, eax
// 007f5ec1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCustomizeMode@CXTPControl@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
