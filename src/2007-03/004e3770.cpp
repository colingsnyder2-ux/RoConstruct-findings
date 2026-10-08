// roc 2007-03 004e3770  unit: seg_004e0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3770
//
// 004e3770  83ec08               sub esp, 8
// 004e3773  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e3777  53                   push ebx
// 004e3778  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004e377c  56                   push esi
// 004e377d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e3781  57                   push edi
// 004e3782  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e3786  32c0                 xor al, al
// 004e3788  88442410             mov byte ptr [esp + 0x10], al
// 004e378c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e3790  8844240c             mov byte ptr [esp + 0xc], al
// 004e3794  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3798  50                   push eax
// 004e3799  51                   push ecx
// 004e379a  52                   push edx
// 004e379b  57                   push edi
// 004e379c  56                   push esi
// 004e379d  53                   push ebx
// 004e379e  e84df6ffff           call 0x4e2df0
// 004e37a3  2bf3                 sub esi, ebx
// 004e37a5  c1fe02               sar esi, 2
// 004e37a8  83c418               add esp, 0x18
// 004e37ab  03f6                 add esi, esi
// 004e37ad  03f6                 add esi, esi
// 004e37af  8bc7                 mov eax, edi
// 004e37b1  5f                   pop edi
// 004e37b2  2bc6                 sub eax, esi
// 004e37b4  5e                   pop esi
// 004e37b5  5b                   pop ebx
// 004e37b6  83c408               add esp, 8
// 004e37b9  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@@std@@YAPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/PosedModel.cpp
