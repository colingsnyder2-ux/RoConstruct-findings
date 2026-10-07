// roc 2012-06 006689d0  unit: seg_00660000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006689d0
//
// 006689d0  83ec08               sub esp, 8
// 006689d3  53                   push ebx
// 006689d4  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 006689d8  55                   push ebp
// 006689d9  56                   push esi
// 006689da  8b742418             mov esi, dword ptr [esp + 0x18]
// 006689de  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 006689e4  57                   push edi
// 006689e5  33ff                 xor edi, edi
// 006689e7  897520               mov dword ptr [ebp + 0x20], esi
// 006689ea  885d0c               mov byte ptr [ebp + 0xc], bl
// 006689ed  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 006689f3  0f94c0               sete al
// 006689f6  88442410             mov byte ptr [esp + 0x10], al
// 006689fa  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00668a00  7516                 jne 0x668a18
// 00668a02  84c0                 test al, al
// 00668a04  7409                 je 0x668a0f
// 00668a06  c7450430826600       mov dword ptr [ebp + 4], 0x668230
// 00668a0d  eb37                 jmp 0x668a46
// 00668a0f  c74504a0836600       mov dword ptr [ebp + 4], 0x6683a0
// 00668a16  eb2e                 jmp 0x668a46
// 00668a18  84c0                 test al, al
// 00668a1a  7409                 je 0x668a25
// 00668a1c  c7450480856600       mov dword ptr [ebp + 4], 0x668580
// 00668a23  eb21                 jmp 0x668a46
// 00668a25  c7450440866600       mov dword ptr [ebp + 4], 0x668640
// 00668a2c  397d40               cmp dword ptr [ebp + 0x40], edi
// 00668a2f  7515                 jne 0x668a46
// 00668a31  8b4604               mov eax, dword ptr [esi + 4]
// 00668a34  8b08                 mov ecx, dword ptr [eax]
// 00668a36  68e8030000           push 0x3e8
// 00668a3b  6a01                 push 1
// 00668a3d  56                   push esi
// 00668a3e  ffd1                 call ecx
// 00668a40  83c40c               add esp, 0xc
// 00668a43  894540               mov dword ptr [ebp + 0x40], eax
// 00668a46  84db                 test bl, bl
// 00668a48  7409                 je 0x668a53
// 00668a4a  c7450800896600       mov dword ptr [ebp + 8], 0x668900
// 00668a51  eb07                 jmp 0x668a5a
// 00668a53  c74508b0886600       mov dword ptr [ebp + 8], 0x6688b0
// 00668a5a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00668a60  897c2414             mov dword ptr [esp + 0x14], edi
// 00668a64  0f8ec6000000         jle 0x668b30
// 00668a6a  8d5524               lea edx, [ebp + 0x24]
// 00668a6d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00668a71  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00668a77  eb07                 jmp 0x668a80
// 00668a79  8da42400000000       lea esp, [esp]
// 00668a80  807c241000           cmp byte ptr [esp + 0x10], 0
// 00668a85  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00668a89  8b03                 mov eax, dword ptr [ebx]
// 00668a8b  8939                 mov dword ptr [ecx], edi
// 00668a8d  740d                 je 0x668a9c
// 00668a8f  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00668a95  757c                 jne 0x668b13
// 00668a97  8b7814               mov edi, dword ptr [eax + 0x14]
// 00668a9a  eb06                 jmp 0x668aa2
// 00668a9c  8b7818               mov edi, dword ptr [eax + 0x18]
// 00668a9f  897d34               mov dword ptr [ebp + 0x34], edi
// 00668aa2  807c242000           cmp byte ptr [esp + 0x20], 0
// 00668aa7  7454                 je 0x668afd
// 00668aa9  85ff                 test edi, edi
// 00668aab  7c05                 jl 0x668ab2
// 00668aad  83ff04               cmp edi, 4
// 00668ab0  7c18                 jl 0x668aca
// 00668ab2  8b16                 mov edx, dword ptr [esi]
// 00668ab4  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 00668abb  8b06                 mov eax, dword ptr [esi]
// 00668abd  897818               mov dword ptr [eax + 0x18], edi
// 00668ac0  8b0e                 mov ecx, dword ptr [esi]
// 00668ac2  8b11                 mov edx, dword ptr [ecx]
// 00668ac4  56                   push esi
// 00668ac5  ffd2                 call edx
// 00668ac7  83c404               add esp, 4
// 00668aca  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 00668acf  7516                 jne 0x668ae7
// 00668ad1  8b4604               mov eax, dword ptr [esi + 4]
// 00668ad4  8b08                 mov ecx, dword ptr [eax]
// 00668ad6  6804040000           push 0x404
// 00668adb  6a01                 push 1
// 00668add  56                   push esi
// 00668ade  ffd1                 call ecx
// 00668ae0  83c40c               add esp, 0xc
// 00668ae3  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 00668ae7  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 00668aeb  6804040000           push 0x404
// 00668af0  6a00                 push 0
// 00668af2  52                   push edx
// 00668af3  e87ca83100           call 0x983374
// 00668af8  83c40c               add esp, 0xc
// 00668afb  eb14                 jmp 0x668b11
// 00668afd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00668b01  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 00668b05  50                   push eax
// 00668b06  57                   push edi
// 00668b07  51                   push ecx
// 00668b08  56                   push esi
// 00668b09  e832e6ffff           call 0x667140
// 00668b0e  83c410               add esp, 0x10
// 00668b11  33ff                 xor edi, edi
// 00668b13  8b442414             mov eax, dword ptr [esp + 0x14]
// 00668b17  8344241c04           add dword ptr [esp + 0x1c], 4
// 00668b1c  40                   inc eax
// 00668b1d  83c304               add ebx, 4
// 00668b20  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00668b26  89442414             mov dword ptr [esp + 0x14], eax
// 00668b2a  0f8c50ffffff         jl 0x668a80
// 00668b30  897d38               mov dword ptr [ebp + 0x38], edi
// 00668b33  897d3c               mov dword ptr [ebp + 0x3c], edi
// 00668b36  897d18               mov dword ptr [ebp + 0x18], edi
// 00668b39  897d1c               mov dword ptr [ebp + 0x1c], edi
// 00668b3c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00668b42  897d48               mov dword ptr [ebp + 0x48], edi
// 00668b45  5f                   pop edi
// 00668b46  5e                   pop esi
// 00668b47  895544               mov dword ptr [ebp + 0x44], edx
// 00668b4a  5d                   pop ebp
// 00668b4b  5b                   pop ebx
// 00668b4c  83c408               add esp, 8
// 00668b4f  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
