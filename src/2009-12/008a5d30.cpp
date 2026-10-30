// roc 2009-12 008a5d30  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a5d30
//
// 008a5d30  6aff                 push -1
// 008a5d32  6808269600           push 0x962608
// 008a5d37  64a100000000         mov eax, dword ptr fs:[0]
// 008a5d3d  50                   push eax
// 008a5d3e  83ec2c               sub esp, 0x2c
// 008a5d41  53                   push ebx
// 008a5d42  56                   push esi
// 008a5d43  57                   push edi
// 008a5d44  a10052b600           mov eax, dword ptr [0xb65200]
// 008a5d49  33c4                 xor eax, esp
// 008a5d4b  50                   push eax
// 008a5d4c  8d44243c             lea eax, [esp + 0x3c]
// 008a5d50  64a300000000         mov dword ptr fs:[0], eax
// 008a5d56  8bf1                 mov esi, ecx
// 008a5d58  8d4c2410             lea ecx, [esp + 0x10]
// 008a5d5c  e8ff48f7ff           call 0x81a660
// 008a5d61  c74424104c4d9f00     mov dword ptr [esp + 0x10], 0x9f4d4c
// 008a5d69  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5d6c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a5d70  8b16                 mov edx, dword ptr [esi]
// 008a5d72  8d5c241c             lea ebx, [esp + 0x1c]
// 008a5d76  53                   push ebx
// 008a5d77  8d5c2428             lea ebx, [esp + 0x28]
// 008a5d7b  53                   push ebx
// 008a5d7c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a5d80  8b442454             mov eax, dword ptr [esp + 0x54]
// 008a5d84  51                   push ecx
// 008a5d85  33ff                 xor edi, edi
// 008a5d87  89442440             mov dword ptr [esp + 0x40], eax
// 008a5d8b  894c2444             mov dword ptr [esp + 0x44], ecx
// 008a5d8f  50                   push eax
// 008a5d90  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008a5d96  8bce                 mov ecx, esi
// 008a5d98  897c2454             mov dword ptr [esp + 0x54], edi
// 008a5d9c  89742428             mov dword ptr [esp + 0x28], esi
// 008a5da0  897c242c             mov dword ptr [esp + 0x2c], edi
// 008a5da4  ffd0                 call eax
// 008a5da6  8b16                 mov edx, dword ptr [esi]
// 008a5da8  89442420             mov dword ptr [esp + 0x20], eax
// 008a5dac  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 008a5db2  8bce                 mov ecx, esi
// 008a5db4  ffd0                 call eax
// 008a5db6  85c0                 test eax, eax
// 008a5db8  7441                 je 0x8a5dfb
// 008a5dba  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a5dbe  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008a5dc2  51                   push ecx
// 008a5dc3  52                   push edx
// 008a5dc4  8d463c               lea eax, [esi + 0x3c]
// 008a5dc7  50                   push eax
// 008a5dc8  ff155cca9800         call dword ptr [0x98ca5c]
// 008a5dce  85c0                 test eax, eax
// 008a5dd0  7429                 je 0x8a5dfb
// 008a5dd2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a5dd6  3bcf                 cmp ecx, edi
// 008a5dd8  7421                 je 0x8a5dfb
// 008a5dda  e8411df8ff           call 0x827b20
// 008a5ddf  85c0                 test eax, eax
// 008a5de1  7418                 je 0x8a5dfb
// 008a5de3  8b3e                 mov edi, dword ptr [esi]
// 008a5de5  8b5778               mov edx, dword ptr [edi + 0x78]
// 008a5de8  8bce                 mov ecx, esi
// 008a5dea  ffd2                 call edx
// 008a5dec  f7d8                 neg eax
// 008a5dee  1bc0                 sbb eax, eax
// 008a5df0  40                   inc eax
// 008a5df1  50                   push eax
// 008a5df2  8b477c               mov eax, dword ptr [edi + 0x7c]
// 008a5df5  8bce                 mov ecx, esi
// 008a5df7  ffd0                 call eax
// 008a5df9  eb14                 jmp 0x8a5e0f
// 008a5dfb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a5dff  3bcf                 cmp ecx, edi
// 008a5e01  740c                 je 0x8a5e0f
// 008a5e03  8b11                 mov edx, dword ptr [ecx]
// 008a5e05  8b5260               mov edx, dword ptr [edx + 0x60]
// 008a5e08  8d442410             lea eax, [esp + 0x10]
// 008a5e0c  50                   push eax
// 008a5e0d  ffd2                 call edx
// 008a5e0f  8d4c2410             lea ecx, [esp + 0x10]
// 008a5e13  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 008a5e1b  e88042f7ff           call 0x81a0a0
// 008a5e20  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a5e24  64890d00000000       mov dword ptr fs:[0], ecx
// 008a5e2b  59                   pop ecx
// 008a5e2c  5f                   pop edi
// 008a5e2d  5e                   pop esi
// 008a5e2e  5b                   pop ebx
// 008a5e2f  83c438               add esp, 0x38
// 008a5e32  c20800               ret 8
// copied from an identical function in another client (function ?OnClick@CXTPReportRow@@UAEXVCPoint@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp