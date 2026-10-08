// roc 2009-06 00808390  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808390
//
// 00808390  8b4104               mov eax, dword ptr [ecx + 4]
// 00808393  85c0                 test eax, eax
// 00808395  7411                 je 0x8083a8
// 00808397  50                   push eax
// 00808398  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080839e  85c0                 test eax, eax
// 008083a0  7406                 je 0x8083a8
// 008083a2  b801000000           mov eax, 1
// 008083a7  c3                   ret 
// 008083a8  33c0                 xor eax, eax
// 008083aa  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
