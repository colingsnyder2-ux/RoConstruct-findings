// from server: 100% by auto
// roc 2007-08 00636260  unit: CXTPControlComboBoxList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636260
//
// 00636260  8b442408             mov eax, dword ptr [esp + 8]
// 00636264  3d0a020000           cmp eax, 0x20a
// 00636269  7523                 jne 0x63628e
// 0063626b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063626f  8b10                 mov edx, dword ptr [eax]
// 00636271  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00636275  52                   push edx
// 00636276  8b10                 mov edx, dword ptr [eax]
// 00636278  52                   push edx
// 00636279  680a020000           push 0x20a
// 0063627e  83c1ac               add ecx, -0x54
// 00636281  e85c9bffff           call 0x62fde2
// 00636286  b801000000           mov eax, 1
// 0063628b  c21400               ret 0x14
// 0063628e  89442408             mov dword ptr [esp + 8], eax
// 00636292  e9d9ff0000           jmp 0x646270
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxList@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
