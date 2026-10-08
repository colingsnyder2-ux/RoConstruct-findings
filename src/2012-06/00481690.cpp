// roc 2012-06 00481690  unit: CRobloxDoc  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00481690
//
// 00481690  8b442410             mov eax, dword ptr [esp + 0x10]
// 00481694  85c0                 test eax, eax
// 00481696  7424                 je 0x4816bc
// 00481698  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048169c  8b542408             mov edx, dword ptr [esp + 8]
// 004816a0  8908                 mov dword ptr [eax], ecx
// 004816a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004816a6  895004               mov dword ptr [eax + 4], edx
// 004816a9  894808               mov dword ptr [eax + 8], ecx
// 004816ac  85c9                 test ecx, ecx
// 004816ae  7440                 je 0x4816f0
// 004816b0  83c104               add ecx, 4
// 004816b3  b801000000           mov eax, 1
// 004816b8  f00fc101             lock xadd dword ptr [ecx], eax
// 004816bc  56                   push esi
// 004816bd  8b742410             mov esi, dword ptr [esp + 0x10]
// 004816c1  85f6                 test esi, esi
// 004816c3  742a                 je 0x4816ef
// 004816c5  8d4e04               lea ecx, [esi + 4]
// 004816c8  83caff               or edx, 0xffffffff
// 004816cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004816cf  751e                 jne 0x4816ef
// 004816d1  8b06                 mov eax, dword ptr [esi]
// 004816d3  8b5004               mov edx, dword ptr [eax + 4]
// 004816d6  8bce                 mov ecx, esi
// 004816d8  ffd2                 call edx
// 004816da  8d4608               lea eax, [esi + 8]
// 004816dd  83c9ff               or ecx, 0xffffffff
// 004816e0  f00fc108             lock xadd dword ptr [eax], ecx
// 004816e4  7509                 jne 0x4816ef
// 004816e6  8b16                 mov edx, dword ptr [esi]
// 004816e8  8b4208               mov eax, dword ptr [edx + 8]
// 004816eb  8bce                 mov ecx, esi
// 004816ed  ffd0                 call eax
// 004816ef  5e                   pop esi
// 004816f0  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_functor@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAEXV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@U?$bool_@$00@mpl@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
