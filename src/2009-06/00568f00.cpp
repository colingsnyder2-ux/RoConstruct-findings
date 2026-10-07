// roc 2009-06 00568f00  unit: RBX::RbxG3D::RenderScene  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568f00
//
// 00568f00  83ec08               sub esp, 8
// 00568f03  53                   push ebx
// 00568f04  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00568f08  55                   push ebp
// 00568f09  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00568f0d  56                   push esi
// 00568f0e  57                   push edi
// 00568f0f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00568f13  8bc7                 mov eax, edi
// 00568f15  2bc3                 sub eax, ebx
// 00568f17  c1f802               sar eax, 2
// 00568f1a  83f820               cmp eax, 0x20
// 00568f1d  7e6d                 jle 0x568f8c
// 00568f1f  8b742424             mov esi, dword ptr [esp + 0x24]
// 00568f23  85f6                 test esi, esi
// 00568f25  7e7f                 jle 0x568fa6
// 00568f27  55                   push ebp
// 00568f28  57                   push edi
// 00568f29  8d442418             lea eax, [esp + 0x18]
// 00568f2d  53                   push ebx
// 00568f2e  50                   push eax
// 00568f2f  e8bcfdffff           call 0x568cf0
// 00568f34  8bc6                 mov eax, esi
// 00568f36  99                   cdq 
// 00568f37  2bc2                 sub eax, edx
// 00568f39  d1f8                 sar eax, 1
// 00568f3b  8bf0                 mov esi, eax
// 00568f3d  99                   cdq 
// 00568f3e  2bc2                 sub eax, edx
// 00568f40  8b542420             mov edx, dword ptr [esp + 0x20]
// 00568f44  d1f8                 sar eax, 1
// 00568f46  03f0                 add esi, eax
// 00568f48  8b442424             mov eax, dword ptr [esp + 0x24]
// 00568f4c  8bcf                 mov ecx, edi
// 00568f4e  83c410               add esp, 0x10
// 00568f51  2bc8                 sub ecx, eax
// 00568f53  2bd3                 sub edx, ebx
// 00568f55  83e1fc               and ecx, 0xfffffffc
// 00568f58  83e2fc               and edx, 0xfffffffc
// 00568f5b  3bd1                 cmp edx, ecx
// 00568f5d  55                   push ebp
// 00568f5e  56                   push esi
// 00568f5f  7d11                 jge 0x568f72
// 00568f61  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568f65  50                   push eax
// 00568f66  53                   push ebx
// 00568f67  e894ffffff           call 0x568f00
// 00568f6c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00568f70  eb0b                 jmp 0x568f7d
// 00568f72  57                   push edi
// 00568f73  50                   push eax
// 00568f74  e887ffffff           call 0x568f00
// 00568f79  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00568f7d  8bc7                 mov eax, edi
// 00568f7f  2bc3                 sub eax, ebx
// 00568f81  c1f802               sar eax, 2
// 00568f84  83c410               add esp, 0x10
// 00568f87  83f820               cmp eax, 0x20
// 00568f8a  7f97                 jg 0x568f23
// 00568f8c  83f801               cmp eax, 1
// 00568f8f  7e0d                 jle 0x568f9e
// 00568f91  6a00                 push 0
// 00568f93  55                   push ebp
// 00568f94  57                   push edi
// 00568f95  53                   push ebx
// 00568f96  e885fcffff           call 0x568c20
// 00568f9b  83c410               add esp, 0x10
// 00568f9e  5f                   pop edi
// 00568f9f  5e                   pop esi
// 00568fa0  5d                   pop ebp
// 00568fa1  5b                   pop ebx
// 00568fa2  83c408               add esp, 8
// 00568fa5  c3                   ret 
// 00568fa6  83f820               cmp eax, 0x20
// 00568fa9  7ee1                 jle 0x568f8c
// 00568fab  8bcf                 mov ecx, edi
// 00568fad  2bcb                 sub ecx, ebx
// 00568faf  83e1fc               and ecx, 0xfffffffc
// 00568fb2  83f904               cmp ecx, 4
// 00568fb5  7e0f                 jle 0x568fc6
// 00568fb7  6a00                 push 0
// 00568fb9  6a00                 push 0
// 00568fbb  55                   push ebp
// 00568fbc  57                   push edi
// 00568fbd  53                   push ebx
// 00568fbe  e81dfcffff           call 0x568be0
// 00568fc3  83c414               add esp, 0x14
// 00568fc6  55                   push ebp
// 00568fc7  57                   push edi
// 00568fc8  53                   push ebx
// 00568fc9  e8e2feffff           call 0x568eb0
// 00568fce  83c40c               add esp, 0xc
// 00568fd1  5f                   pop edi
// 00568fd2  5e                   pop esi
// 00568fd3  5d                   pop ebp
// 00568fd4  5b                   pop ebx
// 00568fd5  83c408               add esp, 8
// 00568fd8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
