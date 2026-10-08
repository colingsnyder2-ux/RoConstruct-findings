// roc 2007-03 00548610  unit: seg_00540000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00548610
//
// 00548610  64a100000000         mov eax, dword ptr fs:[0]
// 00548616  6aff                 push -1
// 00548618  68982c7500           push 0x752c98
// 0054861d  50                   push eax
// 0054861e  64892500000000       mov dword ptr fs:[0], esp
// 00548625  56                   push esi
// 00548626  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054862a  85f6                 test esi, esi
// 0054862c  89742414             mov dword ptr [esp + 0x14], esi
// 00548630  7428                 je 0x54865a
// 00548632  8d4e08               lea ecx, [esi + 8]
// 00548635  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054863d  e80eeb1d00           call 0x727150
// 00548642  8bce                 mov ecx, esi
// 00548644  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0054864c  e8ffe31d00           call 0x726a50
// 00548651  56                   push esi
// 00548652  e8995a0d00           call 0x61e0f0
// 00548657  83c404               add esp, 4
// 0054865a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054865e  64890d00000000       mov dword ptr fs:[0], ecx
// 00548665  5e                   pop esi
// 00548666  83c40c               add esp, 0xc
// 00548669  c3                   ret 
// library rbxgs/util\boost.cpp (function ??$checked_delete@Udata@worker_thread@RBX@@@boost@@YAXPAUdata@worker_thread@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
