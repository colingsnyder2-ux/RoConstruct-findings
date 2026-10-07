// roc 2008-06 00536210  unit: seg_00530000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536210
//
// 00536210  56                   push esi
// 00536211  8b742408             mov esi, dword ptr [esp + 8]
// 00536215  8b4604               mov eax, dword ptr [esi + 4]
// 00536218  8b08                 mov ecx, dword ptr [eax]
// 0053621a  57                   push edi
// 0053621b  6a2c                 push 0x2c
// 0053621d  6a01                 push 1
// 0053621f  56                   push esi
// 00536220  ffd1                 call ecx
// 00536222  8bf8                 mov edi, eax
// 00536224  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0053622a  83c40c               add esp, 0xc
// 0053622d  c707e0605300         mov dword ptr [edi], 0x5360e0
// 00536233  c7470c00625300       mov dword ptr [edi + 0xc], 0x536200
// 0053623a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 00536241  c7472800000000       mov dword ptr [edi + 0x28], 0
// 00536248  837e6403             cmp dword ptr [esi + 0x64], 3
// 0053624c  7413                 je 0x536261
// 0053624e  8b16                 mov edx, dword ptr [esi]
// 00536250  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 00536257  8b06                 mov eax, dword ptr [esi]
// 00536259  8b08                 mov ecx, dword ptr [eax]
// 0053625b  56                   push esi
// 0053625c  ffd1                 call ecx
// 0053625e  83c404               add esp, 4
// 00536261  8b5604               mov edx, dword ptr [esi + 4]
// 00536264  8b02                 mov eax, dword ptr [edx]
// 00536266  55                   push ebp
// 00536267  6880000000           push 0x80
// 0053626c  6a01                 push 1
// 0053626e  56                   push esi
// 0053626f  ffd0                 call eax
// 00536271  83c40c               add esp, 0xc
// 00536274  894718               mov dword ptr [edi + 0x18], eax
// 00536277  33ed                 xor ebp, ebp
// 00536279  8da42400000000       lea esp, [esp]
// 00536280  8b4e04               mov ecx, dword ptr [esi + 4]
// 00536283  8b5104               mov edx, dword ptr [ecx + 4]
// 00536286  6800100000           push 0x1000
// 0053628b  6a01                 push 1
// 0053628d  56                   push esi
// 0053628e  ffd2                 call edx
// 00536290  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00536293  890429               mov dword ptr [ecx + ebp], eax
// 00536296  83c504               add ebp, 4
// 00536299  83c40c               add esp, 0xc
// 0053629c  81fd80000000         cmp ebp, 0x80
// 005362a2  7cdc                 jl 0x536280
// 005362a4  c6471c01             mov byte ptr [edi + 0x1c], 1
// 005362a8  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 005362ac  7461                 je 0x53630f
// 005362ae  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 005362b1  83fd08               cmp ebp, 8
// 005362b4  7d1c                 jge 0x5362d2
// 005362b6  8b16                 mov edx, dword ptr [esi]
// 005362b8  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 005362bf  8b06                 mov eax, dword ptr [esi]
// 005362c1  c7401808000000       mov dword ptr [eax + 0x18], 8
// 005362c8  8b0e                 mov ecx, dword ptr [esi]
// 005362ca  8b11                 mov edx, dword ptr [ecx]
// 005362cc  56                   push esi
// 005362cd  ffd2                 call edx
// 005362cf  83c404               add esp, 4
// 005362d2  81fd00010000         cmp ebp, 0x100
// 005362d8  7e1c                 jle 0x5362f6
// 005362da  8b06                 mov eax, dword ptr [esi]
// 005362dc  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 005362e3  8b0e                 mov ecx, dword ptr [esi]
// 005362e5  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 005362ec  8b16                 mov edx, dword ptr [esi]
// 005362ee  8b02                 mov eax, dword ptr [edx]
// 005362f0  56                   push esi
// 005362f1  ffd0                 call eax
// 005362f3  83c404               add esp, 4
// 005362f6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005362f9  8b5108               mov edx, dword ptr [ecx + 8]
// 005362fc  6a03                 push 3
// 005362fe  55                   push ebp
// 005362ff  6a01                 push 1
// 00536301  56                   push esi
// 00536302  ffd2                 call edx
// 00536304  83c410               add esp, 0x10
// 00536307  894710               mov dword ptr [edi + 0x10], eax
// 0053630a  896f14               mov dword ptr [edi + 0x14], ebp
// 0053630d  eb07                 jmp 0x536316
// 0053630f  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00536316  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0053631a  b902000000           mov ecx, 2
// 0053631f  5d                   pop ebp
// 00536320  7403                 je 0x536325
// 00536322  894e4c               mov dword ptr [esi + 0x4c], ecx
// 00536325  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 00536328  7525                 jne 0x53634f
// 0053632a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0053632d  8b5604               mov edx, dword ptr [esi + 4]
// 00536330  03c1                 add eax, ecx
// 00536332  8b4a04               mov ecx, dword ptr [edx + 4]
// 00536335  8d0440               lea eax, [eax + eax*2]
// 00536338  03c0                 add eax, eax
// 0053633a  50                   push eax
// 0053633b  6a01                 push 1
// 0053633d  56                   push esi
// 0053633e  ffd1                 call ecx
// 00536340  83c40c               add esp, 0xc
// 00536343  894720               mov dword ptr [edi + 0x20], eax
// 00536346  5f                   pop edi
// 00536347  8bc6                 mov eax, esi
// 00536349  5e                   pop esi
// 0053634a  e9c1fcffff           jmp 0x536010
// 0053634f  5f                   pop edi
// 00536350  5e                   pop esi
// 00536351  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
