// roc 2011-06 00781720  unit: lua_exception  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00781720
//
// 00781720  56                   push esi
// 00781721  8b742408             mov esi, dword ptr [esp + 8]
// 00781725  6a00                 push 0
// 00781727  6a01                 push 1
// 00781729  56                   push esi
// 0078172a  e8612afeff           call 0x764190
// 0078172f  6a00                 push 0
// 00781731  6a02                 push 2
// 00781733  56                   push esi
// 00781734  e8572afeff           call 0x764190
// 00781739  6a02                 push 2
// 0078173b  56                   push esi
// 0078173c  e82f0cfeff           call 0x762370
// 00781741  6a00                 push 0
// 00781743  56                   push esi
// 00781744  e8f711feff           call 0x762940
// 00781749  6a03                 push 3
// 0078174b  68b0157800           push 0x7815b0
// 00781750  56                   push esi
// 00781751  e81a13feff           call 0x762a70
// 00781756  83c434               add esp, 0x34
// 00781759  b801000000           mov eax, 1
// 0078175e  5e                   pop esi
// 0078175f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
