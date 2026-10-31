// roc 2012-06 00854490  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854490
//
// 00854490  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00854493  6a00                 push 0
// 00854495  6aff                 push -1
// 00854497  50                   push eax
// 00854498  e853dafdff           call 0x831ef0
// 0085449d  83c40c               add esp, 0xc
// 008544a0  c3                   ret 
// library lua-5.1.2/roc_unit_6878e048cc528e62.cpp (function ?what@lua_exception@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6878e048cc528e62.cpp
