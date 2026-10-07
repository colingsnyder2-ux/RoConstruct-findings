// roc 2010-06 004eb270  unit: RBX::Network::Replicator::ChangePropertyItem  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004eb270
//
// 004eb270  83ec08               sub esp, 8
// 004eb273  8b542414             mov edx, dword ptr [esp + 0x14]
// 004eb277  53                   push ebx
// 004eb278  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004eb27c  56                   push esi
// 004eb27d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004eb281  57                   push edi
// 004eb282  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004eb286  32c0                 xor al, al
// 004eb288  88442410             mov byte ptr [esp + 0x10], al
// 004eb28c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004eb290  8844240c             mov byte ptr [esp + 0xc], al
// 004eb294  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004eb298  50                   push eax
// 004eb299  51                   push ecx
// 004eb29a  52                   push edx
// 004eb29b  57                   push edi
// 004eb29c  56                   push esi
// 004eb29d  53                   push ebx
// 004eb29e  e8adc5ffff           call 0x4e7850
// 004eb2a3  2bf3                 sub esi, ebx
// 004eb2a5  c1fe02               sar esi, 2
// 004eb2a8  83c418               add esp, 0x18
// 004eb2ab  03f6                 add esi, esi
// 004eb2ad  03f6                 add esi, esi
// 004eb2af  8bc7                 mov eax, edi
// 004eb2b1  5f                   pop edi
// 004eb2b2  2bc6                 sub eax, esi
// 004eb2b4  5e                   pop esi
// 004eb2b5  5b                   pop ebx
// 004eb2b6  83c408               add esp, 8
// 004eb2b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
