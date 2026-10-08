// from server: 100% by auto
// roc 2012-06 00857500  unit: lua_exception  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857500
//
// 00857500  56                   push esi
// 00857501  8b742408             mov esi, dword ptr [esp + 8]
// 00857505  6a00                 push 0
// 00857507  6a01                 push 1
// 00857509  56                   push esi
// 0085750a  e811c4fdff           call 0x833920
// 0085750f  6a00                 push 0
// 00857511  6a02                 push 2
// 00857513  56                   push esi
// 00857514  e807c4fdff           call 0x833920
// 00857519  6a02                 push 2
// 0085751b  56                   push esi
// 0085751c  e8dfa5fdff           call 0x831b00
// 00857521  6a00                 push 0
// 00857523  56                   push esi
// 00857524  e8a7abfdff           call 0x8320d0
// 00857529  6a03                 push 3
// 0085752b  6890738500           push 0x857390
// 00857530  56                   push esi
// 00857531  e8caacfdff           call 0x832200
// 00857536  83c434               add esp, 0x34
// 00857539  b801000000           mov eax, 1
// 0085753e  5e                   pop esi
// 0085753f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
