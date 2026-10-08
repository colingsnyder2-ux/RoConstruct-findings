// roc 2007-03 004e2d60  unit: seg_004e0000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2d60
//
// 004e2d60  55                   push ebp
// 004e2d61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004e2d65  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004e2d69  747d                 je 0x4e2de8
// 004e2d6b  53                   push ebx
// 004e2d6c  56                   push esi
// 004e2d6d  57                   push edi
// 004e2d6e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e2d72  8b5d00               mov ebx, dword ptr [ebp]
// 004e2d75  8b07                 mov eax, dword ptr [edi]
// 004e2d77  3bd8                 cmp ebx, eax
// 004e2d79  745a                 je 0x4e2dd5
// 004e2d7b  85c0                 test eax, eax
// 004e2d7d  7446                 je 0x4e2dc5
// 004e2d7f  83c004               add eax, 4
// 004e2d82  50                   push eax
// 004e2d83  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e2d89  85c0                 test eax, eax
// 004e2d8b  7532                 jne 0x4e2dbf
// 004e2d8d  8b07                 mov eax, dword ptr [edi]
// 004e2d8f  8b7008               mov esi, dword ptr [eax + 8]
// 004e2d92  85f6                 test esi, esi
// 004e2d94  741b                 je 0x4e2db1
// 004e2d96  8b0e                 mov ecx, dword ptr [esi]
// 004e2d98  8b11                 mov edx, dword ptr [ecx]
// 004e2d9a  8b4204               mov eax, dword ptr [edx + 4]
// 004e2d9d  ffd0                 call eax
// 004e2d9f  8bc6                 mov eax, esi
// 004e2da1  8b7604               mov esi, dword ptr [esi + 4]
// 004e2da4  50                   push eax
// 004e2da5  e846b31300           call 0x61e0f0
// 004e2daa  83c404               add esp, 4
// 004e2dad  85f6                 test esi, esi
// 004e2daf  75e5                 jne 0x4e2d96
// 004e2db1  8b0f                 mov ecx, dword ptr [edi]
// 004e2db3  85c9                 test ecx, ecx
// 004e2db5  7408                 je 0x4e2dbf
// 004e2db7  8b11                 mov edx, dword ptr [ecx]
// 004e2db9  8b02                 mov eax, dword ptr [edx]
// 004e2dbb  6a01                 push 1
// 004e2dbd  ffd0                 call eax
// 004e2dbf  c70700000000         mov dword ptr [edi], 0
// 004e2dc5  85db                 test ebx, ebx
// 004e2dc7  740c                 je 0x4e2dd5
// 004e2dc9  891f                 mov dword ptr [edi], ebx
// 004e2dcb  83c304               add ebx, 4
// 004e2dce  53                   push ebx
// 004e2dcf  ff15acd27700         call dword ptr [0x77d2ac]
// 004e2dd5  83c504               add ebp, 4
// 004e2dd8  83c704               add edi, 4
// 004e2ddb  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004e2ddf  7591                 jne 0x4e2d72
// 004e2de1  8bc7                 mov eax, edi
// 004e2de3  5f                   pop edi
// 004e2de4  5e                   pop esi
// 004e2de5  5b                   pop ebx
// 004e2de6  5d                   pop ebp
// 004e2de7  c3                   ret 
// 004e2de8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e2dec  5d                   pop ebp
// 004e2ded  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Copy_opt@PAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
