// roc 2007-08 005c4f20  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4f20
//
// 005c4f20  83ec08               sub esp, 8
// 005c4f23  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c4f27  53                   push ebx
// 005c4f28  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005c4f2c  56                   push esi
// 005c4f2d  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c4f31  57                   push edi
// 005c4f32  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005c4f36  32c0                 xor al, al
// 005c4f38  88442410             mov byte ptr [esp + 0x10], al
// 005c4f3c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c4f40  8844240c             mov byte ptr [esp + 0xc], al
// 005c4f44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c4f48  50                   push eax
// 005c4f49  51                   push ecx
// 005c4f4a  52                   push edx
// 005c4f4b  57                   push edi
// 005c4f4c  56                   push esi
// 005c4f4d  53                   push ebx
// 005c4f4e  e83dfdffff           call 0x5c4c90
// 005c4f53  2bf3                 sub esi, ebx
// 005c4f55  83c418               add esp, 0x18
// 005c4f58  c1fe04               sar esi, 4
// 005c4f5b  c1e604               shl esi, 4
// 005c4f5e  8bc7                 mov eax, edi
// 005c4f60  5f                   pop edi
// 005c4f61  2bc6                 sub eax, esi
// 005c4f63  5e                   pop esi
// 005c4f64  5b                   pop ebx
// 005c4f65  83c408               add esp, 8
// 005c4f68  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
