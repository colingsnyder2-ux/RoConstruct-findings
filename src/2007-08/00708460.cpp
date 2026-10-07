// roc 2007-08 00708460  unit: CXTColorHex  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00708460
//
// 00708460  56                   push esi
// 00708461  8bf1                 mov esi, ecx
// 00708463  8b4620               mov eax, dword ptr [esi + 0x20]
// 00708466  50                   push eax
// 00708467  ff15bced7700         call dword ptr [0x77edbc]
// 0070846d  85c0                 test eax, eax
// 0070846f  7414                 je 0x708485
// 00708471  6a00                 push 0
// 00708473  6800010000           push 0x100
// 00708478  6a00                 push 0
// 0070847a  8bce                 mov ecx, esi
// 0070847c  e8377ff2ff           call 0x6303b8
// 00708481  b001                 mov al, 1
// 00708483  5e                   pop esi
// 00708484  c3                   ret 
// 00708485  32c0                 xor al, al
// 00708487  5e                   pop esi
// 00708488  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageStandard.cpp (function ?Init@CXTColorHex@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageStandard.cpp
