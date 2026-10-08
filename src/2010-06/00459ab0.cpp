// roc 2010-06 00459ab0  unit: VCWorkspace::?$CComObject  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00459ab0
//
// 00459ab0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00459ab4  85c0                 test eax, eax
// 00459ab6  7424                 je 0x459adc
// 00459ab8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00459abc  8b542408             mov edx, dword ptr [esp + 8]
// 00459ac0  8908                 mov dword ptr [eax], ecx
// 00459ac2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00459ac6  895004               mov dword ptr [eax + 4], edx
// 00459ac9  894808               mov dword ptr [eax + 8], ecx
// 00459acc  85c9                 test ecx, ecx
// 00459ace  7440                 je 0x459b10
// 00459ad0  83c104               add ecx, 4
// 00459ad3  b801000000           mov eax, 1
// 00459ad8  f00fc101             lock xadd dword ptr [ecx], eax
// 00459adc  56                   push esi
// 00459add  8b742410             mov esi, dword ptr [esp + 0x10]
// 00459ae1  85f6                 test esi, esi
// 00459ae3  742a                 je 0x459b0f
// 00459ae5  8d4e04               lea ecx, [esi + 4]
// 00459ae8  83caff               or edx, 0xffffffff
// 00459aeb  f00fc111             lock xadd dword ptr [ecx], edx
// 00459aef  751e                 jne 0x459b0f
// 00459af1  8b06                 mov eax, dword ptr [esi]
// 00459af3  8b5004               mov edx, dword ptr [eax + 4]
// 00459af6  8bce                 mov ecx, esi
// 00459af8  ffd2                 call edx
// 00459afa  8d4608               lea eax, [esi + 8]
// 00459afd  83c9ff               or ecx, 0xffffffff
// 00459b00  f00fc108             lock xadd dword ptr [eax], ecx
// 00459b04  7509                 jne 0x459b0f
// 00459b06  8b16                 mov edx, dword ptr [esi]
// 00459b08  8b4208               mov eax, dword ptr [edx + 8]
// 00459b0b  8bce                 mov ecx, esi
// 00459b0d  ffd0                 call eax
// 00459b0f  5e                   pop esi
// 00459b10  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_functor@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAEXV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@U?$bool_@$00@mpl@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
