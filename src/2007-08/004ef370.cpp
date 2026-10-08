// roc 2007-08 004ef370  unit: RBX::Render::SceneManager  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef370
//
// 004ef370  55                   push ebp
// 004ef371  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004ef375  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004ef379  747d                 je 0x4ef3f8
// 004ef37b  53                   push ebx
// 004ef37c  56                   push esi
// 004ef37d  57                   push edi
// 004ef37e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ef382  8b5d00               mov ebx, dword ptr [ebp]
// 004ef385  8b07                 mov eax, dword ptr [edi]
// 004ef387  3bd8                 cmp ebx, eax
// 004ef389  745a                 je 0x4ef3e5
// 004ef38b  85c0                 test eax, eax
// 004ef38d  7446                 je 0x4ef3d5
// 004ef38f  83c004               add eax, 4
// 004ef392  50                   push eax
// 004ef393  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ef399  85c0                 test eax, eax
// 004ef39b  7532                 jne 0x4ef3cf
// 004ef39d  8b07                 mov eax, dword ptr [edi]
// 004ef39f  8b7008               mov esi, dword ptr [eax + 8]
// 004ef3a2  85f6                 test esi, esi
// 004ef3a4  741b                 je 0x4ef3c1
// 004ef3a6  8b0e                 mov ecx, dword ptr [esi]
// 004ef3a8  8b11                 mov edx, dword ptr [ecx]
// 004ef3aa  8b4204               mov eax, dword ptr [edx + 4]
// 004ef3ad  ffd0                 call eax
// 004ef3af  8bc6                 mov eax, esi
// 004ef3b1  8b7604               mov esi, dword ptr [esi + 4]
// 004ef3b4  50                   push eax
// 004ef3b5  e8a8081400           call 0x62fc62
// 004ef3ba  83c404               add esp, 4
// 004ef3bd  85f6                 test esi, esi
// 004ef3bf  75e5                 jne 0x4ef3a6
// 004ef3c1  8b0f                 mov ecx, dword ptr [edi]
// 004ef3c3  85c9                 test ecx, ecx
// 004ef3c5  7408                 je 0x4ef3cf
// 004ef3c7  8b11                 mov edx, dword ptr [ecx]
// 004ef3c9  8b02                 mov eax, dword ptr [edx]
// 004ef3cb  6a01                 push 1
// 004ef3cd  ffd0                 call eax
// 004ef3cf  c70700000000         mov dword ptr [edi], 0
// 004ef3d5  85db                 test ebx, ebx
// 004ef3d7  740c                 je 0x4ef3e5
// 004ef3d9  891f                 mov dword ptr [edi], ebx
// 004ef3db  83c304               add ebx, 4
// 004ef3de  53                   push ebx
// 004ef3df  ff15ecd27700         call dword ptr [0x77d2ec]
// 004ef3e5  83c504               add ebp, 4
// 004ef3e8  83c704               add edi, 4
// 004ef3eb  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004ef3ef  7591                 jne 0x4ef382
// 004ef3f1  8bc7                 mov eax, edi
// 004ef3f3  5f                   pop edi
// 004ef3f4  5e                   pop esi
// 004ef3f5  5b                   pop ebx
// 004ef3f6  5d                   pop ebp
// 004ef3f7  c3                   ret 
// 004ef3f8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ef3fc  5d                   pop ebp
// 004ef3fd  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Copy_opt@PAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
