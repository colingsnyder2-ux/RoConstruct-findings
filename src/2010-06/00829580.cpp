// roc 2010-06 00829580  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00829580
//
// 00829580  837c241802           cmp dword ptr [esp + 0x18], 2
// 00829585  7522                 jne 0x8295a9
// 00829587  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0082958c  7436                 je 0x8295c4
// 0082958e  837c240400           cmp dword ptr [esp + 4], 0
// 00829593  b80e000000           mov eax, 0xe
// 00829598  752f                 jne 0x8295c9
// 0082959a  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 008295a0  50                   push eax
// 008295a1  e86a3bf8ff           call 0x7ad110
// 008295a6  c21c00               ret 0x1c
// 008295a9  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 008295ae  7508                 jne 0x8295b8
// 008295b0  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 008295b6  eb05                 jmp 0x8295bd
// 008295b8  b812000000           mov eax, 0x12
// 008295bd  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008295c2  7505                 jne 0x8295c9
// 008295c4  b811000000           mov eax, 0x11
// 008295c9  50                   push eax
// 008295ca  e8413bf8ff           call 0x7ad110
// 008295cf  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRectangleTextColor@CXTPDefaultTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
