// roc 2011-06 005b2740  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b2740
//
// 005b2740  6aff                 push -1
// 005b2742  6868659e00           push 0x9e6568
// 005b2747  64a100000000         mov eax, dword ptr fs:[0]
// 005b274d  50                   push eax
// 005b274e  64892500000000       mov dword ptr fs:[0], esp
// 005b2755  83ec08               sub esp, 8
// 005b2758  56                   push esi
// 005b2759  8bf1                 mov esi, ecx
// 005b275b  89742404             mov dword ptr [esp + 4], esi
// 005b275f  83ec1c               sub esp, 0x1c
// 005b2762  8d442438             lea eax, [esp + 0x38]
// 005b2766  89642424             mov dword ptr [esp + 0x24], esp
// 005b276a  8bcc                 mov ecx, esp
// 005b276c  50                   push eax
// 005b276d  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005b2775  ff15c804a400         call dword ptr [0xa404c8]
// 005b277b  8bce                 mov ecx, esi
// 005b277d  e83e9ae7ff           call 0x42c1c0
// 005b2782  8d542438             lea edx, [esp + 0x38]
// 005b2786  8d4e1c               lea ecx, [esi + 0x1c]
// 005b2789  52                   push edx
// 005b278a  c644241802           mov byte ptr [esp + 0x18], 2
// 005b278f  ff15c804a400         call dword ptr [0xa404c8]
// 005b2795  8d4c241c             lea ecx, [esp + 0x1c]
// 005b2799  c644241400           mov byte ptr [esp + 0x14], 0
// 005b279e  ff15d004a400         call dword ptr [0xa404d0]
// 005b27a4  8d4c2438             lea ecx, [esp + 0x38]
// 005b27a8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005b27b0  ff15d004a400         call dword ptr [0xa404d0]
// 005b27b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b27ba  8bc6                 mov eax, esi
// 005b27bc  64890d00000000       mov dword ptr fs:[0], ecx
// 005b27c3  5e                   pop esi
// 005b27c4  83c414               add esp, 0x14
// 005b27c7  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
