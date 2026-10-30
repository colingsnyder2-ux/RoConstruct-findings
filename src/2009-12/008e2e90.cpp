// roc 2009-12 008e2e90  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2e90
//
// 008e2e90  8b4104               mov eax, dword ptr [ecx + 4]
// 008e2e93  85c0                 test eax, eax
// 008e2e95  7411                 je 0x8e2ea8
// 008e2e97  50                   push eax
// 008e2e98  ff1584cc9800         call dword ptr [0x98cc84]
// 008e2e9e  85c0                 test eax, eax
// 008e2ea0  7406                 je 0x8e2ea8
// 008e2ea2  b801000000           mov eax, 1
// 008e2ea7  c3                   ret 
// 008e2ea8  33c0                 xor eax, eax
// 008e2eaa  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
