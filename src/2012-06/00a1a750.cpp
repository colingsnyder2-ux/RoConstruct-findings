// roc 2012-06 00a1a750  unit: CXTPDockBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a750
//
// 00a1a750  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a1a753  a900280000           test eax, 0x2800
// 00a1a758  7403                 je 0xa1a75d
// 00a1a75a  33c0                 xor eax, eax
// 00a1a75c  c3                   ret 
// 00a1a75d  a900820000           test eax, 0x8200
// 00a1a762  7406                 je 0xa1a76a
// 00a1a764  b801000000           mov eax, 1
// 00a1a769  c3                   ret 
// 00a1a76a  2500140000           and eax, 0x1400
// 00a1a76f  f7d8                 neg eax
// 00a1a771  1bc0                 sbb eax, eax
// 00a1a773  83c003               add eax, 3
// 00a1a776  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?GetPosition@CXTPDockBar@@QBE?AW4XTPBarPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
