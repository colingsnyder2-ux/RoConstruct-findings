// from server: 100% by auto
// roc 2010-06 00576f50  unit: seg_00570000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576f50
//
// 00576f50  8b4304               mov eax, dword ptr [ebx + 4]
// 00576f53  8b08                 mov ecx, dword ptr [eax]
// 00576f55  56                   push esi
// 00576f56  57                   push edi
// 00576f57  6880050000           push 0x580
// 00576f5c  6a01                 push 1
// 00576f5e  53                   push ebx
// 00576f5f  ffd1                 call ecx
// 00576f61  8bf0                 mov esi, eax
// 00576f63  81c600010000         add esi, 0x100
// 00576f69  6800010000           push 0x100
// 00576f6e  8d9600ffffff         lea edx, [esi - 0x100]
// 00576f74  6a00                 push 0
// 00576f76  52                   push edx
// 00576f77  89b320010000         mov dword ptr [ebx + 0x120], esi
// 00576f7d  e8621c2300           call 0x7a8be4
// 00576f82  83c418               add esp, 0x18
// 00576f85  33c0                 xor eax, eax
// 00576f87  880430               mov byte ptr [eax + esi], al
// 00576f8a  40                   inc eax
// 00576f8b  3dff000000           cmp eax, 0xff
// 00576f90  7ef5                 jle 0x576f87
// 00576f92  6880010000           push 0x180
// 00576f97  83ee80               sub esi, -0x80
// 00576f9a  8d8680000000         lea eax, [esi + 0x80]
// 00576fa0  68ff000000           push 0xff
// 00576fa5  50                   push eax
// 00576fa6  e8391c2300           call 0x7a8be4
// 00576fab  6880010000           push 0x180
// 00576fb0  8d8600020000         lea eax, [esi + 0x200]
// 00576fb6  6a00                 push 0
// 00576fb8  50                   push eax
// 00576fb9  e8261c2300           call 0x7a8be4
// 00576fbe  8dbe80030000         lea edi, [esi + 0x380]
// 00576fc4  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 00576fca  83c418               add esp, 0x18
// 00576fcd  b920000000           mov ecx, 0x20
// 00576fd2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00576fd4  5f                   pop edi
// 00576fd5  5e                   pop esi
// 00576fd6  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
