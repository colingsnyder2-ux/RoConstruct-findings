// roc 2010-06 0053f870  unit: RBX::SceneManager  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053f870
//
// 0053f870  55                   push ebp
// 0053f871  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0053f875  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0053f879  747d                 je 0x53f8f8
// 0053f87b  53                   push ebx
// 0053f87c  56                   push esi
// 0053f87d  57                   push edi
// 0053f87e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053f882  8b5d00               mov ebx, dword ptr [ebp]
// 0053f885  8b07                 mov eax, dword ptr [edi]
// 0053f887  3bd8                 cmp ebx, eax
// 0053f889  745a                 je 0x53f8e5
// 0053f88b  85c0                 test eax, eax
// 0053f88d  7446                 je 0x53f8d5
// 0053f88f  83c004               add eax, 4
// 0053f892  50                   push eax
// 0053f893  ff157ca39e00         call dword ptr [0x9ea37c]
// 0053f899  85c0                 test eax, eax
// 0053f89b  7532                 jne 0x53f8cf
// 0053f89d  8b07                 mov eax, dword ptr [edi]
// 0053f89f  8b7008               mov esi, dword ptr [eax + 8]
// 0053f8a2  85f6                 test esi, esi
// 0053f8a4  741b                 je 0x53f8c1
// 0053f8a6  8b0e                 mov ecx, dword ptr [esi]
// 0053f8a8  8b11                 mov edx, dword ptr [ecx]
// 0053f8aa  8b4204               mov eax, dword ptr [edx + 4]
// 0053f8ad  ffd0                 call eax
// 0053f8af  8bc6                 mov eax, esi
// 0053f8b1  8b7604               mov esi, dword ptr [esi + 4]
// 0053f8b4  50                   push eax
// 0053f8b5  e8e0802600           call 0x7a799a
// 0053f8ba  83c404               add esp, 4
// 0053f8bd  85f6                 test esi, esi
// 0053f8bf  75e5                 jne 0x53f8a6
// 0053f8c1  8b0f                 mov ecx, dword ptr [edi]
// 0053f8c3  85c9                 test ecx, ecx
// 0053f8c5  7408                 je 0x53f8cf
// 0053f8c7  8b11                 mov edx, dword ptr [ecx]
// 0053f8c9  8b02                 mov eax, dword ptr [edx]
// 0053f8cb  6a01                 push 1
// 0053f8cd  ffd0                 call eax
// 0053f8cf  c70700000000         mov dword ptr [edi], 0
// 0053f8d5  85db                 test ebx, ebx
// 0053f8d7  740c                 je 0x53f8e5
// 0053f8d9  891f                 mov dword ptr [edi], ebx
// 0053f8db  83c304               add ebx, 4
// 0053f8de  53                   push ebx
// 0053f8df  ff1580a39e00         call dword ptr [0x9ea380]
// 0053f8e5  83c504               add ebp, 4
// 0053f8e8  83c704               add edi, 4
// 0053f8eb  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0053f8ef  7591                 jne 0x53f882
// 0053f8f1  8bc7                 mov eax, edi
// 0053f8f3  5f                   pop edi
// 0053f8f4  5e                   pop esi
// 0053f8f5  5b                   pop ebx
// 0053f8f6  5d                   pop ebp
// 0053f8f7  c3                   ret 
// 0053f8f8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053f8fc  5d                   pop ebp
// 0053f8fd  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Copy_opt@PAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
