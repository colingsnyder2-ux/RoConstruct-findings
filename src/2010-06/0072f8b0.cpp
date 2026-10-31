// roc 2010-06 0072f8b0  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072f8b0
//
// 0072f8b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0072f8b3  6a00                 push 0
// 0072f8b5  6aff                 push -1
// 0072f8b7  50                   push eax
// 0072f8b8  e8931affff           call 0x721350
// 0072f8bd  83c40c               add esp, 0xc
// 0072f8c0  c3                   ret 
// library lua-5.1.2/roc_unit_6878e048cc528e62.cpp (function ?what@lua_exception@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_unit_6878e048cc528e62.cpp
