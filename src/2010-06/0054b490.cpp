// roc 2010-06 0054b490  unit: RBX::AggregateChunk  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b490
//
// 0054b490  83ec08               sub esp, 8
// 0054b493  53                   push ebx
// 0054b494  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054b498  55                   push ebp
// 0054b499  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0054b49d  56                   push esi
// 0054b49e  57                   push edi
// 0054b49f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0054b4a3  8bc7                 mov eax, edi
// 0054b4a5  2bc3                 sub eax, ebx
// 0054b4a7  c1f802               sar eax, 2
// 0054b4aa  83f820               cmp eax, 0x20
// 0054b4ad  7e6d                 jle 0x54b51c
// 0054b4af  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054b4b3  85f6                 test esi, esi
// 0054b4b5  7e7f                 jle 0x54b536
// 0054b4b7  55                   push ebp
// 0054b4b8  57                   push edi
// 0054b4b9  8d442418             lea eax, [esp + 0x18]
// 0054b4bd  53                   push ebx
// 0054b4be  50                   push eax
// 0054b4bf  e8bcfdffff           call 0x54b280
// 0054b4c4  8bc6                 mov eax, esi
// 0054b4c6  99                   cdq 
// 0054b4c7  2bc2                 sub eax, edx
// 0054b4c9  d1f8                 sar eax, 1
// 0054b4cb  8bf0                 mov esi, eax
// 0054b4cd  99                   cdq 
// 0054b4ce  2bc2                 sub eax, edx
// 0054b4d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054b4d4  d1f8                 sar eax, 1
// 0054b4d6  03f0                 add esi, eax
// 0054b4d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054b4dc  8bcf                 mov ecx, edi
// 0054b4de  83c410               add esp, 0x10
// 0054b4e1  2bc8                 sub ecx, eax
// 0054b4e3  2bd3                 sub edx, ebx
// 0054b4e5  83e1fc               and ecx, 0xfffffffc
// 0054b4e8  83e2fc               and edx, 0xfffffffc
// 0054b4eb  3bd1                 cmp edx, ecx
// 0054b4ed  55                   push ebp
// 0054b4ee  56                   push esi
// 0054b4ef  7d11                 jge 0x54b502
// 0054b4f1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054b4f5  50                   push eax
// 0054b4f6  53                   push ebx
// 0054b4f7  e894ffffff           call 0x54b490
// 0054b4fc  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0054b500  eb0b                 jmp 0x54b50d
// 0054b502  57                   push edi
// 0054b503  50                   push eax
// 0054b504  e887ffffff           call 0x54b490
// 0054b509  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0054b50d  8bc7                 mov eax, edi
// 0054b50f  2bc3                 sub eax, ebx
// 0054b511  c1f802               sar eax, 2
// 0054b514  83c410               add esp, 0x10
// 0054b517  83f820               cmp eax, 0x20
// 0054b51a  7f97                 jg 0x54b4b3
// 0054b51c  83f801               cmp eax, 1
// 0054b51f  7e0d                 jle 0x54b52e
// 0054b521  6a00                 push 0
// 0054b523  55                   push ebp
// 0054b524  57                   push edi
// 0054b525  53                   push ebx
// 0054b526  e885fcffff           call 0x54b1b0
// 0054b52b  83c410               add esp, 0x10
// 0054b52e  5f                   pop edi
// 0054b52f  5e                   pop esi
// 0054b530  5d                   pop ebp
// 0054b531  5b                   pop ebx
// 0054b532  83c408               add esp, 8
// 0054b535  c3                   ret 
// 0054b536  83f820               cmp eax, 0x20
// 0054b539  7ee1                 jle 0x54b51c
// 0054b53b  8bcf                 mov ecx, edi
// 0054b53d  2bcb                 sub ecx, ebx
// 0054b53f  83e1fc               and ecx, 0xfffffffc
// 0054b542  83f904               cmp ecx, 4
// 0054b545  7e0f                 jle 0x54b556
// 0054b547  6a00                 push 0
// 0054b549  6a00                 push 0
// 0054b54b  55                   push ebp
// 0054b54c  57                   push edi
// 0054b54d  53                   push ebx
// 0054b54e  e81dfcffff           call 0x54b170
// 0054b553  83c414               add esp, 0x14
// 0054b556  55                   push ebp
// 0054b557  57                   push edi
// 0054b558  53                   push ebx
// 0054b559  e8e2feffff           call 0x54b440
// 0054b55e  83c40c               add esp, 0xc
// 0054b561  5f                   pop edi
// 0054b562  5e                   pop esi
// 0054b563  5d                   pop ebp
// 0054b564  5b                   pop ebx
// 0054b565  83c408               add esp, 8
// 0054b568  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
