// from server: 100% by auto
// roc 2010-06 004855e0  unit: G3D::Texture  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004855e0
//
// 004855e0  53                   push ebx
// 004855e1  57                   push edi
// 004855e2  8bf9                 mov edi, ecx
// 004855e4  33db                 xor ebx, ebx
// 004855e6  395f04               cmp dword ptr [edi + 4], ebx
// 004855e9  7e2a                 jle 0x485615
// 004855eb  55                   push ebp
// 004855ec  56                   push esi
// 004855ed  33ed                 xor ebp, ebp
// 004855ef  90                   nop 
// 004855f0  8b37                 mov esi, dword ptr [edi]
// 004855f2  8b042e               mov eax, dword ptr [esi + ebp]
// 004855f5  03f5                 add esi, ebp
// 004855f7  50                   push eax
// 004855f8  e8c3830c00           call 0x54d9c0
// 004855fd  33c0                 xor eax, eax
// 004855ff  43                   inc ebx
// 00485600  83c404               add esp, 4
// 00485603  8906                 mov dword ptr [esi], eax
// 00485605  894604               mov dword ptr [esi + 4], eax
// 00485608  894608               mov dword ptr [esi + 8], eax
// 0048560b  83c50c               add ebp, 0xc
// 0048560e  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00485611  7cdd                 jl 0x4855f0
// 00485613  5e                   pop esi
// 00485614  5d                   pop ebp
// 00485615  8b0f                 mov ecx, dword ptr [edi]
// 00485617  51                   push ecx
// 00485618  e8a3830c00           call 0x54d9c0
// 0048561d  33c0                 xor eax, eax
// 0048561f  83c404               add esp, 4
// 00485622  8907                 mov dword ptr [edi], eax
// 00485624  894704               mov dword ptr [edi + 4], eax
// 00485627  894708               mov dword ptr [edi + 8], eax
// 0048562a  5f                   pop edi
// 0048562b  5b                   pop ebx
// 0048562c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@V?$Array@PBX@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
