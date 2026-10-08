// roc 2010-06 00445850  unit: RBX::P8CRenderSettings::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445850
//
// 00445850  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00445854  8b542408             mov edx, dword ptr [esp + 8]
// 00445858  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044585c  3bca                 cmp ecx, edx
// 0044585e  7414                 je 0x445874
// 00445860  56                   push esi
// 00445861  85c0                 test eax, eax
// 00445863  7404                 je 0x445869
// 00445865  8b31                 mov esi, dword ptr [ecx]
// 00445867  8930                 mov dword ptr [eax], esi
// 00445869  83c104               add ecx, 4
// 0044586c  83c004               add eax, 4
// 0044586f  3bca                 cmp ecx, edx
// 00445871  75ee                 jne 0x445861
// 00445873  5e                   pop esi
// 00445874  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
