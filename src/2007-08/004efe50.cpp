// roc 2007-08 004efe50  unit: RBX::Render::VChunk::?$WeakReferenceCountedPointer  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004efe50
//
// 004efe50  55                   push ebp
// 004efe51  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004efe55  57                   push edi
// 004efe56  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004efe5a  3bfd                 cmp edi, ebp
// 004efe5c  745a                 je 0x4efeb8
// 004efe5e  53                   push ebx
// 004efe5f  8b1de8d27700         mov ebx, dword ptr [0x77d2e8]
// 004efe65  56                   push esi
// 004efe66  8b07                 mov eax, dword ptr [edi]
// 004efe68  85c0                 test eax, eax
// 004efe6a  7443                 je 0x4efeaf
// 004efe6c  83c004               add eax, 4
// 004efe6f  50                   push eax
// 004efe70  ffd3                 call ebx
// 004efe72  85c0                 test eax, eax
// 004efe74  7533                 jne 0x4efea9
// 004efe76  8b07                 mov eax, dword ptr [edi]
// 004efe78  8b7008               mov esi, dword ptr [eax + 8]
// 004efe7b  85f6                 test esi, esi
// 004efe7d  741c                 je 0x4efe9b
// 004efe7f  90                   nop 
// 004efe80  8b0e                 mov ecx, dword ptr [esi]
// 004efe82  8b11                 mov edx, dword ptr [ecx]
// 004efe84  8b4204               mov eax, dword ptr [edx + 4]
// 004efe87  ffd0                 call eax
// 004efe89  8bc6                 mov eax, esi
// 004efe8b  8b7604               mov esi, dword ptr [esi + 4]
// 004efe8e  50                   push eax
// 004efe8f  e8cefd1300           call 0x62fc62
// 004efe94  83c404               add esp, 4
// 004efe97  85f6                 test esi, esi
// 004efe99  75e5                 jne 0x4efe80
// 004efe9b  8b0f                 mov ecx, dword ptr [edi]
// 004efe9d  85c9                 test ecx, ecx
// 004efe9f  7408                 je 0x4efea9
// 004efea1  8b11                 mov edx, dword ptr [ecx]
// 004efea3  8b02                 mov eax, dword ptr [edx]
// 004efea5  6a01                 push 1
// 004efea7  ffd0                 call eax
// 004efea9  c70700000000         mov dword ptr [edi], 0
// 004efeaf  83c704               add edi, 4
// 004efeb2  3bfd                 cmp edi, ebp
// 004efeb4  75b0                 jne 0x4efe66
// 004efeb6  5e                   pop esi
// 004efeb7  5b                   pop ebx
// 004efeb8  5f                   pop edi
// 004efeb9  5d                   pop ebp
// 004efeba  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Destroy_range@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@YAXPAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@0AAV?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
