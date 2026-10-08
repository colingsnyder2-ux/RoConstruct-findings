// from server: 100% by auto
// roc 2009-06 0049ba40  unit: G3D::Texture  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ba40
//
// 0049ba40  53                   push ebx
// 0049ba41  57                   push edi
// 0049ba42  8bf9                 mov edi, ecx
// 0049ba44  33db                 xor ebx, ebx
// 0049ba46  395f04               cmp dword ptr [edi + 4], ebx
// 0049ba49  7e2a                 jle 0x49ba75
// 0049ba4b  55                   push ebp
// 0049ba4c  56                   push esi
// 0049ba4d  33ed                 xor ebp, ebp
// 0049ba4f  90                   nop 
// 0049ba50  8b37                 mov esi, dword ptr [edi]
// 0049ba52  8b042e               mov eax, dword ptr [esi + ebp]
// 0049ba55  03f5                 add esi, ebp
// 0049ba57  50                   push eax
// 0049ba58  e833f80c00           call 0x56b290
// 0049ba5d  33c0                 xor eax, eax
// 0049ba5f  43                   inc ebx
// 0049ba60  83c404               add esp, 4
// 0049ba63  8906                 mov dword ptr [esi], eax
// 0049ba65  894604               mov dword ptr [esi + 4], eax
// 0049ba68  894608               mov dword ptr [esi + 8], eax
// 0049ba6b  83c50c               add ebp, 0xc
// 0049ba6e  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0049ba71  7cdd                 jl 0x49ba50
// 0049ba73  5e                   pop esi
// 0049ba74  5d                   pop ebp
// 0049ba75  8b0f                 mov ecx, dword ptr [edi]
// 0049ba77  51                   push ecx
// 0049ba78  e813f80c00           call 0x56b290
// 0049ba7d  33c0                 xor eax, eax
// 0049ba7f  83c404               add esp, 4
// 0049ba82  8907                 mov dword ptr [edi], eax
// 0049ba84  894704               mov dword ptr [edi + 4], eax
// 0049ba87  894708               mov dword ptr [edi + 8], eax
// 0049ba8a  5f                   pop edi
// 0049ba8b  5b                   pop ebx
// 0049ba8c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@V?$Array@PBX@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
