// roc 2007-08 00520210  unit: seg_00520000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520210
//
// 00520210  8b4304               mov eax, dword ptr [ebx + 4]
// 00520213  8b08                 mov ecx, dword ptr [eax]
// 00520215  56                   push esi
// 00520216  57                   push edi
// 00520217  6880050000           push 0x580
// 0052021c  6a01                 push 1
// 0052021e  53                   push ebx
// 0052021f  ffd1                 call ecx
// 00520221  8bf0                 mov esi, eax
// 00520223  81c600010000         add esi, 0x100
// 00520229  6800010000           push 0x100
// 0052022e  8d9600ffffff         lea edx, [esi - 0x100]
// 00520234  6a00                 push 0
// 00520236  52                   push edx
// 00520237  89b320010000         mov dword ptr [ebx + 0x120], esi
// 0052023d  e84a091100           call 0x630b8c
// 00520242  83c418               add esp, 0x18
// 00520245  33c0                 xor eax, eax
// 00520247  eb07                 jmp 0x520250
// 00520249  8da42400000000       lea esp, [esp]
// 00520250  880430               mov byte ptr [eax + esi], al
// 00520253  83c001               add eax, 1
// 00520256  3dff000000           cmp eax, 0xff
// 0052025b  7ef3                 jle 0x520250
// 0052025d  6880010000           push 0x180
// 00520262  81c680000000         add esi, 0x80
// 00520268  8d8680000000         lea eax, [esi + 0x80]
// 0052026e  68ff000000           push 0xff
// 00520273  50                   push eax
// 00520274  e813091100           call 0x630b8c
// 00520279  6880010000           push 0x180
// 0052027e  8d8600020000         lea eax, [esi + 0x200]
// 00520284  6a00                 push 0
// 00520286  50                   push eax
// 00520287  e800091100           call 0x630b8c
// 0052028c  8dbe80030000         lea edi, [esi + 0x380]
// 00520292  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 00520298  83c418               add esp, 0x18
// 0052029b  b920000000           mov ecx, 0x20
// 005202a0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005202a2  5f                   pop edi
// 005202a3  5e                   pop esi
// 005202a4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
