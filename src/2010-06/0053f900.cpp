// from server: 100% by auto
// roc 2010-06 0053f900  unit: RBX::SceneManager  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053f900
//
// 0053f900  55                   push ebp
// 0053f901  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0053f905  396c2408             cmp dword ptr [esp + 8], ebp
// 0053f909  0f847e000000         je 0x53f98d
// 0053f90f  53                   push ebx
// 0053f910  56                   push esi
// 0053f911  57                   push edi
// 0053f912  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053f916  8b5dfc               mov ebx, dword ptr [ebp - 4]
// 0053f919  8b47fc               mov eax, dword ptr [edi - 4]
// 0053f91c  83ed04               sub ebp, 4
// 0053f91f  83ef04               sub edi, 4
// 0053f922  3bd8                 cmp ebx, eax
// 0053f924  745a                 je 0x53f980
// 0053f926  85c0                 test eax, eax
// 0053f928  7446                 je 0x53f970
// 0053f92a  83c004               add eax, 4
// 0053f92d  50                   push eax
// 0053f92e  ff157ca39e00         call dword ptr [0x9ea37c]
// 0053f934  85c0                 test eax, eax
// 0053f936  7532                 jne 0x53f96a
// 0053f938  8b07                 mov eax, dword ptr [edi]
// 0053f93a  8b7008               mov esi, dword ptr [eax + 8]
// 0053f93d  85f6                 test esi, esi
// 0053f93f  741b                 je 0x53f95c
// 0053f941  8b0e                 mov ecx, dword ptr [esi]
// 0053f943  8b11                 mov edx, dword ptr [ecx]
// 0053f945  8b4204               mov eax, dword ptr [edx + 4]
// 0053f948  ffd0                 call eax
// 0053f94a  8bc6                 mov eax, esi
// 0053f94c  8b7604               mov esi, dword ptr [esi + 4]
// 0053f94f  50                   push eax
// 0053f950  e845802600           call 0x7a799a
// 0053f955  83c404               add esp, 4
// 0053f958  85f6                 test esi, esi
// 0053f95a  75e5                 jne 0x53f941
// 0053f95c  8b0f                 mov ecx, dword ptr [edi]
// 0053f95e  85c9                 test ecx, ecx
// 0053f960  7408                 je 0x53f96a
// 0053f962  8b11                 mov edx, dword ptr [ecx]
// 0053f964  8b02                 mov eax, dword ptr [edx]
// 0053f966  6a01                 push 1
// 0053f968  ffd0                 call eax
// 0053f96a  c70700000000         mov dword ptr [edi], 0
// 0053f970  85db                 test ebx, ebx
// 0053f972  740c                 je 0x53f980
// 0053f974  891f                 mov dword ptr [edi], ebx
// 0053f976  83c304               add ebx, 4
// 0053f979  53                   push ebx
// 0053f97a  ff1580a39e00         call dword ptr [0x9ea380]
// 0053f980  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0053f984  7590                 jne 0x53f916
// 0053f986  8bc7                 mov eax, edi
// 0053f988  5f                   pop edi
// 0053f989  5e                   pop esi
// 0053f98a  5b                   pop ebx
// 0053f98b  5d                   pop ebp
// 0053f98c  c3                   ret 
// 0053f98d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053f991  5d                   pop ebp
// 0053f992  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
