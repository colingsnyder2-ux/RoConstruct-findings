// from server: 100% by auto
// roc 2008-06 00789fd0  unit: CXTColorBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00789fd0
//
// 00789fd0  56                   push esi
// 00789fd1  8bf1                 mov esi, ecx
// 00789fd3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00789fd6  50                   push eax
// 00789fd7  ff15502d8000         call dword ptr [0x802d50]
// 00789fdd  85c0                 test eax, eax
// 00789fdf  7422                 je 0x78a003
// 00789fe1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00789fe4  6af0                 push -0x10
// 00789fe6  51                   push ecx
// 00789fe7  ff15bc2d8000         call dword ptr [0x802dbc]
// 00789fed  8b5620               mov edx, dword ptr [esi + 0x20]
// 00789ff0  0d00010000           or eax, 0x100
// 00789ff5  50                   push eax
// 00789ff6  6af0                 push -0x10
// 00789ff8  52                   push edx
// 00789ff9  ff15d82d8000         call dword ptr [0x802dd8]
// 00789fff  b001                 mov al, 1
// 0078a001  5e                   pop esi
// 0078a002  c3                   ret 
// 0078a003  32c0                 xor al, al
// 0078a005  5e                   pop esi
// 0078a006  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?Init@CXTColorBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
