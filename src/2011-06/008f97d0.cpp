// roc 2011-06 008f97d0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f97d0
//
// 008f97d0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 008f97d6  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 008f97dc  56                   push esi
// 008f97dd  8b742408             mov esi, dword ptr [esp + 8]
// 008f97e1  50                   push eax
// 008f97e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f97e6  52                   push edx
// 008f97e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f97eb  50                   push eax
// 008f97ec  52                   push edx
// 008f97ed  56                   push esi
// 008f97ee  e8fdf7ffff           call 0x8f8ff0
// 008f97f3  8bc6                 mov eax, esi
// 008f97f5  5e                   pop esi
// 008f97f6  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
