// roc 2009-12 005f3a40  unit: seg_005f0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3a40
//
// 005f3a40  53                   push ebx
// 005f3a41  55                   push ebp
// 005f3a42  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005f3a46  56                   push esi
// 005f3a47  57                   push edi
// 005f3a48  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005f3a4c  8bdf                 mov ebx, edi
// 005f3a4e  8d7508               lea esi, [ebp + 8]
// 005f3a51  8d5104               lea edx, [ecx + 4]
// 005f3a54  2bd9                 sub ebx, ecx
// 005f3a56  2be9                 sub ebp, ecx
// 005f3a58  8bcf                 mov ecx, edi
// 005f3a5a  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 005f3a5e  b803000000           mov eax, 3
// 005f3a63  eb0b                 jmp 0x5f3a70
// 005f3a65  8da42400000000       lea esp, [esp]
// 005f3a6c  8d642400             lea esp, [esp]
// 005f3a70  f30f1042fc           movss xmm0, dword ptr [edx - 4]
// 005f3a75  f30f5807             addss xmm0, dword ptr [edi]
// 005f3a79  f30f1146f8           movss dword ptr [esi - 8], xmm0
// 005f3a7e  f30f100413           movss xmm0, dword ptr [ebx + edx]
// 005f3a83  f30f5802             addss xmm0, dword ptr [edx]
// 005f3a87  f30f11042a           movss dword ptr [edx + ebp], xmm0
// 005f3a8c  f30f100431           movss xmm0, dword ptr [ecx + esi]
// 005f3a91  f30f584204           addss xmm0, dword ptr [edx + 4]
// 005f3a96  f30f1106             movss dword ptr [esi], xmm0
// 005f3a9a  83c70c               add edi, 0xc
// 005f3a9d  83c20c               add edx, 0xc
// 005f3aa0  83c60c               add esi, 0xc
// 005f3aa3  83e801               sub eax, 1
// 005f3aa6  75c8                 jne 0x5f3a70
// 005f3aa8  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f3aac  5f                   pop edi
// 005f3aad  5e                   pop esi
// 005f3aae  5d                   pop ebp
// 005f3aaf  5b                   pop ebx
// 005f3ab0  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??HMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
