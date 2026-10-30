// roc 2009-12 0079c820  unit: seg_00790000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079c820
//
// 0079c820  83ec10               sub esp, 0x10
// 0079c823  56                   push esi
// 0079c824  8b742418             mov esi, dword ptr [esp + 0x18]
// 0079c828  8d442404             lea eax, [esp + 4]
// 0079c82c  50                   push eax
// 0079c82d  6a01                 push 1
// 0079c82f  56                   push esi
// 0079c830  e8fbdffeff           call 0x78a830
// 0079c835  dd1c24               fstp qword ptr [esp]
// 0079c838  ff1548b99800         call dword ptr [0x98b948]
// 0079c83e  dd5c2418             fstp qword ptr [esp + 0x18]
// 0079c842  dd442410             fld qword ptr [esp + 0x10]
// 0079c846  83c404               add esp, 4
// 0079c849  dd1c24               fstp qword ptr [esp]
// 0079c84c  56                   push esi
// 0079c84d  e80ec5feff           call 0x788d60
// 0079c852  dd442418             fld qword ptr [esp + 0x18]
// 0079c856  83c404               add esp, 4
// 0079c859  dd1c24               fstp qword ptr [esp]
// 0079c85c  56                   push esi
// 0079c85d  e8fec4feff           call 0x788d60
// 0079c862  83c40c               add esp, 0xc
// 0079c865  b802000000           mov eax, 2
// 0079c86a  5e                   pop esi
// 0079c86b  83c410               add esp, 0x10
// 0079c86e  c3                   ret 
// copied from an identical function in another client (function _math_modf)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lmathlib.c