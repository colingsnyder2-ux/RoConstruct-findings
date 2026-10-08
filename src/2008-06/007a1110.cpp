// from server: 100% by auto
// roc 2008-06 007a1110  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1110
//
// 007a1110  51                   push ecx
// 007a1111  8b542408             mov edx, dword ptr [esp + 8]
// 007a1115  8d0424               lea eax, [esp]
// 007a1118  50                   push eax
// 007a1119  52                   push edx
// 007a111a  c744240800000000     mov dword ptr [esp + 8], 0
// 007a1122  e8e1b60100           call 0x7bc808
// 007a1127  f7d8                 neg eax
// 007a1129  1bc0                 sbb eax, eax
// 007a112b  230424               and eax, dword ptr [esp]
// 007a112e  59                   pop ecx
// 007a112f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?Lookup@CXTWindowMap@@QAEPAVCXTWndHook@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
