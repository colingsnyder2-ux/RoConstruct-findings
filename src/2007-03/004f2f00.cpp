// roc 2007-03 004f2f00  unit: seg_004f0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2f00
//
// 004f2f00  55                   push ebp
// 004f2f01  8bec                 mov ebp, esp
// 004f2f03  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004f2f06  83fa40               cmp edx, 0x40
// 004f2f09  8bc2                 mov eax, edx
// 004f2f0b  7e60                 jle 0x4f2f6d
// 004f2f0d  56                   push esi
// 004f2f0e  57                   push edi
// 004f2f0f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004f2f12  8b7d08               mov edi, dword ptr [ebp + 8]
// 004f2f15  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004f2f18  c1e906               shr ecx, 6
// 004f2f1b  0f6f0e               movq mm1, qword ptr [esi]
// 004f2f1e  0f6f5608             movq mm2, qword ptr [esi + 8]
// 004f2f22  0f6f5e10             movq mm3, qword ptr [esi + 0x10]
// 004f2f26  0f6f6618             movq mm4, qword ptr [esi + 0x18]
// 004f2f2a  0f6f6e20             movq mm5, qword ptr [esi + 0x20]
// 004f2f2e  0f6f7628             movq mm6, qword ptr [esi + 0x28]
// 004f2f32  0f6f7e30             movq mm7, qword ptr [esi + 0x30]
// 004f2f36  0f6f4638             movq mm0, qword ptr [esi + 0x38]
// 004f2f3a  0fe70f               movntq qword ptr [edi], mm1
// 004f2f3d  0fe75708             movntq qword ptr [edi + 8], mm2
// 004f2f41  0fe75f10             movntq qword ptr [edi + 0x10], mm3
// 004f2f45  0fe76718             movntq qword ptr [edi + 0x18], mm4
// 004f2f49  0fe76f20             movntq qword ptr [edi + 0x20], mm5
// 004f2f4d  0fe77728             movntq qword ptr [edi + 0x28], mm6
// 004f2f51  0fe77f30             movntq qword ptr [edi + 0x30], mm7
// 004f2f55  0fe74738             movntq qword ptr [edi + 0x38], mm0
// 004f2f59  83c640               add esi, 0x40
// 004f2f5c  83c740               add edi, 0x40
// 004f2f5f  49                   dec ecx
// 004f2f60  75b9                 jne 0x4f2f1b
// 004f2f62  0f77                 emms 
// 004f2f64  8bca                 mov ecx, edx
// 004f2f66  83e1c0               and ecx, 0xffffffc0
// 004f2f69  5f                   pop edi
// 004f2f6a  2bc1                 sub eax, ecx
// 004f2f6c  5e                   pop esi
// 004f2f6d  85c0                 test eax, eax
// 004f2f6f  7e19                 jle 0x4f2f8a
// 004f2f71  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004f2f74  2bc8                 sub ecx, eax
// 004f2f76  03ca                 add ecx, edx
// 004f2f78  50                   push eax
// 004f2f79  51                   push ecx
// 004f2f7a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004f2f7d  2bc8                 sub ecx, eax
// 004f2f7f  03ca                 add ecx, edx
// 004f2f81  51                   push ecx
// 004f2f82  e85bc21200           call 0x61f1e2
// 004f2f87  83c40c               add esp, 0xc
// 004f2f8a  5d                   pop ebp
// 004f2f8b  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?memcpyMMX@G3D@@YAXPAXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
