// from server: 100% by auto
// roc 2008-06 00624290  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00624290
//
// 00624290  56                   push esi
// 00624291  8b742408             mov esi, dword ptr [esp + 8]
// 00624295  6a01                 push 1
// 00624297  56                   push esi
// 00624298  e863dbfeff           call 0x611e00
// 0062429d  83c408               add esp, 8
// 006242a0  83f8ff               cmp eax, -1
// 006242a3  7510                 jne 0x6242b5
// 006242a5  6a02                 push 2
// 006242a7  68efd8ffff           push 0xffffd8ef
// 006242ac  56                   push esi
// 006242ad  e87ee2feff           call 0x612530
// 006242b2  83c40c               add esp, 0xc
// 006242b5  68dc4b8400           push 0x844bdc
// 006242ba  6a01                 push 1
// 006242bc  56                   push esi
// 006242bd  e8eed2feff           call 0x6115b0
// 006242c2  83c40c               add esp, 0xc
// 006242c5  833800               cmp dword ptr [eax], 0
// 006242c8  750e                 jne 0x6242d8
// 006242ca  68e44b8400           push 0x844be4
// 006242cf  56                   push esi
// 006242d0  e88bc9feff           call 0x610c60
// 006242d5  83c408               add esp, 8
// 006242d8  6a01                 push 1
// 006242da  56                   push esi
// 006242db  e830e3feff           call 0x612610
// 006242e0  68044c8400           push 0x844c04
// 006242e5  6aff                 push -1
// 006242e7  56                   push esi
// 006242e8  e8a3e1feff           call 0x612490
// 006242ed  83c414               add esp, 0x14
// 006242f0  56                   push esi
// 006242f1  6aff                 push -1
// 006242f3  56                   push esi
// 006242f4  e8f7ddfeff           call 0x6120f0
// 006242f9  83c408               add esp, 8
// 006242fc  ffd0                 call eax
// 006242fe  83c404               add esp, 4
// 00624301  5e                   pop esi
// 00624302  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
