// roc 2009-12 0053d0a0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053d0a0
//
// 0053d0a0  83ec08               sub esp, 8
// 0053d0a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053d0a7  53                   push ebx
// 0053d0a8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053d0ac  56                   push esi
// 0053d0ad  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053d0b1  57                   push edi
// 0053d0b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053d0b6  32c0                 xor al, al
// 0053d0b8  88442410             mov byte ptr [esp + 0x10], al
// 0053d0bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053d0c0  8844240c             mov byte ptr [esp + 0xc], al
// 0053d0c4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053d0c8  50                   push eax
// 0053d0c9  51                   push ecx
// 0053d0ca  52                   push edx
// 0053d0cb  57                   push edi
// 0053d0cc  56                   push esi
// 0053d0cd  53                   push ebx
// 0053d0ce  e8bdc1ffff           call 0x539290
// 0053d0d3  2bf3                 sub esi, ebx
// 0053d0d5  c1fe02               sar esi, 2
// 0053d0d8  83c418               add esp, 0x18
// 0053d0db  03f6                 add esi, esi
// 0053d0dd  03f6                 add esi, esi
// 0053d0df  8bc7                 mov eax, edi
// 0053d0e1  5f                   pop edi
// 0053d0e2  2bc6                 sub eax, esi
// 0053d0e4  5e                   pop esi
// 0053d0e5  5b                   pop ebx
// 0053d0e6  83c408               add esp, 8
// 0053d0e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
