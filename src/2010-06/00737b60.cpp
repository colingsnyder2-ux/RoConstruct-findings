// from server: 100% by auto
// roc 2010-06 00737b60  unit: seg_00730000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737b60
//
// 00737b60  56                   push esi
// 00737b61  8b742408             mov esi, dword ptr [esp + 8]
// 00737b65  6a01                 push 1
// 00737b67  56                   push esi
// 00737b68  e883b3feff           call 0x722ef0
// 00737b6d  83c408               add esp, 8
// 00737b70  6a00                 push 0
// 00737b72  6aff                 push -1
// 00737b74  56                   push esi
// 00737b75  e8d693feff           call 0x720f50
// 00737b7a  83c404               add esp, 4
// 00737b7d  48                   dec eax
// 00737b7e  50                   push eax
// 00737b7f  56                   push esi
// 00737b80  e84ba1feff           call 0x721cd0
// 00737b85  33c9                 xor ecx, ecx
// 00737b87  85c0                 test eax, eax
// 00737b89  0f94c1               sete cl
// 00737b8c  51                   push ecx
// 00737b8d  56                   push esi
// 00737b8e  e86d9bfeff           call 0x721700
// 00737b93  6a01                 push 1
// 00737b95  56                   push esi
// 00737b96  e86594feff           call 0x721000
// 00737b9b  56                   push esi
// 00737b9c  e8af93feff           call 0x720f50
// 00737ba1  83c424               add esp, 0x24
// 00737ba4  5e                   pop esi
// 00737ba5  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
