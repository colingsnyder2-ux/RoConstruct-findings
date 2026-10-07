// roc 2011-06 008169c0  unit: CXTPControlComboBoxList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008169c0
//
// 008169c0  8b442408             mov eax, dword ptr [esp + 8]
// 008169c4  3d0a020000           cmp eax, 0x20a
// 008169c9  7523                 jne 0x8169ee
// 008169cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 008169cf  8b10                 mov edx, dword ptr [eax]
// 008169d1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008169d5  52                   push edx
// 008169d6  8b10                 mov edx, dword ptr [eax]
// 008169d8  52                   push edx
// 008169d9  680a020000           push 0x20a
// 008169de  83c1ac               add ecx, -0x54
// 008169e1  e8f837ffff           call 0x80a1de
// 008169e6  b801000000           mov eax, 1
// 008169eb  c21400               ret 0x14
// 008169ee  89442408             mov dword ptr [esp + 8], eax
// 008169f2  e989690000           jmp 0x81d380
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxList@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
