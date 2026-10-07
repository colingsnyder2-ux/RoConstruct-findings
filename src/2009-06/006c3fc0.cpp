// roc 2009-06 006c3fc0  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3fc0
//
// 006c3fc0  56                   push esi
// 006c3fc1  8b742408             mov esi, dword ptr [esp + 8]
// 006c3fc5  6a05                 push 5
// 006c3fc7  6a01                 push 1
// 006c3fc9  56                   push esi
// 006c3fca  e8716cffff           call 0x6bac40
// 006c3fcf  6a01                 push 1
// 006c3fd1  56                   push esi
// 006c3fd2  e81952ffff           call 0x6b91f0
// 006c3fd7  50                   push eax
// 006c3fd8  56                   push esi
// 006c3fd9  e88253ffff           call 0x6b9360
// 006c3fde  83c41c               add esp, 0x1c
// 006c3fe1  b801000000           mov eax, 1
// 006c3fe6  5e                   pop esi
// 006c3fe7  c3                   ret 
// library lua-5.1.4/ltablib.c (function _getn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
