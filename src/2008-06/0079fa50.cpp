// from server: 100% by auto
// roc 2008-06 0079fa50  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fa50
//
// 0079fa50  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 0079fa56  8b91d0010000         mov edx, dword ptr [ecx + 0x1d0]
// 0079fa5c  56                   push esi
// 0079fa5d  8b742408             mov esi, dword ptr [esp + 8]
// 0079fa61  50                   push eax
// 0079fa62  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079fa66  52                   push edx
// 0079fa67  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079fa6b  50                   push eax
// 0079fa6c  52                   push edx
// 0079fa6d  56                   push esi
// 0079fa6e  e8fdf7ffff           call 0x79f270
// 0079fa73  8bc6                 mov eax, esi
// 0079fa75  5e                   pop esi
// 0079fa76  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDockingLayout@CXTPDialogBar@@MAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
