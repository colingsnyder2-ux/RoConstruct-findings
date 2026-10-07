// roc 2007-08 004fd210  unit: RBX::Render::AggregateChunk  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd210
//
// 004fd210  83ec08               sub esp, 8
// 004fd213  53                   push ebx
// 004fd214  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fd218  55                   push ebp
// 004fd219  56                   push esi
// 004fd21a  57                   push edi
// 004fd21b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004fd21f  8bc7                 mov eax, edi
// 004fd221  2bc3                 sub eax, ebx
// 004fd223  c1f802               sar eax, 2
// 004fd226  83f820               cmp eax, 0x20
// 004fd229  7e7c                 jle 0x4fd2a7
// 004fd22b  8b742424             mov esi, dword ptr [esp + 0x24]
// 004fd22f  90                   nop 
// 004fd230  85f6                 test esi, esi
// 004fd232  0f8e8b000000         jle 0x4fd2c3
// 004fd238  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fd23c  50                   push eax
// 004fd23d  57                   push edi
// 004fd23e  8d4c2418             lea ecx, [esp + 0x18]
// 004fd242  53                   push ebx
// 004fd243  51                   push ecx
// 004fd244  e837fdffff           call 0x4fcf80
// 004fd249  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004fd24d  8bc6                 mov eax, esi
// 004fd24f  99                   cdq 
// 004fd250  2bc2                 sub eax, edx
// 004fd252  d1f8                 sar eax, 1
// 004fd254  8bf0                 mov esi, eax
// 004fd256  99                   cdq 
// 004fd257  2bc2                 sub eax, edx
// 004fd259  d1f8                 sar eax, 1
// 004fd25b  03f0                 add esi, eax
// 004fd25d  8b442420             mov eax, dword ptr [esp + 0x20]
// 004fd261  8bd7                 mov edx, edi
// 004fd263  8bc8                 mov ecx, eax
// 004fd265  2bd5                 sub edx, ebp
// 004fd267  2bcb                 sub ecx, ebx
// 004fd269  83e2fc               and edx, 0xfffffffc
// 004fd26c  83e1fc               and ecx, 0xfffffffc
// 004fd26f  83c410               add esp, 0x10
// 004fd272  3bca                 cmp ecx, edx
// 004fd274  7d11                 jge 0x4fd287
// 004fd276  8b542428             mov edx, dword ptr [esp + 0x28]
// 004fd27a  52                   push edx
// 004fd27b  56                   push esi
// 004fd27c  50                   push eax
// 004fd27d  53                   push ebx
// 004fd27e  e88dffffff           call 0x4fd210
// 004fd283  8bdd                 mov ebx, ebp
// 004fd285  eb11                 jmp 0x4fd298
// 004fd287  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fd28b  50                   push eax
// 004fd28c  56                   push esi
// 004fd28d  57                   push edi
// 004fd28e  55                   push ebp
// 004fd28f  e87cffffff           call 0x4fd210
// 004fd294  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004fd298  8bc7                 mov eax, edi
// 004fd29a  2bc3                 sub eax, ebx
// 004fd29c  c1f802               sar eax, 2
// 004fd29f  83c410               add esp, 0x10
// 004fd2a2  83f820               cmp eax, 0x20
// 004fd2a5  7f89                 jg 0x4fd230
// 004fd2a7  83f801               cmp eax, 1
// 004fd2aa  7e0f                 jle 0x4fd2bb
// 004fd2ac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fd2b0  51                   push ecx
// 004fd2b1  57                   push edi
// 004fd2b2  53                   push ebx
// 004fd2b3  e868feffff           call 0x4fd120
// 004fd2b8  83c40c               add esp, 0xc
// 004fd2bb  5f                   pop edi
// 004fd2bc  5e                   pop esi
// 004fd2bd  5d                   pop ebp
// 004fd2be  5b                   pop ebx
// 004fd2bf  83c408               add esp, 8
// 004fd2c2  c3                   ret 
// 004fd2c3  83f820               cmp eax, 0x20
// 004fd2c6  7edf                 jle 0x4fd2a7
// 004fd2c8  8bcf                 mov ecx, edi
// 004fd2ca  2bcb                 sub ecx, ebx
// 004fd2cc  83e1fc               and ecx, 0xfffffffc
// 004fd2cf  83f904               cmp ecx, 4
// 004fd2d2  7e13                 jle 0x4fd2e7
// 004fd2d4  8b542428             mov edx, dword ptr [esp + 0x28]
// 004fd2d8  6a00                 push 0
// 004fd2da  6a00                 push 0
// 004fd2dc  52                   push edx
// 004fd2dd  57                   push edi
// 004fd2de  53                   push ebx
// 004fd2df  e85cfcffff           call 0x4fcf40
// 004fd2e4  83c414               add esp, 0x14
// 004fd2e7  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fd2eb  50                   push eax
// 004fd2ec  57                   push edi
// 004fd2ed  53                   push ebx
// 004fd2ee  e8cdfeffff           call 0x4fd1c0
// 004fd2f3  83c40c               add esp, 0xc
// 004fd2f6  5f                   pop edi
// 004fd2f7  5e                   pop esi
// 004fd2f8  5d                   pop ebp
// 004fd2f9  5b                   pop ebx
// 004fd2fa  83c408               add esp, 8
// 004fd2fd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
