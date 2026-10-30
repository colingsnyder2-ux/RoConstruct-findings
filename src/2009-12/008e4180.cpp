// roc 2009-12 008e4180  unit: PAVCXTShadowWnd::?$CList  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4180
//
// 008e4180  6aff                 push -1
// 008e4182  68345f9600           push 0x965f34
// 008e4187  64a100000000         mov eax, dword ptr fs:[0]
// 008e418d  50                   push eax
// 008e418e  51                   push ecx
// 008e418f  53                   push ebx
// 008e4190  55                   push ebp
// 008e4191  56                   push esi
// 008e4192  57                   push edi
// 008e4193  a10052b600           mov eax, dword ptr [0xb65200]
// 008e4198  33c4                 xor eax, esp
// 008e419a  50                   push eax
// 008e419b  8d442418             lea eax, [esp + 0x18]
// 008e419f  64a300000000         mov dword ptr fs:[0], eax
// 008e41a5  8be9                 mov ebp, ecx
// 008e41a7  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008e41ab  753a                 jne 0x8e41e7
// 008e41ad  6884000000           push 0x84
// 008e41b2  e8a9f6f0ff           call 0x7f3860
// 008e41b7  83c404               add esp, 4
// 008e41ba  89442414             mov dword ptr [esp + 0x14], eax
// 008e41be  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008e41c6  85c0                 test eax, eax
// 008e41c8  7411                 je 0x8e41db
// 008e41ca  8bc8                 mov ecx, eax
// 008e41cc  e8efedffff           call 0x8e2fc0
// 008e41d1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008e41d9  eb14                 jmp 0x8e41ef
// 008e41db  33c0                 xor eax, eax
// 008e41dd  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008e41e5  eb08                 jmp 0x8e41ef
// 008e41e7  8d4d1c               lea ecx, [ebp + 0x1c]
// 008e41ea  e881e8fdff           call 0x8c2a70
// 008e41ef  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008e41f3  8bf0                 mov esi, eax
// 008e41f5  895e68               mov dword ptr [esi + 0x68], ebx
// 008e41f8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008e41fc  89466c               mov dword ptr [esi + 0x6c], eax
// 008e41ff  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e4203  894e70               mov dword ptr [esi + 0x70], ecx
// 008e4206  8b542444             mov edx, dword ptr [esp + 0x44]
// 008e420a  895674               mov dword ptr [esi + 0x74], edx
// 008e420d  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e4211  894678               mov dword ptr [esi + 0x78], eax
// 008e4214  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e4218  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e421c  83ec10               sub esp, 0x10
// 008e421f  8bc4                 mov eax, esp
// 008e4221  8908                 mov dword ptr [eax], ecx
// 008e4223  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e4227  895004               mov dword ptr [eax + 4], edx
// 008e422a  8b542448             mov edx, dword ptr [esp + 0x48]
// 008e422e  894808               mov dword ptr [eax + 8], ecx
// 008e4231  89500c               mov dword ptr [eax + 0xc], edx
// 008e4234  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e4238  50                   push eax
// 008e4239  8bce                 mov ecx, esi
// 008e423b  e850f8ffff           call 0x8e3a90
// 008e4240  6a14                 push 0x14
// 008e4242  e819f6f0ff           call 0x7f3860
// 008e4247  8bf8                 mov edi, eax
// 008e4249  83c404               add esp, 4
// 008e424c  897c244c             mov dword ptr [esp + 0x4c], edi
// 008e4250  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008e4258  85ff                 test edi, edi
// 008e425a  7414                 je 0x8e4270
// 008e425c  8bcf                 mov ecx, edi
// 008e425e  e88df60000           call 0x8f38f0
// 008e4263  c707f4c0a000         mov dword ptr [edi], 0xa0c0f4
// 008e4269  897710               mov dword ptr [edi + 0x10], esi
// 008e426c  8bcf                 mov ecx, edi
// 008e426e  eb02                 jmp 0x8e4272
// 008e4270  33c9                 xor ecx, ecx
// 008e4272  898e80000000         mov dword ptr [esi + 0x80], ecx
// 008e4278  8b11                 mov edx, dword ptr [ecx]
// 008e427a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008e427d  53                   push ebx
// 008e427e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008e4286  ffd0                 call eax
// 008e4288  56                   push esi
// 008e4289  8bcd                 mov ecx, ebp
// 008e428b  e8a0f4ffff           call 0x8e3730
// 008e4290  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e4294  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e4298  83ec10               sub esp, 0x10
// 008e429b  8bc4                 mov eax, esp
// 008e429d  8908                 mov dword ptr [eax], ecx
// 008e429f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e42a3  895004               mov dword ptr [eax + 4], edx
// 008e42a6  8b542458             mov edx, dword ptr [esp + 0x58]
// 008e42aa  894808               mov dword ptr [eax + 8], ecx
// 008e42ad  8bce                 mov ecx, esi
// 008e42af  89500c               mov dword ptr [eax + 0xc], edx
// 008e42b2  e8e9f0ffff           call 0x8e33a0
// 008e42b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e42ba  8b3dc0c99800         mov edi, dword ptr [0x98c9c0]
// 008e42c0  6a00                 push 0
// 008e42c2  6af8                 push -8
// 008e42c4  50                   push eax
// 008e42c5  ffd7                 call edi
// 008e42c7  837e6400             cmp dword ptr [esi + 0x64], 0
// 008e42cb  745b                 je 0x8e4328
// 008e42cd  8b0d80d79800         mov ecx, dword ptr [0x98d780]
// 008e42d3  6a13                 push 0x13
// 008e42d5  6a00                 push 0
// 008e42d7  6a00                 push 0
// 008e42d9  6a00                 push 0
// 008e42db  6a00                 push 0
// 008e42dd  51                   push ecx
// 008e42de  8bce                 mov ecx, esi
// 008e42e0  e847f9f0ff           call 0x7f3c2c
// 008e42e5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e42e8  85c9                 test ecx, ecx
// 008e42ea  7410                 je 0x8e42fc
// 008e42ec  8b11                 mov edx, dword ptr [ecx]
// 008e42ee  8b4204               mov eax, dword ptr [edx + 4]
// 008e42f1  6a01                 push 1
// 008e42f3  ffd0                 call eax
// 008e42f5  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 008e42fc  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008e4302  50                   push eax
// 008e4303  e822f8f0ff           call 0x7f3b2a
// 008e4308  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e430b  6a00                 push 0
// 008e430d  6a00                 push 0
// 008e430f  51                   push ecx
// 008e4310  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e4316  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e4319  6a00                 push 0
// 008e431b  6a01                 push 1
// 008e431d  6a01                 push 1
// 008e431f  52                   push edx
// 008e4320  ff1558cc9800         call dword ptr [0x98cc58]
// 008e4326  eb17                 jmp 0x8e433f
// 008e4328  a180d79800           mov eax, dword ptr [0x98d780]
// 008e432d  6a53                 push 0x53
// 008e432f  6a00                 push 0
// 008e4331  6a00                 push 0
// 008e4333  6a00                 push 0
// 008e4335  6a00                 push 0
// 008e4337  50                   push eax
// 008e4338  8bce                 mov ecx, esi
// 008e433a  e8edf8f0ff           call 0x7f3c2c
// 008e433f  e8d2fcf0ff           call 0x7f4016
// 008e4344  85c0                 test eax, eax
// 008e4346  740b                 je 0x8e4353
// 008e4348  8b10                 mov edx, dword ptr [eax]
// 008e434a  8bc8                 mov ecx, eax
// 008e434c  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008e434f  ffd0                 call eax
// 008e4351  eb02                 jmp 0x8e4355
// 008e4353  33c0                 xor eax, eax
// 008e4355  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e4358  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e435b  51                   push ecx
// 008e435c  6af8                 push -8
// 008e435e  52                   push edx
// 008e435f  ffd7                 call edi
// 008e4361  8bc6                 mov eax, esi
// 008e4363  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e4367  64890d00000000       mov dword ptr fs:[0], ecx
// 008e436e  59                   pop ecx
// 008e436f  5f                   pop edi
// 008e4370  5e                   pop esi
// 008e4371  5d                   pop ebp
// 008e4372  5b                   pop ebx
// 008e4373  83c410               add esp, 0x10
// 008e4376  c22800               ret 0x28
// copied from an identical function in another client (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HVCRect@@0PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp