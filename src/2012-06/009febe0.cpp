// roc 2012-06 009febe0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009febe0
//
// 009febe0  837c241802           cmp dword ptr [esp + 0x18], 2
// 009febe5  7522                 jne 0x9fec09
// 009febe7  837c240c00           cmp dword ptr [esp + 0xc], 0
// 009febec  7436                 je 0x9fec24
// 009febee  837c240400           cmp dword ptr [esp + 4], 0
// 009febf3  b80e000000           mov eax, 0xe
// 009febf8  752f                 jne 0x9fec29
// 009febfa  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 009fec00  50                   push eax
// 009fec01  e88a8cf8ff           call 0x987890
// 009fec06  c21c00               ret 0x1c
// 009fec09  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 009fec0e  7508                 jne 0x9fec18
// 009fec10  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 009fec16  eb05                 jmp 0x9fec1d
// 009fec18  b812000000           mov eax, 0x12
// 009fec1d  837c240c00           cmp dword ptr [esp + 0xc], 0
// 009fec22  7505                 jne 0x9fec29
// 009fec24  b811000000           mov eax, 0x11
// 009fec29  50                   push eax
// 009fec2a  e8618cf8ff           call 0x987890
// 009fec2f  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRectangleTextColor@CXTPDefaultTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
