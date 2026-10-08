// from server: 100% by auto
// roc 2007-08 004ef400  unit: RBX::Render::SceneManager  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef400
//
// 004ef400  55                   push ebp
// 004ef401  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004ef405  396c2408             cmp dword ptr [esp + 8], ebp
// 004ef409  0f847e000000         je 0x4ef48d
// 004ef40f  53                   push ebx
// 004ef410  56                   push esi
// 004ef411  57                   push edi
// 004ef412  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004ef416  8b5dfc               mov ebx, dword ptr [ebp - 4]
// 004ef419  8b47fc               mov eax, dword ptr [edi - 4]
// 004ef41c  83ed04               sub ebp, 4
// 004ef41f  83ef04               sub edi, 4
// 004ef422  3bd8                 cmp ebx, eax
// 004ef424  745a                 je 0x4ef480
// 004ef426  85c0                 test eax, eax
// 004ef428  7446                 je 0x4ef470
// 004ef42a  83c004               add eax, 4
// 004ef42d  50                   push eax
// 004ef42e  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ef434  85c0                 test eax, eax
// 004ef436  7532                 jne 0x4ef46a
// 004ef438  8b07                 mov eax, dword ptr [edi]
// 004ef43a  8b7008               mov esi, dword ptr [eax + 8]
// 004ef43d  85f6                 test esi, esi
// 004ef43f  741b                 je 0x4ef45c
// 004ef441  8b0e                 mov ecx, dword ptr [esi]
// 004ef443  8b11                 mov edx, dword ptr [ecx]
// 004ef445  8b4204               mov eax, dword ptr [edx + 4]
// 004ef448  ffd0                 call eax
// 004ef44a  8bc6                 mov eax, esi
// 004ef44c  8b7604               mov esi, dword ptr [esi + 4]
// 004ef44f  50                   push eax
// 004ef450  e80d081400           call 0x62fc62
// 004ef455  83c404               add esp, 4
// 004ef458  85f6                 test esi, esi
// 004ef45a  75e5                 jne 0x4ef441
// 004ef45c  8b0f                 mov ecx, dword ptr [edi]
// 004ef45e  85c9                 test ecx, ecx
// 004ef460  7408                 je 0x4ef46a
// 004ef462  8b11                 mov edx, dword ptr [ecx]
// 004ef464  8b02                 mov eax, dword ptr [edx]
// 004ef466  6a01                 push 1
// 004ef468  ffd0                 call eax
// 004ef46a  c70700000000         mov dword ptr [edi], 0
// 004ef470  85db                 test ebx, ebx
// 004ef472  740c                 je 0x4ef480
// 004ef474  891f                 mov dword ptr [edi], ebx
// 004ef476  83c304               add ebx, 4
// 004ef479  53                   push ebx
// 004ef47a  ff15ecd27700         call dword ptr [0x77d2ec]
// 004ef480  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 004ef484  7590                 jne 0x4ef416
// 004ef486  8bc7                 mov eax, edi
// 004ef488  5f                   pop edi
// 004ef489  5e                   pop esi
// 004ef48a  5b                   pop ebx
// 004ef48b  5d                   pop ebp
// 004ef48c  c3                   ret 
// 004ef48d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ef491  5d                   pop ebp
// 004ef492  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
