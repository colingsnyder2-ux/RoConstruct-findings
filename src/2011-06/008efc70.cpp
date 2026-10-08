// roc 2011-06 008efc70  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efc70
//
// 008efc70  8b4104               mov eax, dword ptr [ecx + 4]
// 008efc73  85c0                 test eax, eax
// 008efc75  7411                 je 0x8efc88
// 008efc77  50                   push eax
// 008efc78  ff15ec1ba400         call dword ptr [0xa41bec]
// 008efc7e  85c0                 test eax, eax
// 008efc80  7406                 je 0x8efc88
// 008efc82  b801000000           mov eax, 1
// 008efc87  c3                   ret 
// 008efc88  33c0                 xor eax, eax
// 008efc8a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
