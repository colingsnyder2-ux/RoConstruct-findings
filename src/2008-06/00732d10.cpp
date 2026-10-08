// from server: 100% by auto
// roc 2008-06 00732d10  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732d10
//
// 00732d10  837c241802           cmp dword ptr [esp + 0x18], 2
// 00732d15  7522                 jne 0x732d39
// 00732d17  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00732d1c  7436                 je 0x732d54
// 00732d1e  837c240400           cmp dword ptr [esp + 4], 0
// 00732d23  b80e000000           mov eax, 0xe
// 00732d28  752f                 jne 0x732d59
// 00732d2a  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 00732d30  50                   push eax
// 00732d31  e83ab3f7ff           call 0x6ae070
// 00732d36  c21c00               ret 0x1c
// 00732d39  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 00732d3e  7508                 jne 0x732d48
// 00732d40  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 00732d46  eb05                 jmp 0x732d4d
// 00732d48  b812000000           mov eax, 0x12
// 00732d4d  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00732d52  7505                 jne 0x732d59
// 00732d54  b811000000           mov eax, 0x11
// 00732d59  50                   push eax
// 00732d5a  e811b3f7ff           call 0x6ae070
// 00732d5f  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRectangleTextColor@CXTPDefaultTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
