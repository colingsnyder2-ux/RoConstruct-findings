// roc 2011-06 00886600  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00886600
//
// 00886600  837c241802           cmp dword ptr [esp + 0x18], 2
// 00886605  7522                 jne 0x886629
// 00886607  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0088660c  7436                 je 0x886644
// 0088660e  837c240400           cmp dword ptr [esp + 4], 0
// 00886613  b80e000000           mov eax, 0xe
// 00886618  752f                 jne 0x886649
// 0088661a  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 00886620  50                   push eax
// 00886621  e88a8ff8ff           call 0x80f5b0
// 00886626  c21c00               ret 0x1c
// 00886629  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 0088662e  7508                 jne 0x886638
// 00886630  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 00886636  eb05                 jmp 0x88663d
// 00886638  b812000000           mov eax, 0x12
// 0088663d  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00886642  7505                 jne 0x886649
// 00886644  b811000000           mov eax, 0x11
// 00886649  50                   push eax
// 0088664a  e8618ff8ff           call 0x80f5b0
// 0088664f  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRectangleTextColor@CXTPDefaultTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
