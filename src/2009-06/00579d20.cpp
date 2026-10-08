// from server: 100% by auto
// roc 2009-06 00579d20  unit: G3D::LineSegment  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579d20
//
// 00579d20  56                   push esi
// 00579d21  57                   push edi
// 00579d22  8bf1                 mov esi, ecx
// 00579d24  33ff                 xor edi, edi
// 00579d26  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00579d29  732c                 jae 0x579d57
// 00579d2b  55                   push ebp
// 00579d2c  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 00579d32  7602                 jbe 0x579d36
// 00579d34  ffd5                 call ebp
// 00579d36  837e6c10             cmp dword ptr [esi + 0x6c], 0x10
// 00579d3a  7205                 jb 0x579d41
// 00579d3c  8b4658               mov eax, dword ptr [esi + 0x58]
// 00579d3f  eb03                 jmp 0x579d44
// 00579d41  8d4658               lea eax, [esi + 0x58]
// 00579d44  0fb60438             movzx eax, byte ptr [eax + edi]
// 00579d48  50                   push eax
// 00579d49  8bce                 mov ecx, esi
// 00579d4b  e850fdffff           call 0x579aa0
// 00579d50  47                   inc edi
// 00579d51  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00579d54  72e0                 jb 0x579d36
// 00579d56  5d                   pop ebp
// 00579d57  5f                   pop edi
// 00579d58  5e                   pop esi
// 00579d59  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNewline@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
