// from server: 100% by auto
// roc 2010-06 007964c0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007964c0
//
// 007964c0  83ec08               sub esp, 8
// 007964c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007964c7  53                   push ebx
// 007964c8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007964cc  56                   push esi
// 007964cd  8b742418             mov esi, dword ptr [esp + 0x18]
// 007964d1  57                   push edi
// 007964d2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007964d6  32c0                 xor al, al
// 007964d8  88442410             mov byte ptr [esp + 0x10], al
// 007964dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007964e0  8844240c             mov byte ptr [esp + 0xc], al
// 007964e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007964e8  50                   push eax
// 007964e9  51                   push ecx
// 007964ea  52                   push edx
// 007964eb  57                   push edi
// 007964ec  56                   push esi
// 007964ed  53                   push ebx
// 007964ee  e8fdf7ffff           call 0x795cf0
// 007964f3  2bf3                 sub esi, ebx
// 007964f5  c1fe02               sar esi, 2
// 007964f8  83c418               add esp, 0x18
// 007964fb  03f6                 add esi, esi
// 007964fd  03f6                 add esi, esi
// 007964ff  8bc7                 mov eax, edi
// 00796501  5f                   pop edi
// 00796502  2bc6                 sub eax, esi
// 00796504  5e                   pop esi
// 00796505  5b                   pop ebx
// 00796506  83c408               add esp, 8
// 00796509  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
