// from server: 100% by auto
// roc 2011-06 00569580  unit: seg_00560000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569580
//
// 00569580  8b4304               mov eax, dword ptr [ebx + 4]
// 00569583  8b08                 mov ecx, dword ptr [eax]
// 00569585  56                   push esi
// 00569586  57                   push edi
// 00569587  6880050000           push 0x580
// 0056958c  6a01                 push 1
// 0056958e  53                   push ebx
// 0056958f  ffd1                 call ecx
// 00569591  8bf0                 mov esi, eax
// 00569593  81c600010000         add esi, 0x100
// 00569599  6800010000           push 0x100
// 0056959e  8d9600ffffff         lea edx, [esi - 0x100]
// 005695a4  6a00                 push 0
// 005695a6  52                   push edx
// 005695a7  89b320010000         mov dword ptr [ebx + 0x120], esi
// 005695ad  e8321d2a00           call 0x80b2e4
// 005695b2  83c418               add esp, 0x18
// 005695b5  33c0                 xor eax, eax
// 005695b7  880430               mov byte ptr [eax + esi], al
// 005695ba  40                   inc eax
// 005695bb  3dff000000           cmp eax, 0xff
// 005695c0  7ef5                 jle 0x5695b7
// 005695c2  6880010000           push 0x180
// 005695c7  83ee80               sub esi, -0x80
// 005695ca  8d8680000000         lea eax, [esi + 0x80]
// 005695d0  68ff000000           push 0xff
// 005695d5  50                   push eax
// 005695d6  e8091d2a00           call 0x80b2e4
// 005695db  6880010000           push 0x180
// 005695e0  8d8600020000         lea eax, [esi + 0x200]
// 005695e6  6a00                 push 0
// 005695e8  50                   push eax
// 005695e9  e8f61c2a00           call 0x80b2e4
// 005695ee  8dbe80030000         lea edi, [esi + 0x380]
// 005695f4  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 005695fa  83c418               add esp, 0x18
// 005695fd  b920000000           mov ecx, 0x20
// 00569602  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00569604  5f                   pop edi
// 00569605  5e                   pop esi
// 00569606  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
