// from server: 100% by auto
// roc 2010-06 00737940  unit: seg_00730000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737940
//
// 00737940  56                   push esi
// 00737941  8b742408             mov esi, dword ptr [esp + 8]
// 00737945  57                   push edi
// 00737946  6a00                 push 0
// 00737948  6898e8a400           push 0xa4e898
// 0073794d  6a02                 push 2
// 0073794f  56                   push esi
// 00737950  e82bb6feff           call 0x722f80
// 00737955  6a06                 push 6
// 00737957  6a01                 push 1
// 00737959  56                   push esi
// 0073795a  8bf8                 mov edi, eax
// 0073795c  e83fb5feff           call 0x722ea0
// 00737961  6a03                 push 3
// 00737963  56                   push esi
// 00737964  e8f795feff           call 0x720f60
// 00737969  57                   push edi
// 0073796a  6a00                 push 0
// 0073796c  68c0787300           push 0x7378c0
// 00737971  56                   push esi
// 00737972  e8c9a3feff           call 0x721d40
// 00737977  83c434               add esp, 0x34
// 0073797a  85c0                 test eax, eax
// 0073797c  7508                 jne 0x737986
// 0073797e  5f                   pop edi
// 0073797f  b801000000           mov eax, 1
// 00737984  5e                   pop esi
// 00737985  c3                   ret 
// 00737986  56                   push esi
// 00737987  e8649bfeff           call 0x7214f0
// 0073798c  6afe                 push -2
// 0073798e  56                   push esi
// 0073798f  e86c96feff           call 0x721000
// 00737994  83c40c               add esp, 0xc
// 00737997  5f                   pop edi
// 00737998  b802000000           mov eax, 2
// 0073799d  5e                   pop esi
// 0073799e  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_load)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
