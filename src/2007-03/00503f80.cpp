// roc 2007-03 00503f80  unit: seg_00500000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503f80
//
// 00503f80  53                   push ebx
// 00503f81  56                   push esi
// 00503f82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00503f86  57                   push edi
// 00503f87  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00503f8b  6a01                 push 1
// 00503f8d  56                   push esi
// 00503f8e  8bcf                 mov ecx, edi
// 00503f90  e88b70f7ff           call 0x47b020
// 00503f95  33c0                 xor eax, eax
// 00503f97  39442420             cmp dword ptr [esp + 0x20], eax
// 00503f9b  751b                 jne 0x503fb8
// 00503f9d  85f6                 test esi, esi
// 00503f9f  7e44                 jle 0x503fe5
// 00503fa1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503fa5  8b1f                 mov ebx, dword ptr [edi]
// 00503fa7  8d1408               lea edx, [eax + ecx]
// 00503faa  891483               mov dword ptr [ebx + eax*4], edx
// 00503fad  83c001               add eax, 1
// 00503fb0  3bc6                 cmp eax, esi
// 00503fb2  7cf1                 jl 0x503fa5
// 00503fb4  5f                   pop edi
// 00503fb5  5e                   pop esi
// 00503fb6  5b                   pop ebx
// 00503fb7  c3                   ret 
// 00503fb8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503fbc  33d2                 xor edx, edx
// 00503fbe  85f6                 test esi, esi
// 00503fc0  7e23                 jle 0x503fe5
// 00503fc2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00503fc6  55                   push ebp
// 00503fc7  8b2f                 mov ebp, dword ptr [edi]
// 00503fc9  894c9500             mov dword ptr [ebp + edx*4], ecx
// 00503fcd  83c001               add eax, 1
// 00503fd0  83c101               add ecx, 1
// 00503fd3  3bc3                 cmp eax, ebx
// 00503fd5  7506                 jne 0x503fdd
// 00503fd7  33c0                 xor eax, eax
// 00503fd9  034c2424             add ecx, dword ptr [esp + 0x24]
// 00503fdd  83c201               add edx, 1
// 00503fe0  3bd6                 cmp edx, esi
// 00503fe2  7ce3                 jl 0x503fc7
// 00503fe4  5d                   pop ebp
// 00503fe5  5f                   pop edi
// 00503fe6  5e                   pop esi
// 00503fe7  5b                   pop ebx
// 00503fe8  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ?createIndexArray@MeshAlg@G3D@@SAXHAAV?$Array@H@2@HHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
