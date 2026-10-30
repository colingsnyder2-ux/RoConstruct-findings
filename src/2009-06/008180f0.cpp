// roc 2009-06 008180f0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008180f0
//
// 008180f0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 008180f6  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 008180fc  56                   push esi
// 008180fd  8b742408             mov esi, dword ptr [esp + 8]
// 00818101  50                   push eax
// 00818102  8b442414             mov eax, dword ptr [esp + 0x14]
// 00818106  52                   push edx
// 00818107  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081810b  50                   push eax
// 0081810c  52                   push edx
// 0081810d  56                   push esi
// 0081810e  e8fdf7ffff           call 0x817910
// 00818113  8bc6                 mov eax, esi
// 00818115  5e                   pop esi
// 00818116  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
