// roc 2007-08 005c7d30  unit: lua_exception  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7d30
//
// 005c7d30  56                   push esi
// 005c7d31  8b742408             mov esi, dword ptr [esp + 8]
// 005c7d35  57                   push edi
// 005c7d36  6a01                 push 1
// 005c7d38  68efd8ffff           push 0xffffd8ef
// 005c7d3d  56                   push esi
// 005c7d3e  e85d61ffff           call 0x5bdea0
// 005c7d43  6aff                 push -1
// 005c7d45  56                   push esi
// 005c7d46  e8455dffff           call 0x5bda90
// 005c7d4b  8b38                 mov edi, dword ptr [eax]
// 005c7d4d  83c414               add esp, 0x14
// 005c7d50  85ff                 test edi, edi
// 005c7d52  7514                 jne 0x5c7d68
// 005c7d54  a178987b00           mov eax, dword ptr [0x7b9878]
// 005c7d59  50                   push eax
// 005c7d5a  6890997b00           push 0x7b9990
// 005c7d5f  56                   push esi
// 005c7d60  e87b6bffff           call 0x5be8e0
// 005c7d65  83c40c               add esp, 0xc
// 005c7d68  6a01                 push 1
// 005c7d6a  8bc7                 mov eax, edi
// 005c7d6c  e81ffeffff           call 0x5c7b90
// 005c7d71  83c404               add esp, 4
// 005c7d74  5f                   pop edi
// 005c7d75  5e                   pop esi
// 005c7d76  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
