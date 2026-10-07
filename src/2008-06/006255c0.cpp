// roc 2008-06 006255c0  unit: lua_exception  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006255c0
//
// 006255c0  81ec10020000         sub esp, 0x210
// 006255c6  53                   push ebx
// 006255c7  55                   push ebp
// 006255c8  56                   push esi
// 006255c9  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 006255d0  57                   push edi
// 006255d1  8d442410             lea eax, [esp + 0x10]
// 006255d5  50                   push eax
// 006255d6  6816b78000           push 0x80b716
// 006255db  6a02                 push 2
// 006255dd  56                   push esi
// 006255de  e83dc1feff           call 0x611720
// 006255e3  6a05                 push 5
// 006255e5  6a01                 push 1
// 006255e7  56                   push esi
// 006255e8  8be8                 mov ebp, eax
// 006255ea  e851c0feff           call 0x611640
// 006255ef  6a01                 push 1
// 006255f1  6a03                 push 3
// 006255f3  56                   push esi
// 006255f4  e877c2feff           call 0x611870
// 006255f9  6a04                 push 4
// 006255fb  56                   push esi
// 006255fc  8bf8                 mov edi, eax
// 006255fe  e8fdc7feff           call 0x611e00
// 00625603  83c430               add esp, 0x30
// 00625606  85c0                 test eax, eax
// 00625608  7f0a                 jg 0x625614
// 0062560a  6a01                 push 1
// 0062560c  56                   push esi
// 0062560d  e86ecafeff           call 0x612080
// 00625612  eb08                 jmp 0x62561c
// 00625614  6a04                 push 4
// 00625616  56                   push esi
// 00625617  e8e4c1feff           call 0x611800
// 0062561c  83c408               add esp, 8
// 0062561f  8d4c2414             lea ecx, [esp + 0x14]
// 00625623  51                   push ecx
// 00625624  56                   push esi
// 00625625  8bd8                 mov ebx, eax
// 00625627  e874bafeff           call 0x6110a0
// 0062562c  83c408               add esp, 8
// 0062562f  3bfb                 cmp edi, ebx
// 00625631  7f51                 jg 0x625684
// 00625633  57                   push edi
// 00625634  6a01                 push 1
// 00625636  56                   push esi
// 00625637  e8f4cefeff           call 0x612530
// 0062563c  6aff                 push -1
// 0062563e  56                   push esi
// 0062563f  e86cc8feff           call 0x611eb0
// 00625644  83c414               add esp, 0x14
// 00625647  85c0                 test eax, eax
// 00625649  7510                 jne 0x62565b
// 0062564b  68d44d8400           push 0x844dd4
// 00625650  6a01                 push 1
// 00625652  56                   push esi
// 00625653  e878befeff           call 0x6114d0
// 00625658  83c40c               add esp, 0xc
// 0062565b  8d542414             lea edx, [esp + 0x14]
// 0062565f  52                   push edx
// 00625660  e8bbb9feff           call 0x611020
// 00625665  83c404               add esp, 4
// 00625668  3bfb                 cmp edi, ebx
// 0062566a  7413                 je 0x62567f
// 0062566c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00625670  50                   push eax
// 00625671  8d4c2418             lea ecx, [esp + 0x18]
// 00625675  55                   push ebp
// 00625676  51                   push ecx
// 00625677  e804b9feff           call 0x610f80
// 0062567c  83c40c               add esp, 0xc
// 0062567f  47                   inc edi
// 00625680  3bfb                 cmp edi, ebx
// 00625682  7eaf                 jle 0x625633
// 00625684  8d542414             lea edx, [esp + 0x14]
// 00625688  52                   push edx
// 00625689  e852b9feff           call 0x610fe0
// 0062568e  83c404               add esp, 4
// 00625691  5f                   pop edi
// 00625692  5e                   pop esi
// 00625693  5d                   pop ebp
// 00625694  b801000000           mov eax, 1
// 00625699  5b                   pop ebx
// 0062569a  81c410020000         add esp, 0x210
// 006256a0  c3                   ret 
// library lua-5.1.3/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 ltablib.c
