// roc 2007-03 00520820  unit: seg_00520000  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00520820
//
// 00520820  53                   push ebx
// 00520821  55                   push ebp
// 00520822  56                   push esi
// 00520823  8b742410             mov esi, dword ptr [esp + 0x10]
// 00520827  8b4604               mov eax, dword ptr [esi + 4]
// 0052082a  8b08                 mov ecx, dword ptr [eax]
// 0052082c  6a74                 push 0x74
// 0052082e  6a01                 push 1
// 00520830  56                   push esi
// 00520831  ffd1                 call ecx
// 00520833  8be8                 mov ebp, eax
// 00520835  33db                 xor ebx, ebx
// 00520837  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 0052083d  83c40c               add esp, 0xc
// 00520840  385c2414             cmp byte ptr [esp + 0x14], bl
// 00520844  c7450040fa5100       mov dword ptr [ebp], 0x51fa40
// 0052084b  c74508d0075200       mov dword ptr [ebp + 8], 0x5207d0
// 00520852  895d70               mov dword ptr [ebp + 0x70], ebx
// 00520855  0f8493000000         je 0x5208ee
// 0052085b  395e24               cmp dword ptr [esi + 0x24], ebx
// 0052085e  57                   push edi
// 0052085f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00520865  895c2418             mov dword ptr [esp + 0x18], ebx
// 00520869  7e6a                 jle 0x5208d5
// 0052086b  8d5548               lea edx, [ebp + 0x48]
// 0052086e  83c70c               add edi, 0xc
// 00520871  89542414             mov dword ptr [esp + 0x14], edx
// 00520875  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0052087c  8b07                 mov eax, dword ptr [edi]
// 0052087e  8bc8                 mov ecx, eax
// 00520880  7403                 je 0x520885
// 00520882  8d0c49               lea ecx, [ecx + ecx*2]
// 00520885  8b5e04               mov ebx, dword ptr [esi + 4]
// 00520888  51                   push ecx
// 00520889  50                   push eax
// 0052088a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0052088d  50                   push eax
// 0052088e  e88d3dffff           call 0x514620
// 00520893  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00520896  8b5710               mov edx, dword ptr [edi + 0x10]
// 00520899  83c408               add esp, 8
// 0052089c  50                   push eax
// 0052089d  51                   push ecx
// 0052089e  52                   push edx
// 0052089f  e87c3dffff           call 0x514620
// 005208a4  83c408               add esp, 8
// 005208a7  50                   push eax
// 005208a8  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005208ab  6a01                 push 1
// 005208ad  6a01                 push 1
// 005208af  56                   push esi
// 005208b0  ffd0                 call eax
// 005208b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005208b6  8901                 mov dword ptr [ecx], eax
// 005208b8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005208bc  83c001               add eax, 1
// 005208bf  83c104               add ecx, 4
// 005208c2  83c418               add esp, 0x18
// 005208c5  83c754               add edi, 0x54
// 005208c8  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005208cb  89442418             mov dword ptr [esp + 0x18], eax
// 005208cf  894c2414             mov dword ptr [esp + 0x14], ecx
// 005208d3  7ca0                 jl 0x520875
// 005208d5  5f                   pop edi
// 005208d6  8d4d48               lea ecx, [ebp + 0x48]
// 005208d9  5e                   pop esi
// 005208da  c74504a0fc5100       mov dword ptr [ebp + 4], 0x51fca0
// 005208e1  c7450c90fe5100       mov dword ptr [ebp + 0xc], 0x51fe90
// 005208e8  894d10               mov dword ptr [ebp + 0x10], ecx
// 005208eb  5d                   pop ebp
// 005208ec  5b                   pop ebx
// 005208ed  c3                   ret 
// 005208ee  8b5604               mov edx, dword ptr [esi + 4]
// 005208f1  8b4204               mov eax, dword ptr [edx + 4]
// 005208f4  6800050000           push 0x500
// 005208f9  6a01                 push 1
// 005208fb  56                   push esi
// 005208fc  ffd0                 call eax
// 005208fe  8d8880000000         lea ecx, [eax + 0x80]
// 00520904  894d24               mov dword ptr [ebp + 0x24], ecx
// 00520907  8d9000010000         lea edx, [eax + 0x100]
// 0052090d  895528               mov dword ptr [ebp + 0x28], edx
// 00520910  8d8880010000         lea ecx, [eax + 0x180]
// 00520916  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00520919  8d9000020000         lea edx, [eax + 0x200]
// 0052091f  895530               mov dword ptr [ebp + 0x30], edx
// 00520922  8d8880020000         lea ecx, [eax + 0x280]
// 00520928  894d34               mov dword ptr [ebp + 0x34], ecx
// 0052092b  8d9000030000         lea edx, [eax + 0x300]
// 00520931  895538               mov dword ptr [ebp + 0x38], edx
// 00520934  894520               mov dword ptr [ebp + 0x20], eax
// 00520937  83c40c               add esp, 0xc
// 0052093a  8d8880030000         lea ecx, [eax + 0x380]
// 00520940  8d9000040000         lea edx, [eax + 0x400]
// 00520946  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 00520949  895540               mov dword ptr [ebp + 0x40], edx
// 0052094c  0580040000           add eax, 0x480
// 00520951  894544               mov dword ptr [ebp + 0x44], eax
// 00520954  5e                   pop esi
// 00520955  895d10               mov dword ptr [ebp + 0x10], ebx
// 00520958  c74504c0de6600       mov dword ptr [ebp + 4], 0x66dec0
// 0052095f  c7450c60fa5100       mov dword ptr [ebp + 0xc], 0x51fa60
// 00520966  5d                   pop ebp
// 00520967  5b                   pop ebx
// 00520968  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
