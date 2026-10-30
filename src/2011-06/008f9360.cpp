// roc 2011-06 008f9360  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9360
//
// 008f9360  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 008f9366  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 008f936c  56                   push esi
// 008f936d  8b742408             mov esi, dword ptr [esp + 8]
// 008f9371  50                   push eax
// 008f9372  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f9376  52                   push edx
// 008f9377  50                   push eax
// 008f9378  68007d0000           push 0x7d00
// 008f937d  56                   push esi
// 008f937e  e86dfcffff           call 0x8f8ff0
// 008f9383  8bc6                 mov eax, esi
// 008f9385  5e                   pop esi
// 008f9386  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
