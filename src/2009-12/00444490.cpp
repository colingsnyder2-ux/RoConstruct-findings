// roc 2009-12 00444490  unit: RBX::P8CRenderSettings::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444490
//
// 00444490  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00444494  8b542408             mov edx, dword ptr [esp + 8]
// 00444498  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044449c  3bca                 cmp ecx, edx
// 0044449e  7414                 je 0x4444b4
// 004444a0  56                   push esi
// 004444a1  85c0                 test eax, eax
// 004444a3  7404                 je 0x4444a9
// 004444a5  8b31                 mov esi, dword ptr [ecx]
// 004444a7  8930                 mov dword ptr [eax], esi
// 004444a9  83c104               add ecx, 4
// 004444ac  83c004               add eax, 4
// 004444af  3bca                 cmp ecx, edx
// 004444b1  75ee                 jne 0x4444a1
// 004444b3  5e                   pop esi
// 004444b4  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
