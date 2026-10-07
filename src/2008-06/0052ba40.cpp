// roc 2008-06 0052ba40  unit: seg_00520000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ba40
//
// 0052ba40  8b4304               mov eax, dword ptr [ebx + 4]
// 0052ba43  8b08                 mov ecx, dword ptr [eax]
// 0052ba45  56                   push esi
// 0052ba46  57                   push edi
// 0052ba47  6880050000           push 0x580
// 0052ba4c  6a01                 push 1
// 0052ba4e  53                   push ebx
// 0052ba4f  ffd1                 call ecx
// 0052ba51  8bf0                 mov esi, eax
// 0052ba53  81c600010000         add esi, 0x100
// 0052ba59  6800010000           push 0x100
// 0052ba5e  8d9600ffffff         lea edx, [esi - 0x100]
// 0052ba64  6a00                 push 0
// 0052ba66  52                   push edx
// 0052ba67  89b320010000         mov dword ptr [ebx + 0x120], esi
// 0052ba6d  e8925c1700           call 0x6a1704
// 0052ba72  83c418               add esp, 0x18
// 0052ba75  33c0                 xor eax, eax
// 0052ba77  880430               mov byte ptr [eax + esi], al
// 0052ba7a  40                   inc eax
// 0052ba7b  3dff000000           cmp eax, 0xff
// 0052ba80  7ef5                 jle 0x52ba77
// 0052ba82  6880010000           push 0x180
// 0052ba87  83ee80               sub esi, -0x80
// 0052ba8a  8d8680000000         lea eax, [esi + 0x80]
// 0052ba90  68ff000000           push 0xff
// 0052ba95  50                   push eax
// 0052ba96  e8695c1700           call 0x6a1704
// 0052ba9b  6880010000           push 0x180
// 0052baa0  8d8600020000         lea eax, [esi + 0x200]
// 0052baa6  6a00                 push 0
// 0052baa8  50                   push eax
// 0052baa9  e8565c1700           call 0x6a1704
// 0052baae  8dbe80030000         lea edi, [esi + 0x380]
// 0052bab4  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 0052baba  83c418               add esp, 0x18
// 0052babd  b920000000           mov ecx, 0x20
// 0052bac2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052bac4  5f                   pop edi
// 0052bac5  5e                   pop esi
// 0052bac6  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
