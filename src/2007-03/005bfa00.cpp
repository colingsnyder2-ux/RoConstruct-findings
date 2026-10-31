// roc 2007-03 005bfa00  unit: seg_005b0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bfa00
//
// 005bfa00  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005bfa03  6a00                 push 0
// 005bfa05  6aff                 push -1
// 005bfa07  50                   push eax
// 005bfa08  e84394ffff           call 0x5b8e50
// 005bfa0d  83c40c               add esp, 0xc
// 005bfa10  c3                   ret 
// library lua-5.1.2/roc_unit_6878e048cc528e62.cpp (function ?what@lua_exception@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6878e048cc528e62.cpp
