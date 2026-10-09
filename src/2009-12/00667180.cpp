// roc 2009-12 00667180  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00667180
//
// 00667180  6aff                 push -1
// 00667182  6828429400           push 0x944228
// 00667187  64a100000000         mov eax, dword ptr fs:[0]
// 0066718d  50                   push eax
// 0066718e  64892500000000       mov dword ptr fs:[0], esp
// 00667195  83ec08               sub esp, 8
// 00667198  56                   push esi
// 00667199  8bf1                 mov esi, ecx
// 0066719b  83ec1c               sub esp, 0x1c
// 0066719e  8d442454             lea eax, [esp + 0x54]
// 006671a2  89642420             mov dword ptr [esp + 0x20], esp
// 006671a6  8bcc                 mov ecx, esp
// 006671a8  50                   push eax
// 006671a9  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006671b1  ff15f0b69800         call dword ptr [0x98b6f0]
// 006671b7  83ec1c               sub esp, 0x1c
// 006671ba  8d542454             lea edx, [esp + 0x54]
// 006671be  89642440             mov dword ptr [esp + 0x40], esp
// 006671c2  8bcc                 mov ecx, esp
// 006671c4  52                   push edx
// 006671c5  c644245002           mov byte ptr [esp + 0x50], 2
// 006671ca  ff15f0b69800         call dword ptr [0x98b6f0]
// 006671d0  8bce                 mov ecx, esi
// 006671d2  c644244c01           mov byte ptr [esp + 0x4c], 1
// 006671d7  e80480fdff           call 0x63f1e0
// 006671dc  8d4c241c             lea ecx, [esp + 0x1c]
// 006671e0  c644241400           mov byte ptr [esp + 0x14], 0
// 006671e5  ff15e4b69800         call dword ptr [0x98b6e4]
// 006671eb  8d4c2438             lea ecx, [esp + 0x38]
// 006671ef  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006671f7  ff15e4b69800         call dword ptr [0x98b6e4]
// 006671fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667201  8bc6                 mov eax, esi
// 00667203  64890d00000000       mov dword ptr fs:[0], ecx
// 0066720a  5e                   pop esi
// 0066720b  83c414               add esp, 0x14
// 0066720e  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
