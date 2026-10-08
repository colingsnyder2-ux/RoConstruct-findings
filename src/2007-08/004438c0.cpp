// from server: 100% by auto
// roc 2007-08 004438c0  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004438c0
//
// 004438c0  83ec08               sub esp, 8
// 004438c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004438c7  53                   push ebx
// 004438c8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004438cc  56                   push esi
// 004438cd  8b742418             mov esi, dword ptr [esp + 0x18]
// 004438d1  57                   push edi
// 004438d2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004438d6  32c0                 xor al, al
// 004438d8  88442410             mov byte ptr [esp + 0x10], al
// 004438dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004438e0  8844240c             mov byte ptr [esp + 0xc], al
// 004438e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004438e8  50                   push eax
// 004438e9  51                   push ecx
// 004438ea  52                   push edx
// 004438eb  57                   push edi
// 004438ec  56                   push esi
// 004438ed  53                   push ebx
// 004438ee  e8adfcffff           call 0x4435a0
// 004438f3  2bf3                 sub esi, ebx
// 004438f5  83c418               add esp, 0x18
// 004438f8  c1fe04               sar esi, 4
// 004438fb  c1e604               shl esi, 4
// 004438fe  8bc7                 mov eax, edi
// 00443900  5f                   pop edi
// 00443901  2bc6                 sub eax, esi
// 00443903  5e                   pop esi
// 00443904  5b                   pop ebx
// 00443905  83c408               add esp, 8
// 00443908  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
