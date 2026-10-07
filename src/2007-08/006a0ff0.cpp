// roc 2007-08 006a0ff0  unit: CXTPDockBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0ff0
//
// 006a0ff0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006a0ff3  a900280000           test eax, 0x2800
// 006a0ff8  7403                 je 0x6a0ffd
// 006a0ffa  33c0                 xor eax, eax
// 006a0ffc  c3                   ret 
// 006a0ffd  a900820000           test eax, 0x8200
// 006a1002  7406                 je 0x6a100a
// 006a1004  b801000000           mov eax, 1
// 006a1009  c3                   ret 
// 006a100a  2500140000           and eax, 0x1400
// 006a100f  f7d8                 neg eax
// 006a1011  1bc0                 sbb eax, eax
// 006a1013  83c003               add eax, 3
// 006a1016  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?GetPosition@CXTPDockBar@@QBE?AW4XTPBarPosition@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
