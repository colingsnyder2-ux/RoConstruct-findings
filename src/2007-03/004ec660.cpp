// roc 2007-03 004ec660  unit: seg_004e0000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ec660
//
// 004ec660  53                   push ebx
// 004ec661  55                   push ebp
// 004ec662  8bd9                 mov ebx, ecx
// 004ec664  33ed                 xor ebp, ebp
// 004ec666  396b04               cmp dword ptr [ebx + 4], ebp
// 004ec669  7e60                 jle 0x4ec6cb
// 004ec66b  56                   push esi
// 004ec66c  57                   push edi
// 004ec66d  8d4900               lea ecx, [ecx]
// 004ec670  8b03                 mov eax, dword ptr [ebx]
// 004ec672  8d3ca8               lea edi, [eax + ebp*4]
// 004ec675  8b07                 mov eax, dword ptr [edi]
// 004ec677  85c0                 test eax, eax
// 004ec679  7446                 je 0x4ec6c1
// 004ec67b  83c004               add eax, 4
// 004ec67e  50                   push eax
// 004ec67f  ff15a8d27700         call dword ptr [0x77d2a8]
// 004ec685  85c0                 test eax, eax
// 004ec687  7532                 jne 0x4ec6bb
// 004ec689  8b0f                 mov ecx, dword ptr [edi]
// 004ec68b  8b7108               mov esi, dword ptr [ecx + 8]
// 004ec68e  85f6                 test esi, esi
// 004ec690  741b                 je 0x4ec6ad
// 004ec692  8b0e                 mov ecx, dword ptr [esi]
// 004ec694  8b11                 mov edx, dword ptr [ecx]
// 004ec696  8b4204               mov eax, dword ptr [edx + 4]
// 004ec699  ffd0                 call eax
// 004ec69b  8bc6                 mov eax, esi
// 004ec69d  8b7604               mov esi, dword ptr [esi + 4]
// 004ec6a0  50                   push eax
// 004ec6a1  e84a1a1300           call 0x61e0f0
// 004ec6a6  83c404               add esp, 4
// 004ec6a9  85f6                 test esi, esi
// 004ec6ab  75e5                 jne 0x4ec692
// 004ec6ad  8b0f                 mov ecx, dword ptr [edi]
// 004ec6af  85c9                 test ecx, ecx
// 004ec6b1  7408                 je 0x4ec6bb
// 004ec6b3  8b11                 mov edx, dword ptr [ecx]
// 004ec6b5  8b02                 mov eax, dword ptr [edx]
// 004ec6b7  6a01                 push 1
// 004ec6b9  ffd0                 call eax
// 004ec6bb  c70700000000         mov dword ptr [edi], 0
// 004ec6c1  83c501               add ebp, 1
// 004ec6c4  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 004ec6c7  7ca7                 jl 0x4ec670
// 004ec6c9  5f                   pop edi
// 004ec6ca  5e                   pop esi
// 004ec6cb  8b0b                 mov ecx, dword ptr [ebx]
// 004ec6cd  51                   push ecx
// 004ec6ce  e8ad6c0000           call 0x4f3380
// 004ec6d3  83c404               add esp, 4
// 004ec6d6  5d                   pop ebp
// 004ec6d7  c70300000000         mov dword ptr [ebx], 0
// 004ec6dd  c7430400000000       mov dword ptr [ebx + 4], 0
// 004ec6e4  c7430800000000       mov dword ptr [ebx + 8], 0
// 004ec6eb  5b                   pop ebx
// 004ec6ec  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ??1?$Array@V?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
