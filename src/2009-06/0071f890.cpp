// roc 2009-06 0071f890  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f890
//
// 0071f890  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0071f896  85c9                 test ecx, ecx
// 0071f898  7405                 je 0x71f89f
// 0071f89a  e921db0000           jmp 0x72d3c0
// 0071f89f  33c0                 xor eax, eax
// 0071f8a1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCustomizeMode@CXTPControl@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
