// roc 2011-06 008d4f00  unit: CXTPTabManagerNavigateButton  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d4f00
//
// 008d4f00  83ec20               sub esp, 0x20
// 008d4f03  56                   push esi
// 008d4f04  8bf1                 mov esi, ecx
// 008d4f06  ff15381ba400         call dword ptr [0xa41b38]
// 008d4f0c  85c0                 test eax, eax
// 008d4f0e  0f8559010000         jne 0x8d506d
// 008d4f14  394620               cmp dword ptr [esi + 0x20], eax
// 008d4f17  0f8450010000         je 0x8d506d
// 008d4f1d  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d4f21  53                   push ebx
// 008d4f22  55                   push ebp
// 008d4f23  57                   push edi
// 008d4f24  50                   push eax
// 008d4f25  ff15341ba400         call dword ptr [0xa41b34]
// 008d4f2b  8b2df802a400         mov ebp, dword ptr [0xa402f8]
// 008d4f31  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008d4f39  ffd5                 call ebp
// 008d4f3b  8bd8                 mov ebx, eax
// 008d4f3d  8d7e10               lea edi, [esi + 0x10]
// 008d4f40  837e2000             cmp dword ptr [esi + 0x20], 0
// 008d4f44  7418                 je 0x8d4f5e
// 008d4f46  ffd5                 call ebp
// 008d4f48  2bc3                 sub eax, ebx
// 008d4f4a  83f814               cmp eax, 0x14
// 008d4f4d  760f                 jbe 0x8d4f5e
// 008d4f4f  ffd5                 call ebp
// 008d4f51  8b16                 mov edx, dword ptr [esi]
// 008d4f53  8bd8                 mov ebx, eax
// 008d4f55  8b4218               mov eax, dword ptr [edx + 0x18]
// 008d4f58  6a01                 push 1
// 008d4f5a  8bce                 mov ecx, esi
// 008d4f5c  ffd0                 call eax
// 008d4f5e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d4f62  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d4f66  51                   push ecx
// 008d4f67  52                   push edx
// 008d4f68  57                   push edi
// 008d4f69  ff15101ca400         call dword ptr [0xa41c10]
// 008d4f6f  3b4624               cmp eax, dword ptr [esi + 0x24]
// 008d4f72  7410                 je 0x8d4f84
// 008d4f74  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d4f77  894624               mov dword ptr [esi + 0x24], eax
// 008d4f7a  8b01                 mov eax, dword ptr [ecx]
// 008d4f7c  8b5034               mov edx, dword ptr [eax + 0x34]
// 008d4f7f  6a01                 push 1
// 008d4f81  57                   push edi
// 008d4f82  ffd2                 call edx
// 008d4f84  6a00                 push 0
// 008d4f86  6a00                 push 0
// 008d4f88  6a00                 push 0
// 008d4f8a  6a00                 push 0
// 008d4f8c  8d442424             lea eax, [esp + 0x24]
// 008d4f90  50                   push eax
// 008d4f91  ff153c1ba400         call dword ptr [0xa41b3c]
// 008d4f97  85c0                 test eax, eax
// 008d4f99  74a5                 je 0x8d4f40
// 008d4f9b  6a00                 push 0
// 008d4f9d  6a00                 push 0
// 008d4f9f  6a00                 push 0
// 008d4fa1  8d4c2420             lea ecx, [esp + 0x20]
// 008d4fa5  51                   push ecx
// 008d4fa6  ff15281ca400         call dword ptr [0xa41c28]
// 008d4fac  ff15381ba400         call dword ptr [0xa41b38]
// 008d4fb2  3b442434             cmp eax, dword ptr [esp + 0x34]
// 008d4fb6  755a                 jne 0x8d5012
// 008d4fb8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d4fbc  3d00020000           cmp eax, 0x200
// 008d4fc1  7733                 ja 0x8d4ff6
// 008d4fc3  7419                 je 0x8d4fde
// 008d4fc5  83f81f               cmp eax, 0x1f
// 008d4fc8  745c                 je 0x8d5026
// 008d4fca  3d00010000           cmp eax, 0x100
// 008d4fcf  7531                 jne 0x8d5002
// 008d4fd1  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 008d4fd6  0f8564ffffff         jne 0x8d4f40
// 008d4fdc  eb48                 jmp 0x8d5026
// 008d4fde  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d4fe2  0fbfc8               movsx ecx, ax
// 008d4fe5  c1e810               shr eax, 0x10
// 008d4fe8  98                   cwde 
// 008d4fe9  894c2438             mov dword ptr [esp + 0x38], ecx
// 008d4fed  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d4ff1  e94affffff           jmp 0x8d4f40
// 008d4ff6  2d02020000           sub eax, 0x202
// 008d4ffb  7422                 je 0x8d501f
// 008d4ffd  83e802               sub eax, 2
// 008d5000  7424                 je 0x8d5026
// 008d5002  8d542414             lea edx, [esp + 0x14]
// 008d5006  52                   push edx
// 008d5007  ff150c1aa400         call dword ptr [0xa41a0c]
// 008d500d  e92effffff           jmp 0x8d4f40
// 008d5012  8d442414             lea eax, [esp + 0x14]
// 008d5016  50                   push eax
// 008d5017  ff150c1aa400         call dword ptr [0xa41a0c]
// 008d501d  eb07                 jmp 0x8d5026
// 008d501f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008d5022  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d5026  ff15401ba400         call dword ptr [0xa41b40]
// 008d502c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d5030  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d5034  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d5038  52                   push edx
// 008d5039  50                   push eax
// 008d503a  51                   push ecx
// 008d503b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d503e  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008d5045  e8c6faffff           call 0x8d4b10
// 008d504a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d504d  8b11                 mov edx, dword ptr [ecx]
// 008d504f  8b4234               mov eax, dword ptr [edx + 0x34]
// 008d5052  6a00                 push 0
// 008d5054  6a00                 push 0
// 008d5056  ffd0                 call eax
// 008d5058  837c241000           cmp dword ptr [esp + 0x10], 0
// 008d505d  5f                   pop edi
// 008d505e  5d                   pop ebp
// 008d505f  5b                   pop ebx
// 008d5060  740b                 je 0x8d506d
// 008d5062  8b16                 mov edx, dword ptr [esi]
// 008d5064  8b4218               mov eax, dword ptr [edx + 0x18]
// 008d5067  6a00                 push 0
// 008d5069  8bce                 mov ecx, esi
// 008d506b  ffd0                 call eax
// 008d506d  5e                   pop esi
// 008d506e  83c420               add esp, 0x20
// 008d5071  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
