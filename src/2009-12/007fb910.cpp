// roc 2009-12 007fb910  unit: CPatchedControlComboBox  size: 738 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb910
//
// 007fb910  6aff                 push -1
// 007fb912  680c8e9500           push 0x958e0c
// 007fb917  64a100000000         mov eax, dword ptr fs:[0]
// 007fb91d  50                   push eax
// 007fb91e  83ec1c               sub esp, 0x1c
// 007fb921  53                   push ebx
// 007fb922  55                   push ebp
// 007fb923  56                   push esi
// 007fb924  57                   push edi
// 007fb925  a10052b600           mov eax, dword ptr [0xb65200]
// 007fb92a  33c4                 xor eax, esp
// 007fb92c  50                   push eax
// 007fb92d  8d442430             lea eax, [esp + 0x30]
// 007fb931  64a300000000         mov dword ptr fs:[0], eax
// 007fb937  8be9                 mov ebp, ecx
// 007fb939  33f6                 xor esi, esi
// 007fb93b  89742418             mov dword ptr [esp + 0x18], esi
// 007fb93f  8b8584010000         mov eax, dword ptr [ebp + 0x184]
// 007fb945  3bc6                 cmp eax, esi
// 007fb947  756d                 jne 0x7fb9b6
// 007fb949  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007fb94f  83f8ff               cmp eax, -1
// 007fb952  750f                 jne 0x7fb963
// 007fb954  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007fb95a  3bce                 cmp ecx, esi
// 007fb95c  7405                 je 0x7fb963
// 007fb95e  e84dacffff           call 0x7f65b0
// 007fb963  3bc6                 cmp eax, esi
// 007fb965  744f                 je 0x7fb9b6
// 007fb967  8b4500               mov eax, dword ptr [ebp]
// 007fb96a  8b5074               mov edx, dword ptr [eax + 0x74]
// 007fb96d  8bcd                 mov ecx, ebp
// 007fb96f  ffd2                 call edx
// 007fb971  85c0                 test eax, eax
// 007fb973  7441                 je 0x7fb9b6
// 007fb975  8b442450             mov eax, dword ptr [esp + 0x50]
// 007fb979  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fb97d  8b542448             mov edx, dword ptr [esp + 0x48]
// 007fb981  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007fb985  48                   dec eax
// 007fb986  49                   dec ecx
// 007fb987  42                   inc edx
// 007fb988  4f                   dec edi
// 007fb989  897c2420             mov dword ptr [esp + 0x20], edi
// 007fb98d  89542424             mov dword ptr [esp + 0x24], edx
// 007fb991  894c2428             mov dword ptr [esp + 0x28], ecx
// 007fb995  8944242c             mov dword ptr [esp + 0x2c], eax
// 007fb999  e832400300           call 0x82f9d0
// 007fb99e  6a0d                 push 0xd
// 007fb9a0  8bc8                 mov ecx, eax
// 007fb9a2  e859370300           call 0x82f100
// 007fb9a7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fb9ab  50                   push eax
// 007fb9ac  8d442424             lea eax, [esp + 0x24]
// 007fb9b0  50                   push eax
// 007fb9b1  e8488cffff           call 0x7f45fe
// 007fb9b6  8b85bc010000         mov eax, dword ptr [ebp + 0x1bc]
// 007fb9bc  3bc6                 cmp eax, esi
// 007fb9be  0f8ea4000000         jle 0x7fba68
// 007fb9c4  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 007fb9ca  56                   push esi
// 007fb9cb  50                   push eax
// 007fb9cc  e83f8c0000           call 0x804610
// 007fb9d1  8bc8                 mov ecx, eax
// 007fb9d3  e8a8410100           call 0x80fb80
// 007fb9d8  8bf8                 mov edi, eax
// 007fb9da  3bfe                 cmp edi, esi
// 007fb9dc  0f8486000000         je 0x7fba68
// 007fb9e2  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007fb9e8  83f8ff               cmp eax, -1
// 007fb9eb  750f                 jne 0x7fb9fc
// 007fb9ed  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007fb9f3  3bce                 cmp ecx, esi
// 007fb9f5  7405                 je 0x7fb9fc
// 007fb9f7  e8b4abffff           call 0x7f65b0
// 007fb9fc  8bcf                 mov ecx, edi
// 007fb9fe  3bc6                 cmp eax, esi
// 007fba00  7407                 je 0x7fba09
// 007fba02  e839d70000           call 0x809140
// 007fba07  eb07                 jmp 0x7fba10
// 007fba09  6a01                 push 1
// 007fba0b  e890470100           call 0x8101a0
// 007fba10  8bd8                 mov ebx, eax
// 007fba12  83ec08               sub esp, 8
// 007fba15  8bc4                 mov eax, esp
// 007fba17  8930                 mov dword ptr [eax], esi
// 007fba19  897004               mov dword ptr [eax + 4], esi
// 007fba1c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007fba20  8b542450             mov edx, dword ptr [esp + 0x50]
// 007fba24  8d040a               lea eax, [edx + ecx]
// 007fba27  99                   cdq 
// 007fba28  2bc2                 sub eax, edx
// 007fba2a  8bf0                 mov esi, eax
// 007fba2c  8bcf                 mov ecx, edi
// 007fba2e  89642424             mov dword ptr [esp + 0x24], esp
// 007fba32  d1fe                 sar esi, 1
// 007fba34  e8379ecdff           call 0x4d5870
// 007fba39  99                   cdq 
// 007fba3a  2bc2                 sub eax, edx
// 007fba3c  d1f8                 sar eax, 1
// 007fba3e  2bf0                 sub esi, eax
// 007fba40  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007fba44  53                   push ebx
// 007fba45  56                   push esi
// 007fba46  50                   push eax
// 007fba47  8b442454             mov eax, dword ptr [esp + 0x54]
// 007fba4b  50                   push eax
// 007fba4c  8bcf                 mov ecx, edi
// 007fba4e  e85d540100           call 0x810eb0
// 007fba53  8bcf                 mov ecx, edi
// 007fba55  e826220500           call 0x84dc80
// 007fba5a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007fba5e  8d540102             lea edx, [ecx + eax + 2]
// 007fba62  89542444             mov dword ptr [esp + 0x44], edx
// 007fba66  33f6                 xor esi, esi
// 007fba68  39b584010000         cmp dword ptr [ebp + 0x184], esi
// 007fba6e  0f8568010000         jne 0x7fbbdc
// 007fba74  8b4500               mov eax, dword ptr [ebp]
// 007fba77  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007fba7d  8d4c2414             lea ecx, [esp + 0x14]
// 007fba81  51                   push ecx
// 007fba82  8bcd                 mov ecx, ebp
// 007fba84  ffd2                 call edx
// 007fba86  8d4c2414             lea ecx, [esp + 0x14]
// 007fba8a  89742438             mov dword ptr [esp + 0x38], esi
// 007fba8e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fba94  84c0                 test al, al
// 007fba96  0f8584000000         jne 0x7fbb20
// 007fba9c  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007fbaa2  83f8ff               cmp eax, -1
// 007fbaa5  750f                 jne 0x7fbab6
// 007fbaa7  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007fbaad  3bce                 cmp ecx, esi
// 007fbaaf  7405                 je 0x7fbab6
// 007fbab1  e8faaaffff           call 0x7f65b0
// 007fbab6  3bc6                 cmp eax, esi
// 007fbab8  7507                 jne 0x7fbac1
// 007fbaba  be11000000           mov esi, 0x11
// 007fbabf  eb16                 jmp 0x7fbad7
// 007fbac1  8b4500               mov eax, dword ptr [ebp]
// 007fbac4  8b5074               mov edx, dword ptr [eax + 0x74]
// 007fbac7  8bcd                 mov ecx, ebp
// 007fbac9  ffd2                 call edx
// 007fbacb  8bf0                 mov esi, eax
// 007fbacd  f7de                 neg esi
// 007fbacf  1bf6                 sbb esi, esi
// 007fbad1  83e606               and esi, 6
// 007fbad4  83c608               add esi, 8
// 007fbad7  e8f43e0300           call 0x82f9d0
// 007fbadc  56                   push esi
// 007fbadd  8bc8                 mov ecx, eax
// 007fbadf  e81c360300           call 0x82f100
// 007fbae4  8b742440             mov esi, dword ptr [esp + 0x40]
// 007fbae8  8b16                 mov edx, dword ptr [esi]
// 007fbaea  50                   push eax
// 007fbaeb  8b4238               mov eax, dword ptr [edx + 0x38]
// 007fbaee  8bce                 mov ecx, esi
// 007fbaf0  ffd0                 call eax
// 007fbaf2  8b3e                 mov edi, dword ptr [esi]
// 007fbaf4  6824080000           push 0x824
// 007fbaf9  8d4c2448             lea ecx, [esp + 0x48]
// 007fbafd  51                   push ecx
// 007fbafe  8d4c241c             lea ecx, [esp + 0x1c]
// 007fbb02  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007fbb08  50                   push eax
// 007fbb09  8d4c2420             lea ecx, [esp + 0x20]
// 007fbb0d  ff1580de9800         call dword ptr [0x98de80]
// 007fbb13  8b5770               mov edx, dword ptr [edi + 0x70]
// 007fbb16  50                   push eax
// 007fbb17  8bce                 mov ecx, esi
// 007fbb19  ffd2                 call edx
// 007fbb1b  e9b2000000           jmp 0x7fbbd2
// 007fbb20  8d44241c             lea eax, [esp + 0x1c]
// 007fbb24  50                   push eax
// 007fbb25  8bcd                 mov ecx, ebp
// 007fbb27  e864d8ffff           call 0x7f9390
// 007fbb2c  8bc8                 mov ecx, eax
// 007fbb2e  c644243801           mov byte ptr [esp + 0x38], 1
// 007fbb33  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007fbb3b  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fbb41  84c0                 test al, al
// 007fbb43  7530                 jne 0x7fbb75
// 007fbb45  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007fbb4b  83f8ff               cmp eax, -1
// 007fbb4e  750f                 jne 0x7fbb5f
// 007fbb50  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007fbb56  3bce                 cmp ecx, esi
// 007fbb58  7405                 je 0x7fbb5f
// 007fbb5a  e851aaffff           call 0x7f65b0
// 007fbb5f  3bc6                 cmp eax, esi
// 007fbb61  7412                 je 0x7fbb75
// 007fbb63  8b5500               mov edx, dword ptr [ebp]
// 007fbb66  8b4274               mov eax, dword ptr [edx + 0x74]
// 007fbb69  8bcd                 mov ecx, ebp
// 007fbb6b  ffd0                 call eax
// 007fbb6d  85c0                 test eax, eax
// 007fbb6f  7504                 jne 0x7fbb75
// 007fbb71  b301                 mov bl, 1
// 007fbb73  eb02                 jmp 0x7fbb77
// 007fbb75  32db                 xor bl, bl
// 007fbb77  8d4c241c             lea ecx, [esp + 0x1c]
// 007fbb7b  89742438             mov dword ptr [esp + 0x38], esi
// 007fbb7f  ff15c0de9800         call dword ptr [0x98dec0]
// 007fbb85  84db                 test bl, bl
// 007fbb87  7449                 je 0x7fbbd2
// 007fbb89  e8423e0300           call 0x82f9d0
// 007fbb8e  6a11                 push 0x11
// 007fbb90  8bc8                 mov ecx, eax
// 007fbb92  e869350300           call 0x82f100
// 007fbb97  8b742440             mov esi, dword ptr [esp + 0x40]
// 007fbb9b  8b16                 mov edx, dword ptr [esi]
// 007fbb9d  50                   push eax
// 007fbb9e  8b4238               mov eax, dword ptr [edx + 0x38]
// 007fbba1  8bce                 mov ecx, esi
// 007fbba3  ffd0                 call eax
// 007fbba5  8d4c2440             lea ecx, [esp + 0x40]
// 007fbba9  51                   push ecx
// 007fbbaa  8bcd                 mov ecx, ebp
// 007fbbac  e8dfd7ffff           call 0x7f9390
// 007fbbb1  6824080000           push 0x824
// 007fbbb6  8d542448             lea edx, [esp + 0x48]
// 007fbbba  52                   push edx
// 007fbbbb  50                   push eax
// 007fbbbc  8bce                 mov ecx, esi
// 007fbbbe  c644244402           mov byte ptr [esp + 0x44], 2
// 007fbbc3  e858dfffff           call 0x7f9b20
// 007fbbc8  8d4c2440             lea ecx, [esp + 0x40]
// 007fbbcc  ff15c0de9800         call dword ptr [0x98dec0]
// 007fbbd2  8d4c2414             lea ecx, [esp + 0x14]
// 007fbbd6  ff15c0de9800         call dword ptr [0x98dec0]
// 007fbbdc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fbbe0  64890d00000000       mov dword ptr fs:[0], ecx
// 007fbbe7  59                   pop ecx
// 007fbbe8  5f                   pop edi
// 007fbbe9  5e                   pop esi
// 007fbbea  5d                   pop ebp
// 007fbbeb  5b                   pop ebx
// 007fbbec  83c428               add esp, 0x28
// 007fbbef  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawEditText@CXTPControlComboBox@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp