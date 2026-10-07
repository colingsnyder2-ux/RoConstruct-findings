// roc 2012-06 00858140  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858140
//
// 00858140  56                   push esi
// 00858141  8b742408             mov esi, dword ptr [esp + 8]
// 00858145  57                   push edi
// 00858146  6a02                 push 2
// 00858148  56                   push esi
// 00858149  e8929bfdff           call 0x831ce0
// 0085814e  6a05                 push 5
// 00858150  6a01                 push 1
// 00858152  56                   push esi
// 00858153  8bf8                 mov edi, eax
// 00858155  e846b7fdff           call 0x8338a0
// 0085815a  83c414               add esp, 0x14
// 0085815d  85ff                 test edi, edi
// 0085815f  7415                 je 0x858176
// 00858161  83ff05               cmp edi, 5
// 00858164  7410                 je 0x858176
// 00858166  68e041bd00           push 0xbd41e0
// 0085816b  6a02                 push 2
// 0085816d  56                   push esi
// 0085816e  e8bdb5fdff           call 0x833730
// 00858173  83c40c               add esp, 0xc
// 00858176  68e441b900           push 0xb941e4
// 0085817b  6a01                 push 1
// 0085817d  56                   push esi
// 0085817e  e8ddadfdff           call 0x832f60
// 00858183  83c40c               add esp, 0xc
// 00858186  85c0                 test eax, eax
// 00858188  740e                 je 0x858198
// 0085818a  68bc41bd00           push 0xbd41bc
// 0085818f  56                   push esi
// 00858190  e80badfdff           call 0x832ea0
// 00858195  83c408               add esp, 8
// 00858198  6a02                 push 2
// 0085819a  56                   push esi
// 0085819b  e86099fdff           call 0x831b00
// 008581a0  6a01                 push 1
// 008581a2  56                   push esi
// 008581a3  e828a5fdff           call 0x8326d0
// 008581a8  83c410               add esp, 0x10
// 008581ab  5f                   pop edi
// 008581ac  b801000000           mov eax, 1
// 008581b1  5e                   pop esi
// 008581b2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
