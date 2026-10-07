// roc 2010-06 00677190  unit: RBX::Assembly  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00677190
//
// 00677190  83ec08               sub esp, 8
// 00677193  53                   push ebx
// 00677194  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00677198  55                   push ebp
// 00677199  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0067719d  56                   push esi
// 0067719e  57                   push edi
// 0067719f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006771a3  8bc7                 mov eax, edi
// 006771a5  2bc3                 sub eax, ebx
// 006771a7  c1f802               sar eax, 2
// 006771aa  83f820               cmp eax, 0x20
// 006771ad  7e6d                 jle 0x67721c
// 006771af  8b742424             mov esi, dword ptr [esp + 0x24]
// 006771b3  85f6                 test esi, esi
// 006771b5  7e7f                 jle 0x677236
// 006771b7  55                   push ebp
// 006771b8  57                   push edi
// 006771b9  8d442418             lea eax, [esp + 0x18]
// 006771bd  53                   push ebx
// 006771be  50                   push eax
// 006771bf  e81cfbffff           call 0x676ce0
// 006771c4  8bc6                 mov eax, esi
// 006771c6  99                   cdq 
// 006771c7  2bc2                 sub eax, edx
// 006771c9  d1f8                 sar eax, 1
// 006771cb  8bf0                 mov esi, eax
// 006771cd  99                   cdq 
// 006771ce  2bc2                 sub eax, edx
// 006771d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006771d4  d1f8                 sar eax, 1
// 006771d6  03f0                 add esi, eax
// 006771d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006771dc  8bcf                 mov ecx, edi
// 006771de  83c410               add esp, 0x10
// 006771e1  2bc8                 sub ecx, eax
// 006771e3  2bd3                 sub edx, ebx
// 006771e5  83e1fc               and ecx, 0xfffffffc
// 006771e8  83e2fc               and edx, 0xfffffffc
// 006771eb  3bd1                 cmp edx, ecx
// 006771ed  55                   push ebp
// 006771ee  56                   push esi
// 006771ef  7d11                 jge 0x677202
// 006771f1  8b442418             mov eax, dword ptr [esp + 0x18]
// 006771f5  50                   push eax
// 006771f6  53                   push ebx
// 006771f7  e894ffffff           call 0x677190
// 006771fc  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00677200  eb0b                 jmp 0x67720d
// 00677202  57                   push edi
// 00677203  50                   push eax
// 00677204  e887ffffff           call 0x677190
// 00677209  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0067720d  8bc7                 mov eax, edi
// 0067720f  2bc3                 sub eax, ebx
// 00677211  c1f802               sar eax, 2
// 00677214  83c410               add esp, 0x10
// 00677217  83f820               cmp eax, 0x20
// 0067721a  7f97                 jg 0x6771b3
// 0067721c  83f801               cmp eax, 1
// 0067721f  7e0d                 jle 0x67722e
// 00677221  6a00                 push 0
// 00677223  55                   push ebp
// 00677224  57                   push edi
// 00677225  53                   push ebx
// 00677226  e825f8ffff           call 0x676a50
// 0067722b  83c410               add esp, 0x10
// 0067722e  5f                   pop edi
// 0067722f  5e                   pop esi
// 00677230  5d                   pop ebp
// 00677231  5b                   pop ebx
// 00677232  83c408               add esp, 8
// 00677235  c3                   ret 
// 00677236  83f820               cmp eax, 0x20
// 00677239  7ee1                 jle 0x67721c
// 0067723b  8bcf                 mov ecx, edi
// 0067723d  2bcb                 sub ecx, ebx
// 0067723f  83e1fc               and ecx, 0xfffffffc
// 00677242  83f904               cmp ecx, 4
// 00677245  7e0f                 jle 0x677256
// 00677247  6a00                 push 0
// 00677249  6a00                 push 0
// 0067724b  55                   push ebp
// 0067724c  57                   push edi
// 0067724d  53                   push ebx
// 0067724e  e8bdf7ffff           call 0x676a10
// 00677253  83c414               add esp, 0x14
// 00677256  55                   push ebp
// 00677257  57                   push edi
// 00677258  53                   push ebx
// 00677259  e872fdffff           call 0x676fd0
// 0067725e  83c40c               add esp, 0xc
// 00677261  5f                   pop edi
// 00677262  5e                   pop esi
// 00677263  5d                   pop ebp
// 00677264  5b                   pop ebx
// 00677265  83c408               add esp, 8
// 00677268  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
