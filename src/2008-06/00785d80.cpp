// roc 2008-06 00785d80  unit: CXTColorHex  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785d80
//
// 00785d80  56                   push esi
// 00785d81  8bf1                 mov esi, ecx
// 00785d83  8b4620               mov eax, dword ptr [esi + 0x20]
// 00785d86  50                   push eax
// 00785d87  ff15502d8000         call dword ptr [0x802d50]
// 00785d8d  85c0                 test eax, eax
// 00785d8f  7414                 je 0x785da5
// 00785d91  6a00                 push 0
// 00785d93  6800010000           push 0x100
// 00785d98  6a00                 push 0
// 00785d9a  8bce                 mov ecx, esi
// 00785d9c  e871b0f1ff           call 0x6a0e12
// 00785da1  b001                 mov al, 1
// 00785da3  5e                   pop esi
// 00785da4  c3                   ret 
// 00785da5  32c0                 xor al, al
// 00785da7  5e                   pop esi
// 00785da8  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?Init@CXTColorHex@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
