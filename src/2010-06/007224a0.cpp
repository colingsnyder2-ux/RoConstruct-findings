// from server: 100% by auto
// roc 2010-06 007224a0  unit: RBX::UniversalTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007224a0
//
// 007224a0  56                   push esi
// 007224a1  8b742408             mov esi, dword ptr [esp + 8]
// 007224a5  6a01                 push 1
// 007224a7  56                   push esi
// 007224a8  e883ffffff           call 0x722430
// 007224ad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007224b1  8d442418             lea eax, [esp + 0x18]
// 007224b5  50                   push eax
// 007224b6  51                   push ecx
// 007224b7  56                   push esi
// 007224b8  e843f1ffff           call 0x721600
// 007224bd  6a02                 push 2
// 007224bf  56                   push esi
// 007224c0  e85bfaffff           call 0x721f20
// 007224c5  56                   push esi
// 007224c6  e805faffff           call 0x721ed0
// 007224cb  83c420               add esp, 0x20
// 007224ce  5e                   pop esi
// 007224cf  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
