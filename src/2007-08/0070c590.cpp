// roc 2007-08 0070c590  unit: CXTColorBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c590
//
// 0070c590  56                   push esi
// 0070c591  8bf1                 mov esi, ecx
// 0070c593  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070c596  50                   push eax
// 0070c597  ff15bced7700         call dword ptr [0x77edbc]
// 0070c59d  85c0                 test eax, eax
// 0070c59f  7422                 je 0x70c5c3
// 0070c5a1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0070c5a4  6af0                 push -0x10
// 0070c5a6  51                   push ecx
// 0070c5a7  ff1534ec7700         call dword ptr [0x77ec34]
// 0070c5ad  8b5620               mov edx, dword ptr [esi + 0x20]
// 0070c5b0  0d00010000           or eax, 0x100
// 0070c5b5  50                   push eax
// 0070c5b6  6af0                 push -0x10
// 0070c5b8  52                   push edx
// 0070c5b9  ff1518ec7700         call dword ptr [0x77ec18]
// 0070c5bf  b001                 mov al, 1
// 0070c5c1  5e                   pop esi
// 0070c5c2  c3                   ret 
// 0070c5c3  32c0                 xor al, al
// 0070c5c5  5e                   pop esi
// 0070c5c6  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?Init@CXTColorBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
