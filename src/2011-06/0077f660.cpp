// from server: 100% by auto
// roc 2011-06 0077f660  unit: lua_exception  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f660
//
// 0077f660  56                   push esi
// 0077f661  8b742408             mov esi, dword ptr [esp + 8]
// 0077f665  6a05                 push 5
// 0077f667  6a01                 push 1
// 0077f669  56                   push esi
// 0077f66a  e8a14afeff           call 0x764110
// 0077f66f  686879ab00           push 0xab7968
// 0077f674  56                   push esi
// 0077f675  e89640feff           call 0x763710
// 0077f67a  6a01                 push 1
// 0077f67c  56                   push esi
// 0077f67d  e89e2efeff           call 0x762520
// 0077f682  83c41c               add esp, 0x1c
// 0077f685  b801000000           mov eax, 1
// 0077f68a  5e                   pop esi
// 0077f68b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _setn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
