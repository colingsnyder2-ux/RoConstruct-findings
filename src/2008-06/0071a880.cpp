// roc 2008-06 0071a880  unit: CXTPDockBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a880
//
// 0071a880  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0071a883  a900280000           test eax, 0x2800
// 0071a888  7403                 je 0x71a88d
// 0071a88a  33c0                 xor eax, eax
// 0071a88c  c3                   ret 
// 0071a88d  a900820000           test eax, 0x8200
// 0071a892  7406                 je 0x71a89a
// 0071a894  b801000000           mov eax, 1
// 0071a899  c3                   ret 
// 0071a89a  2500140000           and eax, 0x1400
// 0071a89f  f7d8                 neg eax
// 0071a8a1  1bc0                 sbb eax, eax
// 0071a8a3  83c003               add eax, 3
// 0071a8a6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?GetPosition@CXTPDockBar@@QBE?AW4XTPBarPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
