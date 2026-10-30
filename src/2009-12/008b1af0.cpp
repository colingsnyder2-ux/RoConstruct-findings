// roc 2009-12 008b1af0  unit: CXTPDockingPaneTabbedContainer  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1af0
//
// 008b1af0  83ec20               sub esp, 0x20
// 008b1af3  53                   push ebx
// 008b1af4  56                   push esi
// 008b1af5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008b1af9  8b06                 mov eax, dword ptr [esi]
// 008b1afb  8b5608               mov edx, dword ptr [esi + 8]
// 008b1afe  57                   push edi
// 008b1aff  8bf9                 mov edi, ecx
// 008b1b01  8b4e04               mov ecx, dword ptr [esi + 4]
// 008b1b04  8944240c             mov dword ptr [esp + 0xc], eax
// 008b1b08  8b460c               mov eax, dword ptr [esi + 0xc]
// 008b1b0b  89542414             mov dword ptr [esp + 0x14], edx
// 008b1b0f  8b17                 mov edx, dword ptr [edi]
// 008b1b11  894c2410             mov dword ptr [esp + 0x10], ecx
// 008b1b15  89442418             mov dword ptr [esp + 0x18], eax
// 008b1b19  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008b1b1f  8bcf                 mov ecx, edi
// 008b1b21  ffd0                 call eax
// 008b1b23  83bf9801000000       cmp dword ptr [edi + 0x198], 0
// 008b1b2a  8bd8                 mov ebx, eax
// 008b1b2c  744f                 je 0x8b1b7d
// 008b1b2e  8d4f54               lea ecx, [edi + 0x54]
// 008b1b31  e81aedffff           call 0x8b0850
// 008b1b36  85db                 test ebx, ebx
// 008b1b38  740a                 je 0x8b1b44
// 008b1b3a  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008b1b3d  83c103               add ecx, 3
// 008b1b40  010e                 add dword ptr [esi], ecx
// 008b1b42  eb4f                 jmp 0x8b1b93
// 008b1b44  8b5078               mov edx, dword ptr [eax + 0x78]
// 008b1b47  83c203               add edx, 3
// 008b1b4a  015604               add dword ptr [esi + 4], edx
// 008b1b4d  8b4e04               mov ecx, dword ptr [esi + 4]
// 008b1b50  894c2418             mov dword ptr [esp + 0x18], ecx
// 008b1b54  8b542438             mov edx, dword ptr [esp + 0x38]
// 008b1b58  8b442434             mov eax, dword ptr [esp + 0x34]
// 008b1b5c  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 008b1b62  52                   push edx
// 008b1b63  50                   push eax
// 008b1b64  8d4c2414             lea ecx, [esp + 0x14]
// 008b1b68  51                   push ecx
// 008b1b69  ffd3                 call ebx
// 008b1b6b  85c0                 test eax, eax
// 008b1b6d  7430                 je 0x8b1b9f
// 008b1b6f  5f                   pop edi
// 008b1b70  5e                   pop esi
// 008b1b71  b801000000           mov eax, 1
// 008b1b76  5b                   pop ebx
// 008b1b77  83c420               add esp, 0x20
// 008b1b7a  c20c00               ret 0xc
// 008b1b7d  8b4768               mov eax, dword ptr [edi + 0x68]
// 008b1b80  85c0                 test eax, eax
// 008b1b82  740f                 je 0x8b1b93
// 008b1b84  8b5020               mov edx, dword ptr [eax + 0x20]
// 008b1b87  8d4c240c             lea ecx, [esp + 0xc]
// 008b1b8b  51                   push ecx
// 008b1b8c  52                   push edx
// 008b1b8d  ff1570cc9800         call dword ptr [0x98cc70]
// 008b1b93  85db                 test ebx, ebx
// 008b1b95  74b6                 je 0x8b1b4d
// 008b1b97  8b06                 mov eax, dword ptr [esi]
// 008b1b99  89442414             mov dword ptr [esp + 0x14], eax
// 008b1b9d  ebb5                 jmp 0x8b1b54
// 008b1b9f  8b17                 mov edx, dword ptr [edi]
// 008b1ba1  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b1ba7  8bcf                 mov ecx, edi
// 008b1ba9  ffd0                 call eax
// 008b1bab  85c0                 test eax, eax
// 008b1bad  744c                 je 0x8b1bfb
// 008b1baf  8b0e                 mov ecx, dword ptr [esi]
// 008b1bb1  8b5604               mov edx, dword ptr [esi + 4]
// 008b1bb4  8b4608               mov eax, dword ptr [esi + 8]
// 008b1bb7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008b1bbb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008b1bbe  894c2428             mov dword ptr [esp + 0x28], ecx
// 008b1bc2  8d4f54               lea ecx, [edi + 0x54]
// 008b1bc5  89542420             mov dword ptr [esp + 0x20], edx
// 008b1bc9  89442424             mov dword ptr [esp + 0x24], eax
// 008b1bcd  e87eecffff           call 0x8b0850
// 008b1bd2  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008b1bd8  8b442438             mov eax, dword ptr [esp + 0x38]
// 008b1bdc  29560c               sub dword ptr [esi + 0xc], edx
// 008b1bdf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008b1be3  8b760c               mov esi, dword ptr [esi + 0xc]
// 008b1be6  50                   push eax
// 008b1be7  51                   push ecx
// 008b1be8  8d542424             lea edx, [esp + 0x24]
// 008b1bec  52                   push edx
// 008b1bed  8974242c             mov dword ptr [esp + 0x2c], esi
// 008b1bf1  ffd3                 call ebx
// 008b1bf3  85c0                 test eax, eax
// 008b1bf5  0f8574ffffff         jne 0x8b1b6f
// 008b1bfb  5f                   pop edi
// 008b1bfc  5e                   pop esi
// 008b1bfd  33c0                 xor eax, eax
// 008b1bff  5b                   pop ebx
// 008b1c00  83c420               add esp, 0x20
// 008b1c03  c20c00               ret 0xc
// copied from an identical function in another client (function ?CanAttach@CXTPDockingPaneTabbedContainer@@UBEHAAVCRect@@VCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp