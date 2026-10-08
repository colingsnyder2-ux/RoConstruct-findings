// roc 2011-06 009010a0  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009010a0
//
// 009010a0  51                   push ecx
// 009010a1  8b542408             mov edx, dword ptr [esp + 8]
// 009010a5  8d0424               lea eax, [esp]
// 009010a8  50                   push eax
// 009010a9  52                   push edx
// 009010aa  c744240800000000     mov dword ptr [esp + 8], 0
// 009010b2  e81dba0c00           call 0x9ccad4
// 009010b7  f7d8                 neg eax
// 009010b9  1bc0                 sbb eax, eax
// 009010bb  230424               and eax, dword ptr [esp]
// 009010be  59                   pop ecx
// 009010bf  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?Lookup@CXTWindowMap@@QAEPAVCXTWndHook@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
