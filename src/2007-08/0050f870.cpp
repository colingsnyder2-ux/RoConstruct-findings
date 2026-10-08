// from server: 100% by auto
// roc 2007-08 0050f870  unit: G3D::TextInput::WrongSymbol  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f870
//
// 0050f870  53                   push ebx
// 0050f871  56                   push esi
// 0050f872  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050f876  57                   push edi
// 0050f877  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050f87b  6a01                 push 1
// 0050f87d  56                   push esi
// 0050f87e  8bcf                 mov ecx, edi
// 0050f880  e81bd2f6ff           call 0x47caa0
// 0050f885  33c0                 xor eax, eax
// 0050f887  39442420             cmp dword ptr [esp + 0x20], eax
// 0050f88b  751b                 jne 0x50f8a8
// 0050f88d  85f6                 test esi, esi
// 0050f88f  7e44                 jle 0x50f8d5
// 0050f891  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050f895  8b1f                 mov ebx, dword ptr [edi]
// 0050f897  8d1408               lea edx, [eax + ecx]
// 0050f89a  891483               mov dword ptr [ebx + eax*4], edx
// 0050f89d  83c001               add eax, 1
// 0050f8a0  3bc6                 cmp eax, esi
// 0050f8a2  7cf1                 jl 0x50f895
// 0050f8a4  5f                   pop edi
// 0050f8a5  5e                   pop esi
// 0050f8a6  5b                   pop ebx
// 0050f8a7  c3                   ret 
// 0050f8a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050f8ac  33d2                 xor edx, edx
// 0050f8ae  85f6                 test esi, esi
// 0050f8b0  7e23                 jle 0x50f8d5
// 0050f8b2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0050f8b6  55                   push ebp
// 0050f8b7  8b2f                 mov ebp, dword ptr [edi]
// 0050f8b9  894c9500             mov dword ptr [ebp + edx*4], ecx
// 0050f8bd  83c001               add eax, 1
// 0050f8c0  83c101               add ecx, 1
// 0050f8c3  3bc3                 cmp eax, ebx
// 0050f8c5  7506                 jne 0x50f8cd
// 0050f8c7  33c0                 xor eax, eax
// 0050f8c9  034c2424             add ecx, dword ptr [esp + 0x24]
// 0050f8cd  83c201               add edx, 1
// 0050f8d0  3bd6                 cmp edx, esi
// 0050f8d2  7ce3                 jl 0x50f8b7
// 0050f8d4  5d                   pop ebp
// 0050f8d5  5f                   pop edi
// 0050f8d6  5e                   pop esi
// 0050f8d7  5b                   pop ebx
// 0050f8d8  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?createIndexArray@MeshAlg@G3D@@SAXHAAV?$Array@H@2@HHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
