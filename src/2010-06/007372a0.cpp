// from server: 100% by auto
// roc 2010-06 007372a0  unit: seg_00730000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007372a0
//
// 007372a0  56                   push esi
// 007372a1  8b742408             mov esi, dword ptr [esp + 8]
// 007372a5  57                   push edi
// 007372a6  6a01                 push 1
// 007372a8  6a02                 push 2
// 007372aa  56                   push esi
// 007372ab  e820befeff           call 0x7230d0
// 007372b0  6a01                 push 1
// 007372b2  56                   push esi
// 007372b3  8bf8                 mov edi, eax
// 007372b5  e8a69cfeff           call 0x720f60
// 007372ba  6a01                 push 1
// 007372bc  56                   push esi
// 007372bd  e82e9ffeff           call 0x7211f0
// 007372c2  83c41c               add esp, 0x1c
// 007372c5  85c0                 test eax, eax
// 007372c7  741e                 je 0x7372e7
// 007372c9  85ff                 test edi, edi
// 007372cb  7e1a                 jle 0x7372e7
// 007372cd  57                   push edi
// 007372ce  56                   push esi
// 007372cf  e85cb1feff           call 0x722430
// 007372d4  6a01                 push 1
// 007372d6  56                   push esi
// 007372d7  e8349efeff           call 0x721110
// 007372dc  6a02                 push 2
// 007372de  56                   push esi
// 007372df  e83cacfeff           call 0x721f20
// 007372e4  83c418               add esp, 0x18
// 007372e7  56                   push esi
// 007372e8  e8e3abfeff           call 0x721ed0
// 007372ed  83c404               add esp, 4
// 007372f0  5f                   pop edi
// 007372f1  5e                   pop esi
// 007372f2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
