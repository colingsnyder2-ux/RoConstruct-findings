// roc 2008-06 00512a80  unit: G3D::GCamera  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512a80
//
// 00512a80  56                   push esi
// 00512a81  57                   push edi
// 00512a82  8bf1                 mov esi, ecx
// 00512a84  33ff                 xor edi, edi
// 00512a86  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00512a89  732c                 jae 0x512ab7
// 00512a8b  55                   push ebp
// 00512a8c  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00512a92  7602                 jbe 0x512a96
// 00512a94  ffd5                 call ebp
// 00512a96  837e6c10             cmp dword ptr [esi + 0x6c], 0x10
// 00512a9a  7205                 jb 0x512aa1
// 00512a9c  8b4658               mov eax, dword ptr [esi + 0x58]
// 00512a9f  eb03                 jmp 0x512aa4
// 00512aa1  8d4658               lea eax, [esi + 0x58]
// 00512aa4  0fb60438             movzx eax, byte ptr [eax + edi]
// 00512aa8  50                   push eax
// 00512aa9  8bce                 mov ecx, esi
// 00512aab  e850fdffff           call 0x512800
// 00512ab0  47                   inc edi
// 00512ab1  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00512ab4  72e0                 jb 0x512a96
// 00512ab6  5d                   pop ebp
// 00512ab7  5f                   pop edi
// 00512ab8  5e                   pop esi
// 00512ab9  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNewline@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
