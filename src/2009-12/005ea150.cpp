// roc 2009-12 005ea150  unit: G3D::Shader  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea150
//
// 005ea150  55                   push ebp
// 005ea151  8bec                 mov ebp, esp
// 005ea153  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005ea156  83fa40               cmp edx, 0x40
// 005ea159  8bc2                 mov eax, edx
// 005ea15b  7e60                 jle 0x5ea1bd
// 005ea15d  56                   push esi
// 005ea15e  57                   push edi
// 005ea15f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 005ea162  8b7d08               mov edi, dword ptr [ebp + 8]
// 005ea165  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005ea168  c1e906               shr ecx, 6
// 005ea16b  0f6f0e               movq mm1, qword ptr [esi]
// 005ea16e  0f6f5608             movq mm2, qword ptr [esi + 8]
// 005ea172  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 005ea176  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 005ea17a  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 005ea17e  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 005ea182  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 005ea186  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 005ea18a  0fe70f               movntq qword ptr [edi], mm1
// 005ea18d  0fe75708             movntq qword ptr [edi + 8], mm2
// 005ea191  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 005ea195  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 005ea199  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 005ea19d  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 005ea1a1  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 005ea1a5  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 005ea1a9  83c640               add esi, 0x40
// 005ea1ac  83c740               add edi, 0x40
// 005ea1af  49                   dec ecx
// 005ea1b0  75b9                 jne 0x5ea16b
// 005ea1b2  0f77                 emms 
// 005ea1b4  8bca                 mov ecx, edx
// 005ea1b6  83e1c0               and ecx, 0xffffffc0
// 005ea1b9  5f                   pop edi
// 005ea1ba  2bc1                 sub eax, ecx
// 005ea1bc  5e                   pop esi
// 005ea1bd  85c0                 test eax, eax
// 005ea1bf  7e19                 jle 0x5ea1da
// 005ea1c1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ea1c4  2bc8                 sub ecx, eax
// 005ea1c6  03ca                 add ecx, edx
// 005ea1c8  50                   push eax
// 005ea1c9  51                   push ecx
// 005ea1ca  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ea1cd  2bc8                 sub ecx, eax
// 005ea1cf  03ca                 add ecx, edx
// 005ea1d1  51                   push ecx
// 005ea1d2  e80fab2000           call 0x7f4ce6
// 005ea1d7  83c40c               add esp, 0xc
// 005ea1da  5d                   pop ebp
// 005ea1db  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
