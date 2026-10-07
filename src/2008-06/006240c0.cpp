// roc 2008-06 006240c0  unit: lua_exception  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006240c0
//
// 006240c0  56                   push esi
// 006240c1  8b742408             mov esi, dword ptr [esp + 8]
// 006240c5  57                   push edi
// 006240c6  6a01                 push 1
// 006240c8  56                   push esi
// 006240c9  e8c2d5feff           call 0x611690
// 006240ce  6a01                 push 1
// 006240d0  56                   push esi
// 006240d1  e84ae0feff           call 0x612120
// 006240d6  68dc4b8400           push 0x844bdc
// 006240db  68f0d8ffff           push 0xffffd8f0
// 006240e0  56                   push esi
// 006240e1  8bf8                 mov edi, eax
// 006240e3  e8a8e3feff           call 0x612490
// 006240e8  83c41c               add esp, 0x1c
// 006240eb  85ff                 test edi, edi
// 006240ed  7455                 je 0x624144
// 006240ef  6a01                 push 1
// 006240f1  56                   push esi
// 006240f2  e8b9e4feff           call 0x6125b0
// 006240f7  83c408               add esp, 8
// 006240fa  85c0                 test eax, eax
// 006240fc  7446                 je 0x624144
// 006240fe  6aff                 push -1
// 00624100  6afe                 push -2
// 00624102  56                   push esi
// 00624103  e8d8ddfeff           call 0x611ee0
// 00624108  83c40c               add esp, 0xc
// 0062410b  85c0                 test eax, eax
// 0062410d  7435                 je 0x624144
// 0062410f  833f00               cmp dword ptr [edi], 0
// 00624112  7518                 jne 0x62412c
// 00624114  6a0b                 push 0xb
// 00624116  68d04b8400           push 0x844bd0
// 0062411b  56                   push esi
// 0062411c  e81fe1feff           call 0x612240
// 00624121  83c40c               add esp, 0xc
// 00624124  5f                   pop edi
// 00624125  b801000000           mov eax, 1
// 0062412a  5e                   pop esi
// 0062412b  c3                   ret 
// 0062412c  6a04                 push 4
// 0062412e  68d4b38000           push 0x80b3d4
// 00624133  56                   push esi
// 00624134  e807e1feff           call 0x612240
// 00624139  83c40c               add esp, 0xc
// 0062413c  5f                   pop edi
// 0062413d  b801000000           mov eax, 1
// 00624142  5e                   pop esi
// 00624143  c3                   ret 
// 00624144  56                   push esi
// 00624145  e896e0feff           call 0x6121e0
// 0062414a  83c404               add esp, 4
// 0062414d  5f                   pop edi
// 0062414e  b801000000           mov eax, 1
// 00624153  5e                   pop esi
// 00624154  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
