// roc 2009-12 00892220  unit: CXTPDockBar  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892220
//
// 00892220  6aff                 push -1
// 00892222  6868139600           push 0x961368
// 00892227  64a100000000         mov eax, dword ptr fs:[0]
// 0089222d  50                   push eax
// 0089222e  83ec3c               sub esp, 0x3c
// 00892231  53                   push ebx
// 00892232  55                   push ebp
// 00892233  56                   push esi
// 00892234  57                   push edi
// 00892235  a10052b600           mov eax, dword ptr [0xb65200]
// 0089223a  33c4                 xor eax, esp
// 0089223c  50                   push eax
// 0089223d  8d442450             lea eax, [esp + 0x50]
// 00892241  64a300000000         mov dword ptr fs:[0], eax
// 00892247  8be9                 mov ebp, ecx
// 00892249  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089224d  8bc8                 mov ecx, eax
// 0089224f  83e102               and ecx, 2
// 00892252  83e001               and eax, 1
// 00892255  894c2468             mov dword ptr [esp + 0x68], ecx
// 00892259  740d                 je 0x892268
// 0089225b  33db                 xor ebx, ebx
// 0089225d  3bcb                 cmp ecx, ebx
// 0089225f  7507                 jne 0x892268
// 00892261  baff7f0000           mov edx, 0x7fff
// 00892266  eb04                 jmp 0x89226c
// 00892268  33db                 xor ebx, ebx
// 0089226a  33d2                 xor edx, edx
// 0089226c  3bc3                 cmp eax, ebx
// 0089226e  740b                 je 0x89227b
// 00892270  3bcb                 cmp ecx, ebx
// 00892272  7407                 je 0x89227b
// 00892274  b8ff7f0000           mov eax, 0x7fff
// 00892279  eb02                 jmp 0x89227d
// 0089227b  33c0                 xor eax, eax
// 0089227d  8b742460             mov esi, dword ptr [esp + 0x60]
// 00892281  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00892285  8906                 mov dword ptr [esi], eax
// 00892287  33c0                 xor eax, eax
// 00892289  3919                 cmp dword ptr [ecx], ebx
// 0089228b  895604               mov dword ptr [esi + 4], edx
// 0089228e  0f94c0               sete al
// 00892291  8bf8                 mov edi, eax
// 00892293  897c246c             mov dword ptr [esp + 0x6c], edi
// 00892297  3bfb                 cmp edi, ebx
// 00892299  7404                 je 0x89229f
// 0089229b  33c0                 xor eax, eax
// 0089229d  eb0a                 jmp 0x8922a9
// 0089229f  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008922a2  50                   push eax
// 008922a3  ff1574cb9800         call dword ptr [0x98cb74]
// 008922a9  837d6000             cmp dword ptr [ebp + 0x60], 0
// 008922ad  89442430             mov dword ptr [esp + 0x30], eax
// 008922b1  895c2414             mov dword ptr [esp + 0x14], ebx
// 008922b5  895c2418             mov dword ptr [esp + 0x18], ebx
// 008922b9  0f8eef000000         jle 0x8923ae
// 008922bf  8d4c241c             lea ecx, [esp + 0x1c]
// 008922c3  e85824f8ff           call 0x814720
// 008922c8  33ff                 xor edi, edi
// 008922ca  53                   push ebx
// 008922cb  8bcd                 mov ecx, ebp
// 008922cd  897c245c             mov dword ptr [esp + 0x5c], edi
// 008922d1  e85af3ffff           call 0x891630
// 008922d6  8bf0                 mov esi, eax
// 008922d8  3bf7                 cmp esi, edi
// 008922da  7432                 je 0x89230e
// 008922dc  8d642400             lea esp, [esp]
// 008922e0  8b16                 mov edx, dword ptr [esi]
// 008922e2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008922e8  8bce                 mov ecx, esi
// 008922ea  ffd0                 call eax
// 008922ec  85c0                 test eax, eax
// 008922ee  740f                 je 0x8922ff
// 008922f0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008922f4  56                   push esi
// 008922f5  51                   push ecx
// 008922f6  8d4c2424             lea ecx, [esp + 0x24]
// 008922fa  e87189fdff           call 0x86ac70
// 008922ff  43                   inc ebx
// 00892300  53                   push ebx
// 00892301  8bcd                 mov ecx, ebp
// 00892303  e828f3ffff           call 0x891630
// 00892308  8bf0                 mov esi, eax
// 0089230a  3bf7                 cmp esi, edi
// 0089230c  75d2                 jne 0x8922e0
// 0089230e  837c242400           cmp dword ptr [esp + 0x24], 0
// 00892313  7434                 je 0x892349
// 00892315  8b442468             mov eax, dword ptr [esp + 0x68]
// 00892319  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0089231d  8d542430             lea edx, [esp + 0x30]
// 00892321  52                   push edx
// 00892322  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00892326  50                   push eax
// 00892327  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089232b  51                   push ecx
// 0089232c  52                   push edx
// 0089232d  50                   push eax
// 0089232e  8d4c2430             lea ecx, [esp + 0x30]
// 00892332  51                   push ecx
// 00892333  8bcd                 mov ecx, ebp
// 00892335  e8d6fdffff           call 0x892110
// 0089233a  6aff                 push -1
// 0089233c  6a00                 push 0
// 0089233e  8d4c2424             lea ecx, [esp + 0x24]
// 00892342  8bf8                 mov edi, eax
// 00892344  e85730fcff           call 0x8553a0
// 00892349  85f6                 test esi, esi
// 0089234b  753a                 jne 0x892387
// 0089234d  85ff                 test edi, edi
// 0089234f  7436                 je 0x892387
// 00892351  8b542460             mov edx, dword ptr [esp + 0x60]
// 00892355  39742468             cmp dword ptr [esp + 0x68], esi
// 00892359  7418                 je 0x892373
// 0089235b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089235f  8b4a04               mov ecx, dword ptr [edx + 4]
// 00892362  03c7                 add eax, edi
// 00892364  3bc8                 cmp ecx, eax
// 00892366  89442418             mov dword ptr [esp + 0x18], eax
// 0089236a  7e02                 jle 0x89236e
// 0089236c  8bc1                 mov eax, ecx
// 0089236e  894204               mov dword ptr [edx + 4], eax
// 00892371  eb14                 jmp 0x892387
// 00892373  8b442414             mov eax, dword ptr [esp + 0x14]
// 00892377  8b0a                 mov ecx, dword ptr [edx]
// 00892379  03c7                 add eax, edi
// 0089237b  3bc8                 cmp ecx, eax
// 0089237d  89442414             mov dword ptr [esp + 0x14], eax
// 00892381  7e02                 jle 0x892385
// 00892383  8bc1                 mov eax, ecx
// 00892385  8902                 mov dword ptr [edx], eax
// 00892387  8d4c241c             lea ecx, [esp + 0x1c]
// 0089238b  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00892393  e8a823f8ff           call 0x814740
// 00892398  43                   inc ebx
// 00892399  3b5d60               cmp ebx, dword ptr [ebp + 0x60]
// 0089239c  0f8c1dffffff         jl 0x8922bf
// 008923a2  8b442430             mov eax, dword ptr [esp + 0x30]
// 008923a6  8b742460             mov esi, dword ptr [esp + 0x60]
// 008923aa  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008923ae  85ff                 test edi, edi
// 008923b0  750b                 jne 0x8923bd
// 008923b2  85c0                 test eax, eax
// 008923b4  7407                 je 0x8923bd
// 008923b6  50                   push eax
// 008923b7  ff156ccb9800         call dword ptr [0x98cb6c]
// 008923bd  8bc6                 mov eax, esi
// 008923bf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008923c3  64890d00000000       mov dword ptr fs:[0], ecx
// 008923ca  59                   pop ecx
// 008923cb  5f                   pop edi
// 008923cc  5e                   pop esi
// 008923cd  5d                   pop ebp
// 008923ce  5b                   pop ebx
// 008923cf  83c448               add esp, 0x48
// 008923d2  c21000               ret 0x10
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPDockBar@@IAE?AVCSize@@HKPAUAFX_SIZEPARENTPARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp