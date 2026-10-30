// roc 2010-06 008a07e0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a07e0
//
// 008a07e0  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 008a07e6  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 008a07ec  56                   push esi
// 008a07ed  8b742408             mov esi, dword ptr [esp + 8]
// 008a07f1  50                   push eax
// 008a07f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a07f6  52                   push edx
// 008a07f7  50                   push eax
// 008a07f8  68007d0000           push 0x7d00
// 008a07fd  56                   push esi
// 008a07fe  e86dfcffff           call 0x8a0470
// 008a0803  8bc6                 mov eax, esi
// 008a0805  5e                   pop esi
// 008a0806  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
