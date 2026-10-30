// from server: 100% by auto
// roc 2008-06 0079f5e0  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079f5e0
//
// 0079f5e0  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 0079f5e6  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 0079f5ec  56                   push esi
// 0079f5ed  8b742408             mov esi, dword ptr [esp + 8]
// 0079f5f1  50                   push eax
// 0079f5f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079f5f6  52                   push edx
// 0079f5f7  50                   push eax
// 0079f5f8  68007d0000           push 0x7d00
// 0079f5fd  56                   push esi
// 0079f5fe  e86dfcffff           call 0x79f270
// 0079f603  8bc6                 mov eax, esi
// 0079f605  5e                   pop esi
// 0079f606  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
