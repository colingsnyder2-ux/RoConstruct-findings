// roc 2011-06 00557040  unit: seg_00550000  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557040
//
// 00557040  8b4624               mov eax, dword ptr [esi + 0x24]
// 00557043  53                   push ebx
// 00557044  55                   push ebp
// 00557045  bd01000000           mov ebp, 1
// 0055704a  2bc5                 sub eax, ebp
// 0055704c  57                   push edi
// 0055704d  8d5dff               lea ebx, [ebp - 1]
// 00557050  0f8464010000         je 0x5571ba
// 00557056  83e802               sub eax, 2
// 00557059  7468                 je 0x5570c3
// 0055705b  2bc5                 sub eax, ebp
// 0055705d  740b                 je 0x55706a
// 0055705f  895e28               mov dword ptr [esi + 0x28], ebx
// 00557062  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00557065  e956010000           jmp 0x5571c0
// 0055706a  bf04000000           mov edi, 4
// 0055706f  389e08010000         cmp byte ptr [esi + 0x108], bl
// 00557075  7441                 je 0x5570b8
// 00557077  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0055707e  2bc3                 sub eax, ebx
// 00557080  7436                 je 0x5570b8
// 00557082  83e802               sub eax, 2
// 00557085  7422                 je 0x5570a9
// 00557087  8b06                 mov eax, dword ptr [esi]
// 00557089  c7401472000000       mov dword ptr [eax + 0x14], 0x72
// 00557090  0fb68e09010000       movzx ecx, byte ptr [esi + 0x109]
// 00557097  8b16                 mov edx, dword ptr [esi]
// 00557099  894a18               mov dword ptr [edx + 0x18], ecx
// 0055709c  8b06                 mov eax, dword ptr [esi]
// 0055709e  8b4804               mov ecx, dword ptr [eax + 4]
// 005570a1  6aff                 push -1
// 005570a3  56                   push esi
// 005570a4  ffd1                 call ecx
// 005570a6  83c408               add esp, 8
// 005570a9  c7462805000000       mov dword ptr [esi + 0x28], 5
// 005570b0  897e2c               mov dword ptr [esi + 0x2c], edi
// 005570b3  e908010000           jmp 0x5571c0
// 005570b8  897e28               mov dword ptr [esi + 0x28], edi
// 005570bb  897e2c               mov dword ptr [esi + 0x2c], edi
// 005570be  e9fd000000           jmp 0x5571c0
// 005570c3  389e00010000         cmp byte ptr [esi + 0x100], bl
// 005570c9  7418                 je 0x5570e3
// 005570cb  c7462803000000       mov dword ptr [esi + 0x28], 3
// 005570d2  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 005570d9  bd01000000           mov ebp, 1
// 005570de  e9dd000000           jmp 0x5571c0
// 005570e3  389e08010000         cmp byte ptr [esi + 0x108], bl
// 005570e9  7449                 je 0x557134
// 005570eb  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 005570f2  2bc3                 sub eax, ebx
// 005570f4  747b                 je 0x557171
// 005570f6  2bc5                 sub eax, ebp
// 005570f8  74d1                 je 0x5570cb
// 005570fa  8b16                 mov edx, dword ptr [esi]
// 005570fc  c7421472000000       mov dword ptr [edx + 0x14], 0x72
// 00557103  0fb68609010000       movzx eax, byte ptr [esi + 0x109]
// 0055710a  8b0e                 mov ecx, dword ptr [esi]
// 0055710c  894118               mov dword ptr [ecx + 0x18], eax
// 0055710f  8b16                 mov edx, dword ptr [esi]
// 00557111  8b4204               mov eax, dword ptr [edx + 4]
// 00557114  6aff                 push -1
// 00557116  56                   push esi
// 00557117  ffd0                 call eax
// 00557119  c7462803000000       mov dword ptr [esi + 0x28], 3
// 00557120  83c408               add esp, 8
// 00557123  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0055712a  bd01000000           mov ebp, 1
// 0055712f  e98c000000           jmp 0x5571c0
// 00557134  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0055713a  8b08                 mov ecx, dword ptr [eax]
// 0055713c  8b5054               mov edx, dword ptr [eax + 0x54]
// 0055713f  8bb8a8000000         mov edi, dword ptr [eax + 0xa8]
// 00557145  bd03000000           mov ebp, 3
// 0055714a  83f901               cmp ecx, 1
// 0055714d  7513                 jne 0x557162
// 0055714f  83fa02               cmp edx, 2
// 00557152  7532                 jne 0x557186
// 00557154  3bfd                 cmp edi, ebp
// 00557156  752e                 jne 0x557186
// 00557158  896e28               mov dword ptr [esi + 0x28], ebp
// 0055715b  89562c               mov dword ptr [esi + 0x2c], edx
// 0055715e  8be9                 mov ebp, ecx
// 00557160  eb5e                 jmp 0x5571c0
// 00557162  83f952               cmp ecx, 0x52
// 00557165  751f                 jne 0x557186
// 00557167  83fa47               cmp edx, 0x47
// 0055716a  751a                 jne 0x557186
// 0055716c  83ff42               cmp edi, 0x42
// 0055716f  7515                 jne 0x557186
// 00557171  c7462802000000       mov dword ptr [esi + 0x28], 2
// 00557178  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 0055717f  bd01000000           mov ebp, 1
// 00557184  eb3a                 jmp 0x5571c0
// 00557186  8b06                 mov eax, dword ptr [esi]
// 00557188  83c018               add eax, 0x18
// 0055718b  8908                 mov dword ptr [eax], ecx
// 0055718d  895004               mov dword ptr [eax + 4], edx
// 00557190  897808               mov dword ptr [eax + 8], edi
// 00557193  8b0e                 mov ecx, dword ptr [esi]
// 00557195  c741146f000000       mov dword ptr [ecx + 0x14], 0x6f
// 0055719c  8b16                 mov edx, dword ptr [esi]
// 0055719e  8b4204               mov eax, dword ptr [edx + 4]
// 005571a1  6a01                 push 1
// 005571a3  56                   push esi
// 005571a4  ffd0                 call eax
// 005571a6  896e28               mov dword ptr [esi + 0x28], ebp
// 005571a9  83c408               add esp, 8
// 005571ac  c7462c02000000       mov dword ptr [esi + 0x2c], 2
// 005571b3  bd01000000           mov ebp, 1
// 005571b8  eb06                 jmp 0x5571c0
// 005571ba  896e28               mov dword ptr [esi + 0x28], ebp
// 005571bd  896e2c               mov dword ptr [esi + 0x2c], ebp
// 005571c0  d9e8                 fld1 
// 005571c2  5f                   pop edi
// 005571c3  896e30               mov dword ptr [esi + 0x30], ebp
// 005571c6  dd5e38               fstp qword ptr [esi + 0x38]
// 005571c9  896e34               mov dword ptr [esi + 0x34], ebp
// 005571cc  5d                   pop ebp
// 005571cd  885e40               mov byte ptr [esi + 0x40], bl
// 005571d0  885e41               mov byte ptr [esi + 0x41], bl
// 005571d3  895e44               mov dword ptr [esi + 0x44], ebx
// 005571d6  885e4a               mov byte ptr [esi + 0x4a], bl
// 005571d9  895e74               mov dword ptr [esi + 0x74], ebx
// 005571dc  885e58               mov byte ptr [esi + 0x58], bl
// 005571df  885e59               mov byte ptr [esi + 0x59], bl
// 005571e2  885e5a               mov byte ptr [esi + 0x5a], bl
// 005571e5  c6464801             mov byte ptr [esi + 0x48], 1
// 005571e9  c6464901             mov byte ptr [esi + 0x49], 1
// 005571ed  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 005571f4  c6465001             mov byte ptr [esi + 0x50], 1
// 005571f8  c7465400010000       mov dword ptr [esi + 0x54], 0x100
// 005571ff  5b                   pop ebx
// 00557200  c3                   ret 
// library jpeg-6b/jdapimin.c (function _default_decompress_parms)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
