// roc 2008-06 0042a490  unit: ThreadLogManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a490
//
// 0042a490  64a100000000         mov eax, dword ptr fs:[0]
// 0042a496  6aff                 push -1
// 0042a498  681ef47b00           push 0x7bf41e
// 0042a49d  50                   push eax
// 0042a49e  b801000000           mov eax, 1
// 0042a4a3  64892500000000       mov dword ptr fs:[0], esp
// 0042a4aa  840510d19600         test byte ptr [0x96d110], al
// 0042a4b0  7525                 jne 0x42a4d7
// 0042a4b2  090510d19600         or dword ptr [0x96d110], eax
// 0042a4b8  b90cd19600           mov ecx, 0x96d10c
// 0042a4bd  c744240800000000     mov dword ptr [esp + 8], 0
// 0042a4c5  e806ffffff           call 0x42a3d0
// 0042a4ca  68e0a87f00           push 0x7fa8e0
// 0042a4cf  e8db722700           call 0x6a17af
// 0042a4d4  83c404               add esp, 4
// 0042a4d7  8b0c24               mov ecx, dword ptr [esp]
// 0042a4da  c705f0d096000cd19600 mov dword ptr [0x96d0f0], 0x96d10c
// 0042a4e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a4eb  83c40c               add esp, 0xc
// 0042a4ee  c3                   ret 
// library rbxgs/util\boost.cpp (function ?init_foo@boost_detail@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
