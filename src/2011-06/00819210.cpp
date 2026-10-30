// roc 2011-06 00819210  unit: CPatchedControlComboBox  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00819210
//
// 00819210  6aff                 push -1
// 00819212  68322ba000           push 0xa02b32
// 00819217  64a100000000         mov eax, dword ptr fs:[0]
// 0081921d  50                   push eax
// 0081921e  83ec14               sub esp, 0x14
// 00819221  53                   push ebx
// 00819222  55                   push ebp
// 00819223  56                   push esi
// 00819224  57                   push edi
// 00819225  a12058c900           mov eax, dword ptr [0xc95820]
// 0081922a  33c4                 xor eax, esp
// 0081922c  50                   push eax
// 0081922d  8d442428             lea eax, [esp + 0x28]
// 00819231  64a300000000         mov dword ptr fs:[0], eax
// 00819237  8bf1                 mov esi, ecx
// 00819239  8bae84010000         mov ebp, dword ptr [esi + 0x184]
// 0081923f  e82ce9ffff           call 0x817b70
// 00819244  83bedc01000000       cmp dword ptr [esi + 0x1dc], 0
// 0081924b  8bf8                 mov edi, eax
// 0081924d  0f8534010000         jne 0x819387
// 00819253  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0081925a  0f8427010000         je 0x819387
// 00819260  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 00819267  0f851a010000         jne 0x819387
// 0081926d  85ed                 test ebp, ebp
// 0081926f  0f8412010000         je 0x819387
// 00819275  837d2000             cmp dword ptr [ebp + 0x20], 0
// 00819279  0f8408010000         je 0x819387
// 0081927f  85ff                 test edi, edi
// 00819281  0f8400010000         je 0x819387
// 00819287  8d442418             lea eax, [esp + 0x18]
// 0081928b  50                   push eax
// 0081928c  8bce                 mov ecx, esi
// 0081928e  e8dde1ffff           call 0x817470
// 00819293  8d4c2418             lea ecx, [esp + 0x18]
// 00819297  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0081929f  ff15a826a400         call dword ptr [0xa426a8]
// 008192a5  8bd8                 mov ebx, eax
// 008192a7  33c0                 xor eax, eax
// 008192a9  3bd8                 cmp ebx, eax
// 008192ab  895c2424             mov dword ptr [esp + 0x24], ebx
// 008192af  0f8eb6000000         jle 0x81936b
// 008192b5  8d4c241c             lea ecx, [esp + 0x1c]
// 008192b9  51                   push ecx
// 008192ba  8d542424             lea edx, [esp + 0x24]
// 008192be  52                   push edx
// 008192bf  8bcd                 mov ecx, ebp
// 008192c1  89442428             mov dword ptr [esp + 0x28], eax
// 008192c5  89442424             mov dword ptr [esp + 0x24], eax
// 008192c9  e822daffff           call 0x816cf0
// 008192ce  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008192d2  39442420             cmp dword ptr [esp + 0x20], eax
// 008192d6  0f858f000000         jne 0x81936b
// 008192dc  3bd8                 cmp ebx, eax
// 008192de  0f8587000000         jne 0x81936b
// 008192e4  8b1f                 mov ebx, dword ptr [edi]
// 008192e6  8d4c2418             lea ecx, [esp + 0x18]
// 008192ea  ff15c82da400         call dword ptr [0xa42dc8]
// 008192f0  50                   push eax
// 008192f1  8b8314020000         mov eax, dword ptr [ebx + 0x214]
// 008192f7  6a00                 push 0
// 008192f9  8bcf                 mov ecx, edi
// 008192fb  ffd0                 call eax
// 008192fd  8bd8                 mov ebx, eax
// 008192ff  83fbff               cmp ebx, -1
// 00819302  7467                 je 0x81936b
// 00819304  8d4c2414             lea ecx, [esp + 0x14]
// 00819308  ff15b42da400         call dword ptr [0xa42db4]
// 0081930e  8b17                 mov edx, dword ptr [edi]
// 00819310  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 00819316  8d442414             lea eax, [esp + 0x14]
// 0081931a  50                   push eax
// 0081931b  53                   push ebx
// 0081931c  8bcf                 mov ecx, edi
// 0081931e  c644243801           mov byte ptr [esp + 0x38], 1
// 00819323  ffd2                 call edx
// 00819325  8d442414             lea eax, [esp + 0x14]
// 00819329  50                   push eax
// 0081932a  8bce                 mov ecx, esi
// 0081932c  e89fe1ffff           call 0x8174d0
// 00819331  8d4c2414             lea ecx, [esp + 0x14]
// 00819335  ff15a826a400         call dword ptr [0xa426a8]
// 0081933b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081933f  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00819342  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 00819348  51                   push ecx
// 00819349  50                   push eax
// 0081934a  68b1000000           push 0xb1
// 0081934f  52                   push edx
// 00819350  ffd7                 call edi
// 00819352  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00819355  6a00                 push 0
// 00819357  6a00                 push 0
// 00819359  68b7000000           push 0xb7
// 0081935e  50                   push eax
// 0081935f  ffd7                 call edi
// 00819361  8d4c2414             lea ecx, [esp + 0x14]
// 00819365  ff15082ea400         call dword ptr [0xa42e08]
// 0081936b  8d4c2418             lea ecx, [esp + 0x18]
// 0081936f  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 00819379  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00819381  ff15082ea400         call dword ptr [0xa42e08]
// 00819387  8bce                 mov ecx, esi
// 00819389  e882fdffff           call 0x819110
// 0081938e  6a05                 push 5
// 00819390  8bce                 mov ecx, esi
// 00819392  e8b958ffff           call 0x80ec50
// 00819397  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081939b  64890d00000000       mov dword ptr fs:[0], ecx
// 008193a2  59                   pop ecx
// 008193a3  5f                   pop edi
// 008193a4  5e                   pop esi
// 008193a5  5d                   pop ebp
// 008193a6  5b                   pop ebx
// 008193a7  83c420               add esp, 0x20
// 008193aa  c3                   ret 
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlComboBox@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp