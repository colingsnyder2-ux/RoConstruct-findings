// roc 2009-12 008e1a90  unit: CXTColorSelectorCtrl  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1a90
//
// 008e1a90  83ec20               sub esp, 0x20
// 008e1a93  57                   push edi
// 008e1a94  8bf9                 mov edi, ecx
// 008e1a96  e835feffff           call 0x8e18d0
// 008e1a9b  84c0                 test al, al
// 008e1a9d  0f8593000000         jne 0x8e1b36
// 008e1aa3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e1aa7  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e1aab  53                   push ebx
// 008e1aac  55                   push ebp
// 008e1aad  56                   push esi
// 008e1aae  398fa8000000         cmp dword ptr [edi + 0xa8], ecx
// 008e1ab4  7508                 jne 0x8e1abe
// 008e1ab6  3987ac000000         cmp dword ptr [edi + 0xac], eax
// 008e1abc  746e                 je 0x8e1b2c
// 008e1abe  8b9f40010000         mov ebx, dword ptr [edi + 0x140]
// 008e1ac4  898fa8000000         mov dword ptr [edi + 0xa8], ecx
// 008e1aca  8987ac000000         mov dword ptr [edi + 0xac], eax
// 008e1ad0  85db                 test ebx, ebx
// 008e1ad2  744a                 je 0x8e1b1e
// 008e1ad4  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008e1ada  8d9b00000000         lea ebx, [ebx]
// 008e1ae0  8b7308               mov esi, dword ptr [ebx + 8]
// 008e1ae3  85f6                 test esi, esi
// 008e1ae5  7431                 je 0x8e1b18
// 008e1ae7  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e1aea  89542410             mov dword ptr [esp + 0x10], edx
// 008e1aee  8b5610               mov edx, dword ptr [esi + 0x10]
// 008e1af1  89542414             mov dword ptr [esp + 0x14], edx
// 008e1af5  8b5614               mov edx, dword ptr [esi + 0x14]
// 008e1af8  50                   push eax
// 008e1af9  8954241c             mov dword ptr [esp + 0x1c], edx
// 008e1afd  8b5618               mov edx, dword ptr [esi + 0x18]
// 008e1b00  51                   push ecx
// 008e1b01  8d442418             lea eax, [esp + 0x18]
// 008e1b05  50                   push eax
// 008e1b06  89542428             mov dword ptr [esp + 0x28], edx
// 008e1b0a  ffd5                 call ebp
// 008e1b0c  85c0                 test eax, eax
// 008e1b0e  752d                 jne 0x8e1b3d
// 008e1b10  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008e1b14  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e1b18  8b1b                 mov ebx, dword ptr [ebx]
// 008e1b1a  85db                 test ebx, ebx
// 008e1b1c  75c2                 jne 0x8e1ae0
// 008e1b1e  8b07                 mov eax, dword ptr [edi]
// 008e1b20  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008e1b26  6a00                 push 0
// 008e1b28  8bcf                 mov ecx, edi
// 008e1b2a  ffd2                 call edx
// 008e1b2c  8bcf                 mov ecx, edi
// 008e1b2e  e8fd22f1ff           call 0x7f3e30
// 008e1b33  5e                   pop esi
// 008e1b34  5d                   pop ebp
// 008e1b35  5b                   pop ebx
// 008e1b36  5f                   pop edi
// 008e1b37  83c420               add esp, 0x20
// 008e1b3a  c20c00               ret 0xc
// 008e1b3d  8b17                 mov edx, dword ptr [edi]
// 008e1b3f  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008e1b45  56                   push esi
// 008e1b46  8bcf                 mov ecx, edi
// 008e1b48  ffd0                 call eax
// 008e1b4a  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008e1b4d  8d542420             lea edx, [esp + 0x20]
// 008e1b51  52                   push edx
// 008e1b52  c744242410000000     mov dword ptr [esp + 0x24], 0x10
// 008e1b5a  c744242802000000     mov dword ptr [esp + 0x28], 2
// 008e1b62  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e1b66  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008e1b6e  ff1564b09800         call dword ptr [0x98b064]
// 008e1b74  5e                   pop esi
// 008e1b75  5d                   pop ebp
// 008e1b76  5b                   pop ebx
// 008e1b77  5f                   pop edi
// 008e1b78  83c420               add esp, 0x20
// 008e1b7b  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTColorSelectorCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp