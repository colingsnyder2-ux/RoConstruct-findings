// roc 2007-08 00628910  unit: RBX::AssemblyStage  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628910
//
// 00628910  51                   push ecx
// 00628911  8b5304               mov edx, dword ptr [ebx + 4]
// 00628914  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00628917  55                   push ebp
// 00628918  56                   push esi
// 00628919  57                   push edi
// 0062891a  51                   push ecx
// 0062891b  52                   push edx
// 0062891c  50                   push eax
// 0062891d  89442418             mov dword ptr [esp + 0x18], eax
// 00628921  e89a9cfeff           call 0x6125c0
// 00628926  8b33                 mov esi, dword ptr [ebx]
// 00628928  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0062892b  b903000000           mov ecx, 3
// 00628930  83c40c               add esp, 0xc
// 00628933  394808               cmp dword ptr [eax + 8], ecx
// 00628936  8d7e28               lea edi, [esi + 0x28]
// 00628939  750d                 jne 0x628948
// 0062893b  dd00                 fld qword ptr [eax]
// 0062893d  5f                   pop edi
// 0062893e  5e                   pop esi
// 0062893f  5d                   pop ebp
// 00628940  83c404               add esp, 4
// 00628943  e918840000           jmp 0x630d60
// 00628948  db4328               fild dword ptr [ebx + 0x28]
// 0062894b  894808               mov dword ptr [eax + 8], ecx
// 0062894e  dd18                 fstp qword ptr [eax]
// 00628950  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00628953  83c001               add eax, 1
// 00628956  3b07                 cmp eax, dword ptr [edi]
// 00628958  7e21                 jle 0x62897b
// 0062895a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0062895d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00628961  6854347c00           push 0x7c3454
// 00628966  68ffff0300           push 0x3ffff
// 0062896b  6a10                 push 0x10
// 0062896d  57                   push edi
// 0062896e  51                   push ecx
// 0062896f  52                   push edx
// 00628970  e8cbb0feff           call 0x613a40
// 00628975  83c418               add esp, 0x18
// 00628978  894608               mov dword ptr [esi + 8], eax
// 0062897b  3b2f                 cmp ebp, dword ptr [edi]
// 0062897d  7d18                 jge 0x628997
// 0062897f  8bc5                 mov eax, ebp
// 00628981  c1e004               shl eax, 4
// 00628984  33c9                 xor ecx, ecx
// 00628986  8b5608               mov edx, dword ptr [esi + 8]
// 00628989  894c1008             mov dword ptr [eax + edx + 8], ecx
// 0062898d  83c501               add ebp, 1
// 00628990  83c010               add eax, 0x10
// 00628993  3b2f                 cmp ebp, dword ptr [edi]
// 00628995  7cef                 jl 0x628986
// 00628997  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0062899a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062899e  8b11                 mov edx, dword ptr [ecx]
// 006289a0  c1e004               shl eax, 4
// 006289a3  034608               add eax, dword ptr [esi + 8]
// 006289a6  8910                 mov dword ptr [eax], edx
// 006289a8  8b5104               mov edx, dword ptr [ecx + 4]
// 006289ab  895004               mov dword ptr [eax + 4], edx
// 006289ae  8b5108               mov edx, dword ptr [ecx + 8]
// 006289b1  895008               mov dword ptr [eax + 8], edx
// 006289b4  b804000000           mov eax, 4
// 006289b9  394108               cmp dword ptr [ecx + 8], eax
// 006289bc  7c1c                 jl 0x6289da
// 006289be  8b09                 mov ecx, dword ptr [ecx]
// 006289c0  f6410503             test byte ptr [ecx + 5], 3
// 006289c4  7414                 je 0x6289da
// 006289c6  844605               test byte ptr [esi + 5], al
// 006289c9  740f                 je 0x6289da
// 006289cb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006289cf  51                   push ecx
// 006289d0  56                   push esi
// 006289d1  50                   push eax
// 006289d2  e81975feff           call 0x60fef0
// 006289d7  83c40c               add esp, 0xc
// 006289da  8b4328               mov eax, dword ptr [ebx + 0x28]
// 006289dd  5f                   pop edi
// 006289de  8d4801               lea ecx, [eax + 1]
// 006289e1  5e                   pop esi
// 006289e2  894b28               mov dword ptr [ebx + 0x28], ecx
// 006289e5  5d                   pop ebp
// 006289e6  59                   pop ecx
// 006289e7  c3                   ret 
// library lua-5.1.4/lcode.c (function _addk)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
