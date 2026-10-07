// roc 2012-06 0062a950  unit: G3D::MemoryManager  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062a950
//
// 0062a950  55                   push ebp
// 0062a951  8bec                 mov ebp, esp
// 0062a953  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0062a956  83fa40               cmp edx, 0x40
// 0062a959  8bc2                 mov eax, edx
// 0062a95b  7e60                 jle 0x62a9bd
// 0062a95d  56                   push esi
// 0062a95e  57                   push edi
// 0062a95f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0062a962  8b7d08               mov edi, dword ptr [ebp + 8]
// 0062a965  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0062a968  c1e906               shr ecx, 6
// 0062a96b  0f6f0e               movq mm1, qword ptr [esi]
// 0062a96e  0f6f5608             movq mm2, qword ptr [esi + 8]
// 0062a972  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 0062a976  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 0062a97a  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 0062a97e  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 0062a982  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 0062a986  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 0062a98a  0fe70f               movntq qword ptr [edi], mm1
// 0062a98d  0fe75708             movntq qword ptr [edi + 8], mm2
// 0062a991  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 0062a995  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 0062a999  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 0062a99d  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 0062a9a1  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 0062a9a5  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 0062a9a9  83c640               add esi, 0x40
// 0062a9ac  83c740               add edi, 0x40
// 0062a9af  49                   dec ecx
// 0062a9b0  75b9                 jne 0x62a96b
// 0062a9b2  0f77                 emms 
// 0062a9b4  8bca                 mov ecx, edx
// 0062a9b6  83e1c0               and ecx, 0xffffffc0
// 0062a9b9  5f                   pop edi
// 0062a9ba  2bc1                 sub eax, ecx
// 0062a9bc  5e                   pop esi
// 0062a9bd  85c0                 test eax, eax
// 0062a9bf  7e19                 jle 0x62a9da
// 0062a9c1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0062a9c4  2bc8                 sub ecx, eax
// 0062a9c6  03ca                 add ecx, edx
// 0062a9c8  50                   push eax
// 0062a9c9  51                   push ecx
// 0062a9ca  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0062a9cd  2bc8                 sub ecx, eax
// 0062a9cf  03ca                 add ecx, edx
// 0062a9d1  51                   push ecx
// 0062a9d2  e8858c3500           call 0x98365c
// 0062a9d7  83c40c               add esp, 0xc
// 0062a9da  5d                   pop ebp
// 0062a9db  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
