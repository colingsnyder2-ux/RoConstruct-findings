// roc 2008-06 00596d50  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596d50
//
// 00596d50  64a100000000         mov eax, dword ptr fs:[0]
// 00596d56  6aff                 push -1
// 00596d58  68fe227d00           push 0x7d22fe
// 00596d5d  50                   push eax
// 00596d5e  b801000000           mov eax, 1
// 00596d63  64892500000000       mov dword ptr fs:[0], esp
// 00596d6a  84059c5c9700         test byte ptr [0x975c9c], al
// 00596d70  7525                 jne 0x596d97
// 00596d72  09059c5c9700         or dword ptr [0x975c9c], eax
// 00596d78  b9985c9700           mov ecx, 0x975c98
// 00596d7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00596d85  e846feffff           call 0x596bd0
// 00596d8a  68d0da7f00           push 0x7fdad0
// 00596d8f  e81baa1000           call 0x6a17af
// 00596d94  83c404               add esp, 4
// 00596d97  8b0c24               mov ecx, dword ptr [esp]
// 00596d9a  c705905c9700985c9700 mov dword ptr [0x975c90], 0x975c98
// 00596da4  64890d00000000       mov dword ptr fs:[0], ecx
// 00596dab  83c40c               add esp, 0xc
// 00596dae  c3                   ret 
// library rbxgs/util\boost.cpp (function ?init_foo@boost_detail@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
