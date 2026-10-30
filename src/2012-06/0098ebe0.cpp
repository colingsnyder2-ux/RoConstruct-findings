// from server: 100% by auto
// roc 2012-06 0098ebe0  unit: CXTPControlComboBoxList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ebe0
//
// 0098ebe0  8b442408             mov eax, dword ptr [esp + 8]
// 0098ebe4  3d0a020000           cmp eax, 0x20a
// 0098ebe9  7523                 jne 0x98ec0e
// 0098ebeb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0098ebef  8b10                 mov edx, dword ptr [eax]
// 0098ebf1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0098ebf5  52                   push edx
// 0098ebf6  8b10                 mov edx, dword ptr [eax]
// 0098ebf8  52                   push edx
// 0098ebf9  680a020000           push 0x20a
// 0098ebfe  83c1ac               add ecx, -0x54
// 0098ec01  e89436ffff           call 0x98229a
// 0098ec06  b801000000           mov eax, 1
// 0098ec0b  c21400               ret 0x14
// 0098ec0e  89442408             mov dword ptr [esp + 8], eax
// 0098ec12  e9396a0000           jmp 0x995650
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxList@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
