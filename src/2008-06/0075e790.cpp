// roc 2008-06 0075e790  unit: CXTPDockingPaneTabbedContainer  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e790
//
// 0075e790  83ec20               sub esp, 0x20
// 0075e793  53                   push ebx
// 0075e794  56                   push esi
// 0075e795  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0075e799  8b06                 mov eax, dword ptr [esi]
// 0075e79b  8b5608               mov edx, dword ptr [esi + 8]
// 0075e79e  57                   push edi
// 0075e79f  8bf9                 mov edi, ecx
// 0075e7a1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0075e7a4  8944240c             mov dword ptr [esp + 0xc], eax
// 0075e7a8  8b460c               mov eax, dword ptr [esi + 0xc]
// 0075e7ab  89542414             mov dword ptr [esp + 0x14], edx
// 0075e7af  8b17                 mov edx, dword ptr [edi]
// 0075e7b1  894c2410             mov dword ptr [esp + 0x10], ecx
// 0075e7b5  89442418             mov dword ptr [esp + 0x18], eax
// 0075e7b9  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0075e7bf  8bcf                 mov ecx, edi
// 0075e7c1  ffd0                 call eax
// 0075e7c3  83bf9801000000       cmp dword ptr [edi + 0x198], 0
// 0075e7ca  8bd8                 mov ebx, eax
// 0075e7cc  744f                 je 0x75e81d
// 0075e7ce  8d4f54               lea ecx, [edi + 0x54]
// 0075e7d1  e8daecffff           call 0x75d4b0
// 0075e7d6  85db                 test ebx, ebx
// 0075e7d8  740a                 je 0x75e7e4
// 0075e7da  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0075e7dd  83c103               add ecx, 3
// 0075e7e0  010e                 add dword ptr [esi], ecx
// 0075e7e2  eb4f                 jmp 0x75e833
// 0075e7e4  8b5078               mov edx, dword ptr [eax + 0x78]
// 0075e7e7  83c203               add edx, 3
// 0075e7ea  015604               add dword ptr [esi + 4], edx
// 0075e7ed  8b4e04               mov ecx, dword ptr [esi + 4]
// 0075e7f0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0075e7f4  8b542438             mov edx, dword ptr [esp + 0x38]
// 0075e7f8  8b442434             mov eax, dword ptr [esp + 0x34]
// 0075e7fc  8b1d2c2d8000         mov ebx, dword ptr [0x802d2c]
// 0075e802  52                   push edx
// 0075e803  50                   push eax
// 0075e804  8d4c2414             lea ecx, [esp + 0x14]
// 0075e808  51                   push ecx
// 0075e809  ffd3                 call ebx
// 0075e80b  85c0                 test eax, eax
// 0075e80d  7430                 je 0x75e83f
// 0075e80f  5f                   pop edi
// 0075e810  5e                   pop esi
// 0075e811  b801000000           mov eax, 1
// 0075e816  5b                   pop ebx
// 0075e817  83c420               add esp, 0x20
// 0075e81a  c20c00               ret 0xc
// 0075e81d  8b4768               mov eax, dword ptr [edi + 0x68]
// 0075e820  85c0                 test eax, eax
// 0075e822  740f                 je 0x75e833
// 0075e824  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075e827  8d4c240c             lea ecx, [esp + 0xc]
// 0075e82b  51                   push ecx
// 0075e82c  52                   push edx
// 0075e82d  ff15342e8000         call dword ptr [0x802e34]
// 0075e833  85db                 test ebx, ebx
// 0075e835  74b6                 je 0x75e7ed
// 0075e837  8b06                 mov eax, dword ptr [esi]
// 0075e839  89442414             mov dword ptr [esp + 0x14], eax
// 0075e83d  ebb5                 jmp 0x75e7f4
// 0075e83f  8b17                 mov edx, dword ptr [edi]
// 0075e841  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0075e847  8bcf                 mov ecx, edi
// 0075e849  ffd0                 call eax
// 0075e84b  85c0                 test eax, eax
// 0075e84d  744c                 je 0x75e89b
// 0075e84f  8b0e                 mov ecx, dword ptr [esi]
// 0075e851  8b5604               mov edx, dword ptr [esi + 4]
// 0075e854  8b4608               mov eax, dword ptr [esi + 8]
// 0075e857  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0075e85b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0075e85e  894c2428             mov dword ptr [esp + 0x28], ecx
// 0075e862  8d4f54               lea ecx, [edi + 0x54]
// 0075e865  89542420             mov dword ptr [esp + 0x20], edx
// 0075e869  89442424             mov dword ptr [esp + 0x24], eax
// 0075e86d  e83eecffff           call 0x75d4b0
// 0075e872  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0075e878  8b442438             mov eax, dword ptr [esp + 0x38]
// 0075e87c  29560c               sub dword ptr [esi + 0xc], edx
// 0075e87f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0075e883  8b760c               mov esi, dword ptr [esi + 0xc]
// 0075e886  50                   push eax
// 0075e887  51                   push ecx
// 0075e888  8d542424             lea edx, [esp + 0x24]
// 0075e88c  52                   push edx
// 0075e88d  8974242c             mov dword ptr [esp + 0x2c], esi
// 0075e891  ffd3                 call ebx
// 0075e893  85c0                 test eax, eax
// 0075e895  0f8574ffffff         jne 0x75e80f
// 0075e89b  5f                   pop edi
// 0075e89c  5e                   pop esi
// 0075e89d  33c0                 xor eax, eax
// 0075e89f  5b                   pop ebx
// 0075e8a0  83c420               add esp, 0x20
// 0075e8a3  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?CanAttach@CXTPDockingPaneTabbedContainer@@UBEHAAVCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
