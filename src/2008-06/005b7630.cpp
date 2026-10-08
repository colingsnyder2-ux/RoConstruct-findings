// roc 2008-06 005b7630  unit: P8CRenderSettings::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7630
//
// 005b7630  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7634  8b542408             mov edx, dword ptr [esp + 8]
// 005b7638  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b763c  3bca                 cmp ecx, edx
// 005b763e  7414                 je 0x5b7654
// 005b7640  56                   push esi
// 005b7641  85c0                 test eax, eax
// 005b7643  7404                 je 0x5b7649
// 005b7645  8b31                 mov esi, dword ptr [ecx]
// 005b7647  8930                 mov dword ptr [eax], esi
// 005b7649  83c104               add ecx, 4
// 005b764c  83c004               add eax, 4
// 005b764f  3bca                 cmp ecx, edx
// 005b7651  75ee                 jne 0x5b7641
// 005b7653  5e                   pop esi
// 005b7654  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
