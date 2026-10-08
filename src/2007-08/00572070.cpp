// roc 2007-08 00572070  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572070
//
// 00572070  64a100000000         mov eax, dword ptr fs:[0]
// 00572076  6aff                 push -1
// 00572078  683e507500           push 0x75503e
// 0057207d  50                   push eax
// 0057207e  b801000000           mov eax, 1
// 00572083  64892500000000       mov dword ptr fs:[0], esp
// 0057208a  840554258c00         test byte ptr [0x8c2554], al
// 00572090  7525                 jne 0x5720b7
// 00572092  090554258c00         or dword ptr [0x8c2554], eax
// 00572098  b950258c00           mov ecx, 0x8c2550
// 0057209d  c744240800000000     mov dword ptr [esp + 8], 0
// 005720a5  e846feffff           call 0x571ef0
// 005720aa  68709f7700           push 0x779f70
// 005720af  e86fec0b00           call 0x630d23
// 005720b4  83c404               add esp, 4
// 005720b7  8b0c24               mov ecx, dword ptr [esp]
// 005720ba  c70548258c0050258c00 mov dword ptr [0x8c2548], 0x8c2550
// 005720c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005720cb  83c40c               add esp, 0xc
// 005720ce  c3                   ret 
// library rbxgs/util\boost.cpp (function ?init_foo@boost_detail@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
