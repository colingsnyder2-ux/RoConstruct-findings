// roc 2010-06 00734d30  unit: seg_00730000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734d30
//
// 00734d30  56                   push esi
// 00734d31  8b742408             mov esi, dword ptr [esp + 8]
// 00734d35  57                   push edi
// 00734d36  6a05                 push 5
// 00734d38  6a01                 push 1
// 00734d3a  56                   push esi
// 00734d3b  e860e1feff           call 0x722ea0
// 00734d40  6a01                 push 1
// 00734d42  56                   push esi
// 00734d43  e878c6feff           call 0x7213c0
// 00734d48  68fe08a000           push 0xa008fe
// 00734d4d  6a28                 push 0x28
// 00734d4f  56                   push esi
// 00734d50  8bf8                 mov edi, eax
// 00734d52  e8d9d7feff           call 0x722530
// 00734d57  6a02                 push 2
// 00734d59  56                   push esi
// 00734d5a  e8e1c3feff           call 0x721140
// 00734d5f  83c428               add esp, 0x28
// 00734d62  85c0                 test eax, eax
// 00734d64  7e0d                 jle 0x734d73
// 00734d66  6a06                 push 6
// 00734d68  6a02                 push 2
// 00734d6a  56                   push esi
// 00734d6b  e830e1feff           call 0x722ea0
// 00734d70  83c40c               add esp, 0xc
// 00734d73  6a02                 push 2
// 00734d75  56                   push esi
// 00734d76  e8e5c1feff           call 0x720f60
// 00734d7b  57                   push edi
// 00734d7c  6a01                 push 1
// 00734d7e  56                   push esi
// 00734d7f  e8acfbffff           call 0x734930
// 00734d84  83c414               add esp, 0x14
// 00734d87  5f                   pop edi
// 00734d88  33c0                 xor eax, eax
// 00734d8a  5e                   pop esi
// 00734d8b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _sort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
