// roc 2007-08 005b6d00  unit: RBX::Sky  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6d00
//
// 005b6d00  56                   push esi
// 005b6d01  8bf1                 mov esi, ecx
// 005b6d03  8d4e08               lea ecx, [esi + 8]
// 005b6d06  e815240000           call 0x5b9120
// 005b6d0b  83f804               cmp eax, 4
// 005b6d0e  7534                 jne 0x5b6d44
// 005b6d10  8d4e20               lea ecx, [esi + 0x20]
// 005b6d13  e808240000           call 0x5b9120
// 005b6d18  85c0                 test eax, eax
// 005b6d1a  7528                 jne 0x5b6d44
// 005b6d1c  8d4e28               lea ecx, [esi + 0x28]
// 005b6d1f  e8fc230000           call 0x5b9120
// 005b6d24  85c0                 test eax, eax
// 005b6d26  751c                 jne 0x5b6d44
// 005b6d28  8d4e10               lea ecx, [esi + 0x10]
// 005b6d2b  e8f0230000           call 0x5b9120
// 005b6d30  85c0                 test eax, eax
// 005b6d32  7510                 jne 0x5b6d44
// 005b6d34  8d4e18               lea ecx, [esi + 0x18]
// 005b6d37  e8e4230000           call 0x5b9120
// 005b6d3c  85c0                 test eax, eax
// 005b6d3e  7504                 jne 0x5b6d44
// 005b6d40  b001                 mov al, 1
// 005b6d42  5e                   pop esi
// 005b6d43  c3                   ret 
// 005b6d44  32c0                 xor al, al
// 005b6d46  5e                   pop esi
// 005b6d47  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
