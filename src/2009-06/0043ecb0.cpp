// roc 2009-06 0043ecb0  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043ecb0
//
// 0043ecb0  83ec08               sub esp, 8
// 0043ecb3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0043ecb7  53                   push ebx
// 0043ecb8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0043ecbc  56                   push esi
// 0043ecbd  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043ecc1  57                   push edi
// 0043ecc2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0043ecc6  32c0                 xor al, al
// 0043ecc8  88442410             mov byte ptr [esp + 0x10], al
// 0043eccc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043ecd0  8844240c             mov byte ptr [esp + 0xc], al
// 0043ecd4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043ecd8  50                   push eax
// 0043ecd9  51                   push ecx
// 0043ecda  52                   push edx
// 0043ecdb  57                   push edi
// 0043ecdc  56                   push esi
// 0043ecdd  53                   push ebx
// 0043ecde  e81dfeffff           call 0x43eb00
// 0043ece3  2bf3                 sub esi, ebx
// 0043ece5  83c418               add esp, 0x18
// 0043ece8  c1fe04               sar esi, 4
// 0043eceb  c1e604               shl esi, 4
// 0043ecee  8bc7                 mov eax, edi
// 0043ecf0  5f                   pop edi
// 0043ecf1  2bc6                 sub eax, esi
// 0043ecf3  5e                   pop esi
// 0043ecf4  5b                   pop ebx
// 0043ecf5  83c408               add esp, 8
// 0043ecf8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
