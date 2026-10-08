// from server: 100% by auto
// roc 2011-06 0077f500  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f500
//
// 0077f500  56                   push esi
// 0077f501  8b742408             mov esi, dword ptr [esp + 8]
// 0077f505  6a05                 push 5
// 0077f507  6a01                 push 1
// 0077f509  56                   push esi
// 0077f50a  e8014cfeff           call 0x764110
// 0077f50f  6a06                 push 6
// 0077f511  6a02                 push 2
// 0077f513  56                   push esi
// 0077f514  e8f74bfeff           call 0x764110
// 0077f519  56                   push esi
// 0077f51a  e8e133feff           call 0x762900
// 0077f51f  6a01                 push 1
// 0077f521  56                   push esi
// 0077f522  e8c93dfeff           call 0x7632f0
// 0077f527  83c424               add esp, 0x24
// 0077f52a  85c0                 test eax, eax
// 0077f52c  744a                 je 0x77f578
// 0077f52e  8bff                 mov edi, edi
// 0077f530  6a02                 push 2
// 0077f532  56                   push esi
// 0077f533  e8e82ffeff           call 0x762520
// 0077f538  6afd                 push -3
// 0077f53a  56                   push esi
// 0077f53b  e8e02ffeff           call 0x762520
// 0077f540  6afd                 push -3
// 0077f542  56                   push esi
// 0077f543  e8d82ffeff           call 0x762520
// 0077f548  6a01                 push 1
// 0077f54a  6a02                 push 2
// 0077f54c  56                   push esi
// 0077f54d  e82e3bfeff           call 0x763080
// 0077f552  6aff                 push -1
// 0077f554  56                   push esi
// 0077f555  e8f62ffeff           call 0x762550
// 0077f55a  83c42c               add esp, 0x2c
// 0077f55d  85c0                 test eax, eax
// 0077f55f  751b                 jne 0x77f57c
// 0077f561  6afd                 push -3
// 0077f563  56                   push esi
// 0077f564  e8072efeff           call 0x762370
// 0077f569  6a01                 push 1
// 0077f56b  56                   push esi
// 0077f56c  e87f3dfeff           call 0x7632f0
// 0077f571  83c410               add esp, 0x10
// 0077f574  85c0                 test eax, eax
// 0077f576  75b8                 jne 0x77f530
// 0077f578  33c0                 xor eax, eax
// 0077f57a  5e                   pop esi
// 0077f57b  c3                   ret 
// 0077f57c  b801000000           mov eax, 1
// 0077f581  5e                   pop esi
// 0077f582  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreach)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
