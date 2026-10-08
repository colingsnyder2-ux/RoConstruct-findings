// roc 2009-12 005fa2b0  unit: G3D::LineSegment  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa2b0
//
// 005fa2b0  56                   push esi
// 005fa2b1  57                   push edi
// 005fa2b2  8bf1                 mov esi, ecx
// 005fa2b4  33ff                 xor edi, edi
// 005fa2b6  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 005fa2b9  732c                 jae 0x5fa2e7
// 005fa2bb  55                   push ebp
// 005fa2bc  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 005fa2c2  7602                 jbe 0x5fa2c6
// 005fa2c4  ffd5                 call ebp
// 005fa2c6  837e6c10             cmp dword ptr [esi + 0x6c], 0x10
// 005fa2ca  7205                 jb 0x5fa2d1
// 005fa2cc  8b4658               mov eax, dword ptr [esi + 0x58]
// 005fa2cf  eb03                 jmp 0x5fa2d4
// 005fa2d1  8d4658               lea eax, [esi + 0x58]
// 005fa2d4  0fb60438             movzx eax, byte ptr [eax + edi]
// 005fa2d8  50                   push eax
// 005fa2d9  8bce                 mov ecx, esi
// 005fa2db  e850fdffff           call 0x5fa030
// 005fa2e0  47                   inc edi
// 005fa2e1  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 005fa2e4  72e0                 jb 0x5fa2c6
// 005fa2e6  5d                   pop ebp
// 005fa2e7  5f                   pop edi
// 005fa2e8  5e                   pop esi
// 005fa2e9  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNewline@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
