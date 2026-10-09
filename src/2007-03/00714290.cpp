// roc 2007-03 00714290  unit: seg_00710000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714290
//
// 00714290  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 00714296  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 0071429c  56                   push esi
// 0071429d  8b742408             mov esi, dword ptr [esp + 8]
// 007142a1  50                   push eax
// 007142a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007142a6  52                   push edx
// 007142a7  50                   push eax
// 007142a8  68007d0000           push 0x7d00
// 007142ad  56                   push esi
// 007142ae  e86dfcffff           call 0x713f20
// 007142b3  8bc6                 mov eax, esi
// 007142b5  5e                   pop esi
// 007142b6  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
