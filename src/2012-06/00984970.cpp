// roc 2012-06 00984970  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984970
//
// 00984970  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00984976  85c9                 test ecx, ecx
// 00984978  7405                 je 0x98497f
// 0098497a  e9a1e30000           jmp 0x992d20
// 0098497f  33c0                 xor eax, eax
// 00984981  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCustomizeMode@CXTPControl@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
