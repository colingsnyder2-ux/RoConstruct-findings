// roc 2009-06 0056aff0  unit: G3D::Shader  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056aff0
//
// 0056aff0  55                   push ebp
// 0056aff1  8bec                 mov ebp, esp
// 0056aff3  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0056aff6  83fa40               cmp edx, 0x40
// 0056aff9  8bc2                 mov eax, edx
// 0056affb  7e60                 jle 0x56b05d
// 0056affd  56                   push esi
// 0056affe  57                   push edi
// 0056afff  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0056b002  8b7d08               mov edi, dword ptr [ebp + 8]
// 0056b005  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0056b008  c1e906               shr ecx, 6
// 0056b00b  0f6f0e               movq mm1, qword ptr [esi]
// 0056b00e  0f6f5608             movq mm2, qword ptr [esi + 8]
// 0056b012  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 0056b016  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 0056b01a  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 0056b01e  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 0056b022  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 0056b026  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 0056b02a  0fe70f               movntq qword ptr [edi], mm1
// 0056b02d  0fe75708             movntq qword ptr [edi + 8], mm2
// 0056b031  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 0056b035  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 0056b039  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 0056b03d  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 0056b041  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 0056b045  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 0056b049  83c640               add esi, 0x40
// 0056b04c  83c740               add edi, 0x40
// 0056b04f  49                   dec ecx
// 0056b050  75b9                 jne 0x56b00b
// 0056b052  0f77                 emms 
// 0056b054  8bca                 mov ecx, edx
// 0056b056  83e1c0               and ecx, 0xffffffc0
// 0056b059  5f                   pop edi
// 0056b05a  2bc1                 sub eax, ecx
// 0056b05c  5e                   pop esi
// 0056b05d  85c0                 test eax, eax
// 0056b05f  7e19                 jle 0x56b07a
// 0056b061  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0056b064  2bc8                 sub ecx, eax
// 0056b066  03ca                 add ecx, edx
// 0056b068  50                   push eax
// 0056b069  51                   push ecx
// 0056b06a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0056b06d  2bc8                 sub ecx, eax
// 0056b06f  03ca                 add ecx, edx
// 0056b071  51                   push ecx
// 0056b072  e83fee1a00           call 0x719eb6
// 0056b077  83c40c               add esp, 0xc
// 0056b07a  5d                   pop ebp
// 0056b07b  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
