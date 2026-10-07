// roc 2008-06 00444200  unit: RBX::MergeBinder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444200
//
// 00444200  83ec08               sub esp, 8
// 00444203  8b542414             mov edx, dword ptr [esp + 0x14]
// 00444207  53                   push ebx
// 00444208  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0044420c  56                   push esi
// 0044420d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00444211  57                   push edi
// 00444212  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00444216  32c0                 xor al, al
// 00444218  88442410             mov byte ptr [esp + 0x10], al
// 0044421c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00444220  8844240c             mov byte ptr [esp + 0xc], al
// 00444224  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444228  50                   push eax
// 00444229  51                   push ecx
// 0044422a  52                   push edx
// 0044422b  57                   push edi
// 0044422c  56                   push esi
// 0044422d  53                   push ebx
// 0044422e  e8bdfcffff           call 0x443ef0
// 00444233  2bf3                 sub esi, ebx
// 00444235  83c418               add esp, 0x18
// 00444238  c1fe04               sar esi, 4
// 0044423b  c1e604               shl esi, 4
// 0044423e  8bc7                 mov eax, edi
// 00444240  5f                   pop edi
// 00444241  2bc6                 sub eax, esi
// 00444243  5e                   pop esi
// 00444244  5b                   pop ebx
// 00444245  83c408               add esp, 8
// 00444248  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
