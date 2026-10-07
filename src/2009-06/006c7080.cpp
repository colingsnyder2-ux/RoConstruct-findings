// roc 2009-06 006c7080  unit: seg_006c0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7080
//
// 006c7080  56                   push esi
// 006c7081  8b742408             mov esi, dword ptr [esp + 8]
// 006c7085  6a01                 push 1
// 006c7087  56                   push esi
// 006c7088  e8033cffff           call 0x6bac90
// 006c708d  6a01                 push 1
// 006c708f  56                   push esi
// 006c7090  e8db1effff           call 0x6b8f70
// 006c7095  50                   push eax
// 006c7096  56                   push esi
// 006c7097  e8f41effff           call 0x6b8f90
// 006c709c  50                   push eax
// 006c709d  56                   push esi
// 006c709e  e81d23ffff           call 0x6b93c0
// 006c70a3  83c420               add esp, 0x20
// 006c70a6  b801000000           mov eax, 1
// 006c70ab  5e                   pop esi
// 006c70ac  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
