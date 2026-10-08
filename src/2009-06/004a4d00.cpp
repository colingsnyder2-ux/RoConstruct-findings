// from server: 100% by auto
// roc 2009-06 004a4d00  unit: G3D::TextureManager::TextureArgs  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4d00
//
// 004a4d00  64a100000000         mov eax, dword ptr fs:[0]
// 004a4d06  6aff                 push -1
// 004a4d08  68f17d8600           push 0x867df1
// 004a4d0d  50                   push eax
// 004a4d0e  64892500000000       mov dword ptr fs:[0], esp
// 004a4d15  83ec08               sub esp, 8
// 004a4d18  55                   push ebp
// 004a4d19  56                   push esi
// 004a4d1a  57                   push edi
// 004a4d1b  8bf9                 mov edi, ecx
// 004a4d1d  8b4708               mov eax, dword ptr [edi + 8]
// 004a4d20  8b2f                 mov ebp, dword ptr [edi]
// 004a4d22  8d0cc500000000       lea ecx, [eax*8]
// 004a4d29  2bc8                 sub ecx, eax
// 004a4d2b  03c9                 add ecx, ecx
// 004a4d2d  03c9                 add ecx, ecx
// 004a4d2f  03c9                 add ecx, ecx
// 004a4d31  6a10                 push 0x10
// 004a4d33  51                   push ecx
// 004a4d34  e837640c00           call 0x56b170
// 004a4d39  8b4f08               mov ecx, dword ptr [edi + 8]
// 004a4d3c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004a4d40  83c408               add esp, 8
// 004a4d43  3bd1                 cmp edx, ecx
// 004a4d45  8907                 mov dword ptr [edi], eax
// 004a4d47  7d02                 jge 0x4a4d4b
// 004a4d49  8bca                 mov ecx, edx
// 004a4d4b  8d34cd00000000       lea esi, [ecx*8]
// 004a4d52  2bf1                 sub esi, ecx
// 004a4d54  8d3cf0               lea edi, [eax + esi*8]
// 004a4d57  8bf0                 mov esi, eax
// 004a4d59  53                   push ebx
// 004a4d5a  8bdd                 mov ebx, ebp
// 004a4d5c  89742410             mov dword ptr [esp + 0x10], esi
// 004a4d60  3bf7                 cmp esi, edi
// 004a4d62  733e                 jae 0x4a4da2
// 004a4d64  eb0a                 jmp 0x4a4d70
// 004a4d66  8da42400000000       lea esp, [esp]
// 004a4d6d  8d4900               lea ecx, [ecx]
// 004a4d70  89742414             mov dword ptr [esp + 0x14], esi
// 004a4d74  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004a4d7c  85f6                 test esi, esi
// 004a4d7e  740c                 je 0x4a4d8c
// 004a4d80  53                   push ebx
// 004a4d81  8bce                 mov ecx, esi
// 004a4d83  e8c8feffff           call 0x4a4c50
// 004a4d88  8b542428             mov edx, dword ptr [esp + 0x28]
// 004a4d8c  83c638               add esi, 0x38
// 004a4d8f  83c338               add ebx, 0x38
// 004a4d92  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004a4d9a  89742410             mov dword ptr [esp + 0x10], esi
// 004a4d9e  3bf7                 cmp esi, edi
// 004a4da0  72ce                 jb 0x4a4d70
// 004a4da2  8d04d500000000       lea eax, [edx*8]
// 004a4da9  2bc2                 sub eax, edx
// 004a4dab  8d7cc500             lea edi, [ebp + eax*8]
// 004a4daf  8bf5                 mov esi, ebp
// 004a4db1  5b                   pop ebx
// 004a4db2  3bef                 cmp ebp, edi
// 004a4db4  7312                 jae 0x4a4dc8
// 004a4db6  8b16                 mov edx, dword ptr [esi]
// 004a4db8  8b4204               mov eax, dword ptr [edx + 4]
// 004a4dbb  6a00                 push 0
// 004a4dbd  8bce                 mov ecx, esi
// 004a4dbf  ffd0                 call eax
// 004a4dc1  83c638               add esi, 0x38
// 004a4dc4  3bf7                 cmp esi, edi
// 004a4dc6  72ee                 jb 0x4a4db6
// 004a4dc8  55                   push ebp
// 004a4dc9  e8c2640c00           call 0x56b290
// 004a4dce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a4dd2  83c404               add esp, 4
// 004a4dd5  5f                   pop edi
// 004a4dd6  5e                   pop esi
// 004a4dd7  5d                   pop ebp
// 004a4dd8  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4ddf  83c414               add esp, 0x14
// 004a4de2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
