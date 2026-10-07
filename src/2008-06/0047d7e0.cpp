// roc 2008-06 0047d7e0  unit: G3D::TextureManager::TextureArgs  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d7e0
//
// 0047d7e0  64a100000000         mov eax, dword ptr fs:[0]
// 0047d7e6  6aff                 push -1
// 0047d7e8  6881757d00           push 0x7d7581
// 0047d7ed  50                   push eax
// 0047d7ee  64892500000000       mov dword ptr fs:[0], esp
// 0047d7f5  83ec08               sub esp, 8
// 0047d7f8  55                   push ebp
// 0047d7f9  56                   push esi
// 0047d7fa  57                   push edi
// 0047d7fb  8bf9                 mov edi, ecx
// 0047d7fd  8b4708               mov eax, dword ptr [edi + 8]
// 0047d800  8b2f                 mov ebp, dword ptr [edi]
// 0047d802  8d0cc500000000       lea ecx, [eax*8]
// 0047d809  2bc8                 sub ecx, eax
// 0047d80b  03c9                 add ecx, ecx
// 0047d80d  03c9                 add ecx, ecx
// 0047d80f  03c9                 add ecx, ecx
// 0047d811  6a10                 push 0x10
// 0047d813  51                   push ecx
// 0047d814  e867ad0800           call 0x508580
// 0047d819  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047d81c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047d820  83c408               add esp, 8
// 0047d823  3bd1                 cmp edx, ecx
// 0047d825  8907                 mov dword ptr [edi], eax
// 0047d827  7d02                 jge 0x47d82b
// 0047d829  8bca                 mov ecx, edx
// 0047d82b  8d34cd00000000       lea esi, [ecx*8]
// 0047d832  2bf1                 sub esi, ecx
// 0047d834  8d3cf0               lea edi, [eax + esi*8]
// 0047d837  8bf0                 mov esi, eax
// 0047d839  53                   push ebx
// 0047d83a  8bdd                 mov ebx, ebp
// 0047d83c  89742410             mov dword ptr [esp + 0x10], esi
// 0047d840  3bf7                 cmp esi, edi
// 0047d842  733e                 jae 0x47d882
// 0047d844  eb0a                 jmp 0x47d850
// 0047d846  8da42400000000       lea esp, [esp]
// 0047d84d  8d4900               lea ecx, [ecx]
// 0047d850  89742414             mov dword ptr [esp + 0x14], esi
// 0047d854  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0047d85c  85f6                 test esi, esi
// 0047d85e  740c                 je 0x47d86c
// 0047d860  53                   push ebx
// 0047d861  8bce                 mov ecx, esi
// 0047d863  e8c8feffff           call 0x47d730
// 0047d868  8b542428             mov edx, dword ptr [esp + 0x28]
// 0047d86c  83c638               add esi, 0x38
// 0047d86f  83c338               add ebx, 0x38
// 0047d872  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047d87a  89742410             mov dword ptr [esp + 0x10], esi
// 0047d87e  3bf7                 cmp esi, edi
// 0047d880  72ce                 jb 0x47d850
// 0047d882  8d04d500000000       lea eax, [edx*8]
// 0047d889  2bc2                 sub eax, edx
// 0047d88b  8d7cc500             lea edi, [ebp + eax*8]
// 0047d88f  8bf5                 mov esi, ebp
// 0047d891  5b                   pop ebx
// 0047d892  3bef                 cmp ebp, edi
// 0047d894  7312                 jae 0x47d8a8
// 0047d896  8b16                 mov edx, dword ptr [esi]
// 0047d898  8b4204               mov eax, dword ptr [edx + 4]
// 0047d89b  6a00                 push 0
// 0047d89d  8bce                 mov ecx, esi
// 0047d89f  ffd0                 call eax
// 0047d8a1  83c638               add esi, 0x38
// 0047d8a4  3bf7                 cmp esi, edi
// 0047d8a6  72ee                 jb 0x47d896
// 0047d8a8  55                   push ebp
// 0047d8a9  e872a40800           call 0x507d20
// 0047d8ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047d8b2  83c404               add esp, 4
// 0047d8b5  5f                   pop edi
// 0047d8b6  5e                   pop esi
// 0047d8b7  5d                   pop ebp
// 0047d8b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d8bf  83c414               add esp, 0x14
// 0047d8c2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
