// roc 2007-03 004e37c0  unit: seg_004e0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e37c0
//
// 004e37c0  55                   push ebp
// 004e37c1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004e37c5  57                   push edi
// 004e37c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e37ca  3bfd                 cmp edi, ebp
// 004e37cc  745a                 je 0x4e3828
// 004e37ce  53                   push ebx
// 004e37cf  8b1da8d27700         mov ebx, dword ptr [0x77d2a8]
// 004e37d5  56                   push esi
// 004e37d6  8b07                 mov eax, dword ptr [edi]
// 004e37d8  85c0                 test eax, eax
// 004e37da  7443                 je 0x4e381f
// 004e37dc  83c004               add eax, 4
// 004e37df  50                   push eax
// 004e37e0  ffd3                 call ebx
// 004e37e2  85c0                 test eax, eax
// 004e37e4  7533                 jne 0x4e3819
// 004e37e6  8b07                 mov eax, dword ptr [edi]
// 004e37e8  8b7008               mov esi, dword ptr [eax + 8]
// 004e37eb  85f6                 test esi, esi
// 004e37ed  741c                 je 0x4e380b
// 004e37ef  90                   nop 
// 004e37f0  8b0e                 mov ecx, dword ptr [esi]
// 004e37f2  8b11                 mov edx, dword ptr [ecx]
// 004e37f4  8b4204               mov eax, dword ptr [edx + 4]
// 004e37f7  ffd0                 call eax
// 004e37f9  8bc6                 mov eax, esi
// 004e37fb  8b7604               mov esi, dword ptr [esi + 4]
// 004e37fe  50                   push eax
// 004e37ff  e8eca81300           call 0x61e0f0
// 004e3804  83c404               add esp, 4
// 004e3807  85f6                 test esi, esi
// 004e3809  75e5                 jne 0x4e37f0
// 004e380b  8b0f                 mov ecx, dword ptr [edi]
// 004e380d  85c9                 test ecx, ecx
// 004e380f  7408                 je 0x4e3819
// 004e3811  8b11                 mov edx, dword ptr [ecx]
// 004e3813  8b02                 mov eax, dword ptr [edx]
// 004e3815  6a01                 push 1
// 004e3817  ffd0                 call eax
// 004e3819  c70700000000         mov dword ptr [edi], 0
// 004e381f  83c704               add edi, 4
// 004e3822  3bfd                 cmp edi, ebp
// 004e3824  75b0                 jne 0x4e37d6
// 004e3826  5e                   pop esi
// 004e3827  5b                   pop ebx
// 004e3828  5f                   pop edi
// 004e3829  5d                   pop ebp
// 004e382a  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Destroy_range@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@YAXPAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@0AAV?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
