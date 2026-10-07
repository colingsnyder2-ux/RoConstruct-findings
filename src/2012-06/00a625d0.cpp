// roc 2012-06 00a625d0  unit: CXTColorBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a625d0
//
// 00a625d0  56                   push esi
// 00a625d1  8bf1                 mov esi, ecx
// 00a625d3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a625d6  50                   push eax
// 00a625d7  ff15143bb200         call dword ptr [0xb23b14]
// 00a625dd  85c0                 test eax, eax
// 00a625df  7422                 je 0xa62603
// 00a625e1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a625e4  6af0                 push -0x10
// 00a625e6  51                   push ecx
// 00a625e7  ff15bc3ab200         call dword ptr [0xb23abc]
// 00a625ed  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a625f0  0d00010000           or eax, 0x100
// 00a625f5  50                   push eax
// 00a625f6  6af0                 push -0x10
// 00a625f8  52                   push edx
// 00a625f9  ff15943ab200         call dword ptr [0xb23a94]
// 00a625ff  b001                 mov al, 1
// 00a62601  5e                   pop esi
// 00a62602  c3                   ret 
// 00a62603  32c0                 xor al, al
// 00a62605  5e                   pop esi
// 00a62606  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?Init@CXTPColorBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
