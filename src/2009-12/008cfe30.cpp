// roc 2009-12 008cfe30  unit: CXTPTabManagerNavigateButton  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cfe30
//
// 008cfe30  83ec20               sub esp, 0x20
// 008cfe33  56                   push esi
// 008cfe34  8bf1                 mov esi, ecx
// 008cfe36  ff1528cc9800         call dword ptr [0x98cc28]
// 008cfe3c  85c0                 test eax, eax
// 008cfe3e  0f8559010000         jne 0x8cff9d
// 008cfe44  394620               cmp dword ptr [esi + 0x20], eax
// 008cfe47  0f8450010000         je 0x8cff9d
// 008cfe4d  8b442428             mov eax, dword ptr [esp + 0x28]
// 008cfe51  53                   push ebx
// 008cfe52  55                   push ebp
// 008cfe53  57                   push edi
// 008cfe54  50                   push eax
// 008cfe55  ff152ccc9800         call dword ptr [0x98cc2c]
// 008cfe5b  8b2dfcb29800         mov ebp, dword ptr [0x98b2fc]
// 008cfe61  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008cfe69  ffd5                 call ebp
// 008cfe6b  8bd8                 mov ebx, eax
// 008cfe6d  8d7e10               lea edi, [esi + 0x10]
// 008cfe70  837e2000             cmp dword ptr [esi + 0x20], 0
// 008cfe74  7418                 je 0x8cfe8e
// 008cfe76  ffd5                 call ebp
// 008cfe78  2bc3                 sub eax, ebx
// 008cfe7a  83f814               cmp eax, 0x14
// 008cfe7d  760f                 jbe 0x8cfe8e
// 008cfe7f  ffd5                 call ebp
// 008cfe81  8b16                 mov edx, dword ptr [esi]
// 008cfe83  8bd8                 mov ebx, eax
// 008cfe85  8b4218               mov eax, dword ptr [edx + 0x18]
// 008cfe88  6a01                 push 1
// 008cfe8a  8bce                 mov ecx, esi
// 008cfe8c  ffd0                 call eax
// 008cfe8e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008cfe92  8b542438             mov edx, dword ptr [esp + 0x38]
// 008cfe96  51                   push ecx
// 008cfe97  52                   push edx
// 008cfe98  57                   push edi
// 008cfe99  ff155cca9800         call dword ptr [0x98ca5c]
// 008cfe9f  3b4624               cmp eax, dword ptr [esi + 0x24]
// 008cfea2  7410                 je 0x8cfeb4
// 008cfea4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008cfea7  894624               mov dword ptr [esi + 0x24], eax
// 008cfeaa  8b01                 mov eax, dword ptr [ecx]
// 008cfeac  8b5034               mov edx, dword ptr [eax + 0x34]
// 008cfeaf  6a01                 push 1
// 008cfeb1  57                   push edi
// 008cfeb2  ffd2                 call edx
// 008cfeb4  6a00                 push 0
// 008cfeb6  6a00                 push 0
// 008cfeb8  6a00                 push 0
// 008cfeba  6a00                 push 0
// 008cfebc  8d442424             lea eax, [esp + 0x24]
// 008cfec0  50                   push eax
// 008cfec1  ff1524cc9800         call dword ptr [0x98cc24]
// 008cfec7  85c0                 test eax, eax
// 008cfec9  74a5                 je 0x8cfe70
// 008cfecb  6a00                 push 0
// 008cfecd  6a00                 push 0
// 008cfecf  6a00                 push 0
// 008cfed1  8d4c2420             lea ecx, [esp + 0x20]
// 008cfed5  51                   push ecx
// 008cfed6  ff15b0ca9800         call dword ptr [0x98cab0]
// 008cfedc  ff1528cc9800         call dword ptr [0x98cc28]
// 008cfee2  3b442434             cmp eax, dword ptr [esp + 0x34]
// 008cfee6  755a                 jne 0x8cff42
// 008cfee8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008cfeec  3d00020000           cmp eax, 0x200
// 008cfef1  7733                 ja 0x8cff26
// 008cfef3  7419                 je 0x8cff0e
// 008cfef5  83f81f               cmp eax, 0x1f
// 008cfef8  745c                 je 0x8cff56
// 008cfefa  3d00010000           cmp eax, 0x100
// 008cfeff  7531                 jne 0x8cff32
// 008cff01  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 008cff06  0f8564ffffff         jne 0x8cfe70
// 008cff0c  eb48                 jmp 0x8cff56
// 008cff0e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cff12  0fbfc8               movsx ecx, ax
// 008cff15  c1e810               shr eax, 0x10
// 008cff18  98                   cwde 
// 008cff19  894c2438             mov dword ptr [esp + 0x38], ecx
// 008cff1d  8944243c             mov dword ptr [esp + 0x3c], eax
// 008cff21  e94affffff           jmp 0x8cfe70
// 008cff26  2d02020000           sub eax, 0x202
// 008cff2b  7422                 je 0x8cff4f
// 008cff2d  83e802               sub eax, 2
// 008cff30  7424                 je 0x8cff56
// 008cff32  8d542414             lea edx, [esp + 0x14]
// 008cff36  52                   push edx
// 008cff37  ff1594ca9800         call dword ptr [0x98ca94]
// 008cff3d  e92effffff           jmp 0x8cfe70
// 008cff42  8d442414             lea eax, [esp + 0x14]
// 008cff46  50                   push eax
// 008cff47  ff1594ca9800         call dword ptr [0x98ca94]
// 008cff4d  eb07                 jmp 0x8cff56
// 008cff4f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008cff52  894c2410             mov dword ptr [esp + 0x10], ecx
// 008cff56  ff1520cc9800         call dword ptr [0x98cc20]
// 008cff5c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008cff60  8b442438             mov eax, dword ptr [esp + 0x38]
// 008cff64  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008cff68  52                   push edx
// 008cff69  50                   push eax
// 008cff6a  51                   push ecx
// 008cff6b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008cff6e  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008cff75  e8c6faffff           call 0x8cfa40
// 008cff7a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008cff7d  8b11                 mov edx, dword ptr [ecx]
// 008cff7f  8b4234               mov eax, dword ptr [edx + 0x34]
// 008cff82  6a00                 push 0
// 008cff84  6a00                 push 0
// 008cff86  ffd0                 call eax
// 008cff88  837c241000           cmp dword ptr [esp + 0x10], 0
// 008cff8d  5f                   pop edi
// 008cff8e  5d                   pop ebp
// 008cff8f  5b                   pop ebx
// 008cff90  740b                 je 0x8cff9d
// 008cff92  8b16                 mov edx, dword ptr [esi]
// 008cff94  8b4218               mov eax, dword ptr [edx + 0x18]
// 008cff97  6a00                 push 0
// 008cff99  8bce                 mov ecx, esi
// 008cff9b  ffd0                 call eax
// 008cff9d  5e                   pop esi
// 008cff9e  83c420               add esp, 0x20
// 008cffa1  c20c00               ret 0xc
// copied from an identical function in another client (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp