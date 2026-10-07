// roc 2008-06 00628020  unit: seg_00620000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628020
//
// 00628020  56                   push esi
// 00628021  8b742408             mov esi, dword ptr [esp + 8]
// 00628025  57                   push edi
// 00628026  6a01                 push 1
// 00628028  6a02                 push 2
// 0062802a  56                   push esi
// 0062802b  e84098feff           call 0x611870
// 00628030  6a01                 push 1
// 00628032  56                   push esi
// 00628033  8bf8                 mov edi, eax
// 00628035  e8e69bfeff           call 0x611c20
// 0062803a  6a01                 push 1
// 0062803c  56                   push esi
// 0062803d  e86e9efeff           call 0x611eb0
// 00628042  83c41c               add esp, 0x1c
// 00628045  85c0                 test eax, eax
// 00628047  741e                 je 0x628067
// 00628049  85ff                 test edi, edi
// 0062804b  7e1a                 jle 0x628067
// 0062804d  57                   push edi
// 0062804e  56                   push esi
// 0062804f  e89c8bfeff           call 0x610bf0
// 00628054  6a01                 push 1
// 00628056  56                   push esi
// 00628057  e8749dfeff           call 0x611dd0
// 0062805c  6a02                 push 2
// 0062805e  56                   push esi
// 0062805f  e85cabfeff           call 0x612bc0
// 00628064  83c418               add esp, 0x18
// 00628067  56                   push esi
// 00628068  e803abfeff           call 0x612b70
// 0062806d  83c404               add esp, 4
// 00628070  5f                   pop edi
// 00628071  5e                   pop esi
// 00628072  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
