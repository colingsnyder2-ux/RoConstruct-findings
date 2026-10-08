// from server: 100% by auto
// roc 2007-08 004ff390  unit: G3D::Shader  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff390
//
// 004ff390  55                   push ebp
// 004ff391  8bec                 mov ebp, esp
// 004ff393  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004ff396  83fa40               cmp edx, 0x40
// 004ff399  8bc2                 mov eax, edx
// 004ff39b  7e60                 jle 0x4ff3fd
// 004ff39d  56                   push esi
// 004ff39e  57                   push edi
// 004ff39f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004ff3a2  8b7d08               mov edi, dword ptr [ebp + 8]
// 004ff3a5  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004ff3a8  c1e906               shr ecx, 6
// 004ff3ab  0f6f0e               movq mm1, qword ptr [esi]
// 004ff3ae  0f6f5608             movq mm2, qword ptr [esi + 8]
// 004ff3b2  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 004ff3b6  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 004ff3ba  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 004ff3be  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 004ff3c2  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 004ff3c6  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 004ff3ca  0fe70f               movntq qword ptr [edi], mm1
// 004ff3cd  0fe75708             movntq qword ptr [edi + 8], mm2
// 004ff3d1  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 004ff3d5  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 004ff3d9  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 004ff3dd  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 004ff3e1  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 004ff3e5  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 004ff3e9  83c640               add esi, 0x40
// 004ff3ec  83c740               add edi, 0x40
// 004ff3ef  49                   dec ecx
// 004ff3f0  75b9                 jne 0x4ff3ab
// 004ff3f2  0f77                 emms 
// 004ff3f4  8bca                 mov ecx, edx
// 004ff3f6  83e1c0               and ecx, 0xffffffc0
// 004ff3f9  5f                   pop edi
// 004ff3fa  2bc1                 sub eax, ecx
// 004ff3fc  5e                   pop esi
// 004ff3fd  85c0                 test eax, eax
// 004ff3ff  7e19                 jle 0x4ff41a
// 004ff401  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004ff404  2bc8                 sub ecx, eax
// 004ff406  03ca                 add ecx, edx
// 004ff408  50                   push eax
// 004ff409  51                   push ecx
// 004ff40a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ff40d  2bc8                 sub ecx, eax
// 004ff40f  03ca                 add ecx, edx
// 004ff411  51                   push ecx
// 004ff412  e835191300           call 0x630d4c
// 004ff417  83c40c               add esp, 0xc
// 004ff41a  5d                   pop ebp
// 004ff41b  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
