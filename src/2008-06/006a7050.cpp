// roc 2008-06 006a7050  unit: CXTPControlComboBoxList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7050
//
// 006a7050  8b442408             mov eax, dword ptr [esp + 8]
// 006a7054  3d0a020000           cmp eax, 0x20a
// 006a7059  7523                 jne 0x6a707e
// 006a705b  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a705f  8b10                 mov edx, dword ptr [eax]
// 006a7061  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a7065  52                   push edx
// 006a7066  8b10                 mov edx, dword ptr [eax]
// 006a7068  52                   push edx
// 006a7069  680a020000           push 0x20a
// 006a706e  83c1ac               add ecx, -0x54
// 006a7071  e89097ffff           call 0x6a0806
// 006a7076  b801000000           mov eax, 1
// 006a707b  c21400               ret 0x14
// 006a707e  89442408             mov dword ptr [esp + 8], eax
// 006a7082  e949060100           jmp 0x6b76d0
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxList@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
