// roc 2007-08 00720540  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720540
//
// 00720540  51                   push ecx
// 00720541  8b542408             mov edx, dword ptr [esp + 8]
// 00720545  8d0424               lea eax, [esp]
// 00720548  50                   push eax
// 00720549  52                   push edx
// 0072054a  c744240800000000     mov dword ptr [esp + 8], 0
// 00720552  e8ed850100           call 0x738b44
// 00720557  f7d8                 neg eax
// 00720559  1bc0                 sbb eax, eax
// 0072055b  230424               and eax, dword ptr [esp]
// 0072055e  59                   pop ecx
// 0072055f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTWndHook.cpp (function ?Lookup@CXTWindowMap@@QAEPAVCXTWndHook@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndHook.cpp
