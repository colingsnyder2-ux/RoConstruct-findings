// roc 2009-06 00818bd0  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818bd0
//
// 00818bd0  51                   push ecx
// 00818bd1  8b542408             mov edx, dword ptr [esp + 8]
// 00818bd5  8d0424               lea eax, [esp]
// 00818bd8  50                   push eax
// 00818bd9  52                   push edx
// 00818bda  c744240800000000     mov dword ptr [esp + 8], 0
// 00818be2  e89d390300           call 0x84c584
// 00818be7  f7d8                 neg eax
// 00818be9  1bc0                 sbb eax, eax
// 00818beb  230424               and eax, dword ptr [esp]
// 00818bee  59                   pop ecx
// 00818bef  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?Lookup@CXTWindowMap@@QAEPAVCXTWndHook@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
