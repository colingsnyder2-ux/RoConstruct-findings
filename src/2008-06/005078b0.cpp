// roc 2008-06 005078b0  unit: G3D::Shader  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005078b0
//
// 005078b0  55                   push ebp
// 005078b1  8bec                 mov ebp, esp
// 005078b3  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005078b6  83fa40               cmp edx, 0x40
// 005078b9  8bc2                 mov eax, edx
// 005078bb  7e60                 jle 0x50791d
// 005078bd  56                   push esi
// 005078be  57                   push edi
// 005078bf  8b750c               mov esi, dword ptr [ebp + 0xc]
// 005078c2  8b7d08               mov edi, dword ptr [ebp + 8]
// 005078c5  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005078c8  c1e906               shr ecx, 6
// 005078cb  0f6f0e               movq mm1, qword ptr [esi]
// 005078ce  0f6f5608             movq mm2, qword ptr [esi + 8]
// 005078d2  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 005078d6  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 005078da  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 005078de  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 005078e2  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 005078e6  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 005078ea  0fe70f               movntq qword ptr [edi], mm1
// 005078ed  0fe75708             movntq qword ptr [edi + 8], mm2
// 005078f1  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 005078f5  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 005078f9  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 005078fd  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 00507901  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 00507905  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 00507909  83c640               add esi, 0x40
// 0050790c  83c740               add edi, 0x40
// 0050790f  49                   dec ecx
// 00507910  75b9                 jne 0x5078cb
// 00507912  0f77                 emms 
// 00507914  8bca                 mov ecx, edx
// 00507916  83e1c0               and ecx, 0xffffffc0
// 00507919  5f                   pop edi
// 0050791a  2bc1                 sub eax, ecx
// 0050791c  5e                   pop esi
// 0050791d  85c0                 test eax, eax
// 0050791f  7e19                 jle 0x50793a
// 00507921  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00507924  2bc8                 sub ecx, eax
// 00507926  03ca                 add ecx, edx
// 00507928  50                   push eax
// 00507929  51                   push ecx
// 0050792a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0050792d  2bc8                 sub ecx, eax
// 0050792f  03ca                 add ecx, edx
// 00507931  51                   push ecx
// 00507932  e8a99e1900           call 0x6a17e0
// 00507937  83c40c               add esp, 0xc
// 0050793a  5d                   pop ebp
// 0050793b  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
