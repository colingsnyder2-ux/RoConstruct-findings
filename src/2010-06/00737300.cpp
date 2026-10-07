// roc 2010-06 00737300  unit: seg_00730000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737300
//
// 00737300  56                   push esi
// 00737301  8b742408             mov esi, dword ptr [esp + 8]
// 00737305  6a01                 push 1
// 00737307  56                   push esi
// 00737308  e8e3bbfeff           call 0x722ef0
// 0073730d  6a01                 push 1
// 0073730f  56                   push esi
// 00737310  e8cba5feff           call 0x7218e0
// 00737315  83c410               add esp, 0x10
// 00737318  85c0                 test eax, eax
// 0073731a  7510                 jne 0x73732c
// 0073731c  56                   push esi
// 0073731d  e8cea1feff           call 0x7214f0
// 00737322  83c404               add esp, 4
// 00737325  b801000000           mov eax, 1
// 0073732a  5e                   pop esi
// 0073732b  c3                   ret 
// 0073732c  6804e7a400           push 0xa4e704
// 00737331  6a01                 push 1
// 00737333  56                   push esi
// 00737334  e827b2feff           call 0x722560
// 00737339  83c40c               add esp, 0xc
// 0073733c  b801000000           mov eax, 1
// 00737341  5e                   pop esi
// 00737342  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
