// from server: 100% by auto
// roc 2008-06 0067d820  unit: Ogre::RbxEntity  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067d820
//
// 0067d820  83ec08               sub esp, 8
// 0067d823  53                   push ebx
// 0067d824  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067d828  55                   push ebp
// 0067d829  56                   push esi
// 0067d82a  57                   push edi
// 0067d82b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0067d82f  8bc7                 mov eax, edi
// 0067d831  2bc3                 sub eax, ebx
// 0067d833  c1f803               sar eax, 3
// 0067d836  83f820               cmp eax, 0x20
// 0067d839  7e68                 jle 0x67d8a3
// 0067d83b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067d83f  90                   nop 
// 0067d840  85f6                 test esi, esi
// 0067d842  7e78                 jle 0x67d8bc
// 0067d844  57                   push edi
// 0067d845  8d442414             lea eax, [esp + 0x14]
// 0067d849  53                   push ebx
// 0067d84a  50                   push eax
// 0067d84b  e8b0f3ffff           call 0x67cc00
// 0067d850  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0067d854  8bc6                 mov eax, esi
// 0067d856  99                   cdq 
// 0067d857  2bc2                 sub eax, edx
// 0067d859  d1f8                 sar eax, 1
// 0067d85b  8bf0                 mov esi, eax
// 0067d85d  99                   cdq 
// 0067d85e  2bc2                 sub eax, edx
// 0067d860  d1f8                 sar eax, 1
// 0067d862  03f0                 add esi, eax
// 0067d864  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0067d868  8bcf                 mov ecx, edi
// 0067d86a  8bd0                 mov edx, eax
// 0067d86c  2bcd                 sub ecx, ebp
// 0067d86e  2bd3                 sub edx, ebx
// 0067d870  83c40c               add esp, 0xc
// 0067d873  83e1f8               and ecx, 0xfffffff8
// 0067d876  83e2f8               and edx, 0xfffffff8
// 0067d879  3bd1                 cmp edx, ecx
// 0067d87b  56                   push esi
// 0067d87c  7d0b                 jge 0x67d889
// 0067d87e  50                   push eax
// 0067d87f  53                   push ebx
// 0067d880  e89bffffff           call 0x67d820
// 0067d885  8bdd                 mov ebx, ebp
// 0067d887  eb0b                 jmp 0x67d894
// 0067d889  57                   push edi
// 0067d88a  55                   push ebp
// 0067d88b  e890ffffff           call 0x67d820
// 0067d890  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0067d894  8bc7                 mov eax, edi
// 0067d896  2bc3                 sub eax, ebx
// 0067d898  c1f803               sar eax, 3
// 0067d89b  83c40c               add esp, 0xc
// 0067d89e  83f820               cmp eax, 0x20
// 0067d8a1  7f9d                 jg 0x67d840
// 0067d8a3  83f801               cmp eax, 1
// 0067d8a6  7e0c                 jle 0x67d8b4
// 0067d8a8  6a00                 push 0
// 0067d8aa  57                   push edi
// 0067d8ab  53                   push ebx
// 0067d8ac  e87ff2ffff           call 0x67cb30
// 0067d8b1  83c40c               add esp, 0xc
// 0067d8b4  5f                   pop edi
// 0067d8b5  5e                   pop esi
// 0067d8b6  5d                   pop ebp
// 0067d8b7  5b                   pop ebx
// 0067d8b8  83c408               add esp, 8
// 0067d8bb  c3                   ret 
// 0067d8bc  83f820               cmp eax, 0x20
// 0067d8bf  7ee2                 jle 0x67d8a3
// 0067d8c1  8bc7                 mov eax, edi
// 0067d8c3  2bc3                 sub eax, ebx
// 0067d8c5  83e0f8               and eax, 0xfffffff8
// 0067d8c8  83f808               cmp eax, 8
// 0067d8cb  7e0e                 jle 0x67d8db
// 0067d8cd  6a00                 push 0
// 0067d8cf  6a00                 push 0
// 0067d8d1  57                   push edi
// 0067d8d2  53                   push ebx
// 0067d8d3  e808f2ffff           call 0x67cae0
// 0067d8d8  83c410               add esp, 0x10
// 0067d8db  57                   push edi
// 0067d8dc  53                   push ebx
// 0067d8dd  e8bef8ffff           call 0x67d1a0
// 0067d8e2  83c408               add esp, 8
// 0067d8e5  5f                   pop edi
// 0067d8e6  5e                   pop esi
// 0067d8e7  5d                   pop ebp
// 0067d8e8  5b                   pop ebx
// 0067d8e9  83c408               add esp, 8
// 0067d8ec  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??$_Sort@PANH@std@@YAXPAN0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
