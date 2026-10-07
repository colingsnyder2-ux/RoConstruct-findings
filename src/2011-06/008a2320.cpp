// roc 2011-06 008a2320  unit: ATL::CRegObject  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a2320
//
// 008a2320  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008a2323  a900280000           test eax, 0x2800
// 008a2328  7403                 je 0x8a232d
// 008a232a  33c0                 xor eax, eax
// 008a232c  c3                   ret 
// 008a232d  a900820000           test eax, 0x8200
// 008a2332  7406                 je 0x8a233a
// 008a2334  b801000000           mov eax, 1
// 008a2339  c3                   ret 
// 008a233a  2500140000           and eax, 0x1400
// 008a233f  f7d8                 neg eax
// 008a2341  1bc0                 sbb eax, eax
// 008a2343  83c003               add eax, 3
// 008a2346  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?GetPosition@CXTPDockBar@@QBE?AW4XTPBarPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
