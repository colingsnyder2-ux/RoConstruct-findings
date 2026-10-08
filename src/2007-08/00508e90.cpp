// from server: 100% by auto
// roc 2007-08 00508e90  unit: G3D::GCamera  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508e90
//
// 00508e90  56                   push esi
// 00508e91  57                   push edi
// 00508e92  8bf1                 mov esi, ecx
// 00508e94  33ff                 xor edi, edi
// 00508e96  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00508e99  732e                 jae 0x508ec9
// 00508e9b  55                   push ebp
// 00508e9c  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00508ea2  7602                 jbe 0x508ea6
// 00508ea4  ffd5                 call ebp
// 00508ea6  837e6c10             cmp dword ptr [esi + 0x6c], 0x10
// 00508eaa  7205                 jb 0x508eb1
// 00508eac  8b4658               mov eax, dword ptr [esi + 0x58]
// 00508eaf  eb03                 jmp 0x508eb4
// 00508eb1  8d4658               lea eax, [esi + 0x58]
// 00508eb4  0fb60438             movzx eax, byte ptr [eax + edi]
// 00508eb8  50                   push eax
// 00508eb9  8bce                 mov ecx, esi
// 00508ebb  e8c0fdffff           call 0x508c80
// 00508ec0  83c701               add edi, 1
// 00508ec3  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 00508ec6  72de                 jb 0x508ea6
// 00508ec8  5d                   pop ebp
// 00508ec9  5f                   pop edi
// 00508eca  5e                   pop esi
// 00508ecb  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNewline@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
