// roc 2009-12 0081cb00  unit: CXTPReportControl  size: 1836 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081cb00
//
// 0081cb00  6aff                 push -1
// 0081cb02  68adac9500           push 0x95acad
// 0081cb07  64a100000000         mov eax, dword ptr fs:[0]
// 0081cb0d  50                   push eax
// 0081cb0e  83ec28               sub esp, 0x28
// 0081cb11  53                   push ebx
// 0081cb12  55                   push ebp
// 0081cb13  56                   push esi
// 0081cb14  57                   push edi
// 0081cb15  a10052b600           mov eax, dword ptr [0xb65200]
// 0081cb1a  33c4                 xor eax, esp
// 0081cb1c  50                   push eax
// 0081cb1d  8d44243c             lea eax, [esp + 0x3c]
// 0081cb21  64a300000000         mov dword ptr fs:[0], eax
// 0081cb27  8bd9                 mov ebx, ecx
// 0081cb29  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0081cb2d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0081cb35  85f6                 test esi, esi
// 0081cb37  0f84d9060000         je 0x81d216
// 0081cb3d  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 0081cb41  85ed                 test ebp, ebp
// 0081cb43  7416                 je 0x81cb5b
// 0081cb45  8bcd                 mov ecx, ebp
// 0081cb47  e8d4e10000           call 0x82ad20
// 0081cb4c  85c0                 test eax, eax
// 0081cb4e  7440                 je 0x81cb90
// 0081cb50  8bcd                 mov ecx, ebp
// 0081cb52  e829e40000           call 0x82af80
// 0081cb57  8bf8                 mov edi, eax
// 0081cb59  eb06                 jmp 0x81cb61
// 0081cb5b  8bbbe8000000         mov edi, dword ptr [ebx + 0xe8]
// 0081cb61  85ff                 test edi, edi
// 0081cb63  742b                 je 0x81cb90
// 0081cb65  8bcf                 mov ecx, edi
// 0081cb67  33f6                 xor esi, esi
// 0081cb69  e8b2000100           call 0x82cc20
// 0081cb6e  85c0                 test eax, eax
// 0081cb70  7e1a                 jle 0x81cb8c
// 0081cb72  56                   push esi
// 0081cb73  8bcf                 mov ecx, edi
// 0081cb75  e8b6000100           call 0x82cc30
// 0081cb7a  3944244c             cmp dword ptr [esp + 0x4c], eax
// 0081cb7e  742b                 je 0x81cbab
// 0081cb80  8bcf                 mov ecx, edi
// 0081cb82  46                   inc esi
// 0081cb83  e898000100           call 0x82cc20
// 0081cb88  3bf0                 cmp esi, eax
// 0081cb8a  7ce6                 jl 0x81cb72
// 0081cb8c  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0081cb90  56                   push esi
// 0081cb91  85ed                 test ebp, ebp
// 0081cb93  740b                 je 0x81cba0
// 0081cb95  8bcd                 mov ecx, ebp
// 0081cb97  e8e4e30000           call 0x82af80
// 0081cb9c  8bc8                 mov ecx, eax
// 0081cb9e  eb06                 jmp 0x81cba6
// 0081cba0  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 0081cba6  e805040100           call 0x82cfb0
// 0081cbab  8bbbe4000000         mov edi, dword ptr [ebx + 0xe4]
// 0081cbb1  33f6                 xor esi, esi
// 0081cbb3  897c241c             mov dword ptr [esp + 0x1c], edi
// 0081cbb7  85ed                 test ebp, ebp
// 0081cbb9  7425                 je 0x81cbe0
// 0081cbbb  8bcf                 mov ecx, edi
// 0081cbbd  8b01                 mov eax, dword ptr [ecx]
// 0081cbbf  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0081cbc5  55                   push ebp
// 0081cbc6  ffd2                 call edx
// 0081cbc8  8bf0                 mov esi, eax
// 0081cbca  85f6                 test esi, esi
// 0081cbcc  7412                 je 0x81cbe0
// 0081cbce  8b06                 mov eax, dword ptr [esi]
// 0081cbd0  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081cbd6  8bce                 mov ecx, esi
// 0081cbd8  ffd2                 call edx
// 0081cbda  8bf8                 mov edi, eax
// 0081cbdc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081cbe0  8b13                 mov edx, dword ptr [ebx]
// 0081cbe2  33c0                 xor eax, eax
// 0081cbe4  3bbbe4000000         cmp edi, dword ptr [ebx + 0xe4]
// 0081cbea  8bcb                 mov ecx, ebx
// 0081cbec  0f94c0               sete al
// 0081cbef  8944242c             mov dword ptr [esp + 0x2c], eax
// 0081cbf3  8b82e8010000         mov eax, dword ptr [edx + 0x1e8]
// 0081cbf9  ffd0                 call eax
// 0081cbfb  8be8                 mov ebp, eax
// 0081cbfd  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0081cc01  8b5500               mov edx, dword ptr [ebp]
// 0081cc04  8b5258               mov edx, dword ptr [edx + 0x58]
// 0081cc07  50                   push eax
// 0081cc08  53                   push ebx
// 0081cc09  8bcd                 mov ecx, ebp
// 0081cc0b  896c2440             mov dword ptr [esp + 0x40], ebp
// 0081cc0f  ffd2                 call edx
// 0081cc11  33c0                 xor eax, eax
// 0081cc13  89454c               mov dword ptr [ebp + 0x4c], eax
// 0081cc16  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 0081cc1c  89442420             mov dword ptr [esp + 0x20], eax
// 0081cc20  89442418             mov dword ptr [esp + 0x18], eax
// 0081cc24  89442450             mov dword ptr [esp + 0x50], eax
// 0081cc28  e8f3ff0000           call 0x82cc20
// 0081cc2d  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0081cc32  89442424             mov dword ptr [esp + 0x24], eax
// 0081cc36  0f8490030000         je 0x81cfcc
// 0081cc3c  8b07                 mov eax, dword ptr [edi]
// 0081cc3e  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0081cc44  8d4c2420             lea ecx, [esp + 0x20]
// 0081cc48  51                   push ecx
// 0081cc49  55                   push ebp
// 0081cc4a  8bcf                 mov ecx, edi
// 0081cc4c  ffd2                 call edx
// 0081cc4e  89442450             mov dword ptr [esp + 0x50], eax
// 0081cc52  8bf0                 mov esi, eax
// 0081cc54  85c0                 test eax, eax
// 0081cc56  7441                 je 0x81cc99
// 0081cc58  eb06                 jmp 0x81cc60
// 0081cc5a  8d9b00000000         lea ebx, [ebx]
// 0081cc60  8b06                 mov eax, dword ptr [esi]
// 0081cc62  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0081cc68  8bce                 mov ecx, esi
// 0081cc6a  ffd2                 call edx
// 0081cc6c  85c0                 test eax, eax
// 0081cc6e  8b06                 mov eax, dword ptr [esi]
// 0081cc70  8bce                 mov ecx, esi
// 0081cc72  7510                 jne 0x81cc84
// 0081cc74  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0081cc7a  ffd2                 call edx
// 0081cc7c  8bf0                 mov esi, eax
// 0081cc7e  85f6                 test esi, esi
// 0081cc80  75de                 jne 0x81cc60
// 0081cc82  eb15                 jmp 0x81cc99
// 0081cc84  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0081cc8a  ffd2                 call edx
// 0081cc8c  8b10                 mov edx, dword ptr [eax]
// 0081cc8e  8bc8                 mov ecx, eax
// 0081cc90  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081cc93  ffd0                 call eax
// 0081cc95  89442424             mov dword ptr [esp + 0x24], eax
// 0081cc99  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 0081cc9f  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0081cca2  e8c98bcbff           call 0x4d5870
// 0081cca7  85c0                 test eax, eax
// 0081cca9  0f8ee8020000         jle 0x81cf97
// 0081ccaf  837c245000           cmp dword ptr [esp + 0x50], 0
// 0081ccb4  743c                 je 0x81ccf2
// 0081ccb6  8b742450             mov esi, dword ptr [esp + 0x50]
// 0081ccba  8b16                 mov edx, dword ptr [esi]
// 0081ccbc  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0081ccc2  8bce                 mov ecx, esi
// 0081ccc4  ffd0                 call eax
// 0081ccc6  8b16                 mov edx, dword ptr [esi]
// 0081ccc8  8bf8                 mov edi, eax
// 0081ccca  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0081ccd0  8bce                 mov ecx, esi
// 0081ccd2  ffd0                 call eax
// 0081ccd4  85c0                 test eax, eax
// 0081ccd6  0f85ed000000         jne 0x81cdc9
// 0081ccdc  85ff                 test edi, edi
// 0081ccde  0f84b0000000         je 0x81cd94
// 0081cce4  39442420             cmp dword ptr [esp + 0x20], eax
// 0081cce8  746e                 je 0x81cd58
// 0081ccea  8bce                 mov ecx, esi
// 0081ccec  8b716c               mov esi, dword ptr [ecx + 0x6c]
// 0081ccef  46                   inc esi
// 0081ccf0  eb6d                 jmp 0x81cd5f
// 0081ccf2  33ff                 xor edi, edi
// 0081ccf4  897c2454             mov dword ptr [esp + 0x54], edi
// 0081ccf8  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 0081ccfe  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0081cd01  e86a8bcbff           call 0x4d5870
// 0081cd06  39442454             cmp dword ptr [esp + 0x54], eax
// 0081cd0a  0f8d5e020000         jge 0x81cf6e
// 0081cd10  8b93ec000000         mov edx, dword ptr [ebx + 0xec]
// 0081cd16  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081cd1a  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0081cd1d  50                   push eax
// 0081cd1e  e88d080500           call 0x86d5b0
// 0081cd23  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0081cd27  8bf0                 mov esi, eax
// 0081cd29  56                   push esi
// 0081cd2a  e811e00000           call 0x82ad40
// 0081cd2f  85c0                 test eax, eax
// 0081cd31  0f84a7000000         je 0x81cdde
// 0081cd37  8b10                 mov edx, dword ptr [eax]
// 0081cd39  8b5274               mov edx, dword ptr [edx + 0x74]
// 0081cd3c  56                   push esi
// 0081cd3d  8d4c2438             lea ecx, [esp + 0x38]
// 0081cd41  51                   push ecx
// 0081cd42  8bc8                 mov ecx, eax
// 0081cd44  ffd2                 call edx
// 0081cd46  834c241401           or dword ptr [esp + 0x14], 1
// 0081cd4b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0081cd53  e9a2000000           jmp 0x81cdfa
// 0081cd58  8b542450             mov edx, dword ptr [esp + 0x50]
// 0081cd5c  8b726c               mov esi, dword ptr [edx + 0x6c]
// 0081cd5f  8b07                 mov eax, dword ptr [edi]
// 0081cd61  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081cd67  8bcf                 mov ecx, edi
// 0081cd69  ffd2                 call edx
// 0081cd6b  8b10                 mov edx, dword ptr [eax]
// 0081cd6d  55                   push ebp
// 0081cd6e  8bc8                 mov ecx, eax
// 0081cd70  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081cd73  56                   push esi
// 0081cd74  ffd0                 call eax
// 0081cd76  8b17                 mov edx, dword ptr [edi]
// 0081cd78  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0081cd7e  8bcf                 mov ecx, edi
// 0081cd80  ffd0                 call eax
// 0081cd82  894550               mov dword ptr [ebp + 0x50], eax
// 0081cd85  897d4c               mov dword ptr [ebp + 0x4c], edi
// 0081cd88  8b17                 mov edx, dword ptr [edi]
// 0081cd8a  8b4278               mov eax, dword ptr [edx + 0x78]
// 0081cd8d  8bcf                 mov ecx, edi
// 0081cd8f  ffd0                 call eax
// 0081cd91  89455c               mov dword ptr [ebp + 0x5c], eax
// 0081cd94  8b742450             mov esi, dword ptr [esp + 0x50]
// 0081cd98  85f6                 test esi, esi
// 0081cd9a  0f84d3020000         je 0x81d073
// 0081cda0  8b16                 mov edx, dword ptr [esi]
// 0081cda2  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 0081cda8  8bce                 mov ecx, esi
// 0081cdaa  ffd0                 call eax
// 0081cdac  85c0                 test eax, eax
// 0081cdae  0f84bf020000         je 0x81d073
// 0081cdb4  8b16                 mov edx, dword ptr [esi]
// 0081cdb6  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 0081cdbc  8bce                 mov ecx, esi
// 0081cdbe  ffd0                 call eax
// 0081cdc0  8b10                 mov edx, dword ptr [eax]
// 0081cdc2  8bc8                 mov ecx, eax
// 0081cdc4  e9b2020000           jmp 0x81d07b
// 0081cdc9  8b16                 mov edx, dword ptr [esi]
// 0081cdcb  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 0081cdd1  8bce                 mov ecx, esi
// 0081cdd3  ffd0                 call eax
// 0081cdd5  89442454             mov dword ptr [esp + 0x54], eax
// 0081cdd9  e91affffff           jmp 0x81ccf8
// 0081cdde  6856fd9900           push 0x99fd56
// 0081cde3  8d4c2434             lea ecx, [esp + 0x34]
// 0081cde7  ff15b8de9800         call dword ptr [0x98deb8]
// 0081cded  834c241402           or dword ptr [esp + 0x14], 2
// 0081cdf2  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0081cdfa  50                   push eax
// 0081cdfb  8d4c242c             lea ecx, [esp + 0x2c]
// 0081cdff  ff1594de9800         call dword ptr [0x98de94]
// 0081ce05  c744244402000000     mov dword ptr [esp + 0x44], 2
// 0081ce0d  f644241402           test byte ptr [esp + 0x14], 2
// 0081ce12  740f                 je 0x81ce23
// 0081ce14  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 0081ce19  8d4c2430             lea ecx, [esp + 0x30]
// 0081ce1d  ff15c0de9800         call dword ptr [0x98dec0]
// 0081ce23  f644241401           test byte ptr [esp + 0x14], 1
// 0081ce28  c644244404           mov byte ptr [esp + 0x44], 4
// 0081ce2d  740f                 je 0x81ce3e
// 0081ce2f  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 0081ce34  8d4c2434             lea ecx, [esp + 0x34]
// 0081ce38  ff15c0de9800         call dword ptr [0x98dec0]
// 0081ce3e  8b03                 mov eax, dword ptr [ebx]
// 0081ce40  8b90ec010000         mov edx, dword ptr [eax + 0x1ec]
// 0081ce46  8bcb                 mov ecx, ebx
// 0081ce48  ffd2                 call edx
// 0081ce4a  8bf0                 mov esi, eax
// 0081ce4c  8b06                 mov eax, dword ptr [esi]
// 0081ce4e  8b5058               mov edx, dword ptr [eax + 0x58]
// 0081ce51  6a00                 push 0
// 0081ce53  53                   push ebx
// 0081ce54  8bce                 mov ecx, esi
// 0081ce56  ffd2                 call edx
// 0081ce58  8d4c2428             lea ecx, [esp + 0x28]
// 0081ce5c  ff1580de9800         call dword ptr [0x98de80]
// 0081ce62  50                   push eax
// 0081ce63  8bce                 mov ecx, esi
// 0081ce65  e8766b0800           call 0x8a39e0
// 0081ce6a  85ff                 test edi, edi
// 0081ce6c  7406                 je 0x81ce74
// 0081ce6e  8b4754               mov eax, dword ptr [edi + 0x54]
// 0081ce71  40                   inc eax
// 0081ce72  eb02                 jmp 0x81ce76
// 0081ce74  33c0                 xor eax, eax
// 0081ce76  894658               mov dword ptr [esi + 0x58], eax
// 0081ce79  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081ce7d  894654               mov dword ptr [esi + 0x54], eax
// 0081ce80  85ff                 test edi, edi
// 0081ce82  747f                 je 0x81cf03
// 0081ce84  837c241800           cmp dword ptr [esp + 0x18], 0
// 0081ce89  754b                 jne 0x81ced6
// 0081ce8b  837c242000           cmp dword ptr [esp + 0x20], 0
// 0081ce90  89742418             mov dword ptr [esp + 0x18], esi
// 0081ce94  7411                 je 0x81cea7
// 0081ce96  837c245000           cmp dword ptr [esp + 0x50], 0
// 0081ce9b  741a                 je 0x81ceb7
// 0081ce9d  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081cea1  8b696c               mov ebp, dword ptr [ecx + 0x6c]
// 0081cea4  45                   inc ebp
// 0081cea5  eb12                 jmp 0x81ceb9
// 0081cea7  837c245000           cmp dword ptr [esp + 0x50], 0
// 0081ceac  7409                 je 0x81ceb7
// 0081ceae  8b542450             mov edx, dword ptr [esp + 0x50]
// 0081ceb2  8b6a6c               mov ebp, dword ptr [edx + 0x6c]
// 0081ceb5  eb02                 jmp 0x81ceb9
// 0081ceb7  33ed                 xor ebp, ebp
// 0081ceb9  8b07                 mov eax, dword ptr [edi]
// 0081cebb  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081cec1  8bcf                 mov ecx, edi
// 0081cec3  ffd2                 call edx
// 0081cec5  8b10                 mov edx, dword ptr [eax]
// 0081cec7  56                   push esi
// 0081cec8  8bc8                 mov ecx, eax
// 0081ceca  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081cecd  55                   push ebp
// 0081cece  ffd0                 call eax
// 0081ced0  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0081ced4  eb0d                 jmp 0x81cee3
// 0081ced6  8b17                 mov edx, dword ptr [edi]
// 0081ced8  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0081cede  56                   push esi
// 0081cedf  8bcf                 mov ecx, edi
// 0081cee1  ffd0                 call eax
// 0081cee3  8b17                 mov edx, dword ptr [edi]
// 0081cee5  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0081ceeb  8bcf                 mov ecx, edi
// 0081ceed  ffd0                 call eax
// 0081ceef  894650               mov dword ptr [esi + 0x50], eax
// 0081cef2  897e4c               mov dword ptr [esi + 0x4c], edi
// 0081cef5  8b17                 mov edx, dword ptr [edi]
// 0081cef7  8b4278               mov eax, dword ptr [edx + 0x78]
// 0081cefa  8bcf                 mov ecx, edi
// 0081cefc  ffd0                 call eax
// 0081cefe  89465c               mov dword ptr [esi + 0x5c], eax
// 0081cf01  eb38                 jmp 0x81cf3b
// 0081cf03  8b442450             mov eax, dword ptr [esp + 0x50]
// 0081cf07  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0081cf0b  89742418             mov dword ptr [esp + 0x18], esi
// 0081cf0f  85c0                 test eax, eax
// 0081cf11  7405                 je 0x81cf18
// 0081cf13  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0081cf16  eb07                 jmp 0x81cf1f
// 0081cf18  8bcf                 mov ecx, edi
// 0081cf1a  e801fd0000           call 0x82cc20
// 0081cf1f  8b17                 mov edx, dword ptr [edi]
// 0081cf21  56                   push esi
// 0081cf22  50                   push eax
// 0081cf23  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081cf26  8bcf                 mov ecx, edi
// 0081cf28  ffd0                 call eax
// 0081cf2a  897e50               mov dword ptr [esi + 0x50], edi
// 0081cf2d  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 0081cf34  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0081cf3b  8d4c2428             lea ecx, [esp + 0x28]
// 0081cf3f  8bfe                 mov edi, esi
// 0081cf41  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0081cf49  ff15c0de9800         call dword ptr [0x98dec0]
// 0081cf4f  8b742454             mov esi, dword ptr [esp + 0x54]
// 0081cf53  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 0081cf59  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0081cf5c  46                   inc esi
// 0081cf5d  89742454             mov dword ptr [esp + 0x54], esi
// 0081cf61  e80a89cbff           call 0x4d5870
// 0081cf66  3bf0                 cmp esi, eax
// 0081cf68  0f8ca2fdffff         jl 0x81cd10
// 0081cf6e  85ff                 test edi, edi
// 0081cf70  0f841efeffff         je 0x81cd94
// 0081cf76  8b17                 mov edx, dword ptr [edi]
// 0081cf78  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0081cf7e  55                   push ebp
// 0081cf7f  8bcf                 mov ecx, edi
// 0081cf81  ffd0                 call eax
// 0081cf83  8b17                 mov edx, dword ptr [edi]
// 0081cf85  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0081cf8b  8bcf                 mov ecx, edi
// 0081cf8d  ffd0                 call eax
// 0081cf8f  894550               mov dword ptr [ebp + 0x50], eax
// 0081cf92  e9f1fdffff           jmp 0x81cd88
// 0081cf97  8b442450             mov eax, dword ptr [esp + 0x50]
// 0081cf9b  85c0                 test eax, eax
// 0081cf9d  7405                 je 0x81cfa4
// 0081cf9f  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0081cfa2  eb07                 jmp 0x81cfab
// 0081cfa4  8bcf                 mov ecx, edi
// 0081cfa6  e875fc0000           call 0x82cc20
// 0081cfab  8b17                 mov edx, dword ptr [edi]
// 0081cfad  55                   push ebp
// 0081cfae  50                   push eax
// 0081cfaf  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081cfb2  8bcf                 mov ecx, edi
// 0081cfb4  ffd0                 call eax
// 0081cfb6  897d50               mov dword ptr [ebp + 0x50], edi
// 0081cfb9  c7454c00000000       mov dword ptr [ebp + 0x4c], 0
// 0081cfc0  c7455c01000000       mov dword ptr [ebp + 0x5c], 1
// 0081cfc7  e9c8fdffff           jmp 0x81cd94
// 0081cfcc  837c245400           cmp dword ptr [esp + 0x54], 0
// 0081cfd1  7c1e                 jl 0x81cff1
// 0081cfd3  8bcf                 mov ecx, edi
// 0081cfd5  e846fc0000           call 0x82cc20
// 0081cfda  39442454             cmp dword ptr [esp + 0x54], eax
// 0081cfde  7d11                 jge 0x81cff1
// 0081cfe0  8b17                 mov edx, dword ptr [edi]
// 0081cfe2  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081cfe6  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081cfe9  55                   push ebp
// 0081cfea  50                   push eax
// 0081cfeb  8bcf                 mov ecx, edi
// 0081cfed  ffd2                 call edx
// 0081cfef  eb0a                 jmp 0x81cffb
// 0081cff1  8b07                 mov eax, dword ptr [edi]
// 0081cff3  8b5060               mov edx, dword ptr [eax + 0x60]
// 0081cff6  55                   push ebp
// 0081cff7  8bcf                 mov ecx, edi
// 0081cff9  ffd2                 call edx
// 0081cffb  897d50               mov dword ptr [ebp + 0x50], edi
// 0081cffe  89754c               mov dword ptr [ebp + 0x4c], esi
// 0081d001  c7455c01000000       mov dword ptr [ebp + 0x5c], 1
// 0081d008  8b4654               mov eax, dword ptr [esi + 0x54]
// 0081d00b  40                   inc eax
// 0081d00c  894554               mov dword ptr [ebp + 0x54], eax
// 0081d00f  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081d013  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0081d016  894d58               mov dword ptr [ebp + 0x58], ecx
// 0081d019  85c0                 test eax, eax
// 0081d01b  7d08                 jge 0x81d025
// 0081d01d  8bcf                 mov ecx, edi
// 0081d01f  e8fcfb0000           call 0x82cc20
// 0081d024  48                   dec eax
// 0081d025  89456c               mov dword ptr [ebp + 0x6c], eax
// 0081d028  8bf5                 mov esi, ebp
// 0081d02a  8d9b00000000         lea ebx, [ebx]
// 0081d030  8b16                 mov edx, dword ptr [esi]
// 0081d032  8b82c4000000         mov eax, dword ptr [edx + 0xc4]
// 0081d038  8bce                 mov ecx, esi
// 0081d03a  ffd0                 call eax
// 0081d03c  8b16                 mov edx, dword ptr [esi]
// 0081d03e  8bce                 mov ecx, esi
// 0081d040  85c0                 test eax, eax
// 0081d042  7514                 jne 0x81d058
// 0081d044  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0081d04a  ffd0                 call eax
// 0081d04c  8bf0                 mov esi, eax
// 0081d04e  85f6                 test esi, esi
// 0081d050  75de                 jne 0x81d030
// 0081d052  8b742450             mov esi, dword ptr [esp + 0x50]
// 0081d056  eb1f                 jmp 0x81d077
// 0081d058  8b82c4000000         mov eax, dword ptr [edx + 0xc4]
// 0081d05e  ffd0                 call eax
// 0081d060  8b10                 mov edx, dword ptr [eax]
// 0081d062  8bc8                 mov ecx, eax
// 0081d064  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081d067  ffd0                 call eax
// 0081d069  8b742450             mov esi, dword ptr [esp + 0x50]
// 0081d06d  89442424             mov dword ptr [esp + 0x24], eax
// 0081d071  eb04                 jmp 0x81d077
// 0081d073  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0081d077  8b17                 mov edx, dword ptr [edi]
// 0081d079  8bcf                 mov ecx, edi
// 0081d07b  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0081d081  6a01                 push 1
// 0081d083  ffd0                 call eax
// 0081d085  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0081d08a  0f84c1000000         je 0x81d151
// 0081d090  85f6                 test esi, esi
// 0081d092  0f8496000000         je 0x81d12e
// 0081d098  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081d09c  8b11                 mov edx, dword ptr [ecx]
// 0081d09e  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0081d0a4  ffd0                 call eax
// 0081d0a6  8bf8                 mov edi, eax
// 0081d0a8  be01000000           mov esi, 1
// 0081d0ad  85ff                 test edi, edi
// 0081d0af  7433                 je 0x81d0e4
// 0081d0b1  85f6                 test esi, esi
// 0081d0b3  0f84f4000000         je 0x81d1ad
// 0081d0b9  8b17                 mov edx, dword ptr [edi]
// 0081d0bb  8b4278               mov eax, dword ptr [edx + 0x78]
// 0081d0be  8bcf                 mov ecx, edi
// 0081d0c0  ffd0                 call eax
// 0081d0c2  8b17                 mov edx, dword ptr [edi]
// 0081d0c4  8bf0                 mov esi, eax
// 0081d0c6  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0081d0cc  f7de                 neg esi
// 0081d0ce  1bf6                 sbb esi, esi
// 0081d0d0  8bcf                 mov ecx, edi
// 0081d0d2  f7de                 neg esi
// 0081d0d4  ffd0                 call eax
// 0081d0d6  8bf8                 mov edi, eax
// 0081d0d8  85ff                 test edi, edi
// 0081d0da  75d5                 jne 0x81d0b1
// 0081d0dc  85f6                 test esi, esi
// 0081d0de  0f84c9000000         je 0x81d1ad
// 0081d0e4  837c242000           cmp dword ptr [esp + 0x20], 0
// 0081d0e9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081d0ed  7419                 je 0x81d108
// 0081d0ef  85c0                 test eax, eax
// 0081d0f1  7402                 je 0x81d0f5
// 0081d0f3  8be8                 mov ebp, eax
// 0081d0f5  8b13                 mov edx, dword ptr [ebx]
// 0081d0f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081d0fb  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 0081d101  55                   push ebp
// 0081d102  50                   push eax
// 0081d103  e9a1000000           jmp 0x81d1a9
// 0081d108  85c0                 test eax, eax
// 0081d10a  7402                 je 0x81d10e
// 0081d10c  8be8                 mov ebp, eax
// 0081d10e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081d112  8b01                 mov eax, dword ptr [ecx]
// 0081d114  8b33                 mov esi, dword ptr [ebx]
// 0081d116  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0081d119  55                   push ebp
// 0081d11a  81c6d0010000         add esi, 0x1d0
// 0081d120  ffd2                 call edx
// 0081d122  50                   push eax
// 0081d123  8b06                 mov eax, dword ptr [esi]
// 0081d125  8bcb                 mov ecx, ebx
// 0081d127  ffd0                 call eax
// 0081d129  e97f000000           jmp 0x81d1ad
// 0081d12e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081d132  85c0                 test eax, eax
// 0081d134  7402                 je 0x81d138
// 0081d136  8be8                 mov ebp, eax
// 0081d138  8b33                 mov esi, dword ptr [ebx]
// 0081d13a  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 0081d140  55                   push ebp
// 0081d141  81c6d0010000         add esi, 0x1d0
// 0081d147  e8d4fa0000           call 0x82cc20
// 0081d14c  8b16                 mov edx, dword ptr [esi]
// 0081d14e  50                   push eax
// 0081d14f  eb58                 jmp 0x81d1a9
// 0081d151  8b4500               mov eax, dword ptr [ebp]
// 0081d154  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0081d15a  8bcd                 mov ecx, ebp
// 0081d15c  ffd2                 call edx
// 0081d15e  8bf8                 mov edi, eax
// 0081d160  be01000000           mov esi, 1
// 0081d165  85ff                 test edi, edi
// 0081d167  7432                 je 0x81d19b
// 0081d169  8da42400000000       lea esp, [esp]
// 0081d170  85f6                 test esi, esi
// 0081d172  7439                 je 0x81d1ad
// 0081d174  8b07                 mov eax, dword ptr [edi]
// 0081d176  8b5078               mov edx, dword ptr [eax + 0x78]
// 0081d179  8bcf                 mov ecx, edi
// 0081d17b  ffd2                 call edx
// 0081d17d  8bf0                 mov esi, eax
// 0081d17f  8b07                 mov eax, dword ptr [edi]
// 0081d181  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0081d187  f7de                 neg esi
// 0081d189  1bf6                 sbb esi, esi
// 0081d18b  8bcf                 mov ecx, edi
// 0081d18d  f7de                 neg esi
// 0081d18f  ffd2                 call edx
// 0081d191  8bf8                 mov edi, eax
// 0081d193  85ff                 test edi, edi
// 0081d195  75d9                 jne 0x81d170
// 0081d197  85f6                 test esi, esi
// 0081d199  7412                 je 0x81d1ad
// 0081d19b  8b03                 mov eax, dword ptr [ebx]
// 0081d19d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081d1a1  8b90d0010000         mov edx, dword ptr [eax + 0x1d0]
// 0081d1a7  55                   push ebp
// 0081d1a8  51                   push ecx
// 0081d1a9  8bcb                 mov ecx, ebx
// 0081d1ab  ffd2                 call edx
// 0081d1ad  8b03                 mov eax, dword ptr [ebx]
// 0081d1af  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 0081d1b5  6a01                 push 1
// 0081d1b7  6a00                 push 0
// 0081d1b9  8bcb                 mov ecx, ebx
// 0081d1bb  ffd2                 call edx
// 0081d1bd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0081d1c1  e85adb0000           call 0x82ad20
// 0081d1c6  85c0                 test eax, eax
// 0081d1c8  744c                 je 0x81d216
// 0081d1ca  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0081d1ce  8bcd                 mov ecx, ebp
// 0081d1d0  33ff                 xor edi, edi
// 0081d1d2  e8a9dd0000           call 0x82af80
// 0081d1d7  8bc8                 mov ecx, eax
// 0081d1d9  e842fa0000           call 0x82cc20
// 0081d1de  85c0                 test eax, eax
// 0081d1e0  7e34                 jle 0x81d216
// 0081d1e2  8b33                 mov esi, dword ptr [ebx]
// 0081d1e4  6aff                 push -1
// 0081d1e6  55                   push ebp
// 0081d1e7  57                   push edi
// 0081d1e8  8bcd                 mov ecx, ebp
// 0081d1ea  81c650010000         add esi, 0x150
// 0081d1f0  e88bdd0000           call 0x82af80
// 0081d1f5  8bc8                 mov ecx, eax
// 0081d1f7  e834fa0000           call 0x82cc30
// 0081d1fc  50                   push eax
// 0081d1fd  8b06                 mov eax, dword ptr [esi]
// 0081d1ff  8bcb                 mov ecx, ebx
// 0081d201  ffd0                 call eax
// 0081d203  8bcd                 mov ecx, ebp
// 0081d205  47                   inc edi
// 0081d206  e875dd0000           call 0x82af80
// 0081d20b  8bc8                 mov ecx, eax
// 0081d20d  e80efa0000           call 0x82cc20
// 0081d212  3bf8                 cmp edi, eax
// 0081d214  7ccc                 jl 0x81d1e2
// 0081d216  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0081d21a  64890d00000000       mov dword ptr fs:[0], ecx
// 0081d221  59                   pop ecx
// 0081d222  5f                   pop edi
// 0081d223  5e                   pop esi
// 0081d224  5d                   pop ebp
// 0081d225  5b                   pop ebx
// 0081d226  83c434               add esp, 0x34
// 0081d229  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddRecordEx@CXTPReportControl@@UAEXPAVCXTPReportRecord@@0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp