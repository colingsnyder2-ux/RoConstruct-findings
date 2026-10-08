// roc 2009-06 005fc170  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fc170
//
// 005fc170  6aff                 push -1
// 005fc172  68f8658600           push 0x8665f8
// 005fc177  64a100000000         mov eax, dword ptr fs:[0]
// 005fc17d  50                   push eax
// 005fc17e  64892500000000       mov dword ptr fs:[0], esp
// 005fc185  83ec08               sub esp, 8
// 005fc188  56                   push esi
// 005fc189  8bf1                 mov esi, ecx
// 005fc18b  83ec1c               sub esp, 0x1c
// 005fc18e  8d442454             lea eax, [esp + 0x54]
// 005fc192  89642420             mov dword ptr [esp + 0x20], esp
// 005fc196  8bcc                 mov ecx, esp
// 005fc198  50                   push eax
// 005fc199  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005fc1a1  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fc1a7  83ec1c               sub esp, 0x1c
// 005fc1aa  8d542454             lea edx, [esp + 0x54]
// 005fc1ae  89642440             mov dword ptr [esp + 0x40], esp
// 005fc1b2  8bcc                 mov ecx, esp
// 005fc1b4  52                   push edx
// 005fc1b5  c644245002           mov byte ptr [esp + 0x50], 2
// 005fc1ba  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fc1c0  8bce                 mov ecx, esi
// 005fc1c2  c644244c01           mov byte ptr [esp + 0x4c], 1
// 005fc1c7  e8e4f4ffff           call 0x5fb6b0
// 005fc1cc  8d4c241c             lea ecx, [esp + 0x1c]
// 005fc1d0  c644241400           mov byte ptr [esp + 0x14], 0
// 005fc1d5  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fc1db  8d4c2438             lea ecx, [esp + 0x38]
// 005fc1df  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fc1e7  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fc1ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fc1f1  8bc6                 mov eax, esi
// 005fc1f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc1fa  5e                   pop esi
// 005fc1fb  83c414               add esp, 0x14
// 005fc1fe  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
