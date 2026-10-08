// roc 2007-03 0051a530  unit: seg_00510000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a530
//
// 0051a530  8b4304               mov eax, dword ptr [ebx + 4]
// 0051a533  8b08                 mov ecx, dword ptr [eax]
// 0051a535  56                   push esi
// 0051a536  57                   push edi
// 0051a537  6880050000           push 0x580
// 0051a53c  6a01                 push 1
// 0051a53e  53                   push ebx
// 0051a53f  ffd1                 call ecx
// 0051a541  8bf0                 mov esi, eax
// 0051a543  81c600010000         add esi, 0x100
// 0051a549  6800010000           push 0x100
// 0051a54e  8d9600ffffff         lea edx, [esi - 0x100]
// 0051a554  6a00                 push 0
// 0051a556  52                   push edx
// 0051a557  89b320010000         mov dword ptr [ebx + 0x120], esi
// 0051a55d  e8ba4a1000           call 0x61f01c
// 0051a562  83c418               add esp, 0x18
// 0051a565  33c0                 xor eax, eax
// 0051a567  eb07                 jmp 0x51a570
// 0051a569  8da42400000000       lea esp, [esp]
// 0051a570  880430               mov byte ptr [eax + esi], al
// 0051a573  83c001               add eax, 1
// 0051a576  3dff000000           cmp eax, 0xff
// 0051a57b  7ef3                 jle 0x51a570
// 0051a57d  6880010000           push 0x180
// 0051a582  81c680000000         add esi, 0x80
// 0051a588  8d8680000000         lea eax, [esi + 0x80]
// 0051a58e  68ff000000           push 0xff
// 0051a593  50                   push eax
// 0051a594  e8834a1000           call 0x61f01c
// 0051a599  6880010000           push 0x180
// 0051a59e  8d8600020000         lea eax, [esi + 0x200]
// 0051a5a4  6a00                 push 0
// 0051a5a6  50                   push eax
// 0051a5a7  e8704a1000           call 0x61f01c
// 0051a5ac  8dbe80030000         lea edi, [esi + 0x380]
// 0051a5b2  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 0051a5b8  83c418               add esp, 0x18
// 0051a5bb  b920000000           mov ecx, 0x20
// 0051a5c0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0051a5c2  5f                   pop edi
// 0051a5c3  5e                   pop esi
// 0051a5c4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
