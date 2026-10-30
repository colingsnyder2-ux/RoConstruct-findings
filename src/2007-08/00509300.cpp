// from server: 100% by auto
// roc 2007-08 00509300  unit: G3D::GCamera  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509300
//
// 00509300  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00509304  8b542404             mov edx, dword ptr [esp + 4]
// 00509308  8d44240c             lea eax, [esp + 0xc]
// 0050930c  50                   push eax
// 0050930d  51                   push ecx
// 0050930e  52                   push edx
// 0050930f  e82cffffff           call 0x509240
// 00509314  83c40c               add esp, 0xc
// 00509317  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
