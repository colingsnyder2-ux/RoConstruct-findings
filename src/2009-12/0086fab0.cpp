// roc 2009-12 0086fab0  unit: CXTPNewToolbarDlg  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086fab0
//
// 0086fab0  6aff                 push -1
// 0086fab2  68e3fb9500           push 0x95fbe3
// 0086fab7  64a100000000         mov eax, dword ptr fs:[0]
// 0086fabd  50                   push eax
// 0086fabe  83ec10               sub esp, 0x10
// 0086fac1  53                   push ebx
// 0086fac2  55                   push ebp
// 0086fac3  56                   push esi
// 0086fac4  57                   push edi
// 0086fac5  a10052b600           mov eax, dword ptr [0xb65200]
// 0086faca  33c4                 xor eax, esp
// 0086facc  50                   push eax
// 0086facd  8d442424             lea eax, [esp + 0x24]
// 0086fad1  64a300000000         mov dword ptr fs:[0], eax
// 0086fad7  8bf1                 mov esi, ecx
// 0086fad9  33ed                 xor ebp, ebp
// 0086fadb  6a01                 push 1
// 0086fadd  896c2418             mov dword ptr [esp + 0x18], ebp
// 0086fae1  e80240f8ff           call 0x7f3ae8
// 0086fae6  8d5e78               lea ebx, [esi + 0x78]
// 0086fae9  8bcb                 mov ecx, ebx
// 0086faeb  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0086faef  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0086faf5  84c0                 test al, al
// 0086faf7  7427                 je 0x86fb20
// 0086faf9  6a10                 push 0x10
// 0086fafb  68cc230000           push 0x23cc
// 0086fb00  e89bedffff           call 0x86e8a0
// 0086fb05  8bc8                 mov ecx, eax
// 0086fb07  e804e8ffff           call 0x86e310
// 0086fb0c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086fb10  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fb17  59                   pop ecx
// 0086fb18  5f                   pop edi
// 0086fb19  5e                   pop esi
// 0086fb1a  5d                   pop ebp
// 0086fb1b  5b                   pop ebx
// 0086fb1c  83c41c               add esp, 0x1c
// 0086fb1f  c3                   ret 
// 0086fb20  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0086fb26  c7467400e80000       mov dword ptr [esi + 0x74], 0xe800
// 0086fb2d  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0086fb33  3bc5                 cmp eax, ebp
// 0086fb35  89442418             mov dword ptr [esp + 0x18], eax
// 0086fb39  0f8ea2000000         jle 0x86fbe1
// 0086fb3f  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0086fb45  55                   push ebp
// 0086fb46  e89551faff           call 0x814ce0
// 0086fb4b  85c0                 test eax, eax
// 0086fb4d  745f                 je 0x86fbae
// 0086fb4f  8b7e7c               mov edi, dword ptr [esi + 0x7c]
// 0086fb52  85ff                 test edi, edi
// 0086fb54  7522                 jne 0x86fb78
// 0086fb56  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 0086fb5c  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0086fb5f  3bd1                 cmp edx, ecx
// 0086fb61  7515                 jne 0x86fb78
// 0086fb63  8d4101               lea eax, [ecx + 1]
// 0086fb66  3dffe80000           cmp eax, 0xe8ff
// 0086fb6b  894674               mov dword ptr [esi + 0x74], eax
// 0086fb6e  0f8d88000000         jge 0x86fbfc
// 0086fb74  33ed                 xor ebp, ebp
// 0086fb76  eb5f                 jmp 0x86fbd7
// 0086fb78  3bf8                 cmp edi, eax
// 0086fb7a  7432                 je 0x86fbae
// 0086fb7c  8d4c2420             lea ecx, [esp + 0x20]
// 0086fb80  51                   push ecx
// 0086fb81  8bc8                 mov ecx, eax
// 0086fb83  e8f8d9f8ff           call 0x7fd580
// 0086fb88  834c241401           or dword ptr [esp + 0x14], 1
// 0086fb8d  8bc8                 mov ecx, eax
// 0086fb8f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0086fb97  ff1580de9800         call dword ptr [0x98de80]
// 0086fb9d  50                   push eax
// 0086fb9e  8bcb                 mov ecx, ebx
// 0086fba0  ff1584de9800         call dword ptr [0x98de84]
// 0086fba6  85c0                 test eax, eax
// 0086fba8  7504                 jne 0x86fbae
// 0086fbaa  b301                 mov bl, 1
// 0086fbac  eb02                 jmp 0x86fbb0
// 0086fbae  32db                 xor bl, bl
// 0086fbb0  f644241401           test byte ptr [esp + 0x14], 1
// 0086fbb5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0086fbbd  740f                 je 0x86fbce
// 0086fbbf  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 0086fbc4  8d4c2420             lea ecx, [esp + 0x20]
// 0086fbc8  ff15c0de9800         call dword ptr [0x98dec0]
// 0086fbce  84db                 test bl, bl
// 0086fbd0  7558                 jne 0x86fc2a
// 0086fbd2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0086fbd6  45                   inc ebp
// 0086fbd7  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0086fbdb  0f8c5effffff         jl 0x86fb3f
// 0086fbe1  8bce                 mov ecx, esi
// 0086fbe3  e84c3ef8ff           call 0x7f3a34
// 0086fbe8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086fbec  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fbf3  59                   pop ecx
// 0086fbf4  5f                   pop edi
// 0086fbf5  5e                   pop esi
// 0086fbf6  5d                   pop ebp
// 0086fbf7  5b                   pop ebx
// 0086fbf8  83c41c               add esp, 0x1c
// 0086fbfb  c3                   ret 
// 0086fbfc  6a10                 push 0x10
// 0086fbfe  68cd230000           push 0x23cd
// 0086fc03  e898ecffff           call 0x86e8a0
// 0086fc08  8bc8                 mov ecx, eax
// 0086fc0a  e801e7ffff           call 0x86e310
// 0086fc0f  8bce                 mov ecx, esi
// 0086fc11  e8243ef8ff           call 0x7f3a3a
// 0086fc16  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086fc1a  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fc21  59                   pop ecx
// 0086fc22  5f                   pop edi
// 0086fc23  5e                   pop esi
// 0086fc24  5d                   pop ebp
// 0086fc25  5b                   pop ebx
// 0086fc26  83c41c               add esp, 0x1c
// 0086fc29  c3                   ret 
// 0086fc2a  8d4c2418             lea ecx, [esp + 0x18]
// 0086fc2e  ff1574de9800         call dword ptr [0x98de74]
// 0086fc34  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086fc38  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0086fc40  ff1580de9800         call dword ptr [0x98de80]
// 0086fc46  50                   push eax
// 0086fc47  8d54241c             lea edx, [esp + 0x1c]
// 0086fc4b  68ce230000           push 0x23ce
// 0086fc50  52                   push edx
// 0086fc51  ff1510d39800         call dword ptr [0x98d310]
// 0086fc57  83c40c               add esp, 0xc
// 0086fc5a  6a00                 push 0
// 0086fc5c  6a10                 push 0x10
// 0086fc5e  8d4c2420             lea ecx, [esp + 0x20]
// 0086fc62  ff1580de9800         call dword ptr [0x98de80]
// 0086fc68  50                   push eax
// 0086fc69  e8aa41f8ff           call 0x7f3e18
// 0086fc6e  8d4c2418             lea ecx, [esp + 0x18]
// 0086fc72  ff15c0de9800         call dword ptr [0x98dec0]
// 0086fc78  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086fc7c  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fc83  59                   pop ecx
// 0086fc84  5f                   pop edi
// 0086fc85  5e                   pop esi
// 0086fc86  5d                   pop ebp
// 0086fc87  5b                   pop ebx
// 0086fc88  83c41c               add esp, 0x1c
// 0086fc8b  c3                   ret 
// copied from an identical function in another client (function ?OnOK@CXTPNewToolbarDlg@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp