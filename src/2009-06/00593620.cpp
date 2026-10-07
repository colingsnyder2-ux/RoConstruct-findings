// roc 2009-06 00593620  unit: seg_00590000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593620
//
// 00593620  8b4304               mov eax, dword ptr [ebx + 4]
// 00593623  8b08                 mov ecx, dword ptr [eax]
// 00593625  56                   push esi
// 00593626  57                   push edi
// 00593627  6880050000           push 0x580
// 0059362c  6a01                 push 1
// 0059362e  53                   push ebx
// 0059362f  ffd1                 call ecx
// 00593631  8bf0                 mov esi, eax
// 00593633  81c600010000         add esi, 0x100
// 00593639  6800010000           push 0x100
// 0059363e  8d9600ffffff         lea edx, [esi - 0x100]
// 00593644  6a00                 push 0
// 00593646  52                   push edx
// 00593647  89b320010000         mov dword ptr [ebx + 0x120], esi
// 0059364d  e822661800           call 0x719c74
// 00593652  83c418               add esp, 0x18
// 00593655  33c0                 xor eax, eax
// 00593657  880430               mov byte ptr [eax + esi], al
// 0059365a  40                   inc eax
// 0059365b  3dff000000           cmp eax, 0xff
// 00593660  7ef5                 jle 0x593657
// 00593662  6880010000           push 0x180
// 00593667  83ee80               sub esi, -0x80
// 0059366a  8d8680000000         lea eax, [esi + 0x80]
// 00593670  68ff000000           push 0xff
// 00593675  50                   push eax
// 00593676  e8f9651800           call 0x719c74
// 0059367b  6880010000           push 0x180
// 00593680  8d8600020000         lea eax, [esi + 0x200]
// 00593686  6a00                 push 0
// 00593688  50                   push eax
// 00593689  e8e6651800           call 0x719c74
// 0059368e  8dbe80030000         lea edi, [esi + 0x380]
// 00593694  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 0059369a  83c418               add esp, 0x18
// 0059369d  b920000000           mov ecx, 0x20
// 005936a2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005936a4  5f                   pop edi
// 005936a5  5e                   pop esi
// 005936a6  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_range_limit_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
