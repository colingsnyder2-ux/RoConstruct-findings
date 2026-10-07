// roc 2010-06 00584080  unit: seg_00580000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584080
//
// 00584080  56                   push esi
// 00584081  8b742408             mov esi, dword ptr [esp + 8]
// 00584085  8b4604               mov eax, dword ptr [esi + 4]
// 00584088  8b08                 mov ecx, dword ptr [eax]
// 0058408a  57                   push edi
// 0058408b  6a2c                 push 0x2c
// 0058408d  6a01                 push 1
// 0058408f  56                   push esi
// 00584090  ffd1                 call ecx
// 00584092  8bf8                 mov edi, eax
// 00584094  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0058409a  83c40c               add esp, 0xc
// 0058409d  c707503f5800         mov dword ptr [edi], 0x583f50
// 005840a3  c7470c70405800       mov dword ptr [edi + 0xc], 0x584070
// 005840aa  c7472000000000       mov dword ptr [edi + 0x20], 0
// 005840b1  c7472800000000       mov dword ptr [edi + 0x28], 0
// 005840b8  837e6403             cmp dword ptr [esi + 0x64], 3
// 005840bc  7413                 je 0x5840d1
// 005840be  8b16                 mov edx, dword ptr [esi]
// 005840c0  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 005840c7  8b06                 mov eax, dword ptr [esi]
// 005840c9  8b08                 mov ecx, dword ptr [eax]
// 005840cb  56                   push esi
// 005840cc  ffd1                 call ecx
// 005840ce  83c404               add esp, 4
// 005840d1  8b5604               mov edx, dword ptr [esi + 4]
// 005840d4  8b02                 mov eax, dword ptr [edx]
// 005840d6  55                   push ebp
// 005840d7  6880000000           push 0x80
// 005840dc  6a01                 push 1
// 005840de  56                   push esi
// 005840df  ffd0                 call eax
// 005840e1  83c40c               add esp, 0xc
// 005840e4  894718               mov dword ptr [edi + 0x18], eax
// 005840e7  33ed                 xor ebp, ebp
// 005840e9  8da42400000000       lea esp, [esp]
// 005840f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005840f3  8b5104               mov edx, dword ptr [ecx + 4]
// 005840f6  6800100000           push 0x1000
// 005840fb  6a01                 push 1
// 005840fd  56                   push esi
// 005840fe  ffd2                 call edx
// 00584100  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00584103  890429               mov dword ptr [ecx + ebp], eax
// 00584106  83c504               add ebp, 4
// 00584109  83c40c               add esp, 0xc
// 0058410c  81fd80000000         cmp ebp, 0x80
// 00584112  7cdc                 jl 0x5840f0
// 00584114  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00584118  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0058411c  7461                 je 0x58417f
// 0058411e  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 00584121  83fd08               cmp ebp, 8
// 00584124  7d1c                 jge 0x584142
// 00584126  8b16                 mov edx, dword ptr [esi]
// 00584128  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 0058412f  8b06                 mov eax, dword ptr [esi]
// 00584131  c7401808000000       mov dword ptr [eax + 0x18], 8
// 00584138  8b0e                 mov ecx, dword ptr [esi]
// 0058413a  8b11                 mov edx, dword ptr [ecx]
// 0058413c  56                   push esi
// 0058413d  ffd2                 call edx
// 0058413f  83c404               add esp, 4
// 00584142  81fd00010000         cmp ebp, 0x100
// 00584148  7e1c                 jle 0x584166
// 0058414a  8b06                 mov eax, dword ptr [esi]
// 0058414c  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 00584153  8b0e                 mov ecx, dword ptr [esi]
// 00584155  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 0058415c  8b16                 mov edx, dword ptr [esi]
// 0058415e  8b02                 mov eax, dword ptr [edx]
// 00584160  56                   push esi
// 00584161  ffd0                 call eax
// 00584163  83c404               add esp, 4
// 00584166  8b4e04               mov ecx, dword ptr [esi + 4]
// 00584169  8b5108               mov edx, dword ptr [ecx + 8]
// 0058416c  6a03                 push 3
// 0058416e  55                   push ebp
// 0058416f  6a01                 push 1
// 00584171  56                   push esi
// 00584172  ffd2                 call edx
// 00584174  83c410               add esp, 0x10
// 00584177  894710               mov dword ptr [edi + 0x10], eax
// 0058417a  896f14               mov dword ptr [edi + 0x14], ebp
// 0058417d  eb07                 jmp 0x584186
// 0058417f  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00584186  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0058418a  b902000000           mov ecx, 2
// 0058418f  5d                   pop ebp
// 00584190  7403                 je 0x584195
// 00584192  894e4c               mov dword ptr [esi + 0x4c], ecx
// 00584195  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 00584198  7525                 jne 0x5841bf
// 0058419a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0058419d  8b5604               mov edx, dword ptr [esi + 4]
// 005841a0  03c1                 add eax, ecx
// 005841a2  8b4a04               mov ecx, dword ptr [edx + 4]
// 005841a5  8d0440               lea eax, [eax + eax*2]
// 005841a8  03c0                 add eax, eax
// 005841aa  50                   push eax
// 005841ab  6a01                 push 1
// 005841ad  56                   push esi
// 005841ae  ffd1                 call ecx
// 005841b0  83c40c               add esp, 0xc
// 005841b3  894720               mov dword ptr [edi + 0x20], eax
// 005841b6  5f                   pop edi
// 005841b7  8bc6                 mov eax, esi
// 005841b9  5e                   pop esi
// 005841ba  e9c1fcffff           jmp 0x583e80
// 005841bf  5f                   pop edi
// 005841c0  5e                   pop esi
// 005841c1  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
