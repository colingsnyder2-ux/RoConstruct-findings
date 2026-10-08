// roc 2009-12 00701fe0  unit: RBX::Assembly  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701fe0
//
// 00701fe0  83ec08               sub esp, 8
// 00701fe3  53                   push ebx
// 00701fe4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00701fe8  55                   push ebp
// 00701fe9  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00701fed  56                   push esi
// 00701fee  57                   push edi
// 00701fef  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00701ff3  8bc7                 mov eax, edi
// 00701ff5  2bc3                 sub eax, ebx
// 00701ff7  c1f802               sar eax, 2
// 00701ffa  83f820               cmp eax, 0x20
// 00701ffd  7e6d                 jle 0x70206c
// 00701fff  8b742424             mov esi, dword ptr [esp + 0x24]
// 00702003  85f6                 test esi, esi
// 00702005  7e7f                 jle 0x702086
// 00702007  55                   push ebp
// 00702008  57                   push edi
// 00702009  8d442418             lea eax, [esp + 0x18]
// 0070200d  53                   push ebx
// 0070200e  50                   push eax
// 0070200f  e81cfbffff           call 0x701b30
// 00702014  8bc6                 mov eax, esi
// 00702016  99                   cdq 
// 00702017  2bc2                 sub eax, edx
// 00702019  d1f8                 sar eax, 1
// 0070201b  8bf0                 mov esi, eax
// 0070201d  99                   cdq 
// 0070201e  2bc2                 sub eax, edx
// 00702020  8b542420             mov edx, dword ptr [esp + 0x20]
// 00702024  d1f8                 sar eax, 1
// 00702026  03f0                 add esi, eax
// 00702028  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070202c  8bcf                 mov ecx, edi
// 0070202e  83c410               add esp, 0x10
// 00702031  2bc8                 sub ecx, eax
// 00702033  2bd3                 sub edx, ebx
// 00702035  83e1fc               and ecx, 0xfffffffc
// 00702038  83e2fc               and edx, 0xfffffffc
// 0070203b  3bd1                 cmp edx, ecx
// 0070203d  55                   push ebp
// 0070203e  56                   push esi
// 0070203f  7d11                 jge 0x702052
// 00702041  8b442418             mov eax, dword ptr [esp + 0x18]
// 00702045  50                   push eax
// 00702046  53                   push ebx
// 00702047  e894ffffff           call 0x701fe0
// 0070204c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00702050  eb0b                 jmp 0x70205d
// 00702052  57                   push edi
// 00702053  50                   push eax
// 00702054  e887ffffff           call 0x701fe0
// 00702059  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0070205d  8bc7                 mov eax, edi
// 0070205f  2bc3                 sub eax, ebx
// 00702061  c1f802               sar eax, 2
// 00702064  83c410               add esp, 0x10
// 00702067  83f820               cmp eax, 0x20
// 0070206a  7f97                 jg 0x702003
// 0070206c  83f801               cmp eax, 1
// 0070206f  7e0d                 jle 0x70207e
// 00702071  6a00                 push 0
// 00702073  55                   push ebp
// 00702074  57                   push edi
// 00702075  53                   push ebx
// 00702076  e825f8ffff           call 0x7018a0
// 0070207b  83c410               add esp, 0x10
// 0070207e  5f                   pop edi
// 0070207f  5e                   pop esi
// 00702080  5d                   pop ebp
// 00702081  5b                   pop ebx
// 00702082  83c408               add esp, 8
// 00702085  c3                   ret 
// 00702086  83f820               cmp eax, 0x20
// 00702089  7ee1                 jle 0x70206c
// 0070208b  8bcf                 mov ecx, edi
// 0070208d  2bcb                 sub ecx, ebx
// 0070208f  83e1fc               and ecx, 0xfffffffc
// 00702092  83f904               cmp ecx, 4
// 00702095  7e0f                 jle 0x7020a6
// 00702097  6a00                 push 0
// 00702099  6a00                 push 0
// 0070209b  55                   push ebp
// 0070209c  57                   push edi
// 0070209d  53                   push ebx
// 0070209e  e8bdf7ffff           call 0x701860
// 007020a3  83c414               add esp, 0x14
// 007020a6  55                   push ebp
// 007020a7  57                   push edi
// 007020a8  53                   push ebx
// 007020a9  e872fdffff           call 0x701e20
// 007020ae  83c40c               add esp, 0xc
// 007020b1  5f                   pop edi
// 007020b2  5e                   pop esi
// 007020b3  5d                   pop ebp
// 007020b4  5b                   pop ebx
// 007020b5  83c408               add esp, 8
// 007020b8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
