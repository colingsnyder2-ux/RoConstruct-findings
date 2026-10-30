// from server: 100% by auto
// roc 2012-06 008581c0  unit: lua_exception  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008581c0
//
// 008581c0  83ec64               sub esp, 0x64
// 008581c3  6a01                 push 1
// 008581c5  56                   push esi
// 008581c6  e8159bfdff           call 0x831ce0
// 008581cb  83c408               add esp, 8
// 008581ce  83f806               cmp eax, 6
// 008581d1  750f                 jne 0x8581e2
// 008581d3  6a01                 push 1
// 008581d5  56                   push esi
// 008581d6  e8d59afdff           call 0x831cb0
// 008581db  83c408               add esp, 8
// 008581de  83c464               add esp, 0x64
// 008581e1  c3                   ret 
// 008581e2  837c246800           cmp dword ptr [esp + 0x68], 0
// 008581e7  57                   push edi
// 008581e8  6a01                 push 1
// 008581ea  740d                 je 0x8581f9
// 008581ec  6a01                 push 1
// 008581ee  56                   push esi
// 008581ef  e8dcb8fdff           call 0x833ad0
// 008581f4  83c40c               add esp, 0xc
// 008581f7  eb09                 jmp 0x858202
// 008581f9  56                   push esi
// 008581fa  e861b8fdff           call 0x833a60
// 008581ff  83c408               add esp, 8
// 00858202  8bf8                 mov edi, eax
// 00858204  85ff                 test edi, edi
// 00858206  7d10                 jge 0x858218
// 00858208  684042bd00           push 0xbd4240
// 0085820d  6a01                 push 1
// 0085820f  56                   push esi
// 00858210  e81bb5fdff           call 0x833730
// 00858215  83c40c               add esp, 0xc
// 00858218  8d442404             lea eax, [esp + 4]
// 0085821c  50                   push eax
// 0085821d  57                   push edi
// 0085821e  56                   push esi
// 0085821f  e83c81ffff           call 0x850360
// 00858224  83c40c               add esp, 0xc
// 00858227  85c0                 test eax, eax
// 00858229  7510                 jne 0x85823b
// 0085822b  683042bd00           push 0xbd4230
// 00858230  6a01                 push 1
// 00858232  56                   push esi
// 00858233  e8f8b4fdff           call 0x833730
// 00858238  83c40c               add esp, 0xc
// 0085823b  8d4c2404             lea ecx, [esp + 4]
// 0085823f  51                   push ecx
// 00858240  682c42bd00           push 0xbd422c
// 00858245  56                   push esi
// 00858246  e8458effff           call 0x851090
// 0085824b  6aff                 push -1
// 0085824d  56                   push esi
// 0085824e  e88d9afdff           call 0x831ce0
// 00858253  83c414               add esp, 0x14
// 00858256  85c0                 test eax, eax
// 00858258  750f                 jne 0x858269
// 0085825a  57                   push edi
// 0085825b  68f841bd00           push 0xbd41f8
// 00858260  56                   push esi
// 00858261  e83aacfdff           call 0x832ea0
// 00858266  83c40c               add esp, 0xc
// 00858269  5f                   pop edi
// 0085826a  83c464               add esp, 0x64
// 0085826d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _getfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
