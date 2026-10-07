// roc 2008-06 00624c60  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00624c60
//
// 00624c60  56                   push esi
// 00624c61  57                   push edi
// 00624c62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00624c66  6a02                 push 2
// 00624c68  68efd8ffff           push 0xffffd8ef
// 00624c6d  57                   push edi
// 00624c6e  e8bdd8feff           call 0x612530
// 00624c73  6aff                 push -1
// 00624c75  57                   push edi
// 00624c76  e8a5d4feff           call 0x612120
// 00624c7b  8b30                 mov esi, dword ptr [eax]
// 00624c7d  83c414               add esp, 0x14
// 00624c80  85f6                 test esi, esi
// 00624c82  7514                 jne 0x624c98
// 00624c84  a1144b8400           mov eax, dword ptr [0x844b14]
// 00624c89  50                   push eax
// 00624c8a  68284c8400           push 0x844c28
// 00624c8f  57                   push edi
// 00624c90  e8cbbffeff           call 0x610c60
// 00624c95  83c40c               add esp, 0xc
// 00624c98  56                   push esi
// 00624c99  b801000000           mov eax, 1
// 00624c9e  e8cdfeffff           call 0x624b70
// 00624ca3  83c404               add esp, 4
// 00624ca6  5f                   pop edi
// 00624ca7  5e                   pop esi
// 00624ca8  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_write)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
