// roc 2009-06 007a13e0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a13e0
//
// 007a13e0  837c241802           cmp dword ptr [esp + 0x18], 2
// 007a13e5  7522                 jne 0x7a1409
// 007a13e7  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007a13ec  7436                 je 0x7a1424
// 007a13ee  837c240400           cmp dword ptr [esp + 4], 0
// 007a13f3  b80e000000           mov eax, 0xe
// 007a13f8  752f                 jne 0x7a1429
// 007a13fa  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 007a1400  50                   push eax
// 007a1401  e87a13f8ff           call 0x722780
// 007a1406  c21c00               ret 0x1c
// 007a1409  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 007a140e  7508                 jne 0x7a1418
// 007a1410  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 007a1416  eb05                 jmp 0x7a141d
// 007a1418  b812000000           mov eax, 0x12
// 007a141d  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007a1422  7505                 jne 0x7a1429
// 007a1424  b811000000           mov eax, 0x11
// 007a1429  50                   push eax
// 007a142a  e85113f8ff           call 0x722780
// 007a142f  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRectangleTextColor@CXTPDefaultTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
