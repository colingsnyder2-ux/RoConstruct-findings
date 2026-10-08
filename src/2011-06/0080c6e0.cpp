// roc 2011-06 0080c6e0  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c6e0
//
// 0080c6e0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0080c6e6  85c9                 test ecx, ecx
// 0080c6e8  7405                 je 0x80c6ef
// 0080c6ea  e9d1e30000           jmp 0x81aac0
// 0080c6ef  33c0                 xor eax, eax
// 0080c6f1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCustomizeMode@CXTPControl@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
