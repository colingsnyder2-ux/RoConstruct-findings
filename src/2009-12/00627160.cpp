// roc 2009-12 00627160  unit: seg_00620000  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00627160
//
// 00627160  83ec08               sub esp, 8
// 00627163  53                   push ebx
// 00627164  56                   push esi
// 00627165  8b742414             mov esi, dword ptr [esp + 0x14]
// 00627169  8b4604               mov eax, dword ptr [esi + 4]
// 0062716c  8b08                 mov ecx, dword ptr [eax]
// 0062716e  6a34                 push 0x34
// 00627170  6a01                 push 1
// 00627172  56                   push esi
// 00627173  c644241701           mov byte ptr [esp + 0x17], 1
// 00627178  ffd1                 call ecx
// 0062717a  8bd8                 mov ebx, eax
// 0062717c  899e54010000         mov dword ptr [esi + 0x154], ebx
// 00627182  83c40c               add esp, 0xc
// 00627185  c703904a8500         mov dword ptr [ebx], 0x854a90
// 0062718b  c74304a0696200       mov dword ptr [ebx + 4], 0x6269a0
// 00627192  c6430800             mov byte ptr [ebx + 8], 0
// 00627196  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 0062719d  895c2414             mov dword ptr [esp + 0x14], ebx
// 006271a1  7413                 je 0x6271b6
// 006271a3  8b16                 mov edx, dword ptr [esi]
// 006271a5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 006271ac  8b06                 mov eax, dword ptr [esi]
// 006271ae  8b08                 mov ecx, dword ptr [eax]
// 006271b0  56                   push esi
// 006271b1  ffd1                 call ecx
// 006271b3  83c404               add esp, 4
// 006271b6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 006271ba  8b4644               mov eax, dword ptr [esi + 0x44]
// 006271bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006271c5  0f8ee2000000         jle 0x6272ad
// 006271cb  55                   push ebp
// 006271cc  57                   push edi
// 006271cd  8d680c               lea ebp, [eax + 0xc]
// 006271d0  8d7b0c               lea edi, [ebx + 0xc]
// 006271d3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 006271d6  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 006271dc  3bc8                 cmp ecx, eax
// 006271de  752e                 jne 0x62720e
// 006271e0  8b5500               mov edx, dword ptr [ebp]
// 006271e3  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 006271e9  7523                 jne 0x62720e
// 006271eb  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 006271f2  740f                 je 0x627203
// 006271f4  c707e06f6200         mov dword ptr [edi], 0x626fe0
// 006271fa  c6430801             mov byte ptr [ebx + 8], 1
// 006271fe  e990000000           jmp 0x627293
// 00627203  c707a06b6200         mov dword ptr [edi], 0x626ba0
// 00627209  e985000000           jmp 0x627293
// 0062720e  8d1409               lea edx, [ecx + ecx]
// 00627211  3bd0                 cmp edx, eax
// 00627213  754a                 jne 0x62725f
// 00627215  8b5d00               mov ebx, dword ptr [ebp]
// 00627218  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 0062721e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00627222  750d                 jne 0x627231
// 00627224  c644241300           mov byte ptr [esp + 0x13], 0
// 00627229  c707f06b6200         mov dword ptr [edi], 0x626bf0
// 0062722f  eb62                 jmp 0x627293
// 00627231  3bd0                 cmp edx, eax
// 00627233  752a                 jne 0x62725f
// 00627235  8b5500               mov edx, dword ptr [ebp]
// 00627238  03d2                 add edx, edx
// 0062723a  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 00627240  751d                 jne 0x62725f
// 00627242  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00627249  740c                 je 0x627257
// 0062724b  c707606d6200         mov dword ptr [edi], 0x626d60
// 00627251  c6430801             mov byte ptr [ebx + 8], 1
// 00627255  eb3c                 jmp 0x627293
// 00627257  c707906c6200         mov dword ptr [edi], 0x626c90
// 0062725d  eb34                 jmp 0x627293
// 0062725f  99                   cdq 
// 00627260  f7f9                 idiv ecx
// 00627262  85d2                 test edx, edx
// 00627264  751a                 jne 0x627280
// 00627266  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0062726c  99                   cdq 
// 0062726d  f77d00               idiv dword ptr [ebp]
// 00627270  85d2                 test edx, edx
// 00627272  750c                 jne 0x627280
// 00627274  88542413             mov byte ptr [esp + 0x13], dl
// 00627278  c707306a6200         mov dword ptr [edi], 0x626a30
// 0062727e  eb13                 jmp 0x627293
// 00627280  8b06                 mov eax, dword ptr [esi]
// 00627282  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00627289  8b0e                 mov ecx, dword ptr [esi]
// 0062728b  8b11                 mov edx, dword ptr [ecx]
// 0062728d  56                   push esi
// 0062728e  ffd2                 call edx
// 00627290  83c404               add esp, 4
// 00627293  8b442414             mov eax, dword ptr [esp + 0x14]
// 00627297  40                   inc eax
// 00627298  83c704               add edi, 4
// 0062729b  83c554               add ebp, 0x54
// 0062729e  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 006272a1  89442414             mov dword ptr [esp + 0x14], eax
// 006272a5  0f8c28ffffff         jl 0x6271d3
// 006272ab  5f                   pop edi
// 006272ac  5d                   pop ebp
// 006272ad  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 006272b4  741d                 je 0x6272d3
// 006272b6  807c240b00           cmp byte ptr [esp + 0xb], 0
// 006272bb  7516                 jne 0x6272d3
// 006272bd  8b06                 mov eax, dword ptr [esi]
// 006272bf  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 006272c6  8b0e                 mov ecx, dword ptr [esi]
// 006272c8  8b5104               mov edx, dword ptr [ecx + 4]
// 006272cb  6a00                 push 0
// 006272cd  56                   push esi
// 006272ce  ffd2                 call edx
// 006272d0  83c408               add esp, 8
// 006272d3  5e                   pop esi
// 006272d4  5b                   pop ebx
// 006272d5  83c408               add esp, 8
// 006272d8  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
