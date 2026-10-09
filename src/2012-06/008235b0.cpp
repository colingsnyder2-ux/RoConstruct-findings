// roc 2012-06 008235b0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008235b0
//
// 008235b0  56                   push esi
// 008235b1  8bf1                 mov esi, ecx
// 008235b3  8d4e08               lea ecx, [esi + 8]
// 008235b6  e8c5f1ffff           call 0x822780
// 008235bb  83f804               cmp eax, 4
// 008235be  7534                 jne 0x8235f4
// 008235c0  8d4e20               lea ecx, [esi + 0x20]
// 008235c3  e8b8f1ffff           call 0x822780
// 008235c8  85c0                 test eax, eax
// 008235ca  7528                 jne 0x8235f4
// 008235cc  8d4e28               lea ecx, [esi + 0x28]
// 008235cf  e8acf1ffff           call 0x822780
// 008235d4  85c0                 test eax, eax
// 008235d6  751c                 jne 0x8235f4
// 008235d8  8d4e10               lea ecx, [esi + 0x10]
// 008235db  e8a0f1ffff           call 0x822780
// 008235e0  85c0                 test eax, eax
// 008235e2  7510                 jne 0x8235f4
// 008235e4  8d4e18               lea ecx, [esi + 0x18]
// 008235e7  e894f1ffff           call 0x822780
// 008235ec  85c0                 test eax, eax
// 008235ee  7504                 jne 0x8235f4
// 008235f0  b001                 mov al, 1
// 008235f2  5e                   pop esi
// 008235f3  c3                   ret 
// 008235f4  32c0                 xor al, al
// 008235f6  5e                   pop esi
// 008235f7  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
