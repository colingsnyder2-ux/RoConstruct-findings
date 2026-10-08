// from server: 100% by auto
// roc 2008-06 00538060  unit: seg_00530000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538060
//
// 00538060  55                   push ebp
// 00538061  56                   push esi
// 00538062  57                   push edi
// 00538063  8bf8                 mov edi, eax
// 00538065  8b442414             mov eax, dword ptr [esp + 0x14]
// 00538069  0fbf00               movsx eax, word ptr [eax]
// 0053806c  2b442418             sub eax, dword ptr [esp + 0x18]
// 00538070  7902                 jns 0x538074
// 00538072  f7d8                 neg eax
// 00538074  33f6                 xor esi, esi
// 00538076  85c0                 test eax, eax
// 00538078  7427                 je 0x5380a1
// 0053807a  8d9b00000000         lea ebx, [ebx]
// 00538080  46                   inc esi
// 00538081  d1f8                 sar eax, 1
// 00538083  75fb                 jne 0x538080
// 00538085  83fe0b               cmp esi, 0xb
// 00538088  7e17                 jle 0x5380a1
// 0053808a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053808e  8b08                 mov ecx, dword ptr [eax]
// 00538090  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00538097  8b10                 mov edx, dword ptr [eax]
// 00538099  50                   push eax
// 0053809a  8b02                 mov eax, dword ptr [edx]
// 0053809c  ffd0                 call eax
// 0053809e  83c404               add esp, 4
// 005380a1  ff04b7               inc dword ptr [edi + esi*4]
// 005380a4  33f6                 xor esi, esi
// 005380a6  bdb4b18200           mov ebp, 0x82b1b4
// 005380ab  eb03                 jmp 0x5380b0
// 005380ad  8d4900               lea ecx, [ecx]
// 005380b0  8b4d00               mov ecx, dword ptr [ebp]
// 005380b3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005380b7  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 005380bb  85c9                 test ecx, ecx
// 005380bd  7503                 jne 0x5380c2
// 005380bf  46                   inc esi
// 005380c0  eb60                 jmp 0x538122
// 005380c2  83fe0f               cmp esi, 0xf
// 005380c5  7e1e                 jle 0x5380e5
// 005380c7  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 005380cd  8d46f0               lea eax, [esi - 0x10]
// 005380d0  c1e804               shr eax, 4
// 005380d3  40                   inc eax
// 005380d4  8bf8                 mov edi, eax
// 005380d6  f7df                 neg edi
// 005380d8  c1e704               shl edi, 4
// 005380db  03f7                 add esi, edi
// 005380dd  03d0                 add edx, eax
// 005380df  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 005380e5  85c9                 test ecx, ecx
// 005380e7  7d02                 jge 0x5380eb
// 005380e9  f7d9                 neg ecx
// 005380eb  d1f9                 sar ecx, 1
// 005380ed  bf01000000           mov edi, 1
// 005380f2  7421                 je 0x538115
// 005380f4  47                   inc edi
// 005380f5  d1f9                 sar ecx, 1
// 005380f7  75fb                 jne 0x5380f4
// 005380f9  83ff0a               cmp edi, 0xa
// 005380fc  7e17                 jle 0x538115
// 005380fe  8b442410             mov eax, dword ptr [esp + 0x10]
// 00538102  8b08                 mov ecx, dword ptr [eax]
// 00538104  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0053810b  8b10                 mov edx, dword ptr [eax]
// 0053810d  50                   push eax
// 0053810e  8b02                 mov eax, dword ptr [edx]
// 00538110  ffd0                 call eax
// 00538112  83c404               add esp, 4
// 00538115  c1e604               shl esi, 4
// 00538118  03f7                 add esi, edi
// 0053811a  ff04b3               inc dword ptr [ebx + esi*4]
// 0053811d  8d04b3               lea eax, [ebx + esi*4]
// 00538120  33f6                 xor esi, esi
// 00538122  83c504               add ebp, 4
// 00538125  81fdb0b28200         cmp ebp, 0x82b2b0
// 0053812b  7c83                 jl 0x5380b0
// 0053812d  5f                   pop edi
// 0053812e  85f6                 test esi, esi
// 00538130  5e                   pop esi
// 00538131  5d                   pop ebp
// 00538132  7e02                 jle 0x538136
// 00538134  ff03                 inc dword ptr [ebx]
// 00538136  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
