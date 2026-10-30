// roc 2009-12 008ec9b0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec9b0
//
// 008ec9b0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 008ec9b6  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 008ec9bc  56                   push esi
// 008ec9bd  8b742408             mov esi, dword ptr [esp + 8]
// 008ec9c1  50                   push eax
// 008ec9c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ec9c6  52                   push edx
// 008ec9c7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008ec9cb  50                   push eax
// 008ec9cc  52                   push edx
// 008ec9cd  56                   push esi
// 008ec9ce  e8fdf7ffff           call 0x8ec1d0
// 008ec9d3  8bc6                 mov eax, esi
// 008ec9d5  5e                   pop esi
// 008ec9d6  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
