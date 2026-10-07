// roc 2007-08 0071eca0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071eca0
//
// 0071eca0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 0071eca6  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 0071ecac  56                   push esi
// 0071ecad  8b742408             mov esi, dword ptr [esp + 8]
// 0071ecb1  50                   push eax
// 0071ecb2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071ecb6  52                   push edx
// 0071ecb7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071ecbb  50                   push eax
// 0071ecbc  52                   push edx
// 0071ecbd  56                   push esi
// 0071ecbe  e8fdf7ffff           call 0x71e4c0
// 0071ecc3  8bc6                 mov eax, esi
// 0071ecc5  5e                   pop esi
// 0071ecc6  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
