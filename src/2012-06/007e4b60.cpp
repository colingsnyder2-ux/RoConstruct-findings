// roc 2012-06 007e4b60  unit: RBX::Assembly  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e4b60
//
// 007e4b60  83ec08               sub esp, 8
// 007e4b63  53                   push ebx
// 007e4b64  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e4b68  55                   push ebp
// 007e4b69  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007e4b6d  56                   push esi
// 007e4b6e  57                   push edi
// 007e4b6f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007e4b73  8bc7                 mov eax, edi
// 007e4b75  2bc3                 sub eax, ebx
// 007e4b77  c1f802               sar eax, 2
// 007e4b7a  83f820               cmp eax, 0x20
// 007e4b7d  7e6d                 jle 0x7e4bec
// 007e4b7f  8b742424             mov esi, dword ptr [esp + 0x24]
// 007e4b83  85f6                 test esi, esi
// 007e4b85  7e7f                 jle 0x7e4c06
// 007e4b87  55                   push ebp
// 007e4b88  57                   push edi
// 007e4b89  8d442418             lea eax, [esp + 0x18]
// 007e4b8d  53                   push ebx
// 007e4b8e  50                   push eax
// 007e4b8f  e89cf8ffff           call 0x7e4430
// 007e4b94  8bc6                 mov eax, esi
// 007e4b96  99                   cdq 
// 007e4b97  2bc2                 sub eax, edx
// 007e4b99  d1f8                 sar eax, 1
// 007e4b9b  8bf0                 mov esi, eax
// 007e4b9d  99                   cdq 
// 007e4b9e  2bc2                 sub eax, edx
// 007e4ba0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007e4ba4  d1f8                 sar eax, 1
// 007e4ba6  03f0                 add esi, eax
// 007e4ba8  8b442424             mov eax, dword ptr [esp + 0x24]
// 007e4bac  8bcf                 mov ecx, edi
// 007e4bae  83c410               add esp, 0x10
// 007e4bb1  2bc8                 sub ecx, eax
// 007e4bb3  2bd3                 sub edx, ebx
// 007e4bb5  83e1fc               and ecx, 0xfffffffc
// 007e4bb8  83e2fc               and edx, 0xfffffffc
// 007e4bbb  3bd1                 cmp edx, ecx
// 007e4bbd  55                   push ebp
// 007e4bbe  56                   push esi
// 007e4bbf  7d11                 jge 0x7e4bd2
// 007e4bc1  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e4bc5  50                   push eax
// 007e4bc6  53                   push ebx
// 007e4bc7  e894ffffff           call 0x7e4b60
// 007e4bcc  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007e4bd0  eb0b                 jmp 0x7e4bdd
// 007e4bd2  57                   push edi
// 007e4bd3  50                   push eax
// 007e4bd4  e887ffffff           call 0x7e4b60
// 007e4bd9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007e4bdd  8bc7                 mov eax, edi
// 007e4bdf  2bc3                 sub eax, ebx
// 007e4be1  c1f802               sar eax, 2
// 007e4be4  83c410               add esp, 0x10
// 007e4be7  83f820               cmp eax, 0x20
// 007e4bea  7f97                 jg 0x7e4b83
// 007e4bec  83f801               cmp eax, 1
// 007e4bef  7e0d                 jle 0x7e4bfe
// 007e4bf1  6a00                 push 0
// 007e4bf3  55                   push ebp
// 007e4bf4  57                   push edi
// 007e4bf5  53                   push ebx
// 007e4bf6  e815f4ffff           call 0x7e4010
// 007e4bfb  83c410               add esp, 0x10
// 007e4bfe  5f                   pop edi
// 007e4bff  5e                   pop esi
// 007e4c00  5d                   pop ebp
// 007e4c01  5b                   pop ebx
// 007e4c02  83c408               add esp, 8
// 007e4c05  c3                   ret 
// 007e4c06  83f820               cmp eax, 0x20
// 007e4c09  7ee1                 jle 0x7e4bec
// 007e4c0b  8bcf                 mov ecx, edi
// 007e4c0d  2bcb                 sub ecx, ebx
// 007e4c0f  83e1fc               and ecx, 0xfffffffc
// 007e4c12  83f904               cmp ecx, 4
// 007e4c15  7e0f                 jle 0x7e4c26
// 007e4c17  6a00                 push 0
// 007e4c19  6a00                 push 0
// 007e4c1b  55                   push ebp
// 007e4c1c  57                   push edi
// 007e4c1d  53                   push ebx
// 007e4c1e  e8adf3ffff           call 0x7e3fd0
// 007e4c23  83c414               add esp, 0x14
// 007e4c26  55                   push ebp
// 007e4c27  57                   push edi
// 007e4c28  53                   push ebx
// 007e4c29  e822fcffff           call 0x7e4850
// 007e4c2e  83c40c               add esp, 0xc
// 007e4c31  5f                   pop edi
// 007e4c32  5e                   pop esi
// 007e4c33  5d                   pop ebp
// 007e4c34  5b                   pop ebx
// 007e4c35  83c408               add esp, 8
// 007e4c38  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
