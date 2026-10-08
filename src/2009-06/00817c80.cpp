// roc 2009-06 00817c80  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817c80
//
// 00817c80  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 00817c86  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 00817c8c  56                   push esi
// 00817c8d  8b742408             mov esi, dword ptr [esp + 8]
// 00817c91  50                   push eax
// 00817c92  8b442414             mov eax, dword ptr [esp + 0x14]
// 00817c96  52                   push edx
// 00817c97  50                   push eax
// 00817c98  68007d0000           push 0x7d00
// 00817c9d  56                   push esi
// 00817c9e  e86dfcffff           call 0x817910
// 00817ca3  8bc6                 mov eax, esi
// 00817ca5  5e                   pop esi
// 00817ca6  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
