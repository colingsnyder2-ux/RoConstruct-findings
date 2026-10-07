// roc 2011-06 00548c50  unit: G3D::TextInput::TokenException  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00548c50
//
// 00548c50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00548c54  8b542404             mov edx, dword ptr [esp + 4]
// 00548c58  8d44240c             lea eax, [esp + 0xc]
// 00548c5c  50                   push eax
// 00548c5d  51                   push ecx
// 00548c5e  52                   push edx
// 00548c5f  e84cffffff           call 0x548bb0
// 00548c64  83c40c               add esp, 0xc
// 00548c67  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
