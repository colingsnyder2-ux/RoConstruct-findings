// roc 2007-08 00574780  unit: RBX::P8PartInstance::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574780
//
// 00574780  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00574784  8b542408             mov edx, dword ptr [esp + 8]
// 00574788  3bca                 cmp ecx, edx
// 0057478a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057478e  7414                 je 0x5747a4
// 00574790  56                   push esi
// 00574791  85c0                 test eax, eax
// 00574793  7404                 je 0x574799
// 00574795  8b31                 mov esi, dword ptr [ecx]
// 00574797  8930                 mov dword ptr [eax], esi
// 00574799  83c104               add ecx, 4
// 0057479c  83c004               add eax, 4
// 0057479f  3bca                 cmp ecx, edx
// 005747a1  75ee                 jne 0x574791
// 005747a3  5e                   pop esi
// 005747a4  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
