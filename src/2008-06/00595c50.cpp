// roc 2008-06 00595c50  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595c50
//
// 00595c50  64a100000000         mov eax, dword ptr fs:[0]
// 00595c56  6aff                 push -1
// 00595c58  68f8207d00           push 0x7d20f8
// 00595c5d  50                   push eax
// 00595c5e  64892500000000       mov dword ptr fs:[0], esp
// 00595c65  56                   push esi
// 00595c66  8b742414             mov esi, dword ptr [esp + 0x14]
// 00595c6a  89742414             mov dword ptr [esp + 0x14], esi
// 00595c6e  85f6                 test esi, esi
// 00595c70  7428                 je 0x595c9a
// 00595c72  8d4e08               lea ecx, [esi + 8]
// 00595c75  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00595c7d  e8eebf0500           call 0x5f1c70
// 00595c82  8bce                 mov ecx, esi
// 00595c84  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00595c8c  e81ff0ffff           call 0x594cb0
// 00595c91  56                   push esi
// 00595c92  e8e3a91000           call 0x6a067a
// 00595c97  83c404               add esp, 4
// 00595c9a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00595c9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00595ca5  5e                   pop esi
// 00595ca6  83c40c               add esp, 0xc
// 00595ca9  c3                   ret 
// library rbxgs/util\boost.cpp (function ??$checked_delete@Udata@worker_thread@RBX@@@boost@@YAXPAUdata@worker_thread@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
