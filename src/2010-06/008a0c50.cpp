// roc 2010-06 008a0c50  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0c50
//
// 008a0c50  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 008a0c56  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 008a0c5c  56                   push esi
// 008a0c5d  8b742408             mov esi, dword ptr [esp + 8]
// 008a0c61  50                   push eax
// 008a0c62  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a0c66  52                   push edx
// 008a0c67  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a0c6b  50                   push eax
// 008a0c6c  52                   push edx
// 008a0c6d  56                   push esi
// 008a0c6e  e8fdf7ffff           call 0x8a0470
// 008a0c73  8bc6                 mov eax, esi
// 008a0c75  5e                   pop esi
// 008a0c76  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
