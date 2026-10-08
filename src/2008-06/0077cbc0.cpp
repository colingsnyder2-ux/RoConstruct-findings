// from server: 100% by auto
// roc 2008-06 0077cbc0  unit: CXTPTabManagerNavigateButton  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077cbc0
//
// 0077cbc0  83ec20               sub esp, 0x20
// 0077cbc3  56                   push esi
// 0077cbc4  8bf1                 mov esi, ecx
// 0077cbc6  ff15ac2d8000         call dword ptr [0x802dac]
// 0077cbcc  85c0                 test eax, eax
// 0077cbce  0f8559010000         jne 0x77cd2d
// 0077cbd4  394620               cmp dword ptr [esi + 0x20], eax
// 0077cbd7  0f8450010000         je 0x77cd2d
// 0077cbdd  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077cbe1  53                   push ebx
// 0077cbe2  55                   push ebp
// 0077cbe3  57                   push edi
// 0077cbe4  50                   push eax
// 0077cbe5  ff15a82d8000         call dword ptr [0x802da8]
// 0077cbeb  8b2de8218000         mov ebp, dword ptr [0x8021e8]
// 0077cbf1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0077cbf9  ffd5                 call ebp
// 0077cbfb  8bd8                 mov ebx, eax
// 0077cbfd  8d7e10               lea edi, [esi + 0x10]
// 0077cc00  837e2000             cmp dword ptr [esi + 0x20], 0
// 0077cc04  7418                 je 0x77cc1e
// 0077cc06  ffd5                 call ebp
// 0077cc08  2bc3                 sub eax, ebx
// 0077cc0a  83f814               cmp eax, 0x14
// 0077cc0d  760f                 jbe 0x77cc1e
// 0077cc0f  ffd5                 call ebp
// 0077cc11  8b16                 mov edx, dword ptr [esi]
// 0077cc13  8bd8                 mov ebx, eax
// 0077cc15  8b4218               mov eax, dword ptr [edx + 0x18]
// 0077cc18  6a01                 push 1
// 0077cc1a  8bce                 mov ecx, esi
// 0077cc1c  ffd0                 call eax
// 0077cc1e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0077cc22  8b542438             mov edx, dword ptr [esp + 0x38]
// 0077cc26  51                   push ecx
// 0077cc27  52                   push edx
// 0077cc28  57                   push edi
// 0077cc29  ff152c2d8000         call dword ptr [0x802d2c]
// 0077cc2f  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0077cc32  7410                 je 0x77cc44
// 0077cc34  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077cc37  894624               mov dword ptr [esi + 0x24], eax
// 0077cc3a  8b01                 mov eax, dword ptr [ecx]
// 0077cc3c  8b5034               mov edx, dword ptr [eax + 0x34]
// 0077cc3f  6a01                 push 1
// 0077cc41  57                   push edi
// 0077cc42  ffd2                 call edx
// 0077cc44  6a00                 push 0
// 0077cc46  6a00                 push 0
// 0077cc48  6a00                 push 0
// 0077cc4a  6a00                 push 0
// 0077cc4c  8d442424             lea eax, [esp + 0x24]
// 0077cc50  50                   push eax
// 0077cc51  ff15b02d8000         call dword ptr [0x802db0]
// 0077cc57  85c0                 test eax, eax
// 0077cc59  74a5                 je 0x77cc00
// 0077cc5b  6a00                 push 0
// 0077cc5d  6a00                 push 0
// 0077cc5f  6a00                 push 0
// 0077cc61  8d4c2420             lea ecx, [esp + 0x20]
// 0077cc65  51                   push ecx
// 0077cc66  ff15782c8000         call dword ptr [0x802c78]
// 0077cc6c  ff15ac2d8000         call dword ptr [0x802dac]
// 0077cc72  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0077cc76  755a                 jne 0x77ccd2
// 0077cc78  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077cc7c  3d00020000           cmp eax, 0x200
// 0077cc81  7733                 ja 0x77ccb6
// 0077cc83  7419                 je 0x77cc9e
// 0077cc85  83f81f               cmp eax, 0x1f
// 0077cc88  745c                 je 0x77cce6
// 0077cc8a  3d00010000           cmp eax, 0x100
// 0077cc8f  7531                 jne 0x77ccc2
// 0077cc91  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 0077cc96  0f8564ffffff         jne 0x77cc00
// 0077cc9c  eb48                 jmp 0x77cce6
// 0077cc9e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0077cca2  0fbfc8               movsx ecx, ax
// 0077cca5  c1e810               shr eax, 0x10
// 0077cca8  98                   cwde 
// 0077cca9  894c2438             mov dword ptr [esp + 0x38], ecx
// 0077ccad  8944243c             mov dword ptr [esp + 0x3c], eax
// 0077ccb1  e94affffff           jmp 0x77cc00
// 0077ccb6  2d02020000           sub eax, 0x202
// 0077ccbb  7422                 je 0x77ccdf
// 0077ccbd  83e802               sub eax, 2
// 0077ccc0  7424                 je 0x77cce6
// 0077ccc2  8d542414             lea edx, [esp + 0x14]
// 0077ccc6  52                   push edx
// 0077ccc7  ff15c82c8000         call dword ptr [0x802cc8]
// 0077cccd  e92effffff           jmp 0x77cc00
// 0077ccd2  8d442414             lea eax, [esp + 0x14]
// 0077ccd6  50                   push eax
// 0077ccd7  ff15c82c8000         call dword ptr [0x802cc8]
// 0077ccdd  eb07                 jmp 0x77cce6
// 0077ccdf  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0077cce2  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077cce6  ff15b42d8000         call dword ptr [0x802db4]
// 0077ccec  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0077ccf0  8b442438             mov eax, dword ptr [esp + 0x38]
// 0077ccf4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0077ccf8  52                   push edx
// 0077ccf9  50                   push eax
// 0077ccfa  51                   push ecx
// 0077ccfb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077ccfe  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0077cd05  e8c6faffff           call 0x77c7d0
// 0077cd0a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077cd0d  8b11                 mov edx, dword ptr [ecx]
// 0077cd0f  8b4234               mov eax, dword ptr [edx + 0x34]
// 0077cd12  6a00                 push 0
// 0077cd14  6a00                 push 0
// 0077cd16  ffd0                 call eax
// 0077cd18  837c241000           cmp dword ptr [esp + 0x10], 0
// 0077cd1d  5f                   pop edi
// 0077cd1e  5d                   pop ebp
// 0077cd1f  5b                   pop ebx
// 0077cd20  740b                 je 0x77cd2d
// 0077cd22  8b16                 mov edx, dword ptr [esi]
// 0077cd24  8b4218               mov eax, dword ptr [edx + 0x18]
// 0077cd27  6a00                 push 0
// 0077cd29  8bce                 mov ecx, esi
// 0077cd2b  ffd0                 call eax
// 0077cd2d  5e                   pop esi
// 0077cd2e  83c420               add esp, 0x20
// 0077cd31  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
