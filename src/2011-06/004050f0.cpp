// roc 2011-06 004050f0  unit: ATL::CRegObject  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004050f0
//
// 004050f0  6aff                 push -1
// 004050f2  64a100000000         mov eax, dword ptr fs:[0]
// 004050f8  6898d19c00           push 0x9cd198
// 004050fd  50                   push eax
// 004050fe  64892500000000       mov dword ptr fs:[0], esp
// 00405105  83ec38               sub esp, 0x38
// 00405108  53                   push ebx
// 00405109  55                   push ebp
// 0040510a  56                   push esi
// 0040510b  57                   push edi
// 0040510c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00405110  33db                 xor ebx, ebx
// 00405112  8bf1                 mov esi, ecx
// 00405114  3bfb                 cmp edi, ebx
// 00405116  0f844b020000         je 0x405367
// 0040511c  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00405120  3beb                 cmp ebp, ebx
// 00405122  0f843f020000         je 0x405367
// 00405128  57                   push edi
// 00405129  895d00               mov dword ptr [ebp], ebx
// 0040512c  ff156403a400         call dword ptr [0xa40364]
// 00405132  03c0                 add eax, eax
// 00405134  50                   push eax
// 00405135  8d4c2420             lea ecx, [esp + 0x20]
// 00405139  e882e8ffff           call 0x4039c0
// 0040513e  895c2450             mov dword ptr [esp + 0x50], ebx
// 00405142  395c2424             cmp dword ptr [esp + 0x24], ebx
// 00405146  7521                 jne 0x405169
// 00405148  53                   push ebx
// 00405149  ff157c30a400         call dword ptr [0xa4307c]
// 0040514f  5f                   pop edi
// 00405150  5e                   pop esi
// 00405151  5d                   pop ebp
// 00405152  b80e000780           mov eax, 0x8007000e
// 00405157  5b                   pop ebx
// 00405158  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0040515c  64890d00000000       mov dword ptr fs:[0], ecx
// 00405163  83c444               add esp, 0x44
// 00405166  c20800               ret 8
// 00405169  893e                 mov dword ptr [esi], edi
// 0040516b  a01816cb00           mov al, byte ptr [0xcb1618]
// 00405170  895c2414             mov dword ptr [esp + 0x14], ebx
// 00405174  895c2418             mov dword ptr [esp + 0x18], ebx
// 00405178  32db                 xor bl, bl
// 0040517a  88442413             mov byte ptr [esp + 0x13], al
// 0040517e  885c2458             mov byte ptr [esp + 0x58], bl
// 00405182  381f                 cmp byte ptr [edi], bl
// 00405184  0f8418010000         je 0x4052a2
// 0040518a  8b2dd419a400         mov ebp, dword ptr [0xa419d4]
// 00405190  807c241301           cmp byte ptr [esp + 0x13], 1
// 00405195  0f85c6000000         jne 0x405261
// 0040519b  837c241800           cmp dword ptr [esp + 0x18], 0
// 004051a0  7547                 jne 0x4051e9
// 004051a2  8b06                 mov eax, dword ptr [esi]
// 004051a4  68c8b8a500           push 0xa5b8c8
// 004051a9  50                   push eax
// 004051aa  ff15480aa400         call dword ptr [0xa40a48]
// 004051b0  83c408               add esp, 8
// 004051b3  85c0                 test eax, eax
// 004051b5  7432                 je 0x4051e9
// 004051b7  8b0e                 mov ecx, dword ptr [esi]
// 004051b9  3bc1                 cmp eax, ecx
// 004051bb  752c                 jne 0x4051e9
// 004051bd  51                   push ecx
// 004051be  ffd5                 call ebp
// 004051c0  50                   push eax
// 004051c1  8906                 mov dword ptr [esi], eax
// 004051c3  ffd5                 call ebp
// 004051c5  50                   push eax
// 004051c6  8906                 mov dword ptr [esi], eax
// 004051c8  ffd5                 call ebp
// 004051ca  50                   push eax
// 004051cb  8906                 mov dword ptr [esi], eax
// 004051cd  ffd5                 call ebp
// 004051cf  6820bba500           push 0xa5bb20
// 004051d4  8d4c2420             lea ecx, [esp + 0x20]
// 004051d8  8906                 mov dword ptr [esi], eax
// 004051da  e881fdffff           call 0x404f60
// 004051df  85c0                 test eax, eax
// 004051e1  0f8459010000         je 0x405340
// 004051e7  b301                 mov bl, 1
// 004051e9  8b06                 mov eax, dword ptr [esi]
// 004051eb  803827               cmp byte ptr [eax], 0x27
// 004051ee  7536                 jne 0x405226
// 004051f0  807c245800           cmp byte ptr [esp + 0x58], 0
// 004051f5  7507                 jne 0x4051fe
// 004051f7  c644245801           mov byte ptr [esp + 0x58], 1
// 004051fc  eb63                 jmp 0x405261
// 004051fe  50                   push eax
// 004051ff  ffd5                 call ebp
// 00405201  803827               cmp byte ptr [eax], 0x27
// 00405204  7407                 je 0x40520d
// 00405206  c644245800           mov byte ptr [esp + 0x58], 0
// 0040520b  eb20                 jmp 0x40522d
// 0040520d  8b0e                 mov ecx, dword ptr [esi]
// 0040520f  51                   push ecx
// 00405210  ffd5                 call ebp
// 00405212  50                   push eax
// 00405213  8d4c2420             lea ecx, [esp + 0x20]
// 00405217  8906                 mov dword ptr [esi], eax
// 00405219  e892e8ffff           call 0x403ab0
// 0040521e  85c0                 test eax, eax
// 00405220  0f841a010000         je 0x405340
// 00405226  807c245800           cmp byte ptr [esp + 0x58], 0
// 0040522b  7534                 jne 0x405261
// 0040522d  8b16                 mov edx, dword ptr [esi]
// 0040522f  8a02                 mov al, byte ptr [edx]
// 00405231  3c7b                 cmp al, 0x7b
// 00405233  7504                 jne 0x405239
// 00405235  ff442418             inc dword ptr [esp + 0x18]
// 00405239  3c7d                 cmp al, 0x7d
// 0040523b  7524                 jne 0x405261
// 0040523d  836c241801           sub dword ptr [esp + 0x18], 1
// 00405242  751d                 jne 0x405261
// 00405244  80fb01               cmp bl, 1
// 00405247  7518                 jne 0x405261
// 00405249  6808bba500           push 0xa5bb08
// 0040524e  8d4c2420             lea ecx, [esp + 0x20]
// 00405252  e809fdffff           call 0x404f60
// 00405257  85c0                 test eax, eax
// 00405259  0f84e1000000         je 0x405340
// 0040525f  32db                 xor bl, bl
// 00405261  8b3e                 mov edi, dword ptr [esi]
// 00405263  803f25               cmp byte ptr [edi], 0x25
// 00405266  57                   push edi
// 00405267  750c                 jne 0x405275
// 00405269  ffd5                 call ebp
// 0040526b  8bf8                 mov edi, eax
// 0040526d  893e                 mov dword ptr [esi], edi
// 0040526f  803f25               cmp byte ptr [edi], 0x25
// 00405272  7561                 jne 0x4052d5
// 00405274  57                   push edi
// 00405275  ffd5                 call ebp
// 00405277  2bc7                 sub eax, edi
// 00405279  50                   push eax
// 0040527a  57                   push edi
// 0040527b  8d4c2424             lea ecx, [esp + 0x24]
// 0040527f  e88ce7ffff           call 0x403a10
// 00405284  85c0                 test eax, eax
// 00405286  0f84b4000000         je 0x405340
// 0040528c  8b06                 mov eax, dword ptr [esi]
// 0040528e  50                   push eax
// 0040528f  ffd5                 call ebp
// 00405291  8bc8                 mov ecx, eax
// 00405293  8906                 mov dword ptr [esi], eax
// 00405295  803900               cmp byte ptr [ecx], 0
// 00405298  0f85f2feffff         jne 0x405190
// 0040529e  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 004052a2  8b442424             mov eax, dword ptr [esp + 0x24]
// 004052a6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004052ae  894500               mov dword ptr [ebp], eax
// 004052b1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004052b5  52                   push edx
// 004052b6  ff157c30a400         call dword ptr [0xa4307c]
// 004052bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004052c0  5f                   pop edi
// 004052c1  5e                   pop esi
// 004052c2  5d                   pop ebp
// 004052c3  5b                   pop ebx
// 004052c4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004052c8  64890d00000000       mov dword ptr fs:[0], ecx
// 004052cf  83c444               add esp, 0x44
// 004052d2  c20800               ret 8
// 004052d5  6a25                 push 0x25
// 004052d7  57                   push edi
// 004052d8  e813e9ffff           call 0x403bf0
// 004052dd  8bf8                 mov edi, eax
// 004052df  83c408               add esp, 8
// 004052e2  85ff                 test edi, edi
// 004052e4  7467                 je 0x40534d
// 004052e6  8b0e                 mov ecx, dword ptr [esi]
// 004052e8  2bc1                 sub eax, ecx
// 004052ea  83f81f               cmp eax, 0x1f
// 004052ed  7f6b                 jg 0x40535a
// 004052ef  50                   push eax
// 004052f0  51                   push ecx
// 004052f1  8d442430             lea eax, [esp + 0x30]
// 004052f5  6a20                 push 0x20
// 004052f7  50                   push eax
// 004052f8  ff154c0aa400         call dword ptr [0xa40a4c]
// 004052fe  50                   push eax
// 004052ff  e80ce1ffff           call 0x403410
// 00405304  83c414               add esp, 0x14
// 00405307  8d4c2428             lea ecx, [esp + 0x28]
// 0040530b  51                   push ecx
// 0040530c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040530f  e89cfdffff           call 0x4050b0
// 00405314  85c0                 test eax, eax
// 00405316  7435                 je 0x40534d
// 00405318  50                   push eax
// 00405319  8d4c2420             lea ecx, [esp + 0x20]
// 0040531d  e83efcffff           call 0x404f60
// 00405322  85c0                 test eax, eax
// 00405324  741a                 je 0x405340
// 00405326  393e                 cmp dword ptr [esi], edi
// 00405328  0f845effffff         je 0x40528c
// 0040532e  8bff                 mov edi, edi
// 00405330  8b16                 mov edx, dword ptr [esi]
// 00405332  52                   push edx
// 00405333  ffd5                 call ebp
// 00405335  8906                 mov dword ptr [esi], eax
// 00405337  3bc7                 cmp eax, edi
// 00405339  75f5                 jne 0x405330
// 0040533b  e94cffffff           jmp 0x40528c
// 00405340  c74424140e000780     mov dword ptr [esp + 0x14], 0x8007000e
// 00405348  e964ffffff           jmp 0x4052b1
// 0040534d  c744241409000280     mov dword ptr [esp + 0x14], 0x80020009
// 00405355  e957ffffff           jmp 0x4052b1
// 0040535a  c744241405400080     mov dword ptr [esp + 0x14], 0x80004005
// 00405362  e94affffff           jmp 0x4052b1
// 00405367  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0040536b  5f                   pop edi
// 0040536c  5e                   pop esi
// 0040536d  5d                   pop ebp
// 0040536e  b803400080           mov eax, 0x80004003
// 00405373  5b                   pop ebx
// 00405374  64890d00000000       mov dword ptr fs:[0], ecx
// 0040537b  83c444               add esp, 0x44
// 0040537e  c20800               ret 8
// copied from an identical function in another client (function ?PreProcessBuffer@CRegParser@ATL@@QAEJPADPAPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp