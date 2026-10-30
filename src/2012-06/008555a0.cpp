// from server: 100% by auto
// roc 2012-06 008555a0  unit: lua_exception  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008555a0
//
// 008555a0  81ec10020000         sub esp, 0x210
// 008555a6  53                   push ebx
// 008555a7  55                   push ebp
// 008555a8  56                   push esi
// 008555a9  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 008555b0  57                   push edi
// 008555b1  8d442410             lea eax, [esp + 0x10]
// 008555b5  50                   push eax
// 008555b6  68e83bb400           push 0xb43be8
// 008555bb  6a02                 push 2
// 008555bd  56                   push esi
// 008555be  e8bde3fdff           call 0x833980
// 008555c3  6a05                 push 5
// 008555c5  6a01                 push 1
// 008555c7  56                   push esi
// 008555c8  8be8                 mov ebp, eax
// 008555ca  e8d1e2fdff           call 0x8338a0
// 008555cf  6a01                 push 1
// 008555d1  6a03                 push 3
// 008555d3  56                   push esi
// 008555d4  e8f7e4fdff           call 0x833ad0
// 008555d9  6a04                 push 4
// 008555db  56                   push esi
// 008555dc  8bf8                 mov edi, eax
// 008555de  e8fdc6fdff           call 0x831ce0
// 008555e3  83c430               add esp, 0x30
// 008555e6  85c0                 test eax, eax
// 008555e8  7f0a                 jg 0x8555f4
// 008555ea  6a01                 push 1
// 008555ec  56                   push esi
// 008555ed  e86ec9fdff           call 0x831f60
// 008555f2  eb08                 jmp 0x8555fc
// 008555f4  6a04                 push 4
// 008555f6  56                   push esi
// 008555f7  e864e4fdff           call 0x833a60
// 008555fc  83c408               add esp, 8
// 008555ff  8d4c2414             lea ecx, [esp + 0x14]
// 00855603  51                   push ecx
// 00855604  56                   push esi
// 00855605  8bd8                 mov ebx, eax
// 00855607  e8d4dcfdff           call 0x8332e0
// 0085560c  83c408               add esp, 8
// 0085560f  3bfb                 cmp edi, ebx
// 00855611  7d5c                 jge 0x85566f
// 00855613  57                   push edi
// 00855614  6a01                 push 1
// 00855616  56                   push esi
// 00855617  e8c4cdfdff           call 0x8323e0
// 0085561c  6aff                 push -1
// 0085561e  56                   push esi
// 0085561f  e86cc7fdff           call 0x831d90
// 00855624  83c414               add esp, 0x14
// 00855627  85c0                 test eax, eax
// 00855629  7522                 jne 0x85564d
// 0085562b  57                   push edi
// 0085562c  6aff                 push -1
// 0085562e  56                   push esi
// 0085562f  e8acc6fdff           call 0x831ce0
// 00855634  50                   push eax
// 00855635  56                   push esi
// 00855636  e8c5c6fdff           call 0x831d00
// 0085563b  83c410               add esp, 0x10
// 0085563e  50                   push eax
// 0085563f  685c3abd00           push 0xbd3a5c
// 00855644  56                   push esi
// 00855645  e856d8fdff           call 0x832ea0
// 0085564a  83c410               add esp, 0x10
// 0085564d  8d542414             lea edx, [esp + 0x14]
// 00855651  52                   push edx
// 00855652  e809dcfdff           call 0x833260
// 00855657  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085565b  50                   push eax
// 0085565c  8d4c241c             lea ecx, [esp + 0x1c]
// 00855660  55                   push ebp
// 00855661  51                   push ecx
// 00855662  e859dbfdff           call 0x8331c0
// 00855667  47                   inc edi
// 00855668  83c410               add esp, 0x10
// 0085566b  3bfb                 cmp edi, ebx
// 0085566d  7ca4                 jl 0x855613
// 0085566f  7547                 jne 0x8556b8
// 00855671  57                   push edi
// 00855672  6a01                 push 1
// 00855674  56                   push esi
// 00855675  e866cdfdff           call 0x8323e0
// 0085567a  6aff                 push -1
// 0085567c  56                   push esi
// 0085567d  e80ec7fdff           call 0x831d90
// 00855682  83c414               add esp, 0x14
// 00855685  85c0                 test eax, eax
// 00855687  7522                 jne 0x8556ab
// 00855689  57                   push edi
// 0085568a  6aff                 push -1
// 0085568c  56                   push esi
// 0085568d  e84ec6fdff           call 0x831ce0
// 00855692  50                   push eax
// 00855693  56                   push esi
// 00855694  e867c6fdff           call 0x831d00
// 00855699  83c410               add esp, 0x10
// 0085569c  50                   push eax
// 0085569d  685c3abd00           push 0xbd3a5c
// 008556a2  56                   push esi
// 008556a3  e8f8d7fdff           call 0x832ea0
// 008556a8  83c410               add esp, 0x10
// 008556ab  8d542414             lea edx, [esp + 0x14]
// 008556af  52                   push edx
// 008556b0  e8abdbfdff           call 0x833260
// 008556b5  83c404               add esp, 4
// 008556b8  8d442414             lea eax, [esp + 0x14]
// 008556bc  50                   push eax
// 008556bd  e85edbfdff           call 0x833220
// 008556c2  83c404               add esp, 4
// 008556c5  5f                   pop edi
// 008556c6  5e                   pop esi
// 008556c7  5d                   pop ebp
// 008556c8  b801000000           mov eax, 1
// 008556cd  5b                   pop ebx
// 008556ce  81c410020000         add esp, 0x210
// 008556d4  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
