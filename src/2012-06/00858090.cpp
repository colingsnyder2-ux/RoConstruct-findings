// roc 2012-06 00858090  unit: lua_exception  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858090
//
// 00858090  56                   push esi
// 00858091  8b742408             mov esi, dword ptr [esp + 8]
// 00858095  57                   push edi
// 00858096  6a01                 push 1
// 00858098  6a02                 push 2
// 0085809a  56                   push esi
// 0085809b  e830bafdff           call 0x833ad0
// 008580a0  6a01                 push 1
// 008580a2  56                   push esi
// 008580a3  8bf8                 mov edi, eax
// 008580a5  e8569afdff           call 0x831b00
// 008580aa  6a01                 push 1
// 008580ac  56                   push esi
// 008580ad  e8de9cfdff           call 0x831d90
// 008580b2  83c41c               add esp, 0x1c
// 008580b5  85c0                 test eax, eax
// 008580b7  741e                 je 0x8580d7
// 008580b9  85ff                 test edi, edi
// 008580bb  7e1a                 jle 0x8580d7
// 008580bd  57                   push edi
// 008580be  56                   push esi
// 008580bf  e86cadfdff           call 0x832e30
// 008580c4  6a01                 push 1
// 008580c6  56                   push esi
// 008580c7  e8e49bfdff           call 0x831cb0
// 008580cc  6a02                 push 2
// 008580ce  56                   push esi
// 008580cf  e8eca9fdff           call 0x832ac0
// 008580d4  83c418               add esp, 0x18
// 008580d7  56                   push esi
// 008580d8  e893a9fdff           call 0x832a70
// 008580dd  83c404               add esp, 4
// 008580e0  5f                   pop edi
// 008580e1  5e                   pop esi
// 008580e2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
