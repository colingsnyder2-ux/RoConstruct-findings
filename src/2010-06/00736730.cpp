// from server: 100% by auto
// roc 2010-06 00736730  unit: seg_00730000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736730
//
// 00736730  56                   push esi
// 00736731  8b742408             mov esi, dword ptr [esp + 8]
// 00736735  6a00                 push 0
// 00736737  6a01                 push 1
// 00736739  56                   push esi
// 0073673a  e8e1c7feff           call 0x722f20
// 0073673f  6a00                 push 0
// 00736741  6a02                 push 2
// 00736743  56                   push esi
// 00736744  e8d7c7feff           call 0x722f20
// 00736749  6a02                 push 2
// 0073674b  56                   push esi
// 0073674c  e80fa8feff           call 0x720f60
// 00736751  6a00                 push 0
// 00736753  56                   push esi
// 00736754  e8d7adfeff           call 0x721530
// 00736759  6a03                 push 3
// 0073675b  68c0657300           push 0x7365c0
// 00736760  56                   push esi
// 00736761  e8faaefeff           call 0x721660
// 00736766  83c434               add esp, 0x34
// 00736769  b801000000           mov eax, 1
// 0073676e  5e                   pop esi
// 0073676f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
