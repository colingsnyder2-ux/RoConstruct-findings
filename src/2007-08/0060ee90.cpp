// roc 2007-08 0060ee90  unit: RBX::Ball  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ee90
//
// 0060ee90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ee94  8b542404             mov edx, dword ptr [esp + 4]
// 0060ee98  8d44240c             lea eax, [esp + 0xc]
// 0060ee9c  50                   push eax
// 0060ee9d  51                   push ecx
// 0060ee9e  52                   push edx
// 0060ee9f  e83cfdffff           call 0x60ebe0
// 0060eea4  83c40c               add esp, 0xc
// 0060eea7  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
