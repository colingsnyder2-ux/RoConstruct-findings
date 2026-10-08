// from server: 100% by auto
// roc 2008-06 005e6e90  unit: RBX::Clump  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6e90
//
// 005e6e90  83ec08               sub esp, 8
// 005e6e93  53                   push ebx
// 005e6e94  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e6e98  55                   push ebp
// 005e6e99  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005e6e9d  56                   push esi
// 005e6e9e  57                   push edi
// 005e6e9f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e6ea3  8bc7                 mov eax, edi
// 005e6ea5  2bc3                 sub eax, ebx
// 005e6ea7  c1f802               sar eax, 2
// 005e6eaa  83f820               cmp eax, 0x20
// 005e6ead  7e6d                 jle 0x5e6f1c
// 005e6eaf  8b742424             mov esi, dword ptr [esp + 0x24]
// 005e6eb3  85f6                 test esi, esi
// 005e6eb5  7e7f                 jle 0x5e6f36
// 005e6eb7  55                   push ebp
// 005e6eb8  57                   push edi
// 005e6eb9  8d442418             lea eax, [esp + 0x18]
// 005e6ebd  53                   push ebx
// 005e6ebe  50                   push eax
// 005e6ebf  e80cfbffff           call 0x5e69d0
// 005e6ec4  8bc6                 mov eax, esi
// 005e6ec6  99                   cdq 
// 005e6ec7  2bc2                 sub eax, edx
// 005e6ec9  d1f8                 sar eax, 1
// 005e6ecb  8bf0                 mov esi, eax
// 005e6ecd  99                   cdq 
// 005e6ece  2bc2                 sub eax, edx
// 005e6ed0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e6ed4  d1f8                 sar eax, 1
// 005e6ed6  03f0                 add esi, eax
// 005e6ed8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e6edc  8bcf                 mov ecx, edi
// 005e6ede  83c410               add esp, 0x10
// 005e6ee1  2bc8                 sub ecx, eax
// 005e6ee3  2bd3                 sub edx, ebx
// 005e6ee5  83e1fc               and ecx, 0xfffffffc
// 005e6ee8  83e2fc               and edx, 0xfffffffc
// 005e6eeb  3bd1                 cmp edx, ecx
// 005e6eed  55                   push ebp
// 005e6eee  56                   push esi
// 005e6eef  7d11                 jge 0x5e6f02
// 005e6ef1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e6ef5  50                   push eax
// 005e6ef6  53                   push ebx
// 005e6ef7  e894ffffff           call 0x5e6e90
// 005e6efc  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005e6f00  eb0b                 jmp 0x5e6f0d
// 005e6f02  57                   push edi
// 005e6f03  50                   push eax
// 005e6f04  e887ffffff           call 0x5e6e90
// 005e6f09  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e6f0d  8bc7                 mov eax, edi
// 005e6f0f  2bc3                 sub eax, ebx
// 005e6f11  c1f802               sar eax, 2
// 005e6f14  83c410               add esp, 0x10
// 005e6f17  83f820               cmp eax, 0x20
// 005e6f1a  7f97                 jg 0x5e6eb3
// 005e6f1c  83f801               cmp eax, 1
// 005e6f1f  7e0d                 jle 0x5e6f2e
// 005e6f21  6a00                 push 0
// 005e6f23  55                   push ebp
// 005e6f24  57                   push edi
// 005e6f25  53                   push ebx
// 005e6f26  e8f5f9ffff           call 0x5e6920
// 005e6f2b  83c410               add esp, 0x10
// 005e6f2e  5f                   pop edi
// 005e6f2f  5e                   pop esi
// 005e6f30  5d                   pop ebp
// 005e6f31  5b                   pop ebx
// 005e6f32  83c408               add esp, 8
// 005e6f35  c3                   ret 
// 005e6f36  83f820               cmp eax, 0x20
// 005e6f39  7ee1                 jle 0x5e6f1c
// 005e6f3b  8bcf                 mov ecx, edi
// 005e6f3d  2bcb                 sub ecx, ebx
// 005e6f3f  83e1fc               and ecx, 0xfffffffc
// 005e6f42  83f904               cmp ecx, 4
// 005e6f45  7e0f                 jle 0x5e6f56
// 005e6f47  6a00                 push 0
// 005e6f49  6a00                 push 0
// 005e6f4b  55                   push ebp
// 005e6f4c  57                   push edi
// 005e6f4d  53                   push ebx
// 005e6f4e  e88df9ffff           call 0x5e68e0
// 005e6f53  83c414               add esp, 0x14
// 005e6f56  55                   push ebp
// 005e6f57  57                   push edi
// 005e6f58  53                   push ebx
// 005e6f59  e842fdffff           call 0x5e6ca0
// 005e6f5e  83c40c               add esp, 0xc
// 005e6f61  5f                   pop edi
// 005e6f62  5e                   pop esi
// 005e6f63  5d                   pop ebp
// 005e6f64  5b                   pop ebx
// 005e6f65  83c408               add esp, 8
// 005e6f68  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
