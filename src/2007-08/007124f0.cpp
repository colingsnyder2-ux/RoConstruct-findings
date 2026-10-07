// roc 2007-08 007124f0  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007124f0
//
// 007124f0  8b4104               mov eax, dword ptr [ecx + 4]
// 007124f3  85c0                 test eax, eax
// 007124f5  7411                 je 0x712508
// 007124f7  50                   push eax
// 007124f8  ff15bced7700         call dword ptr [0x77edbc]
// 007124fe  85c0                 test eax, eax
// 00712500  7406                 je 0x712508
// 00712502  b801000000           mov eax, 1
// 00712507  c3                   ret 
// 00712508  33c0                 xor eax, eax
// 0071250a  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndHook.cpp
