// roc 2012-06 00a792b0  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a792b0
//
// 00a792b0  51                   push ecx
// 00a792b1  8b542408             mov edx, dword ptr [esp + 8]
// 00a792b5  8d0424               lea eax, [esp]
// 00a792b8  50                   push eax
// 00a792b9  52                   push edx
// 00a792ba  c744240800000000     mov dword ptr [esp + 8], 0
// 00a792c2  e8ab080200           call 0xa99b72
// 00a792c7  f7d8                 neg eax
// 00a792c9  1bc0                 sbb eax, eax
// 00a792cb  230424               and eax, dword ptr [esp]
// 00a792ce  59                   pop ecx
// 00a792cf  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?Lookup@CXTWindowMap@@QAEPAVCXTWndHook@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
