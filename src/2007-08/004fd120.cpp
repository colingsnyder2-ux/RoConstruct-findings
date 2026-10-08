// from server: 100% by auto
// roc 2007-08 004fd120  unit: RBX::Render::AggregateChunk  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd120
//
// 004fd120  8b442408             mov eax, dword ptr [esp + 8]
// 004fd124  57                   push edi
// 004fd125  8b7c2408             mov edi, dword ptr [esp + 8]
// 004fd129  3bf8                 cmp edi, eax
// 004fd12b  0f8481000000         je 0x4fd1b2
// 004fd131  56                   push esi
// 004fd132  8d7704               lea esi, [edi + 4]
// 004fd135  3bf0                 cmp esi, eax
// 004fd137  7478                 je 0x4fd1b1
// 004fd139  53                   push ebx
// 004fd13a  55                   push ebp
// 004fd13b  8d6e04               lea ebp, [esi + 4]
// 004fd13e  8bff                 mov edi, edi
// 004fd140  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004fd144  57                   push edi
// 004fd145  56                   push esi
// 004fd146  ffd3                 call ebx
// 004fd148  83c408               add esp, 8
// 004fd14b  84c0                 test al, al
// 004fd14d  7419                 je 0x4fd168
// 004fd14f  3bfe                 cmp edi, esi
// 004fd151  7450                 je 0x4fd1a3
// 004fd153  3bf5                 cmp esi, ebp
// 004fd155  744c                 je 0x4fd1a3
// 004fd157  6a00                 push 0
// 004fd159  6a00                 push 0
// 004fd15b  55                   push ebp
// 004fd15c  56                   push esi
// 004fd15d  57                   push edi
// 004fd15e  e8bdfbffff           call 0x4fcd20
// 004fd163  83c414               add esp, 0x14
// 004fd166  eb3b                 jmp 0x4fd1a3
// 004fd168  8d7df8               lea edi, [ebp - 8]
// 004fd16b  57                   push edi
// 004fd16c  56                   push esi
// 004fd16d  ffd3                 call ebx
// 004fd16f  83c408               add esp, 8
// 004fd172  84c0                 test al, al
// 004fd174  7429                 je 0x4fd19f
// 004fd176  8bdf                 mov ebx, edi
// 004fd178  83ef04               sub edi, 4
// 004fd17b  57                   push edi
// 004fd17c  56                   push esi
// 004fd17d  ff542424             call dword ptr [esp + 0x24]
// 004fd181  83c408               add esp, 8
// 004fd184  84c0                 test al, al
// 004fd186  75ee                 jne 0x4fd176
// 004fd188  3bde                 cmp ebx, esi
// 004fd18a  7413                 je 0x4fd19f
// 004fd18c  3bf5                 cmp esi, ebp
// 004fd18e  740f                 je 0x4fd19f
// 004fd190  6a00                 push 0
// 004fd192  6a00                 push 0
// 004fd194  55                   push ebp
// 004fd195  56                   push esi
// 004fd196  53                   push ebx
// 004fd197  e884fbffff           call 0x4fcd20
// 004fd19c  83c414               add esp, 0x14
// 004fd19f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004fd1a3  83c604               add esi, 4
// 004fd1a6  83c504               add ebp, 4
// 004fd1a9  3b742418             cmp esi, dword ptr [esp + 0x18]
// 004fd1ad  7591                 jne 0x4fd140
// 004fd1af  5d                   pop ebp
// 004fd1b0  5b                   pop ebx
// 004fd1b1  5e                   pop esi
// 004fd1b2  5f                   pop edi
// 004fd1b3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Insertion_sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
