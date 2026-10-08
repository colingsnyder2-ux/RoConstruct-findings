// from server: 100% by auto
// roc 2007-08 0071e830  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071e830
//
// 0071e830  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 0071e836  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 0071e83c  56                   push esi
// 0071e83d  8b742408             mov esi, dword ptr [esp + 8]
// 0071e841  50                   push eax
// 0071e842  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071e846  52                   push edx
// 0071e847  50                   push eax
// 0071e848  68007d0000           push 0x7d00
// 0071e84d  56                   push esi
// 0071e84e  e86dfcffff           call 0x71e4c0
// 0071e853  8bc6                 mov eax, esi
// 0071e855  5e                   pop esi
// 0071e856  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
