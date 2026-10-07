// roc 2010-06 0090c750  unit: G3D::TextureManager::TextureArgs  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c750
//
// 0090c750  64a100000000         mov eax, dword ptr fs:[0]
// 0090c756  6aff                 push -1
// 0090c758  6891299a00           push 0x9a2991
// 0090c75d  50                   push eax
// 0090c75e  64892500000000       mov dword ptr fs:[0], esp
// 0090c765  83ec08               sub esp, 8
// 0090c768  55                   push ebp
// 0090c769  56                   push esi
// 0090c76a  57                   push edi
// 0090c76b  8bf9                 mov edi, ecx
// 0090c76d  8b4708               mov eax, dword ptr [edi + 8]
// 0090c770  8b2f                 mov ebp, dword ptr [edi]
// 0090c772  8d0cc500000000       lea ecx, [eax*8]
// 0090c779  2bc8                 sub ecx, eax
// 0090c77b  03c9                 add ecx, ecx
// 0090c77d  03c9                 add ecx, ecx
// 0090c77f  03c9                 add ecx, ecx
// 0090c781  6a10                 push 0x10
// 0090c783  51                   push ecx
// 0090c784  e81711c4ff           call 0x54d8a0
// 0090c789  8b4f08               mov ecx, dword ptr [edi + 8]
// 0090c78c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0090c790  83c408               add esp, 8
// 0090c793  3bd1                 cmp edx, ecx
// 0090c795  8907                 mov dword ptr [edi], eax
// 0090c797  7d02                 jge 0x90c79b
// 0090c799  8bca                 mov ecx, edx
// 0090c79b  8d34cd00000000       lea esi, [ecx*8]
// 0090c7a2  2bf1                 sub esi, ecx
// 0090c7a4  8d3cf0               lea edi, [eax + esi*8]
// 0090c7a7  8bf0                 mov esi, eax
// 0090c7a9  53                   push ebx
// 0090c7aa  8bdd                 mov ebx, ebp
// 0090c7ac  89742410             mov dword ptr [esp + 0x10], esi
// 0090c7b0  3bf7                 cmp esi, edi
// 0090c7b2  733e                 jae 0x90c7f2
// 0090c7b4  eb0a                 jmp 0x90c7c0
// 0090c7b6  8da42400000000       lea esp, [esp]
// 0090c7bd  8d4900               lea ecx, [ecx]
// 0090c7c0  89742414             mov dword ptr [esp + 0x14], esi
// 0090c7c4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0090c7cc  85f6                 test esi, esi
// 0090c7ce  740c                 je 0x90c7dc
// 0090c7d0  53                   push ebx
// 0090c7d1  8bce                 mov ecx, esi
// 0090c7d3  e8c8feffff           call 0x90c6a0
// 0090c7d8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0090c7dc  83c638               add esi, 0x38
// 0090c7df  83c338               add ebx, 0x38
// 0090c7e2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0090c7ea  89742410             mov dword ptr [esp + 0x10], esi
// 0090c7ee  3bf7                 cmp esi, edi
// 0090c7f0  72ce                 jb 0x90c7c0
// 0090c7f2  8d04d500000000       lea eax, [edx*8]
// 0090c7f9  2bc2                 sub eax, edx
// 0090c7fb  8d7cc500             lea edi, [ebp + eax*8]
// 0090c7ff  8bf5                 mov esi, ebp
// 0090c801  5b                   pop ebx
// 0090c802  3bef                 cmp ebp, edi
// 0090c804  7312                 jae 0x90c818
// 0090c806  8b16                 mov edx, dword ptr [esi]
// 0090c808  8b4204               mov eax, dword ptr [edx + 4]
// 0090c80b  6a00                 push 0
// 0090c80d  8bce                 mov ecx, esi
// 0090c80f  ffd0                 call eax
// 0090c811  83c638               add esi, 0x38
// 0090c814  3bf7                 cmp esi, edi
// 0090c816  72ee                 jb 0x90c806
// 0090c818  55                   push ebp
// 0090c819  e8a211c4ff           call 0x54d9c0
// 0090c81e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0090c822  83c404               add esp, 4
// 0090c825  5f                   pop edi
// 0090c826  5e                   pop esi
// 0090c827  5d                   pop ebp
// 0090c828  64890d00000000       mov dword ptr fs:[0], ecx
// 0090c82f  83c414               add esp, 0x14
// 0090c832  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
