// roc 2010-06 005402d0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005402d0
//
// 005402d0  83ec08               sub esp, 8
// 005402d3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005402d7  53                   push ebx
// 005402d8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005402dc  56                   push esi
// 005402dd  8b742418             mov esi, dword ptr [esp + 0x18]
// 005402e1  57                   push edi
// 005402e2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005402e6  32c0                 xor al, al
// 005402e8  88442410             mov byte ptr [esp + 0x10], al
// 005402ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005402f0  8844240c             mov byte ptr [esp + 0xc], al
// 005402f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005402f8  50                   push eax
// 005402f9  51                   push ecx
// 005402fa  52                   push edx
// 005402fb  57                   push edi
// 005402fc  56                   push esi
// 005402fd  53                   push ebx
// 005402fe  e8fdf5ffff           call 0x53f900
// 00540303  2bf3                 sub esi, ebx
// 00540305  c1fe02               sar esi, 2
// 00540308  83c418               add esp, 0x18
// 0054030b  03f6                 add esi, esi
// 0054030d  03f6                 add esi, esi
// 0054030f  8bc7                 mov eax, edi
// 00540311  5f                   pop edi
// 00540312  2bc6                 sub eax, esi
// 00540314  5e                   pop esi
// 00540315  5b                   pop ebx
// 00540316  83c408               add esp, 8
// 00540319  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
