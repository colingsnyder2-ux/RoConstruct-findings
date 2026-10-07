// roc 2010-06 007375a0  unit: seg_00730000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007375a0
//
// 007375a0  56                   push esi
// 007375a1  8b742408             mov esi, dword ptr [esp + 8]
// 007375a5  6a05                 push 5
// 007375a7  6a01                 push 1
// 007375a9  56                   push esi
// 007375aa  e8f1b8feff           call 0x722ea0
// 007375af  6a02                 push 2
// 007375b1  56                   push esi
// 007375b2  e839b9feff           call 0x722ef0
// 007375b7  6a02                 push 2
// 007375b9  56                   push esi
// 007375ba  e8a199feff           call 0x720f60
// 007375bf  6a01                 push 1
// 007375c1  56                   push esi
// 007375c2  e839a2feff           call 0x721800
// 007375c7  83c424               add esp, 0x24
// 007375ca  b801000000           mov eax, 1
// 007375cf  5e                   pop esi
// 007375d0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawget)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
