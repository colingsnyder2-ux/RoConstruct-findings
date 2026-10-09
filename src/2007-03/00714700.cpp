// roc 2007-03 00714700  unit: seg_00710000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714700
//
// 00714700  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 00714706  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 0071470c  56                   push esi
// 0071470d  8b742408             mov esi, dword ptr [esp + 8]
// 00714711  50                   push eax
// 00714712  8b442414             mov eax, dword ptr [esp + 0x14]
// 00714716  52                   push edx
// 00714717  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071471b  50                   push eax
// 0071471c  52                   push edx
// 0071471d  56                   push esi
// 0071471e  e8fdf7ffff           call 0x713f20
// 00714723  8bc6                 mov eax, esi
// 00714725  5e                   pop esi
// 00714726  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
