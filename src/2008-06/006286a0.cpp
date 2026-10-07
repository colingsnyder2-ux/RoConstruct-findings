// roc 2008-06 006286a0  unit: seg_00620000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006286a0
//
// 006286a0  56                   push esi
// 006286a1  8b742408             mov esi, dword ptr [esp + 8]
// 006286a5  57                   push edi
// 006286a6  6a00                 push 0
// 006286a8  68b8568400           push 0x8456b8
// 006286ad  6a02                 push 2
// 006286af  56                   push esi
// 006286b0  e86b90feff           call 0x611720
// 006286b5  6a06                 push 6
// 006286b7  6a01                 push 1
// 006286b9  56                   push esi
// 006286ba  8bf8                 mov edi, eax
// 006286bc  e87f8ffeff           call 0x611640
// 006286c1  6a03                 push 3
// 006286c3  56                   push esi
// 006286c4  e85795feff           call 0x611c20
// 006286c9  57                   push edi
// 006286ca  6a00                 push 0
// 006286cc  6820866200           push 0x628620
// 006286d1  56                   push esi
// 006286d2  e819a3feff           call 0x6129f0
// 006286d7  83c434               add esp, 0x34
// 006286da  85c0                 test eax, eax
// 006286dc  7508                 jne 0x6286e6
// 006286de  5f                   pop edi
// 006286df  b801000000           mov eax, 1
// 006286e4  5e                   pop esi
// 006286e5  c3                   ret 
// 006286e6  56                   push esi
// 006286e7  e8f49afeff           call 0x6121e0
// 006286ec  6afe                 push -2
// 006286ee  56                   push esi
// 006286ef  e8cc95feff           call 0x611cc0
// 006286f4  83c40c               add esp, 0xc
// 006286f7  5f                   pop edi
// 006286f8  b802000000           mov eax, 2
// 006286fd  5e                   pop esi
// 006286fe  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_load)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
