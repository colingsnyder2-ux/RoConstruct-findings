// roc 2007-03 00703840  unit: seg_00700000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703840
//
// 00703840  8b4104               mov eax, dword ptr [ecx + 4]
// 00703843  85c0                 test eax, eax
// 00703845  7411                 je 0x703858
// 00703847  50                   push eax
// 00703848  ff1574ed7700         call dword ptr [0x77ed74]
// 0070384e  85c0                 test eax, eax
// 00703850  7406                 je 0x703858
// 00703852  b801000000           mov eax, 1
// 00703857  c3                   ret 
// 00703858  33c0                 xor eax, eax
// 0070385a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
