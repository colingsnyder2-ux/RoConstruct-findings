// roc 2009-12 004432f0  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004432f0
//
// 004432f0  83ec08               sub esp, 8
// 004432f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004432f7  53                   push ebx
// 004432f8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004432fc  56                   push esi
// 004432fd  8b742418             mov esi, dword ptr [esp + 0x18]
// 00443301  57                   push edi
// 00443302  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00443306  32c0                 xor al, al
// 00443308  88442410             mov byte ptr [esp + 0x10], al
// 0044330c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00443310  8844240c             mov byte ptr [esp + 0xc], al
// 00443314  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443318  50                   push eax
// 00443319  51                   push ecx
// 0044331a  52                   push edx
// 0044331b  57                   push edi
// 0044331c  56                   push esi
// 0044331d  53                   push ebx
// 0044331e  e81dfeffff           call 0x443140
// 00443323  2bf3                 sub esi, ebx
// 00443325  83c418               add esp, 0x18
// 00443328  c1fe04               sar esi, 4
// 0044332b  c1e604               shl esi, 4
// 0044332e  8bc7                 mov eax, edi
// 00443330  5f                   pop edi
// 00443331  2bc6                 sub eax, esi
// 00443333  5e                   pop esi
// 00443334  5b                   pop ebx
// 00443335  83c408               add esp, 8
// 00443338  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
