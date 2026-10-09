// roc 2007-03 00673020  unit: seg_00670000  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00673020
//
// 00673020  83ec20               sub esp, 0x20
// 00673023  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 00673028  53                   push ebx
// 00673029  55                   push ebp
// 0067302a  56                   push esi
// 0067302b  57                   push edi
// 0067302c  8bf1                 mov esi, ecx
// 0067302e  0f85ce000000         jne 0x673102
// 00673034  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00673038  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0067303c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00673040  53                   push ebx
// 00673041  8d442440             lea eax, [esp + 0x40]
// 00673045  50                   push eax
// 00673046  57                   push edi
// 00673047  55                   push ebp
// 00673048  897c2448             mov dword ptr [esp + 0x48], edi
// 0067304c  e8fffcffff           call 0x672d50
// 00673051  53                   push ebx
// 00673052  8d4c2440             lea ecx, [esp + 0x40]
// 00673056  51                   push ecx
// 00673057  6a00                 push 0
// 00673059  55                   push ebp
// 0067305a  8bce                 mov ecx, esi
// 0067305c  89442444             mov dword ptr [esp + 0x44], eax
// 00673060  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00673068  e8e3fcffff           call 0x672d50
// 0067306d  3b442434             cmp eax, dword ptr [esp + 0x34]
// 00673071  7462                 je 0x6730d5
// 00673073  85ff                 test edi, edi
// 00673075  7e5e                 jle 0x6730d5
// 00673077  eb07                 jmp 0x673080
// 00673079  8da42400000000       lea esp, [esp]
// 00673080  8b542440             mov edx, dword ptr [esp + 0x40]
// 00673084  8b442438             mov eax, dword ptr [esp + 0x38]
// 00673088  03c2                 add eax, edx
// 0067308a  99                   cdq 
// 0067308b  2bc2                 sub eax, edx
// 0067308d  53                   push ebx
// 0067308e  8bf8                 mov edi, eax
// 00673090  8d4c2440             lea ecx, [esp + 0x40]
// 00673094  51                   push ecx
// 00673095  d1ff                 sar edi, 1
// 00673097  57                   push edi
// 00673098  55                   push ebp
// 00673099  8bce                 mov ecx, esi
// 0067309b  e8b0fcffff           call 0x672d50
// 006730a0  3b442434             cmp eax, dword ptr [esp + 0x34]
// 006730a4  7506                 jne 0x6730ac
// 006730a6  897c2438             mov dword ptr [esp + 0x38], edi
// 006730aa  eb0a                 jmp 0x6730b6
// 006730ac  397c2440             cmp dword ptr [esp + 0x40], edi
// 006730b0  7410                 je 0x6730c2
// 006730b2  897c2440             mov dword ptr [esp + 0x40], edi
// 006730b6  8b542438             mov edx, dword ptr [esp + 0x38]
// 006730ba  39542440             cmp dword ptr [esp + 0x40], edx
// 006730be  7cc0                 jl 0x673080
// 006730c0  eb13                 jmp 0x6730d5
// 006730c2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006730c6  53                   push ebx
// 006730c7  8d442440             lea eax, [esp + 0x40]
// 006730cb  50                   push eax
// 006730cc  51                   push ecx
// 006730cd  55                   push ebp
// 006730ce  8bce                 mov ecx, esi
// 006730d0  e87bfcffff           call 0x672d50
// 006730d5  6a00                 push 0
// 006730d7  53                   push ebx
// 006730d8  55                   push ebp
// 006730d9  8d542424             lea edx, [esp + 0x24]
// 006730dd  52                   push edx
// 006730de  8bce                 mov ecx, esi
// 006730e0  e8cbfaffff           call 0x672bb0
// 006730e5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006730e9  53                   push ebx
// 006730ea  8d442440             lea eax, [esp + 0x40]
// 006730ee  50                   push eax
// 006730ef  51                   push ecx
// 006730f0  55                   push ebp
// 006730f1  8bce                 mov ecx, esi
// 006730f3  e858fcffff           call 0x672d50
// 006730f8  5f                   pop edi
// 006730f9  5e                   pop esi
// 006730fa  5d                   pop ebp
// 006730fb  5b                   pop ebx
// 006730fc  83c420               add esp, 0x20
// 006730ff  c21000               ret 0x10
// 00673102  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00673106  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0067310a  57                   push edi
// 0067310b  8d542440             lea edx, [esp + 0x40]
// 0067310f  52                   push edx
// 00673110  6a00                 push 0
// 00673112  53                   push ebx
// 00673113  e838fcffff           call 0x672d50
// 00673118  6a00                 push 0
// 0067311a  57                   push edi
// 0067311b  53                   push ebx
// 0067311c  8d442424             lea eax, [esp + 0x24]
// 00673120  50                   push eax
// 00673121  8bce                 mov ecx, esi
// 00673123  e888faffff           call 0x672bb0
// 00673128  8b4804               mov ecx, dword ptr [eax + 4]
// 0067312b  8b28                 mov ebp, dword ptr [eax]
// 0067312d  57                   push edi
// 0067312e  8d542440             lea edx, [esp + 0x40]
// 00673132  52                   push edx
// 00673133  68ff7f0000           push 0x7fff
// 00673138  894c2428             mov dword ptr [esp + 0x28], ecx
// 0067313c  53                   push ebx
// 0067313d  8bce                 mov ecx, esi
// 0067313f  e80cfcffff           call 0x672d50
// 00673144  6a00                 push 0
// 00673146  57                   push edi
// 00673147  53                   push ebx
// 00673148  8d44242c             lea eax, [esp + 0x2c]
// 0067314c  50                   push eax
// 0067314d  8bce                 mov ecx, esi
// 0067314f  e85cfaffff           call 0x672bb0
// 00673154  8b08                 mov ecx, dword ptr [eax]
// 00673156  3be9                 cmp ebp, ecx
// 00673158  8b5004               mov edx, dword ptr [eax + 4]
// 0067315b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067315f  89542414             mov dword ptr [esp + 0x14], edx
// 00673163  7d7f                 jge 0x6731e4
// 00673165  57                   push edi
// 00673166  8d442440             lea eax, [esp + 0x40]
// 0067316a  50                   push eax
// 0067316b  8d0429               lea eax, [ecx + ebp]
// 0067316e  99                   cdq 
// 0067316f  2bc2                 sub eax, edx
// 00673171  d1f8                 sar eax, 1
// 00673173  50                   push eax
// 00673174  53                   push ebx
// 00673175  8bce                 mov ecx, esi
// 00673177  e8d4fbffff           call 0x672d50
// 0067317c  6a00                 push 0
// 0067317e  57                   push edi
// 0067317f  53                   push ebx
// 00673180  8d4c242c             lea ecx, [esp + 0x2c]
// 00673184  51                   push ecx
// 00673185  8bce                 mov ecx, esi
// 00673187  e824faffff           call 0x672bb0
// 0067318c  8b10                 mov edx, dword ptr [eax]
// 0067318e  8b4804               mov ecx, dword ptr [eax + 4]
// 00673191  89542428             mov dword ptr [esp + 0x28], edx
// 00673195  8b542438             mov edx, dword ptr [esp + 0x38]
// 00673199  3bd1                 cmp edx, ecx
// 0067319b  7d19                 jge 0x6731b6
// 0067319d  8b08                 mov ecx, dword ptr [eax]
// 0067319f  3be9                 cmp ebp, ecx
// 006731a1  8b5004               mov edx, dword ptr [eax + 4]
// 006731a4  7506                 jne 0x6731ac
// 006731a6  3954241c             cmp dword ptr [esp + 0x1c], edx
// 006731aa  7425                 je 0x6731d1
// 006731ac  8bc2                 mov eax, edx
// 006731ae  8be9                 mov ebp, ecx
// 006731b0  8944241c             mov dword ptr [esp + 0x1c], eax
// 006731b4  eb0f                 jmp 0x6731c5
// 006731b6  7e2c                 jle 0x6731e4
// 006731b8  8b08                 mov ecx, dword ptr [eax]
// 006731ba  8b5004               mov edx, dword ptr [eax + 4]
// 006731bd  894c2410             mov dword ptr [esp + 0x10], ecx
// 006731c1  89542414             mov dword ptr [esp + 0x14], edx
// 006731c5  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 006731c9  7d19                 jge 0x6731e4
// 006731cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006731cf  eb94                 jmp 0x673165
// 006731d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006731d5  57                   push edi
// 006731d6  8d442440             lea eax, [esp + 0x40]
// 006731da  50                   push eax
// 006731db  51                   push ecx
// 006731dc  53                   push ebx
// 006731dd  8bce                 mov ecx, esi
// 006731df  e86cfbffff           call 0x672d50
// 006731e4  5f                   pop edi
// 006731e5  5e                   pop esi
// 006731e6  5d                   pop ebp
// 006731e7  5b                   pop ebx
// 006731e8  83c420               add esp, 0x20
// 006731eb  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
