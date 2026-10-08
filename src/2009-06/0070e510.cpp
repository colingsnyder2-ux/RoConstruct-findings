// roc 2009-06 0070e510  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070e510
//
// 0070e510  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070e514  85c0                 test eax, eax
// 0070e516  7424                 je 0x70e53c
// 0070e518  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070e51c  8b542408             mov edx, dword ptr [esp + 8]
// 0070e520  8908                 mov dword ptr [eax], ecx
// 0070e522  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070e526  895004               mov dword ptr [eax + 4], edx
// 0070e529  894808               mov dword ptr [eax + 8], ecx
// 0070e52c  85c9                 test ecx, ecx
// 0070e52e  7440                 je 0x70e570
// 0070e530  83c104               add ecx, 4
// 0070e533  b801000000           mov eax, 1
// 0070e538  f00fc101             lock xadd dword ptr [ecx], eax
// 0070e53c  56                   push esi
// 0070e53d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0070e541  85f6                 test esi, esi
// 0070e543  742a                 je 0x70e56f
// 0070e545  8d4e04               lea ecx, [esi + 4]
// 0070e548  83caff               or edx, 0xffffffff
// 0070e54b  f00fc111             lock xadd dword ptr [ecx], edx
// 0070e54f  751e                 jne 0x70e56f
// 0070e551  8b06                 mov eax, dword ptr [esi]
// 0070e553  8b5004               mov edx, dword ptr [eax + 4]
// 0070e556  8bce                 mov ecx, esi
// 0070e558  ffd2                 call edx
// 0070e55a  8d4608               lea eax, [esi + 8]
// 0070e55d  83c9ff               or ecx, 0xffffffff
// 0070e560  f00fc108             lock xadd dword ptr [eax], ecx
// 0070e564  7509                 jne 0x70e56f
// 0070e566  8b16                 mov edx, dword ptr [esi]
// 0070e568  8b4208               mov eax, dword ptr [edx + 8]
// 0070e56b  8bce                 mov ecx, esi
// 0070e56d  ffd0                 call eax
// 0070e56f  5e                   pop esi
// 0070e570  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_functor@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAEXV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@U?$bool_@$00@mpl@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
