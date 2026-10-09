// roc 2007-03 005b1de0  unit: seg_005b0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b1de0
//
// 005b1de0  56                   push esi
// 005b1de1  8bf1                 mov esi, ecx
// 005b1de3  8d4e08               lea ecx, [esi + 8]
// 005b1de6  e845210000           call 0x5b3f30
// 005b1deb  83f804               cmp eax, 4
// 005b1dee  7534                 jne 0x5b1e24
// 005b1df0  8d4e20               lea ecx, [esi + 0x20]
// 005b1df3  e838210000           call 0x5b3f30
// 005b1df8  85c0                 test eax, eax
// 005b1dfa  7528                 jne 0x5b1e24
// 005b1dfc  8d4e28               lea ecx, [esi + 0x28]
// 005b1dff  e82c210000           call 0x5b3f30
// 005b1e04  85c0                 test eax, eax
// 005b1e06  751c                 jne 0x5b1e24
// 005b1e08  8d4e10               lea ecx, [esi + 0x10]
// 005b1e0b  e820210000           call 0x5b3f30
// 005b1e10  85c0                 test eax, eax
// 005b1e12  7510                 jne 0x5b1e24
// 005b1e14  8d4e18               lea ecx, [esi + 0x18]
// 005b1e17  e814210000           call 0x5b3f30
// 005b1e1c  85c0                 test eax, eax
// 005b1e1e  7504                 jne 0x5b1e24
// 005b1e20  b001                 mov al, 1
// 005b1e22  5e                   pop esi
// 005b1e23  c3                   ret 
// 005b1e24  32c0                 xor al, al
// 005b1e26  5e                   pop esi
// 005b1e27  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
