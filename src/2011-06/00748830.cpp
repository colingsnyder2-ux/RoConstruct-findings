// roc 2011-06 00748830  unit: RBX::PlayerHUD  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00748830
//
// 00748830  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00748834  8b542408             mov edx, dword ptr [esp + 8]
// 00748838  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074883c  3bca                 cmp ecx, edx
// 0074883e  7414                 je 0x748854
// 00748840  56                   push esi
// 00748841  85c0                 test eax, eax
// 00748843  7404                 je 0x748849
// 00748845  8b31                 mov esi, dword ptr [ecx]
// 00748847  8930                 mov dword ptr [eax], esi
// 00748849  83c104               add ecx, 4
// 0074884c  83c004               add eax, 4
// 0074884f  3bca                 cmp ecx, edx
// 00748851  75ee                 jne 0x748841
// 00748853  5e                   pop esi
// 00748854  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
