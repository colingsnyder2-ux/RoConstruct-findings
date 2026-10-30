// from server: 100% by auto
// roc 2012-06 00654c90  unit: seg_00650000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654c90
//
// 00654c90  8b4304               mov eax, dword ptr [ebx + 4]
// 00654c93  8b08                 mov ecx, dword ptr [eax]
// 00654c95  56                   push esi
// 00654c96  57                   push edi
// 00654c97  6880050000           push 0x580
// 00654c9c  6a01                 push 1
// 00654c9e  53                   push ebx
// 00654c9f  ffd1                 call ecx
// 00654ca1  8bf0                 mov esi, eax
// 00654ca3  81c600010000         add esi, 0x100
// 00654ca9  6800010000           push 0x100
// 00654cae  8d9600ffffff         lea edx, [esi - 0x100]
// 00654cb4  6a00                 push 0
// 00654cb6  52                   push edx
// 00654cb7  89b320010000         mov dword ptr [ebx + 0x120], esi
// 00654cbd  e8b2e63200           call 0x983374
// 00654cc2  83c418               add esp, 0x18
// 00654cc5  33c0                 xor eax, eax
// 00654cc7  880430               mov byte ptr [eax + esi], al
// 00654cca  40                   inc eax
// 00654ccb  3dff000000           cmp eax, 0xff
// 00654cd0  7ef5                 jle 0x654cc7
// 00654cd2  6880010000           push 0x180
// 00654cd7  83ee80               sub esi, -0x80
// 00654cda  8d8680000000         lea eax, [esi + 0x80]
// 00654ce0  68ff000000           push 0xff
// 00654ce5  50                   push eax
// 00654ce6  e889e63200           call 0x983374
// 00654ceb  6880010000           push 0x180
// 00654cf0  8d8600020000         lea eax, [esi + 0x200]
// 00654cf6  6a00                 push 0
// 00654cf8  50                   push eax
// 00654cf9  e876e63200           call 0x983374
// 00654cfe  8dbe80030000         lea edi, [esi + 0x380]
// 00654d04  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 00654d0a  83c418               add esp, 0x18
// 00654d0d  b920000000           mov ecx, 0x20
// 00654d12  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00654d14  5f                   pop edi
// 00654d15  5e                   pop esi
// 00654d16  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
