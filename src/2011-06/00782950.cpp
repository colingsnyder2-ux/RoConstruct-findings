// roc 2011-06 00782950  unit: seg_00780000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782950
//
// 00782950  56                   push esi
// 00782951  8b742408             mov esi, dword ptr [esp + 8]
// 00782955  57                   push edi
// 00782956  6a00                 push 0
// 00782958  684082ab00           push 0xab8240
// 0078295d  6a02                 push 2
// 0078295f  56                   push esi
// 00782960  e88b18feff           call 0x7641f0
// 00782965  6a06                 push 6
// 00782967  6a01                 push 1
// 00782969  56                   push esi
// 0078296a  8bf8                 mov edi, eax
// 0078296c  e89f17feff           call 0x764110
// 00782971  6a03                 push 3
// 00782973  56                   push esi
// 00782974  e8f7f9fdff           call 0x762370
// 00782979  57                   push edi
// 0078297a  6a00                 push 0
// 0078297c  68d0287800           push 0x7828d0
// 00782981  56                   push esi
// 00782982  e8c907feff           call 0x763150
// 00782987  83c434               add esp, 0x34
// 0078298a  85c0                 test eax, eax
// 0078298c  7508                 jne 0x782996
// 0078298e  5f                   pop edi
// 0078298f  b801000000           mov eax, 1
// 00782994  5e                   pop esi
// 00782995  c3                   ret 
// 00782996  56                   push esi
// 00782997  e864fffdff           call 0x762900
// 0078299c  6afe                 push -2
// 0078299e  56                   push esi
// 0078299f  e86cfafdff           call 0x762410
// 007829a4  83c40c               add esp, 0xc
// 007829a7  5f                   pop edi
// 007829a8  b802000000           mov eax, 2
// 007829ad  5e                   pop esi
// 007829ae  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_load)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
