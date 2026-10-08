// from server: 100% by auto
// roc 2012-06 00638c00  unit: G3D::TextInput::TokenException  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638c00
//
// 00638c00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00638c04  8b542404             mov edx, dword ptr [esp + 4]
// 00638c08  8d44240c             lea eax, [esp + 0xc]
// 00638c0c  50                   push eax
// 00638c0d  51                   push ecx
// 00638c0e  52                   push edx
// 00638c0f  e84cffffff           call 0x638b60
// 00638c14  83c40c               add esp, 0xc
// 00638c17  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
