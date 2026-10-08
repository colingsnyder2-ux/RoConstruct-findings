// roc 2012-06 00a71660  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71660
//
// 00a71660  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 00a71666  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 00a7166c  56                   push esi
// 00a7166d  8b742408             mov esi, dword ptr [esp + 8]
// 00a71671  50                   push eax
// 00a71672  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a71676  52                   push edx
// 00a71677  50                   push eax
// 00a71678  68007d0000           push 0x7d00
// 00a7167d  56                   push esi
// 00a7167e  e86dfcffff           call 0xa712f0
// 00a71683  8bc6                 mov eax, esi
// 00a71685  5e                   pop esi
// 00a71686  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
