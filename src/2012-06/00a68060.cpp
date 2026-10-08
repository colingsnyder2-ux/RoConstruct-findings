// roc 2012-06 00a68060  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68060
//
// 00a68060  8b4104               mov eax, dword ptr [ecx + 4]
// 00a68063  85c0                 test eax, eax
// 00a68065  7411                 je 0xa68078
// 00a68067  50                   push eax
// 00a68068  ff15143bb200         call dword ptr [0xb23b14]
// 00a6806e  85c0                 test eax, eax
// 00a68070  7406                 je 0xa68078
// 00a68072  b801000000           mov eax, 1
// 00a68077  c3                   ret 
// 00a68078  33c0                 xor eax, eax
// 00a6807a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
