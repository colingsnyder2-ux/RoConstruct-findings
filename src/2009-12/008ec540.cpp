// roc 2009-12 008ec540  unit: CXTPDialogBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec540
//
// 008ec540  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 008ec546  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 008ec54c  56                   push esi
// 008ec54d  8b742408             mov esi, dword ptr [esp + 8]
// 008ec551  50                   push eax
// 008ec552  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ec556  52                   push edx
// 008ec557  50                   push eax
// 008ec558  68007d0000           push 0x7d00
// 008ec55d  56                   push esi
// 008ec55e  e86dfcffff           call 0x8ec1d0
// 008ec563  8bc6                 mov eax, esi
// 008ec565  5e                   pop esi
// 008ec566  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?CalcDynamicLayout@CXTPDialogBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
