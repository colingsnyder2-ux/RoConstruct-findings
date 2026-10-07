// roc 2009-06 006d5fa0  unit: RBX::Mechanism  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5fa0
//
// 006d5fa0  83ec08               sub esp, 8
// 006d5fa3  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d5fa7  53                   push ebx
// 006d5fa8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006d5fac  56                   push esi
// 006d5fad  8b742418             mov esi, dword ptr [esp + 0x18]
// 006d5fb1  57                   push edi
// 006d5fb2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d5fb6  32c0                 xor al, al
// 006d5fb8  88442410             mov byte ptr [esp + 0x10], al
// 006d5fbc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d5fc0  8844240c             mov byte ptr [esp + 0xc], al
// 006d5fc4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d5fc8  50                   push eax
// 006d5fc9  51                   push ecx
// 006d5fca  52                   push edx
// 006d5fcb  57                   push edi
// 006d5fcc  56                   push esi
// 006d5fcd  53                   push ebx
// 006d5fce  e8fdfdffff           call 0x6d5dd0
// 006d5fd3  2bf3                 sub esi, ebx
// 006d5fd5  b893244992           mov eax, 0x92492493
// 006d5fda  f7ee                 imul esi
// 006d5fdc  03d6                 add edx, esi
// 006d5fde  c1fa04               sar edx, 4
// 006d5fe1  8bc2                 mov eax, edx
// 006d5fe3  c1e81f               shr eax, 0x1f
// 006d5fe6  03c2                 add eax, edx
// 006d5fe8  8d0cc500000000       lea ecx, [eax*8]
// 006d5fef  83c418               add esp, 0x18
// 006d5ff2  2bc8                 sub ecx, eax
// 006d5ff4  8bc7                 mov eax, edi
// 006d5ff6  03c9                 add ecx, ecx
// 006d5ff8  5f                   pop edi
// 006d5ff9  03c9                 add ecx, ecx
// 006d5ffb  5e                   pop esi
// 006d5ffc  2bc1                 sub eax, ecx
// 006d5ffe  5b                   pop ebx
// 006d5fff  83c408               add esp, 8
// 006d6002  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$_Copy_backward_opt@PAUCommonVertex@EdgeListBuilder@Ogre@@PAU123@@std@@YAPAUCommonVertex@EdgeListBuilder@Ogre@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
