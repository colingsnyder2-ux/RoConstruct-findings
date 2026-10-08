// roc 2009-12 0048ca70  unit: G3D::Shader  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048ca70
//
// 0048ca70  83ec08               sub esp, 8
// 0048ca73  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048ca77  53                   push ebx
// 0048ca78  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0048ca7c  56                   push esi
// 0048ca7d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048ca81  57                   push edi
// 0048ca82  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0048ca86  32c0                 xor al, al
// 0048ca88  88442410             mov byte ptr [esp + 0x10], al
// 0048ca8c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ca90  8844240c             mov byte ptr [esp + 0xc], al
// 0048ca94  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048ca98  50                   push eax
// 0048ca99  51                   push ecx
// 0048ca9a  52                   push edx
// 0048ca9b  57                   push edi
// 0048ca9c  56                   push esi
// 0048ca9d  53                   push ebx
// 0048ca9e  e8ddf1ffff           call 0x48bc80
// 0048caa3  2bf3                 sub esi, ebx
// 0048caa5  83c418               add esp, 0x18
// 0048caa8  c1fe04               sar esi, 4
// 0048caab  c1e604               shl esi, 4
// 0048caae  8bc7                 mov eax, edi
// 0048cab0  5f                   pop edi
// 0048cab1  2bc6                 sub eax, esi
// 0048cab3  5e                   pop esi
// 0048cab4  5b                   pop ebx
// 0048cab5  83c408               add esp, 8
// 0048cab8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
