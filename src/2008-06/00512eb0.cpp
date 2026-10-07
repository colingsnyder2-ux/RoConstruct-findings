// roc 2008-06 00512eb0  unit: G3D::GCamera  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512eb0
//
// 00512eb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00512eb4  8b542404             mov edx, dword ptr [esp + 4]
// 00512eb8  8d44240c             lea eax, [esp + 0xc]
// 00512ebc  50                   push eax
// 00512ebd  51                   push ecx
// 00512ebe  52                   push edx
// 00512ebf  e84cffffff           call 0x512e10
// 00512ec4  83c40c               add esp, 0xc
// 00512ec7  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
