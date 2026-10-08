// from server: 100% by auto
// roc 2012-06 00857e10  unit: lua_exception  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857e10
//
// 00857e10  6a01                 push 1
// 00857e12  6a00                 push 0
// 00857e14  56                   push esi
// 00857e15  e806a6fdff           call 0x832420
// 00857e1a  6a00                 push 0
// 00857e1c  68e83bb400           push 0xb43be8
// 00857e21  56                   push esi
// 00857e22  e8c9a2fdff           call 0x8320f0
// 00857e27  6afe                 push -2
// 00857e29  56                   push esi
// 00857e2a  e8819efdff           call 0x831cb0
// 00857e2f  6afe                 push -2
// 00857e31  56                   push esi
// 00857e32  e899a8fdff           call 0x8326d0
// 00857e37  6afe                 push -2
// 00857e39  56                   push esi
// 00857e3a  e8c19cfdff           call 0x831b00
// 00857e3f  6afe                 push -2
// 00857e41  56                   push esi
// 00857e42  e8699efdff           call 0x831cb0
// 00857e47  681442b900           push 0xb94214
// 00857e4c  6afe                 push -2
// 00857e4e  56                   push esi
// 00857e4f  e82ca7fdff           call 0x832580
// 00857e54  83c444               add esp, 0x44
// 00857e57  6afe                 push -2
// 00857e59  56                   push esi
// 00857e5a  e8a19cfdff           call 0x831b00
// 00857e5f  83c408               add esp, 8
// 00857e62  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _createmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
