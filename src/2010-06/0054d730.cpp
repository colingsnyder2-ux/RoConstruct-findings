// roc 2010-06 0054d730  unit: G3D::Shader  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d730
//
// 0054d730  55                   push ebp
// 0054d731  8bec                 mov ebp, esp
// 0054d733  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0054d736  83fa40               cmp edx, 0x40
// 0054d739  8bc2                 mov eax, edx
// 0054d73b  7e60                 jle 0x54d79d
// 0054d73d  56                   push esi
// 0054d73e  57                   push edi
// 0054d73f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0054d742  8b7d08               mov edi, dword ptr [ebp + 8]
// 0054d745  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0054d748  c1e906               shr ecx, 6
// 0054d74b  0f6f0e               movq mm1, qword ptr [esi]
// 0054d74e  0f6f5608             movq mm2, qword ptr [esi + 8]
// 0054d752  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 0054d756  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 0054d75a  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 0054d75e  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 0054d762  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 0054d766  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 0054d76a  0fe70f               movntq qword ptr [edi], mm1
// 0054d76d  0fe75708             movntq qword ptr [edi + 8], mm2
// 0054d771  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 0054d775  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 0054d779  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 0054d77d  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 0054d781  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 0054d785  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 0054d789  83c640               add esi, 0x40
// 0054d78c  83c740               add edi, 0x40
// 0054d78f  49                   dec ecx
// 0054d790  75b9                 jne 0x54d74b
// 0054d792  0f77                 emms 
// 0054d794  8bca                 mov ecx, edx
// 0054d796  83e1c0               and ecx, 0xffffffc0
// 0054d799  5f                   pop edi
// 0054d79a  2bc1                 sub eax, ecx
// 0054d79c  5e                   pop esi
// 0054d79d  85c0                 test eax, eax
// 0054d79f  7e19                 jle 0x54d7ba
// 0054d7a1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054d7a4  2bc8                 sub ecx, eax
// 0054d7a6  03ca                 add ecx, edx
// 0054d7a8  50                   push eax
// 0054d7a9  51                   push ecx
// 0054d7aa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054d7ad  2bc8                 sub ecx, eax
// 0054d7af  03ca                 add ecx, edx
// 0054d7b1  51                   push ecx
// 0054d7b2  e86fb62500           call 0x7a8e26
// 0054d7b7  83c40c               add esp, 0xc
// 0054d7ba  5d                   pop ebp
// 0054d7bb  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
