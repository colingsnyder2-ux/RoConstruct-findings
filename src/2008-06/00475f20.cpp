// from server: 100% by auto
// roc 2008-06 00475f20  unit: G3D::Texture  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00475f20
//
// 00475f20  53                   push ebx
// 00475f21  55                   push ebp
// 00475f22  8bd9                 mov ebx, ecx
// 00475f24  33ed                 xor ebp, ebp
// 00475f26  396b04               cmp dword ptr [ebx + 4], ebp
// 00475f29  7e5e                 jle 0x475f89
// 00475f2b  56                   push esi
// 00475f2c  57                   push edi
// 00475f2d  8d4900               lea ecx, [ecx]
// 00475f30  8b03                 mov eax, dword ptr [ebx]
// 00475f32  8d3ca8               lea edi, [eax + ebp*4]
// 00475f35  8b07                 mov eax, dword ptr [edi]
// 00475f37  85c0                 test eax, eax
// 00475f39  7446                 je 0x475f81
// 00475f3b  83c004               add eax, 4
// 00475f3e  50                   push eax
// 00475f3f  ff15ac218000         call dword ptr [0x8021ac]
// 00475f45  85c0                 test eax, eax
// 00475f47  7532                 jne 0x475f7b
// 00475f49  8b0f                 mov ecx, dword ptr [edi]
// 00475f4b  8b7108               mov esi, dword ptr [ecx + 8]
// 00475f4e  85f6                 test esi, esi
// 00475f50  741b                 je 0x475f6d
// 00475f52  8b0e                 mov ecx, dword ptr [esi]
// 00475f54  8b11                 mov edx, dword ptr [ecx]
// 00475f56  8b4204               mov eax, dword ptr [edx + 4]
// 00475f59  ffd0                 call eax
// 00475f5b  8bc6                 mov eax, esi
// 00475f5d  8b7604               mov esi, dword ptr [esi + 4]
// 00475f60  50                   push eax
// 00475f61  e814a72200           call 0x6a067a
// 00475f66  83c404               add esp, 4
// 00475f69  85f6                 test esi, esi
// 00475f6b  75e5                 jne 0x475f52
// 00475f6d  8b0f                 mov ecx, dword ptr [edi]
// 00475f6f  85c9                 test ecx, ecx
// 00475f71  7408                 je 0x475f7b
// 00475f73  8b11                 mov edx, dword ptr [ecx]
// 00475f75  8b02                 mov eax, dword ptr [edx]
// 00475f77  6a01                 push 1
// 00475f79  ffd0                 call eax
// 00475f7b  c70700000000         mov dword ptr [edi], 0
// 00475f81  45                   inc ebp
// 00475f82  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 00475f85  7ca9                 jl 0x475f30
// 00475f87  5f                   pop edi
// 00475f88  5e                   pop esi
// 00475f89  8b0b                 mov ecx, dword ptr [ebx]
// 00475f8b  51                   push ecx
// 00475f8c  e88f1d0900           call 0x507d20
// 00475f91  83c404               add esp, 4
// 00475f94  5d                   pop ebp
// 00475f95  c70300000000         mov dword ptr [ebx], 0
// 00475f9b  c7430400000000       mov dword ptr [ebx + 4], 0
// 00475fa2  c7430800000000       mov dword ptr [ebx + 8], 0
// 00475fa9  5b                   pop ebx
// 00475faa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??1?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
