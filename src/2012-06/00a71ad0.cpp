// roc 2012-06 00a71ad0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71ad0
//
// 00a71ad0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 00a71ad6  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 00a71adc  56                   push esi
// 00a71add  8b742408             mov esi, dword ptr [esp + 8]
// 00a71ae1  50                   push eax
// 00a71ae2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a71ae6  52                   push edx
// 00a71ae7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a71aeb  50                   push eax
// 00a71aec  52                   push edx
// 00a71aed  56                   push esi
// 00a71aee  e8fdf7ffff           call 0xa712f0
// 00a71af3  8bc6                 mov eax, esi
// 00a71af5  5e                   pop esi
// 00a71af6  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
