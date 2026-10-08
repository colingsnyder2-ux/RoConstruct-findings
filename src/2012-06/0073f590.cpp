// roc 2012-06 0073f590  unit: RBX::PluginManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073f590
//
// 0073f590  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0073f594  8b542408             mov edx, dword ptr [esp + 8]
// 0073f598  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073f59c  3bca                 cmp ecx, edx
// 0073f59e  7414                 je 0x73f5b4
// 0073f5a0  56                   push esi
// 0073f5a1  85c0                 test eax, eax
// 0073f5a3  7404                 je 0x73f5a9
// 0073f5a5  8b31                 mov esi, dword ptr [ecx]
// 0073f5a7  8930                 mov dword ptr [eax], esi
// 0073f5a9  83c104               add ecx, 4
// 0073f5ac  83c004               add eax, 4
// 0073f5af  3bca                 cmp ecx, edx
// 0073f5b1  75ee                 jne 0x73f5a1
// 0073f5b3  5e                   pop esi
// 0073f5b4  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Uninit_copy@PAVBrickColor@RBX@@PAV12@V?$allocator@VBrickColor@RBX@@@std@@@std@@YAPAVBrickColor@RBX@@PAV12@00AAV?$allocator@VBrickColor@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
