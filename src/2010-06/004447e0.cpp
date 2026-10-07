// roc 2010-06 004447e0  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004447e0
//
// 004447e0  83ec08               sub esp, 8
// 004447e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004447e7  53                   push ebx
// 004447e8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004447ec  56                   push esi
// 004447ed  8b742418             mov esi, dword ptr [esp + 0x18]
// 004447f1  57                   push edi
// 004447f2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004447f6  32c0                 xor al, al
// 004447f8  88442410             mov byte ptr [esp + 0x10], al
// 004447fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00444800  8844240c             mov byte ptr [esp + 0xc], al
// 00444804  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444808  50                   push eax
// 00444809  51                   push ecx
// 0044480a  52                   push edx
// 0044480b  57                   push edi
// 0044480c  56                   push esi
// 0044480d  53                   push ebx
// 0044480e  e81dfeffff           call 0x444630
// 00444813  2bf3                 sub esi, ebx
// 00444815  83c418               add esp, 0x18
// 00444818  c1fe04               sar esi, 4
// 0044481b  c1e604               shl esi, 4
// 0044481e  8bc7                 mov eax, edi
// 00444820  5f                   pop edi
// 00444821  2bc6                 sub eax, esi
// 00444823  5e                   pop esi
// 00444824  5b                   pop ebx
// 00444825  83c408               add esp, 8
// 00444828  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
