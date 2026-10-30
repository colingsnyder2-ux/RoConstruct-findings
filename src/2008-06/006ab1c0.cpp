// from server: 100% by auto
// roc 2008-06 006ab1c0  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab1c0
//
// 006ab1c0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006ab1c6  85c9                 test ecx, ecx
// 006ab1c8  7405                 je 0x6ab1cf
// 006ab1ca  e9719c0000           jmp 0x6b4e40
// 006ab1cf  33c0                 xor eax, eax
// 006ab1d1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCustomizeMode@CXTPControl@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
