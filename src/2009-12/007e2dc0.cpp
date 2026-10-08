// roc 2009-12 007e2dc0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e2dc0
//
// 007e2dc0  83ec08               sub esp, 8
// 007e2dc3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e2dc7  53                   push ebx
// 007e2dc8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e2dcc  56                   push esi
// 007e2dcd  8b742418             mov esi, dword ptr [esp + 0x18]
// 007e2dd1  57                   push edi
// 007e2dd2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007e2dd6  32c0                 xor al, al
// 007e2dd8  88442410             mov byte ptr [esp + 0x10], al
// 007e2ddc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e2de0  8844240c             mov byte ptr [esp + 0xc], al
// 007e2de4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e2de8  50                   push eax
// 007e2de9  51                   push ecx
// 007e2dea  52                   push edx
// 007e2deb  57                   push edi
// 007e2dec  56                   push esi
// 007e2ded  53                   push ebx
// 007e2dee  e83df8ffff           call 0x7e2630
// 007e2df3  2bf3                 sub esi, ebx
// 007e2df5  c1fe02               sar esi, 2
// 007e2df8  83c418               add esp, 0x18
// 007e2dfb  03f6                 add esi, esi
// 007e2dfd  03f6                 add esi, esi
// 007e2dff  8bc7                 mov eax, edi
// 007e2e01  5f                   pop edi
// 007e2e02  2bc6                 sub eax, esi
// 007e2e04  5e                   pop esi
// 007e2e05  5b                   pop ebx
// 007e2e06  83c408               add esp, 8
// 007e2e09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
