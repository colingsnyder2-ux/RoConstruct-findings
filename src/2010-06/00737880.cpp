// roc 2010-06 00737880  unit: seg_00730000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737880
//
// 00737880  56                   push esi
// 00737881  8b742408             mov esi, dword ptr [esp + 8]
// 00737885  6a00                 push 0
// 00737887  6a00                 push 0
// 00737889  6a01                 push 1
// 0073788b  56                   push esi
// 0073788c  e8efb6feff           call 0x722f80
// 00737891  50                   push eax
// 00737892  56                   push esi
// 00737893  e818b2feff           call 0x722ab0
// 00737898  83c418               add esp, 0x18
// 0073789b  85c0                 test eax, eax
// 0073789d  7507                 jne 0x7378a6
// 0073789f  b801000000           mov eax, 1
// 007378a4  5e                   pop esi
// 007378a5  c3                   ret 
// 007378a6  56                   push esi
// 007378a7  e8449cfeff           call 0x7214f0
// 007378ac  6afe                 push -2
// 007378ae  56                   push esi
// 007378af  e84c97feff           call 0x721000
// 007378b4  83c40c               add esp, 0xc
// 007378b7  b802000000           mov eax, 2
// 007378bc  5e                   pop esi
// 007378bd  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadfile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
