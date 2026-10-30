// roc 2010-06 008971a0  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008971a0
//
// 008971a0  8b4104               mov eax, dword ptr [ecx + 4]
// 008971a3  85c0                 test eax, eax
// 008971a5  7411                 je 0x8971b8
// 008971a7  50                   push eax
// 008971a8  ff1528bc9e00         call dword ptr [0x9ebc28]
// 008971ae  85c0                 test eax, eax
// 008971b0  7406                 je 0x8971b8
// 008971b2  b801000000           mov eax, 1
// 008971b7  c3                   ret 
// 008971b8  33c0                 xor eax, eax
// 008971ba  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
