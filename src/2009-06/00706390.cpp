// from server: 100% by auto
// roc 2009-06 00706390  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00706390
//
// 00706390  83ec08               sub esp, 8
// 00706393  8b542414             mov edx, dword ptr [esp + 0x14]
// 00706397  53                   push ebx
// 00706398  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0070639c  56                   push esi
// 0070639d  8b742418             mov esi, dword ptr [esp + 0x18]
// 007063a1  57                   push edi
// 007063a2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007063a6  32c0                 xor al, al
// 007063a8  88442410             mov byte ptr [esp + 0x10], al
// 007063ac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007063b0  8844240c             mov byte ptr [esp + 0xc], al
// 007063b4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007063b8  50                   push eax
// 007063b9  51                   push ecx
// 007063ba  52                   push edx
// 007063bb  57                   push edi
// 007063bc  56                   push esi
// 007063bd  53                   push ebx
// 007063be  e81df7ffff           call 0x705ae0
// 007063c3  2bf3                 sub esi, ebx
// 007063c5  c1fe02               sar esi, 2
// 007063c8  83c418               add esp, 0x18
// 007063cb  03f6                 add esi, esi
// 007063cd  03f6                 add esi, esi
// 007063cf  8bc7                 mov eax, edi
// 007063d1  5f                   pop edi
// 007063d2  2bc6                 sub eax, esi
// 007063d4  5e                   pop esi
// 007063d5  5b                   pop ebx
// 007063d6  83c408               add esp, 8
// 007063d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
