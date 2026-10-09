// roc 2009-12 00668f10  unit: RBX::VInstance::?$NonFactoryProduct  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668f10
//
// 00668f10  8b442410             mov eax, dword ptr [esp + 0x10]
// 00668f14  85c0                 test eax, eax
// 00668f16  7424                 je 0x668f3c
// 00668f18  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668f1c  8b542408             mov edx, dword ptr [esp + 8]
// 00668f20  8908                 mov dword ptr [eax], ecx
// 00668f22  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668f26  895004               mov dword ptr [eax + 4], edx
// 00668f29  894808               mov dword ptr [eax + 8], ecx
// 00668f2c  85c9                 test ecx, ecx
// 00668f2e  7440                 je 0x668f70
// 00668f30  83c104               add ecx, 4
// 00668f33  b801000000           mov eax, 1
// 00668f38  f00fc101             lock xadd dword ptr [ecx], eax
// 00668f3c  56                   push esi
// 00668f3d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00668f41  85f6                 test esi, esi
// 00668f43  742a                 je 0x668f6f
// 00668f45  8d4e04               lea ecx, [esi + 4]
// 00668f48  83caff               or edx, 0xffffffff
// 00668f4b  f00fc111             lock xadd dword ptr [ecx], edx
// 00668f4f  751e                 jne 0x668f6f
// 00668f51  8b06                 mov eax, dword ptr [esi]
// 00668f53  8b5004               mov edx, dword ptr [eax + 4]
// 00668f56  8bce                 mov ecx, esi
// 00668f58  ffd2                 call edx
// 00668f5a  8d4608               lea eax, [esi + 8]
// 00668f5d  83c9ff               or ecx, 0xffffffff
// 00668f60  f00fc108             lock xadd dword ptr [eax], ecx
// 00668f64  7509                 jne 0x668f6f
// 00668f66  8b16                 mov edx, dword ptr [esi]
// 00668f68  8b4208               mov eax, dword ptr [edx + 8]
// 00668f6b  8bce                 mov ecx, esi
// 00668f6d  ffd0                 call eax
// 00668f6f  5e                   pop esi
// 00668f70  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_functor@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAEXV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@U?$bool_@$00@mpl@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
