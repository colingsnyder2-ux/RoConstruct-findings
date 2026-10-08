// roc 2007-03 00548a20  unit: seg_00540000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00548a20
//
// 00548a20  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00548a23  50                   push eax
// 00548a24  e8e7fbffff           call 0x548610
// 00548a29  59                   pop ecx
// 00548a2a  c3                   ret 
// library rbxgs/util\boost.cpp (function ?dispose@?$sp_counted_impl_p@Udata@worker_thread@RBX@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
