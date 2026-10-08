// from server: 100% by auto
// roc 2008-06 005391a0  unit: seg_00530000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005391a0
//
// 005391a0  83ec08               sub esp, 8
// 005391a3  53                   push ebx
// 005391a4  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 005391a8  55                   push ebp
// 005391a9  56                   push esi
// 005391aa  8b742418             mov esi, dword ptr [esp + 0x18]
// 005391ae  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 005391b4  57                   push edi
// 005391b5  33ff                 xor edi, edi
// 005391b7  897520               mov dword ptr [ebp + 0x20], esi
// 005391ba  885d0c               mov byte ptr [ebp + 0xc], bl
// 005391bd  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 005391c3  0f94c0               sete al
// 005391c6  88442410             mov byte ptr [esp + 0x10], al
// 005391ca  39be34010000         cmp dword ptr [esi + 0x134], edi
// 005391d0  7516                 jne 0x5391e8
// 005391d2  84c0                 test al, al
// 005391d4  7409                 je 0x5391df
// 005391d6  c74504008a5300       mov dword ptr [ebp + 4], 0x538a00
// 005391dd  eb37                 jmp 0x539216
// 005391df  c74504708b5300       mov dword ptr [ebp + 4], 0x538b70
// 005391e6  eb2e                 jmp 0x539216
// 005391e8  84c0                 test al, al
// 005391ea  7409                 je 0x5391f5
// 005391ec  c74504508d5300       mov dword ptr [ebp + 4], 0x538d50
// 005391f3  eb21                 jmp 0x539216
// 005391f5  c74504108e5300       mov dword ptr [ebp + 4], 0x538e10
// 005391fc  397d40               cmp dword ptr [ebp + 0x40], edi
// 005391ff  7515                 jne 0x539216
// 00539201  8b4604               mov eax, dword ptr [esi + 4]
// 00539204  8b08                 mov ecx, dword ptr [eax]
// 00539206  68e8030000           push 0x3e8
// 0053920b  6a01                 push 1
// 0053920d  56                   push esi
// 0053920e  ffd1                 call ecx
// 00539210  83c40c               add esp, 0xc
// 00539213  894540               mov dword ptr [ebp + 0x40], eax
// 00539216  84db                 test bl, bl
// 00539218  7409                 je 0x539223
// 0053921a  c74508d0905300       mov dword ptr [ebp + 8], 0x5390d0
// 00539221  eb07                 jmp 0x53922a
// 00539223  c7450880905300       mov dword ptr [ebp + 8], 0x539080
// 0053922a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00539230  897c2414             mov dword ptr [esp + 0x14], edi
// 00539234  0f8ec6000000         jle 0x539300
// 0053923a  8d5524               lea edx, [ebp + 0x24]
// 0053923d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00539241  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00539247  eb07                 jmp 0x539250
// 00539249  8da42400000000       lea esp, [esp]
// 00539250  807c241000           cmp byte ptr [esp + 0x10], 0
// 00539255  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00539259  8b03                 mov eax, dword ptr [ebx]
// 0053925b  8939                 mov dword ptr [ecx], edi
// 0053925d  740d                 je 0x53926c
// 0053925f  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00539265  757c                 jne 0x5392e3
// 00539267  8b7814               mov edi, dword ptr [eax + 0x14]
// 0053926a  eb06                 jmp 0x539272
// 0053926c  8b7818               mov edi, dword ptr [eax + 0x18]
// 0053926f  897d34               mov dword ptr [ebp + 0x34], edi
// 00539272  807c242000           cmp byte ptr [esp + 0x20], 0
// 00539277  7454                 je 0x5392cd
// 00539279  85ff                 test edi, edi
// 0053927b  7c05                 jl 0x539282
// 0053927d  83ff04               cmp edi, 4
// 00539280  7c18                 jl 0x53929a
// 00539282  8b16                 mov edx, dword ptr [esi]
// 00539284  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 0053928b  8b06                 mov eax, dword ptr [esi]
// 0053928d  897818               mov dword ptr [eax + 0x18], edi
// 00539290  8b0e                 mov ecx, dword ptr [esi]
// 00539292  8b11                 mov edx, dword ptr [ecx]
// 00539294  56                   push esi
// 00539295  ffd2                 call edx
// 00539297  83c404               add esp, 4
// 0053929a  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 0053929f  7516                 jne 0x5392b7
// 005392a1  8b4604               mov eax, dword ptr [esi + 4]
// 005392a4  8b08                 mov ecx, dword ptr [eax]
// 005392a6  6804040000           push 0x404
// 005392ab  6a01                 push 1
// 005392ad  56                   push esi
// 005392ae  ffd1                 call ecx
// 005392b0  83c40c               add esp, 0xc
// 005392b3  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 005392b7  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 005392bb  6804040000           push 0x404
// 005392c0  6a00                 push 0
// 005392c2  52                   push edx
// 005392c3  e83c841600           call 0x6a1704
// 005392c8  83c40c               add esp, 0xc
// 005392cb  eb14                 jmp 0x5392e1
// 005392cd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005392d1  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 005392d5  50                   push eax
// 005392d6  57                   push edi
// 005392d7  51                   push ecx
// 005392d8  56                   push esi
// 005392d9  e832e6ffff           call 0x537910
// 005392de  83c410               add esp, 0x10
// 005392e1  33ff                 xor edi, edi
// 005392e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005392e7  8344241c04           add dword ptr [esp + 0x1c], 4
// 005392ec  40                   inc eax
// 005392ed  83c304               add ebx, 4
// 005392f0  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005392f6  89442414             mov dword ptr [esp + 0x14], eax
// 005392fa  0f8c50ffffff         jl 0x539250
// 00539300  897d38               mov dword ptr [ebp + 0x38], edi
// 00539303  897d3c               mov dword ptr [ebp + 0x3c], edi
// 00539306  897d18               mov dword ptr [ebp + 0x18], edi
// 00539309  897d1c               mov dword ptr [ebp + 0x1c], edi
// 0053930c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00539312  897d48               mov dword ptr [ebp + 0x48], edi
// 00539315  5f                   pop edi
// 00539316  5e                   pop esi
// 00539317  895544               mov dword ptr [ebp + 0x44], edx
// 0053931a  5d                   pop ebp
// 0053931b  5b                   pop ebx
// 0053931c  83c408               add esp, 8
// 0053931f  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
