// roc 2009-12 0087c320  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c320
//
// 0087c320  837c241802           cmp dword ptr [esp + 0x18], 2
// 0087c325  7522                 jne 0x87c349
// 0087c327  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0087c32c  7436                 je 0x87c364
// 0087c32e  837c240400           cmp dword ptr [esp + 4], 0
// 0087c333  b80e000000           mov eax, 0xe
// 0087c338  752f                 jne 0x87c369
// 0087c33a  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 0087c340  50                   push eax
// 0087c341  e8fa12f8ff           call 0x7fd640
// 0087c346  c21c00               ret 0x1c
// 0087c349  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 0087c34e  7508                 jne 0x87c358
// 0087c350  8b815c040000         mov eax, dword ptr [ecx + 0x45c]
// 0087c356  eb05                 jmp 0x87c35d
// 0087c358  b812000000           mov eax, 0x12
// 0087c35d  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0087c362  7505                 jne 0x87c369
// 0087c364  b811000000           mov eax, 0x11
// 0087c369  50                   push eax
// 0087c36a  e8d112f8ff           call 0x7fd640
// 0087c36f  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRectangleTextColor@CXTPDefaultTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
