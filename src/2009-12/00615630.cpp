// roc 2009-12 00615630  unit: seg_00610000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615630
//
// 00615630  8b4304               mov eax, dword ptr [ebx + 4]
// 00615633  8b08                 mov ecx, dword ptr [eax]
// 00615635  56                   push esi
// 00615636  57                   push edi
// 00615637  6880050000           push 0x580
// 0061563c  6a01                 push 1
// 0061563e  53                   push ebx
// 0061563f  ffd1                 call ecx
// 00615641  8bf0                 mov esi, eax
// 00615643  81c600010000         add esi, 0x100
// 00615649  6800010000           push 0x100
// 0061564e  8d9600ffffff         lea edx, [esi - 0x100]
// 00615654  6a00                 push 0
// 00615656  52                   push edx
// 00615657  89b320010000         mov dword ptr [ebx + 0x120], esi
// 0061565d  e842f41d00           call 0x7f4aa4
// 00615662  83c418               add esp, 0x18
// 00615665  33c0                 xor eax, eax
// 00615667  880430               mov byte ptr [eax + esi], al
// 0061566a  40                   inc eax
// 0061566b  3dff000000           cmp eax, 0xff
// 00615670  7ef5                 jle 0x615667
// 00615672  6880010000           push 0x180
// 00615677  83ee80               sub esi, -0x80
// 0061567a  8d8680000000         lea eax, [esi + 0x80]
// 00615680  68ff000000           push 0xff
// 00615685  50                   push eax
// 00615686  e819f41d00           call 0x7f4aa4
// 0061568b  6880010000           push 0x180
// 00615690  8d8600020000         lea eax, [esi + 0x200]
// 00615696  6a00                 push 0
// 00615698  50                   push eax
// 00615699  e806f41d00           call 0x7f4aa4
// 0061569e  8dbe80030000         lea edi, [esi + 0x380]
// 006156a4  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 006156aa  83c418               add esp, 0x18
// 006156ad  b920000000           mov ecx, 0x20
// 006156b2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006156b4  5f                   pop edi
// 006156b5  5e                   pop esi
// 006156b6  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
