// from server: 100% by auto
// roc 2011-06 0053ea50  unit: G3D::MemoryManager  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053ea50
//
// 0053ea50  55                   push ebp
// 0053ea51  8bec                 mov ebp, esp
// 0053ea53  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0053ea56  83fa40               cmp edx, 0x40
// 0053ea59  8bc2                 mov eax, edx
// 0053ea5b  7e60                 jle 0x53eabd
// 0053ea5d  56                   push esi
// 0053ea5e  57                   push edi
// 0053ea5f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0053ea62  8b7d08               mov edi, dword ptr [ebp + 8]
// 0053ea65  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0053ea68  c1e906               shr ecx, 6
// 0053ea6b  0f6f0e               movq mm1, qword ptr [esi]
// 0053ea6e  0f6f5608             movq mm2, qword ptr [esi + 8]
// 0053ea72  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 0053ea76  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 0053ea7a  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 0053ea7e  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 0053ea82  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 0053ea86  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 0053ea8a  0fe70f               movntq qword ptr [edi], mm1
// 0053ea8d  0fe75708             movntq qword ptr [edi + 8], mm2
// 0053ea91  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 0053ea95  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 0053ea99  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 0053ea9d  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 0053eaa1  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 0053eaa5  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 0053eaa9  83c640               add esi, 0x40
// 0053eaac  83c740               add edi, 0x40
// 0053eaaf  49                   dec ecx
// 0053eab0  75b9                 jne 0x53ea6b
// 0053eab2  0f77                 emms 
// 0053eab4  8bca                 mov ecx, edx
// 0053eab6  83e1c0               and ecx, 0xffffffc0
// 0053eab9  5f                   pop edi
// 0053eaba  2bc1                 sub eax, ecx
// 0053eabc  5e                   pop esi
// 0053eabd  85c0                 test eax, eax
// 0053eabf  7e19                 jle 0x53eada
// 0053eac1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0053eac4  2bc8                 sub ecx, eax
// 0053eac6  03ca                 add ecx, edx
// 0053eac8  50                   push eax
// 0053eac9  51                   push ecx
// 0053eaca  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0053eacd  2bc8                 sub ecx, eax
// 0053eacf  03ca                 add ecx, edx
// 0053ead1  51                   push ecx
// 0053ead2  e805cb2c00           call 0x80b5dc
// 0053ead7  83c40c               add esp, 0xc
// 0053eada  5d                   pop ebp
// 0053eadb  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
