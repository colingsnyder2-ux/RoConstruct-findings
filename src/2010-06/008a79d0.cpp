// roc 2010-06 008a79d0  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a79d0
//
// 008a79d0  51                   push ecx
// 008a79d1  8b542408             mov edx, dword ptr [esp + 8]
// 008a79d5  8d0424               lea eax, [esp]
// 008a79d8  50                   push eax
// 008a79d9  52                   push edx
// 008a79da  c744240800000000     mov dword ptr [esp + 8], 0
// 008a79e2  e84b5a0d00           call 0x97d432
// 008a79e7  f7d8                 neg eax
// 008a79e9  1bc0                 sbb eax, eax
// 008a79eb  230424               and eax, dword ptr [esp]
// 008a79ee  59                   pop ecx
// 008a79ef  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?Lookup@CXTWindowMap@@QAEPAVCXTWndHook@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
