// roc 2007-03 004e2df0  unit: seg_004e0000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2df0
//
// 004e2df0  55                   push ebp
// 004e2df1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004e2df5  396c2408             cmp dword ptr [esp + 8], ebp
// 004e2df9  0f847e000000         je 0x4e2e7d
// 004e2dff  53                   push ebx
// 004e2e00  56                   push esi
// 004e2e01  57                   push edi
// 004e2e02  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e2e06  8b5dfc               mov ebx, dword ptr [ebp - 4]
// 004e2e09  8b47fc               mov eax, dword ptr [edi - 4]
// 004e2e0c  83ed04               sub ebp, 4
// 004e2e0f  83ef04               sub edi, 4
// 004e2e12  3bd8                 cmp ebx, eax
// 004e2e14  745a                 je 0x4e2e70
// 004e2e16  85c0                 test eax, eax
// 004e2e18  7446                 je 0x4e2e60
// 004e2e1a  83c004               add eax, 4
// 004e2e1d  50                   push eax
// 004e2e1e  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e2e24  85c0                 test eax, eax
// 004e2e26  7532                 jne 0x4e2e5a
// 004e2e28  8b07                 mov eax, dword ptr [edi]
// 004e2e2a  8b7008               mov esi, dword ptr [eax + 8]
// 004e2e2d  85f6                 test esi, esi
// 004e2e2f  741b                 je 0x4e2e4c
// 004e2e31  8b0e                 mov ecx, dword ptr [esi]
// 004e2e33  8b11                 mov edx, dword ptr [ecx]
// 004e2e35  8b4204               mov eax, dword ptr [edx + 4]
// 004e2e38  ffd0                 call eax
// 004e2e3a  8bc6                 mov eax, esi
// 004e2e3c  8b7604               mov esi, dword ptr [esi + 4]
// 004e2e3f  50                   push eax
// 004e2e40  e8abb21300           call 0x61e0f0
// 004e2e45  83c404               add esp, 4
// 004e2e48  85f6                 test esi, esi
// 004e2e4a  75e5                 jne 0x4e2e31
// 004e2e4c  8b0f                 mov ecx, dword ptr [edi]
// 004e2e4e  85c9                 test ecx, ecx
// 004e2e50  7408                 je 0x4e2e5a
// 004e2e52  8b11                 mov edx, dword ptr [ecx]
// 004e2e54  8b02                 mov eax, dword ptr [edx]
// 004e2e56  6a01                 push 1
// 004e2e58  ffd0                 call eax
// 004e2e5a  c70700000000         mov dword ptr [edi], 0
// 004e2e60  85db                 test ebx, ebx
// 004e2e62  740c                 je 0x4e2e70
// 004e2e64  891f                 mov dword ptr [edi], ebx
// 004e2e66  83c304               add ebx, 4
// 004e2e69  53                   push ebx
// 004e2e6a  ff15acd27700         call dword ptr [0x77d2ac]
// 004e2e70  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 004e2e74  7590                 jne 0x4e2e06
// 004e2e76  8bc7                 mov eax, edi
// 004e2e78  5f                   pop edi
// 004e2e79  5e                   pop esi
// 004e2e7a  5b                   pop ebx
// 004e2e7b  5d                   pop ebp
// 004e2e7c  c3                   ret 
// 004e2e7d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e2e81  5d                   pop ebp
// 004e2e82  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/PosedModel.cpp
