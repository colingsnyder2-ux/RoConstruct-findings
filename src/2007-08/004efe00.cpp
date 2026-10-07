// roc 2007-08 004efe00  unit: RBX::Render::VChunk::?$WeakReferenceCountedPointer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004efe00
//
// 004efe00  83ec08               sub esp, 8
// 004efe03  8b542414             mov edx, dword ptr [esp + 0x14]
// 004efe07  53                   push ebx
// 004efe08  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004efe0c  56                   push esi
// 004efe0d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004efe11  57                   push edi
// 004efe12  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004efe16  32c0                 xor al, al
// 004efe18  88442410             mov byte ptr [esp + 0x10], al
// 004efe1c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004efe20  8844240c             mov byte ptr [esp + 0xc], al
// 004efe24  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004efe28  50                   push eax
// 004efe29  51                   push ecx
// 004efe2a  52                   push edx
// 004efe2b  57                   push edi
// 004efe2c  56                   push esi
// 004efe2d  53                   push ebx
// 004efe2e  e8cdf5ffff           call 0x4ef400
// 004efe33  2bf3                 sub esi, ebx
// 004efe35  c1fe02               sar esi, 2
// 004efe38  83c418               add esp, 0x18
// 004efe3b  03f6                 add esi, esi
// 004efe3d  03f6                 add esi, esi
// 004efe3f  8bc7                 mov eax, edi
// 004efe41  5f                   pop edi
// 004efe42  2bc6                 sub eax, esi
// 004efe44  5e                   pop esi
// 004efe45  5b                   pop ebx
// 004efe46  83c408               add esp, 8
// 004efe49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
