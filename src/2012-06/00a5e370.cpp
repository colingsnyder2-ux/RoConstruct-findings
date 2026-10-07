// roc 2012-06 00a5e370  unit: CXTColorHex  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e370
//
// 00a5e370  56                   push esi
// 00a5e371  8bf1                 mov esi, ecx
// 00a5e373  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5e376  50                   push eax
// 00a5e377  ff15143bb200         call dword ptr [0xb23b14]
// 00a5e37d  85c0                 test eax, eax
// 00a5e37f  7414                 je 0xa5e395
// 00a5e381  6a00                 push 0
// 00a5e383  6800010000           push 0x100
// 00a5e388  6a00                 push 0
// 00a5e38a  8bce                 mov ecx, esi
// 00a5e38c  e8c744f2ff           call 0x982858
// 00a5e391  b001                 mov al, 1
// 00a5e393  5e                   pop esi
// 00a5e394  c3                   ret 
// 00a5e395  32c0                 xor al, al
// 00a5e397  5e                   pop esi
// 00a5e398  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?Init@CXTColorHex@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
