// roc 2010-06 00557e50  unit: seg_00550000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557e50
//
// 00557e50  56                   push esi
// 00557e51  57                   push edi
// 00557e52  8bf1                 mov esi, ecx
// 00557e54  33ff                 xor edi, edi
// 00557e56  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00557e59  732c                 jae 0x557e87
// 00557e5b  55                   push ebp
// 00557e5c  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00557e62  7602                 jbe 0x557e66
// 00557e64  ffd5                 call ebp
// 00557e66  837e6c10             cmp dword ptr [esi + 0x6c], 0x10
// 00557e6a  7205                 jb 0x557e71
// 00557e6c  8b4658               mov eax, dword ptr [esi + 0x58]
// 00557e6f  eb03                 jmp 0x557e74
// 00557e71  8d4658               lea eax, [esi + 0x58]
// 00557e74  0fb60438             movzx eax, byte ptr [eax + edi]
// 00557e78  50                   push eax
// 00557e79  8bce                 mov ecx, esi
// 00557e7b  e850fdffff           call 0x557bd0
// 00557e80  47                   inc edi
// 00557e81  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00557e84  72e0                 jb 0x557e66
// 00557e86  5d                   pop ebp
// 00557e87  5f                   pop edi
// 00557e88  5e                   pop esi
// 00557e89  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNewline@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
