// roc 2010-06 00897f70  unit: CXTShadowHook  size: 1309 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897f70
//
// 00897f70  55                   push ebp
// 00897f71  8bec                 mov ebp, esp
// 00897f73  83e4c0               and esp, 0xffffffc0
// 00897f76  6aff                 push -1
// 00897f78  68039e9b00           push 0x9b9e03
// 00897f7d  64a100000000         mov eax, dword ptr fs:[0]
// 00897f83  50                   push eax
// 00897f84  81ece8000000         sub esp, 0xe8
// 00897f8a  53                   push ebx
// 00897f8b  56                   push esi
// 00897f8c  57                   push edi
// 00897f8d  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00897f92  33c4                 xor eax, esp
// 00897f94  50                   push eax
// 00897f95  8d8424f8000000       lea eax, [esp + 0xf8]
// 00897f9c  64a300000000         mov dword ptr fs:[0], eax
// 00897fa2  8bd9                 mov ebx, ecx
// 00897fa4  895c2448             mov dword ptr [esp + 0x48], ebx
// 00897fa8  e8c3fff0ff           call 0x7a7f70
// 00897fad  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00897fb0  85f6                 test esi, esi
// 00897fb2  0f84bd040000         je 0x898475
// 00897fb8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00897fbb  85ff                 test edi, edi
// 00897fbd  0f84b2040000         je 0x898475
// 00897fc3  837b6000             cmp dword ptr [ebx + 0x60], 0
// 00897fc7  0f84a8040000         je 0x898475
// 00897fcd  e80efcffff           call 0x897be0
// 00897fd2  8bc8                 mov ecx, eax
// 00897fd4  33c0                 xor eax, eax
// 00897fd6  394138               cmp dword ptr [ecx + 0x38], eax
// 00897fd9  0f8496040000         je 0x898475
// 00897fdf  53                   push ebx
// 00897fe0  8d8c2488000000       lea ecx, [esp + 0x88]
// 00897fe7  88442460             mov byte ptr [esp + 0x60], al
// 00897feb  88442461             mov byte ptr [esp + 0x61], al
// 00897fef  c6442462ff           mov byte ptr [esp + 0x62], 0xff
// 00897ff4  c644246301           mov byte ptr [esp + 0x63], 1
// 00897ff9  89442478             mov dword ptr [esp + 0x78], eax
// 00897ffd  8944247c             mov dword ptr [esp + 0x7c], eax
// 00898001  e82e08f1ff           call 0x7a8834
// 00898006  8d4c2464             lea ecx, [esp + 0x64]
// 0089800a  c784240001000000000000 mov dword ptr [esp + 0x100], 0
// 00898015  e8944d0e00           call 0x97cdae
// 0089801a  8d942484000000       lea edx, [esp + 0x84]
// 00898021  52                   push edx
// 00898022  8d4c2468             lea ecx, [esp + 0x68]
// 00898026  c684240401000001     mov byte ptr [esp + 0x104], 1
// 0089802e  e8bd5bf1ff           call 0x7adbf0
// 00898033  6a2c                 push 0x2c
// 00898035  8d84249c000000       lea eax, [esp + 0x9c]
// 0089803c  6a00                 push 0
// 0089803e  50                   push eax
// 0089803f  e8a00bf1ff           call 0x7a8be4
// 00898044  8bc6                 mov eax, esi
// 00898046  0fafc7               imul eax, edi
// 00898049  83c40c               add esp, 0xc
// 0089804c  6a00                 push 0
// 0089804e  b901000000           mov ecx, 1
// 00898053  6a00                 push 0
// 00898055  66898c24ac000000     mov word ptr [esp + 0xac], cx
// 0089805d  03c0                 add eax, eax
// 0089805f  8d4c244c             lea ecx, [esp + 0x4c]
// 00898063  51                   push ecx
// 00898064  ba20000000           mov edx, 0x20
// 00898069  03c0                 add eax, eax
// 0089806b  66899424b2000000     mov word ptr [esp + 0xb2], dx
// 00898073  6a00                 push 0
// 00898075  8d9424a8000000       lea edx, [esp + 0xa8]
// 0089807c  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00898083  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0089808a  52                   push edx
// 0089808b  50                   push eax
// 0089808c  c78424b000000028000000 mov dword ptr [esp + 0xb0], 0x28
// 00898097  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 0089809e  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 008980a5  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 008980b0  ff15b0a09e00         call dword ptr [0x9ea0b0]
// 008980b6  837c244400           cmp dword ptr [esp + 0x44], 0
// 008980bb  89442460             mov dword ptr [esp + 0x60], eax
// 008980bf  0f8488030000         je 0x89844d
// 008980c5  e84664f7ff           call 0x80e510
// 008980ca  8b4020               mov eax, dword ptr [eax + 0x20]
// 008980cd  83f802               cmp eax, 2
// 008980d0  7510                 jne 0x8980e2
// 008980d2  e849baf4ff           call 0x7e3b20
// 008980d7  6a3b                 push 0x3b
// 008980d9  8bc8                 mov ecx, eax
// 008980db  e800b4f4ff           call 0x7e34e0
// 008980e0  eb0e                 jmp 0x8980f0
// 008980e2  e839baf4ff           call 0x7e3b20
// 008980e7  6a3b                 push 0x3b
// 008980e9  8bc8                 mov ecx, eax
// 008980eb  e8c0b1f4ff           call 0x7e32b0
// 008980f0  0fb6c8               movzx ecx, al
// 008980f3  8bd0                 mov edx, eax
// 008980f5  c1ea08               shr edx, 8
// 008980f8  c1e810               shr eax, 0x10
// 008980fb  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008980ff  894c2454             mov dword ptr [esp + 0x54], ecx
// 00898103  0fb6ca               movzx ecx, dl
// 00898106  0fb6d0               movzx edx, al
// 00898109  894c2450             mov dword ptr [esp + 0x50], ecx
// 0089810d  89542458             mov dword ptr [esp + 0x58], edx
// 00898111  bb01000000           mov ebx, 1
// 00898116  0f8516010000         jne 0x898232
// 0089811c  8bc6                 mov eax, esi
// 0089811e  f7d8                 neg eax
// 00898120  03c0                 add eax, eax
// 00898122  03c0                 add eax, eax
// 00898124  4f                   dec edi
// 00898125  0faffe               imul edi, esi
// 00898128  8944244c             mov dword ptr [esp + 0x4c], eax
// 0089812c  8d04bd0c000000       lea eax, [edi*4 + 0xc]
// 00898133  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 0089813b  89442430             mov dword ptr [esp + 0x30], eax
// 0089813f  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00898147  8b742434             mov esi, dword ptr [esp + 0x34]
// 0089814b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0089814f  895c2438             mov dword ptr [esp + 0x38], ebx
// 00898153  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0089815b  db442438             fild dword ptr [esp + 0x38]
// 0089815f  83ec08               sub esp, 8
// 00898162  8d4c2460             lea ecx, [esp + 0x60]
// 00898166  8d542458             lea edx, [esp + 0x58]
// 0089816a  dc3540c9a400         fdiv qword ptr [0xa4c940]
// 00898170  8d44245c             lea eax, [esp + 0x5c]
// 00898174  dd1c24               fstp qword ptr [esp]
// 00898177  51                   push ecx
// 00898178  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089817c  52                   push edx
// 0089817d  50                   push eax
// 0089817e  e88dc0fdff           call 0x874210
// 00898183  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00898187  015c2438             add dword ptr [esp + 0x38], ebx
// 0089818b  03c6                 add eax, esi
// 0089818d  03742434             add esi, dword ptr [esp + 0x34]
// 00898191  89040f               mov dword ptr [edi + ecx], eax
// 00898194  037c244c             add edi, dword ptr [esp + 0x4c]
// 00898198  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0089819d  75bc                 jne 0x89815b
// 0089819f  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008981a7  836c243004           sub dword ptr [esp + 0x30], 4
// 008981ac  43                   inc ebx
// 008981ad  836c244001           sub dword ptr [esp + 0x40], 1
// 008981b2  7593                 jne 0x898147
// 008981b4  bf03000000           mov edi, 3
// 008981b9  c744243001000000     mov dword ptr [esp + 0x30], 1
// 008981c1  db442430             fild dword ptr [esp + 0x30]
// 008981c5  83ec08               sub esp, 8
// 008981c8  8d542460             lea edx, [esp + 0x60]
// 008981cc  8d442458             lea eax, [esp + 0x58]
// 008981d0  dc0db0c2a100         fmul qword ptr [0xa1c2b0]
// 008981d6  8d4c245c             lea ecx, [esp + 0x5c]
// 008981da  dd1c24               fstp qword ptr [esp]
// 008981dd  52                   push edx
// 008981de  50                   push eax
// 008981df  51                   push ecx
// 008981e0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008981e4  e827c0fdff           call 0x874210
// 008981e9  ba04000000           mov edx, 4
// 008981ee  2bd7                 sub edx, edi
// 008981f0  69d20000000f         imul edx, edx, 0xf000000
// 008981f6  03c2                 add eax, edx
// 008981f8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008981fb  83c2fc               add edx, -4
// 008981fe  85d2                 test edx, edx
// 00898200  7e1c                 jle 0x89821e
// 00898202  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00898205  03f6                 add esi, esi
// 00898207  03f6                 add esi, esi
// 00898209  8d0cbd00000000       lea ecx, [edi*4]
// 00898210  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00898214  890419               mov dword ptr [ecx + ebx], eax
// 00898217  03ce                 add ecx, esi
// 00898219  83ea01               sub edx, 1
// 0089821c  75f2                 jne 0x898210
// 0089821e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00898222  40                   inc eax
// 00898223  4f                   dec edi
// 00898224  83f804               cmp eax, 4
// 00898227  89442430             mov dword ptr [esp + 0x30], eax
// 0089822b  7e94                 jle 0x8981c1
// 0089822d  e99e010000           jmp 0x8983d0
// 00898232  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0089823a  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00898242  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0089824a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0089824e  8b742434             mov esi, dword ptr [esp + 0x34]
// 00898252  895c2430             mov dword ptr [esp + 0x30], ebx
// 00898256  c744244004000000     mov dword ptr [esp + 0x40], 4
// 0089825e  db442430             fild dword ptr [esp + 0x30]
// 00898262  83ec08               sub esp, 8
// 00898265  8d442460             lea eax, [esp + 0x60]
// 00898269  8d4c2458             lea ecx, [esp + 0x58]
// 0089826d  dc3540c9a400         fdiv qword ptr [0xa4c940]
// 00898273  8d54245c             lea edx, [esp + 0x5c]
// 00898277  dd1c24               fstp qword ptr [esp]
// 0089827a  50                   push eax
// 0089827b  51                   push ecx
// 0089827c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00898280  52                   push edx
// 00898281  e88abffdff           call 0x874210
// 00898286  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089828a  015c2430             add dword ptr [esp + 0x30], ebx
// 0089828e  03c6                 add eax, esi
// 00898290  03742434             add esi, dword ptr [esp + 0x34]
// 00898294  89040f               mov dword ptr [edi + ecx], eax
// 00898297  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0089829a  03c0                 add eax, eax
// 0089829c  03c0                 add eax, eax
// 0089829e  03f8                 add edi, eax
// 008982a0  836c244001           sub dword ptr [esp + 0x40], 1
// 008982a5  75b7                 jne 0x89825e
// 008982a7  8344243804           add dword ptr [esp + 0x38], 4
// 008982ac  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008982b4  43                   inc ebx
// 008982b5  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008982ba  758e                 jne 0x89824a
// 008982bc  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008982bf  33c0                 xor eax, eax
// 008982c1  be0000000f           mov esi, 0xf000000
// 008982c6  c744243010000000     mov dword ptr [esp + 0x30], 0x10
// 008982ce  8d5801               lea ebx, [eax + 1]
// 008982d1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008982d5  db44244c             fild dword ptr [esp + 0x4c]
// 008982d9  83ec08               sub esp, 8
// 008982dc  8d542460             lea edx, [esp + 0x60]
// 008982e0  8d442458             lea eax, [esp + 0x58]
// 008982e4  dc0db0c2a100         fmul qword ptr [0xa1c2b0]
// 008982ea  8d4c245c             lea ecx, [esp + 0x5c]
// 008982ee  dd1c24               fstp qword ptr [esp]
// 008982f1  52                   push edx
// 008982f2  50                   push eax
// 008982f3  51                   push ecx
// 008982f4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008982f8  e813bffdff           call 0x874210
// 008982fd  8d57fc               lea edx, [edi - 4]
// 00898300  03c6                 add eax, esi
// 00898302  83fa04               cmp edx, 4
// 00898305  7e1b                 jle 0x898322
// 00898307  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089830b  83c2fc               add edx, -4
// 0089830e  8bff                 mov edi, edi
// 00898310  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00898314  890439               mov dword ptr [ecx + edi], eax
// 00898317  83c104               add ecx, 4
// 0089831a  83ea01               sub edx, 1
// 0089831d  75f1                 jne 0x898310
// 0089831f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00898322  8d0cbd00000000       lea ecx, [edi*4]
// 00898329  014c2430             add dword ptr [esp + 0x30], ecx
// 0089832d  81c60000000f         add esi, 0xf000000
// 00898333  81fe0000004b         cmp esi, 0x4b000000
// 00898339  8bc3                 mov eax, ebx
// 0089833b  7c91                 jl 0x8982ce
// 0089833d  8d04bd00000000       lea eax, [edi*4]
// 00898344  bb01000000           mov ebx, 1
// 00898349  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00898351  89442438             mov dword ptr [esp + 0x38], eax
// 00898355  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0089835d  8b742434             mov esi, dword ptr [esp + 0x34]
// 00898361  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00898365  895c2430             mov dword ptr [esp + 0x30], ebx
// 00898369  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00898371  db442430             fild dword ptr [esp + 0x30]
// 00898375  83ec08               sub esp, 8
// 00898378  8d542460             lea edx, [esp + 0x60]
// 0089837c  8d442458             lea eax, [esp + 0x58]
// 00898380  dc3540c9a400         fdiv qword ptr [0xa4c940]
// 00898386  8d4c245c             lea ecx, [esp + 0x5c]
// 0089838a  dd1c24               fstp qword ptr [esp]
// 0089838d  52                   push edx
// 0089838e  50                   push eax
// 0089838f  51                   push ecx
// 00898390  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00898394  e877befdff           call 0x874210
// 00898399  8b542444             mov edx, dword ptr [esp + 0x44]
// 0089839d  015c2430             add dword ptr [esp + 0x30], ebx
// 008983a1  03c6                 add eax, esi
// 008983a3  03742434             add esi, dword ptr [esp + 0x34]
// 008983a7  894417fc             mov dword ptr [edi + edx - 4], eax
// 008983ab  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008983ae  03c0                 add eax, eax
// 008983b0  03c0                 add eax, eax
// 008983b2  03f8                 add edi, eax
// 008983b4  836c244001           sub dword ptr [esp + 0x40], 1
// 008983b9  75b6                 jne 0x898371
// 008983bb  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008983c3  836c243804           sub dword ptr [esp + 0x38], 4
// 008983c8  43                   inc ebx
// 008983c9  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008983ce  758d                 jne 0x89835d
// 008983d0  8b442460             mov eax, dword ptr [esp + 0x60]
// 008983d4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008983d8  8b35c8a09e00         mov esi, dword ptr [0x9ea0c8]
// 008983de  50                   push eax
// 008983df  51                   push ecx
// 008983e0  ffd6                 call esi
// 008983e2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008983e5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008983e9  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008983ed  8bf8                 mov edi, eax
// 008983ef  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008983f2  8954247c             mov dword ptr [esp + 0x7c], edx
// 008983f6  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008983f9  89842480000000       mov dword ptr [esp + 0x80], eax
// 00898400  8954244c             mov dword ptr [esp + 0x4c], edx
// 00898404  e8d7f7ffff           call 0x897be0
// 00898409  8b4038               mov eax, dword ptr [eax + 0x38]
// 0089840c  6a02                 push 2
// 0089840e  8d4c2460             lea ecx, [esp + 0x60]
// 00898412  51                   push ecx
// 00898413  6a00                 push 0
// 00898415  8d942480000000       lea edx, [esp + 0x80]
// 0089841c  52                   push edx
// 0089841d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00898421  53                   push ebx
// 00898422  8d8c2490000000       lea ecx, [esp + 0x90]
// 00898429  51                   push ecx
// 0089842a  6a00                 push 0
// 0089842c  6a00                 push 0
// 0089842e  52                   push edx
// 0089842f  ffd0                 call eax
// 00898431  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00898435  57                   push edi
// 00898436  51                   push ecx
// 00898437  ffd6                 call esi
// 00898439  8b542460             mov edx, dword ptr [esp + 0x60]
// 0089843d  52                   push edx
// 0089843e  ff15d4a09e00         call dword ptr [0x9ea0d4]
// 00898444  8d4c2464             lea ecx, [esp + 0x64]
// 00898448  e86b4e0e00           call 0x97d2b8
// 0089844d  8d4c2464             lea ecx, [esp + 0x64]
// 00898451  c684240001000000     mov byte ptr [esp + 0x100], 0
// 00898459  e84a490e00           call 0x97cda8
// 0089845e  8d8c2484000000       lea ecx, [esp + 0x84]
// 00898465  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 00898470  e8b903f1ff           call 0x7a882e
// 00898475  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 0089847c  64890d00000000       mov dword ptr fs:[0], ecx
// 00898483  59                   pop ecx
// 00898484  5f                   pop edi
// 00898485  5e                   pop esi
// 00898486  5b                   pop ebx
// 00898487  8be5                 mov esp, ebp
// 00898489  5d                   pop ebp
// 0089848a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTShadowWnd@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp