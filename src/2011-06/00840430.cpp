// roc 2011-06 00840430  unit: CInstanceRecord::CNameItem  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840430
//
// 00840430  6aff                 push -1
// 00840432  68ea4ea000           push 0xa04eea
// 00840437  64a100000000         mov eax, dword ptr fs:[0]
// 0084043d  50                   push eax
// 0084043e  83ec30               sub esp, 0x30
// 00840441  53                   push ebx
// 00840442  55                   push ebp
// 00840443  56                   push esi
// 00840444  57                   push edi
// 00840445  a12058c900           mov eax, dword ptr [0xc95820]
// 0084044a  33c4                 xor eax, esp
// 0084044c  50                   push eax
// 0084044d  8d442444             lea eax, [esp + 0x44]
// 00840451  64a300000000         mov dword ptr fs:[0], eax
// 00840457  8bf1                 mov esi, ecx
// 00840459  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0084045d  85ed                 test ebp, ebp
// 0084045f  0f84bd010000         je 0x840622
// 00840465  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00840468  8bbb24020000         mov edi, dword ptr [ebx + 0x224]
// 0084046e  8b4508               mov eax, dword ptr [ebp + 8]
// 00840471  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00840474  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00840477  89442428             mov dword ptr [esp + 0x28], eax
// 0084047b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0084047e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00840482  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00840485  89542430             mov dword ptr [esp + 0x30], edx
// 00840489  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0084048c  89442434             mov dword ptr [esp + 0x34], eax
// 00840490  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00840493  895c2414             mov dword ptr [esp + 0x14], ebx
// 00840497  c74424209855ac00     mov dword ptr [esp + 0x20], 0xac5598
// 0084049f  895c2424             mov dword ptr [esp + 0x24], ebx
// 008404a3  894c2438             mov dword ptr [esp + 0x38], ecx
// 008404a7  8954243c             mov dword ptr [esp + 0x3c], edx
// 008404ab  89442440             mov dword ptr [esp + 0x40], eax
// 008404af  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008404b7  85ff                 test edi, edi
// 008404b9  0f8463010000         je 0x840622
// 008404bf  837f2000             cmp dword ptr [edi + 0x20], 0
// 008404c3  0f8459010000         je 0x840622
// 008404c9  397764               cmp dword ptr [edi + 0x64], esi
// 008404cc  0f8550010000         jne 0x840622
// 008404d2  8d4c2420             lea ecx, [esp + 0x20]
// 008404d6  e8a5e8ffff           call 0x83ed80
// 008404db  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 008404de  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008404e6  85c9                 test ecx, ecx
// 008404e8  740c                 je 0x8404f6
// 008404ea  e8eba0fcff           call 0x80a5da
// 008404ef  c7476400000000       mov dword ptr [edi + 0x64], 0
// 008404f6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008404fa  51                   push ecx
// 008404fb  8bce                 mov ecx, esi
// 008404fd  e80ef6ffff           call 0x83fb10
// 00840502  83782400             cmp dword ptr [eax + 0x24], 0
// 00840506  7425                 je 0x84052d
// 00840508  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0084050e  85c0                 test eax, eax
// 00840510  0f84cf000000         je 0x8405e5
// 00840516  8b16                 mov edx, dword ptr [esi]
// 00840518  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 0084051e  50                   push eax
// 0084051f  8d442424             lea eax, [esp + 0x24]
// 00840523  50                   push eax
// 00840524  8bce                 mov ecx, esi
// 00840526  ffd2                 call edx
// 00840528  e99e000000           jmp 0x8405cb
// 0084052d  8d4c2454             lea ecx, [esp + 0x54]
// 00840531  ff15b42da400         call dword ptr [0xa42db4]
// 00840537  8d442454             lea eax, [esp + 0x54]
// 0084053b  50                   push eax
// 0084053c  8bcf                 mov ecx, edi
// 0084053e  c644245001           mov byte ptr [esp + 0x50], 1
// 00840543  e8fea0fcff           call 0x80a646
// 00840548  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084054c  8b16                 mov edx, dword ptr [esi]
// 0084054e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00840551  50                   push eax
// 00840552  8d4c241c             lea ecx, [esp + 0x1c]
// 00840556  51                   push ecx
// 00840557  8bce                 mov ecx, esi
// 00840559  ffd2                 call edx
// 0084055b  8bd8                 mov ebx, eax
// 0084055d  8d4c2454             lea ecx, [esp + 0x54]
// 00840561  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00840566  ff15c82da400         call dword ptr [0xa42dc8]
// 0084056c  50                   push eax
// 0084056d  8bcb                 mov ecx, ebx
// 0084056f  ff15cc2da400         call dword ptr [0xa42dcc]
// 00840575  85c0                 test eax, eax
// 00840577  8d4c2418             lea ecx, [esp + 0x18]
// 0084057b  0f95c3               setne bl
// 0084057e  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00840583  ff15082ea400         call dword ptr [0xa42e08]
// 00840589  84db                 test bl, bl
// 0084058b  7423                 je 0x8405b0
// 0084058d  8b1e                 mov ebx, dword ptr [esi]
// 0084058f  8d4c2454             lea ecx, [esp + 0x54]
// 00840593  ff15c82da400         call dword ptr [0xa42dc8]
// 00840599  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0084059f  50                   push eax
// 008405a0  8d442424             lea eax, [esp + 0x24]
// 008405a4  50                   push eax
// 008405a5  8bce                 mov ecx, esi
// 008405a7  ffd2                 call edx
// 008405a9  bb01000000           mov ebx, 1
// 008405ae  eb04                 jmp 0x8405b4
// 008405b0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008405b4  8d4c2454             lea ecx, [esp + 0x54]
// 008405b8  c644244c00           mov byte ptr [esp + 0x4c], 0
// 008405bd  ff15082ea400         call dword ptr [0xa42e08]
// 008405c3  85db                 test ebx, ebx
// 008405c5  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008405c9  741a                 je 0x8405e5
// 008405cb  8bcb                 mov ecx, ebx
// 008405cd  e89e30ffff           call 0x833670
// 008405d2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008405d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008405da  6aff                 push -1
// 008405dc  6a00                 push 0
// 008405de  6ac7                 push -0x39
// 008405e0  50                   push eax
// 008405e1  56                   push esi
// 008405e2  51                   push ecx
// 008405e3  eb1e                 jmp 0x840603
// 008405e5  8b16                 mov edx, dword ptr [esi]
// 008405e7  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 008405ed  55                   push ebp
// 008405ee  8bce                 mov ecx, esi
// 008405f0  ffd0                 call eax
// 008405f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008405f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 008405fa  6aff                 push -1
// 008405fc  6a00                 push 0
// 008405fe  6ab8                 push -0x48
// 00840600  51                   push ecx
// 00840601  56                   push esi
// 00840602  52                   push edx
// 00840603  8bcb                 mov ecx, ebx
// 00840605  e8e66effff           call 0x8374f0
// 0084060a  8b4754               mov eax, dword ptr [edi + 0x54]
// 0084060d  8b5004               mov edx, dword ptr [eax + 4]
// 00840610  83c754               add edi, 0x54
// 00840613  6a00                 push 0
// 00840615  8bcf                 mov ecx, edi
// 00840617  ffd2                 call edx
// 00840619  8d4c2420             lea ecx, [esp + 0x20]
// 0084061d  e8eedfffff           call 0x83e610
// 00840622  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00840626  64890d00000000       mov dword ptr fs:[0], ecx
// 0084062d  59                   pop ecx
// 0084062e  5f                   pop edi
// 0084062f  5e                   pop esi
// 00840630  5d                   pop ebp
// 00840631  5b                   pop ebx
// 00840632  83c43c               add esp, 0x3c
// 00840635  c20400               ret 4
// copied from an identical function in another client (function ?OnValidateEdit@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp