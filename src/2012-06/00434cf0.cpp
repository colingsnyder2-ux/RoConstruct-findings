// from server: 100% by auto
// roc 2012-06 00434cf0  unit: MainLogManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434cf0
//
// 00434cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00434cf4  83f802               cmp eax, 2
// 00434cf7  740d                 je 0x434d06
// 00434cf9  83f803               cmp eax, 3
// 00434cfc  7408                 je 0x434d06
// 00434cfe  83f805               cmp eax, 5
// 00434d01  7403                 je 0x434d06
// 00434d03  33c0                 xor eax, eax
// 00434d05  c3                   ret 
// 00434d06  b801000000           mov eax, 1
// 00434d0b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?IsVerticalPosition@@YAHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
