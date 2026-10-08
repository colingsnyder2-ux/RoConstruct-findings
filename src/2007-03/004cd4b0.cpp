// roc 2007-03 004cd4b0  unit: seg_004c0000  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd4b0
//
// 004cd4b0  6aff                 push -1
// 004cd4b2  6821db7400           push 0x74db21
// 004cd4b7  64a100000000         mov eax, dword ptr fs:[0]
// 004cd4bd  50                   push eax
// 004cd4be  64892500000000       mov dword ptr fs:[0], esp
// 004cd4c5  83ec0c               sub esp, 0xc
// 004cd4c8  53                   push ebx
// 004cd4c9  55                   push ebp
// 004cd4ca  56                   push esi
// 004cd4cb  57                   push edi
// 004cd4cc  8bf9                 mov edi, ecx
// 004cd4ce  8b4708               mov eax, dword ptr [edi + 8]
// 004cd4d1  8b2f                 mov ebp, dword ptr [edi]
// 004cd4d3  03c0                 add eax, eax
// 004cd4d5  03c0                 add eax, eax
// 004cd4d7  6a10                 push 0x10
// 004cd4d9  50                   push eax
// 004cd4da  896c2420             mov dword ptr [esp + 0x20], ebp
// 004cd4de  e8ed660200           call 0x4f3bd0
// 004cd4e3  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cd4e6  8b542434             mov edx, dword ptr [esp + 0x34]
// 004cd4ea  83c408               add esp, 8
// 004cd4ed  3bd1                 cmp edx, ecx
// 004cd4ef  8907                 mov dword ptr [edi], eax
// 004cd4f1  7d02                 jge 0x4cd4f5
// 004cd4f3  8bca                 mov ecx, edx
// 004cd4f5  8d1c88               lea ebx, [eax + ecx*4]
// 004cd4f8  8bf0                 mov esi, eax
// 004cd4fa  3bf3                 cmp esi, ebx
// 004cd4fc  8bfd                 mov edi, ebp
// 004cd4fe  7338                 jae 0x4cd538
// 004cd500  8b2dacd27700         mov ebp, dword ptr [0x77d2ac]
// 004cd506  85f6                 test esi, esi
// 004cd508  7414                 je 0x4cd51e
// 004cd50a  c70600000000         mov dword ptr [esi], 0
// 004cd510  8b07                 mov eax, dword ptr [edi]
// 004cd512  85c0                 test eax, eax
// 004cd514  7408                 je 0x4cd51e
// 004cd516  8906                 mov dword ptr [esi], eax
// 004cd518  83c004               add eax, 4
// 004cd51b  50                   push eax
// 004cd51c  ffd5                 call ebp
// 004cd51e  83c604               add esi, 4
// 004cd521  83c704               add edi, 4
// 004cd524  3bf3                 cmp esi, ebx
// 004cd526  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004cd52e  72d6                 jb 0x4cd506
// 004cd530  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004cd534  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004cd538  8d5c9500             lea ebx, [ebp + edx*4]
// 004cd53c  3beb                 cmp ebp, ebx
// 004cd53e  8bfd                 mov edi, ebp
// 004cd540  7354                 jae 0x4cd596
// 004cd542  8b07                 mov eax, dword ptr [edi]
// 004cd544  85c0                 test eax, eax
// 004cd546  7447                 je 0x4cd58f
// 004cd548  83c004               add eax, 4
// 004cd54b  50                   push eax
// 004cd54c  ff15a8d27700         call dword ptr [0x77d2a8]
// 004cd552  85c0                 test eax, eax
// 004cd554  7533                 jne 0x4cd589
// 004cd556  8b0f                 mov ecx, dword ptr [edi]
// 004cd558  8b7108               mov esi, dword ptr [ecx + 8]
// 004cd55b  85f6                 test esi, esi
// 004cd55d  741c                 je 0x4cd57b
// 004cd55f  90                   nop 
// 004cd560  8b0e                 mov ecx, dword ptr [esi]
// 004cd562  8b11                 mov edx, dword ptr [ecx]
// 004cd564  8b4204               mov eax, dword ptr [edx + 4]
// 004cd567  ffd0                 call eax
// 004cd569  8bc6                 mov eax, esi
// 004cd56b  8b7604               mov esi, dword ptr [esi + 4]
// 004cd56e  50                   push eax
// 004cd56f  e87c0b1500           call 0x61e0f0
// 004cd574  83c404               add esp, 4
// 004cd577  85f6                 test esi, esi
// 004cd579  75e5                 jne 0x4cd560
// 004cd57b  8b0f                 mov ecx, dword ptr [edi]
// 004cd57d  85c9                 test ecx, ecx
// 004cd57f  7408                 je 0x4cd589
// 004cd581  8b11                 mov edx, dword ptr [ecx]
// 004cd583  8b02                 mov eax, dword ptr [edx]
// 004cd585  6a01                 push 1
// 004cd587  ffd0                 call eax
// 004cd589  c70700000000         mov dword ptr [edi], 0
// 004cd58f  83c704               add edi, 4
// 004cd592  3bfb                 cmp edi, ebx
// 004cd594  72ac                 jb 0x4cd542
// 004cd596  55                   push ebp
// 004cd597  e8e45d0200           call 0x4f3380
// 004cd59c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cd5a0  83c404               add esp, 4
// 004cd5a3  5f                   pop edi
// 004cd5a4  5e                   pop esi
// 004cd5a5  5d                   pop ebp
// 004cd5a6  5b                   pop ebx
// 004cd5a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd5ae  83c418               add esp, 0x18
// 004cd5b1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
