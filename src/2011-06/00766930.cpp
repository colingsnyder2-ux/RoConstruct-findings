// roc 2011-06 00766930  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00766930
//
// 00766930  8b442410             mov eax, dword ptr [esp + 0x10]
// 00766934  85c0                 test eax, eax
// 00766936  7424                 je 0x76695c
// 00766938  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0076693c  8b542408             mov edx, dword ptr [esp + 8]
// 00766940  8908                 mov dword ptr [eax], ecx
// 00766942  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00766946  895004               mov dword ptr [eax + 4], edx
// 00766949  894808               mov dword ptr [eax + 8], ecx
// 0076694c  85c9                 test ecx, ecx
// 0076694e  7440                 je 0x766990
// 00766950  83c104               add ecx, 4
// 00766953  b801000000           mov eax, 1
// 00766958  f00fc101             lock xadd dword ptr [ecx], eax
// 0076695c  56                   push esi
// 0076695d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00766961  85f6                 test esi, esi
// 00766963  742a                 je 0x76698f
// 00766965  8d4e04               lea ecx, [esi + 4]
// 00766968  83caff               or edx, 0xffffffff
// 0076696b  f00fc111             lock xadd dword ptr [ecx], edx
// 0076696f  751e                 jne 0x76698f
// 00766971  8b06                 mov eax, dword ptr [esi]
// 00766973  8b5004               mov edx, dword ptr [eax + 4]
// 00766976  8bce                 mov ecx, esi
// 00766978  ffd2                 call edx
// 0076697a  8d4608               lea eax, [esi + 8]
// 0076697d  83c9ff               or ecx, 0xffffffff
// 00766980  f00fc108             lock xadd dword ptr [eax], ecx
// 00766984  7509                 jne 0x76698f
// 00766986  8b16                 mov edx, dword ptr [esi]
// 00766988  8b4208               mov eax, dword ptr [edx + 8]
// 0076698b  8bce                 mov ecx, esi
// 0076698d  ffd0                 call eax
// 0076698f  5e                   pop esi
// 00766990  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_functor@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAEXV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@U?$bool_@$00@mpl@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
