// roc 2009-12 005e7ec0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7ec0
//
// 005e7ec0  83ec08               sub esp, 8
// 005e7ec3  53                   push ebx
// 005e7ec4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e7ec8  55                   push ebp
// 005e7ec9  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005e7ecd  56                   push esi
// 005e7ece  57                   push edi
// 005e7ecf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e7ed3  8bc7                 mov eax, edi
// 005e7ed5  2bc3                 sub eax, ebx
// 005e7ed7  c1f802               sar eax, 2
// 005e7eda  83f820               cmp eax, 0x20
// 005e7edd  7e6d                 jle 0x5e7f4c
// 005e7edf  8b742424             mov esi, dword ptr [esp + 0x24]
// 005e7ee3  85f6                 test esi, esi
// 005e7ee5  7e7f                 jle 0x5e7f66
// 005e7ee7  55                   push ebp
// 005e7ee8  57                   push edi
// 005e7ee9  8d442418             lea eax, [esp + 0x18]
// 005e7eed  53                   push ebx
// 005e7eee  50                   push eax
// 005e7eef  e8bcfdffff           call 0x5e7cb0
// 005e7ef4  8bc6                 mov eax, esi
// 005e7ef6  99                   cdq 
// 005e7ef7  2bc2                 sub eax, edx
// 005e7ef9  d1f8                 sar eax, 1
// 005e7efb  8bf0                 mov esi, eax
// 005e7efd  99                   cdq 
// 005e7efe  2bc2                 sub eax, edx
// 005e7f00  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e7f04  d1f8                 sar eax, 1
// 005e7f06  03f0                 add esi, eax
// 005e7f08  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e7f0c  8bcf                 mov ecx, edi
// 005e7f0e  83c410               add esp, 0x10
// 005e7f11  2bc8                 sub ecx, eax
// 005e7f13  2bd3                 sub edx, ebx
// 005e7f15  83e1fc               and ecx, 0xfffffffc
// 005e7f18  83e2fc               and edx, 0xfffffffc
// 005e7f1b  3bd1                 cmp edx, ecx
// 005e7f1d  55                   push ebp
// 005e7f1e  56                   push esi
// 005e7f1f  7d11                 jge 0x5e7f32
// 005e7f21  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7f25  50                   push eax
// 005e7f26  53                   push ebx
// 005e7f27  e894ffffff           call 0x5e7ec0
// 005e7f2c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005e7f30  eb0b                 jmp 0x5e7f3d
// 005e7f32  57                   push edi
// 005e7f33  50                   push eax
// 005e7f34  e887ffffff           call 0x5e7ec0
// 005e7f39  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e7f3d  8bc7                 mov eax, edi
// 005e7f3f  2bc3                 sub eax, ebx
// 005e7f41  c1f802               sar eax, 2
// 005e7f44  83c410               add esp, 0x10
// 005e7f47  83f820               cmp eax, 0x20
// 005e7f4a  7f97                 jg 0x5e7ee3
// 005e7f4c  83f801               cmp eax, 1
// 005e7f4f  7e0d                 jle 0x5e7f5e
// 005e7f51  6a00                 push 0
// 005e7f53  55                   push ebp
// 005e7f54  57                   push edi
// 005e7f55  53                   push ebx
// 005e7f56  e885fcffff           call 0x5e7be0
// 005e7f5b  83c410               add esp, 0x10
// 005e7f5e  5f                   pop edi
// 005e7f5f  5e                   pop esi
// 005e7f60  5d                   pop ebp
// 005e7f61  5b                   pop ebx
// 005e7f62  83c408               add esp, 8
// 005e7f65  c3                   ret 
// 005e7f66  83f820               cmp eax, 0x20
// 005e7f69  7ee1                 jle 0x5e7f4c
// 005e7f6b  8bcf                 mov ecx, edi
// 005e7f6d  2bcb                 sub ecx, ebx
// 005e7f6f  83e1fc               and ecx, 0xfffffffc
// 005e7f72  83f904               cmp ecx, 4
// 005e7f75  7e0f                 jle 0x5e7f86
// 005e7f77  6a00                 push 0
// 005e7f79  6a00                 push 0
// 005e7f7b  55                   push ebp
// 005e7f7c  57                   push edi
// 005e7f7d  53                   push ebx
// 005e7f7e  e81dfcffff           call 0x5e7ba0
// 005e7f83  83c414               add esp, 0x14
// 005e7f86  55                   push ebp
// 005e7f87  57                   push edi
// 005e7f88  53                   push ebx
// 005e7f89  e8e2feffff           call 0x5e7e70
// 005e7f8e  83c40c               add esp, 0xc
// 005e7f91  5f                   pop edi
// 005e7f92  5e                   pop esi
// 005e7f93  5d                   pop ebp
// 005e7f94  5b                   pop ebx
// 005e7f95  83c408               add esp, 8
// 005e7f98  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
