// roc 2011-06 008ae8d0  unit: CXTPReportPaintManager  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ae8d0
//
// 008ae8d0  6aff                 push -1
// 008ae8d2  68b1aea000           push 0xa0aeb1
// 008ae8d7  64a100000000         mov eax, dword ptr fs:[0]
// 008ae8dd  50                   push eax
// 008ae8de  83ec44               sub esp, 0x44
// 008ae8e1  53                   push ebx
// 008ae8e2  55                   push ebp
// 008ae8e3  56                   push esi
// 008ae8e4  57                   push edi
// 008ae8e5  a12058c900           mov eax, dword ptr [0xc95820]
// 008ae8ea  33c4                 xor eax, esp
// 008ae8ec  50                   push eax
// 008ae8ed  8d442458             lea eax, [esp + 0x58]
// 008ae8f1  64a300000000         mov dword ptr fs:[0], eax
// 008ae8f7  8bf9                 mov edi, ecx
// 008ae8f9  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008ae8fd  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008ae900  8d4c246c             lea ecx, [esp + 0x6c]
// 008ae904  51                   push ecx
// 008ae905  8bce                 mov ecx, esi
// 008ae907  89442418             mov dword ptr [esp + 0x18], eax
// 008ae90b  e8e0d2f8ff           call 0x83bbf0
// 008ae910  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 008ae914  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 008ae918  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008ae920  8bce                 mov ecx, esi
// 008ae922  740c                 je 0x8ae930
// 008ae924  8b542470             mov edx, dword ptr [esp + 0x70]
// 008ae928  52                   push edx
// 008ae929  e8d219f8ff           call 0x830300
// 008ae92e  eb05                 jmp 0x8ae935
// 008ae930  e89b19f8ff           call 0x8302d0
// 008ae935  8bd8                 mov ebx, eax
// 008ae937  8d442438             lea eax, [esp + 0x38]
// 008ae93b  50                   push eax
// 008ae93c  8bce                 mov ecx, esi
// 008ae93e  e8bd12f8ff           call 0x82fc00
// 008ae943  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008ae94a  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ae94e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008ae952  8d0c18               lea ecx, [eax + ebx]
// 008ae955  89442428             mov dword ptr [esp + 0x28], eax
// 008ae959  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ae95d  894c2440             mov dword ptr [esp + 0x40], ecx
// 008ae961  8954242c             mov dword ptr [esp + 0x2c], edx
// 008ae965  894c2430             mov dword ptr [esp + 0x30], ecx
// 008ae969  89442434             mov dword ptr [esp + 0x34], eax
// 008ae96d  750b                 jne 0x8ae97a
// 008ae96f  8bce                 mov ecx, esi
// 008ae971  e8fa16f8ff           call 0x830070
// 008ae976  01442428             add dword ptr [esp + 0x28], eax
// 008ae97a  8bce                 mov ecx, esi
// 008ae97c  e8af13f8ff           call 0x82fd30
// 008ae981  bb01000000           mov ebx, 1
// 008ae986  85c0                 test eax, eax
// 008ae988  740a                 je 0x8ae994
// 008ae98a  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 008ae98e  895c2468             mov dword ptr [esp + 0x68], ebx
// 008ae992  7408                 je 0x8ae99c
// 008ae994  c744246800000000     mov dword ptr [esp + 0x68], 0
// 008ae99c  8d4f30               lea ecx, [edi + 0x30]
// 008ae99f  51                   push ecx
// 008ae9a0  55                   push ebp
// 008ae9a1  8d4c2450             lea ecx, [esp + 0x50]
// 008ae9a5  e876e7faff           call 0x85d120
// 008ae9aa  8d542420             lea edx, [esp + 0x20]
// 008ae9ae  52                   push edx
// 008ae9af  8d4c2470             lea ecx, [esp + 0x70]
// 008ae9b3  885c2464             mov byte ptr [esp + 0x64], bl
// 008ae9b7  ff15a826a400         call dword ptr [0xa426a8]
// 008ae9bd  50                   push eax
// 008ae9be  8d4c2474             lea ecx, [esp + 0x74]
// 008ae9c2  ff15c82da400         call dword ptr [0xa42dc8]
// 008ae9c8  50                   push eax
// 008ae9c9  8b4508               mov eax, dword ptr [ebp + 8]
// 008ae9cc  50                   push eax
// 008ae9cd  ff153801a400         call dword ptr [0xa40138]
// 008ae9d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ae9d7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008ae9db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ae9df  895c2418             mov dword ptr [esp + 0x18], ebx
// 008ae9e3  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ae9e7  83f8ff               cmp eax, -1
// 008ae9ea  7447                 je 0x8aea33
// 008ae9ec  8b542428             mov edx, dword ptr [esp + 0x28]
// 008ae9f0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ae9f4  8b1f                 mov ebx, dword ptr [edi]
// 008ae9f6  50                   push eax
// 008ae9f7  83ec10               sub esp, 0x10
// 008ae9fa  8bc4                 mov eax, esp
// 008ae9fc  8910                 mov dword ptr [eax], edx
// 008ae9fe  8b542444             mov edx, dword ptr [esp + 0x44]
// 008aea02  894804               mov dword ptr [eax + 4], ecx
// 008aea05  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008aea09  895008               mov dword ptr [eax + 8], edx
// 008aea0c  89480c               mov dword ptr [eax + 0xc], ecx
// 008aea0f  8bce                 mov ecx, esi
// 008aea11  e8ca13f8ff           call 0x82fde0
// 008aea16  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 008aea1c  50                   push eax
// 008aea1d  6a00                 push 0
// 008aea1f  8bcf                 mov ecx, edi
// 008aea21  ffd2                 call edx
// 008aea23  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008aea27  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008aea2b  8d540102             lea edx, [ecx + eax + 2]
// 008aea2f  89542428             mov dword ptr [esp + 0x28], edx
// 008aea33  b803000000           mov eax, 3
// 008aea38  01442428             add dword ptr [esp + 0x28], eax
// 008aea3c  29442430             sub dword ptr [esp + 0x30], eax
// 008aea40  8d4c246c             lea ecx, [esp + 0x6c]
// 008aea44  ff15a826a400         call dword ptr [0xa426a8]
// 008aea4a  85c0                 test eax, eax
// 008aea4c  0f8ecf000000         jle 0x8aeb21
// 008aea52  8b542430             mov edx, dword ptr [esp + 0x30]
// 008aea56  8b442428             mov eax, dword ptr [esp + 0x28]
// 008aea5a  3bd0                 cmp edx, eax
// 008aea5c  0f8ebf000000         jle 0x8aeb21
// 008aea62  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 008aea69  7441                 je 0x8aeaac
// 008aea6b  837c246800           cmp dword ptr [esp + 0x68], 0
// 008aea70  743a                 je 0x8aeaac
// 008aea72  8bca                 mov ecx, edx
// 008aea74  2bc8                 sub ecx, eax
// 008aea76  8d41e5               lea eax, [ecx - 0x1b]
// 008aea79  3bd8                 cmp ebx, eax
// 008aea7b  8bcb                 mov ecx, ebx
// 008aea7d  7c02                 jl 0x8aea81
// 008aea7f  8bc8                 mov ecx, eax
// 008aea81  83f9fb               cmp ecx, -5
// 008aea84  7d0a                 jge 0x8aea90
// 008aea86  c7442418fbffffff     mov dword ptr [esp + 0x18], 0xfffffffb
// 008aea8e  eb08                 jmp 0x8aea98
// 008aea90  3bd8                 cmp ebx, eax
// 008aea92  7c04                 jl 0x8aea98
// 008aea94  89442418             mov dword ptr [esp + 0x18], eax
// 008aea98  8b442428             mov eax, dword ptr [esp + 0x28]
// 008aea9c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008aeaa0  8d440108             lea eax, [ecx + eax + 8]
// 008aeaa4  3bd0                 cmp edx, eax
// 008aeaa6  7c04                 jl 0x8aeaac
// 008aeaa8  89442430             mov dword ptr [esp + 0x30], eax
// 008aeaac  8bce                 mov ecx, esi
// 008aeaae  e8cd10f8ff           call 0x82fb80
// 008aeab3  8b7500               mov esi, dword ptr [ebp]
// 008aeab6  2410                 and al, 0x10
// 008aeab8  0fbec0               movsx eax, al
// 008aeabb  f7d8                 neg eax
// 008aeabd  1bc0                 sbb eax, eax
// 008aeabf  83e0f0               and eax, 0xfffffff0
// 008aeac2  83c020               add eax, 0x20
// 008aeac5  0d048c0000           or eax, 0x8c04
// 008aeaca  50                   push eax
// 008aeacb  8d54242c             lea edx, [esp + 0x2c]
// 008aeacf  52                   push edx
// 008aead0  8d4c2474             lea ecx, [esp + 0x74]
// 008aead4  ff15a826a400         call dword ptr [0xa426a8]
// 008aeada  50                   push eax
// 008aeadb  8d4c2478             lea ecx, [esp + 0x78]
// 008aeadf  ff15c82da400         call dword ptr [0xa42dc8]
// 008aeae5  50                   push eax
// 008aeae6  8b4670               mov eax, dword ptr [esi + 0x70]
// 008aeae9  8bcd                 mov ecx, ebp
// 008aeaeb  ffd0                 call eax
// 008aeaed  8b442434             mov eax, dword ptr [esp + 0x34]
// 008aeaf1  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 008aeaf5  8b8fe4020000         mov ecx, dword ptr [edi + 0x2e4]
// 008aeafb  8b11                 mov edx, dword ptr [ecx]
// 008aeafd  50                   push eax
// 008aeafe  8b4258               mov eax, dword ptr [edx + 0x58]
// 008aeb01  ffd0                 call eax
// 008aeb03  8d4c2448             lea ecx, [esp + 0x48]
// 008aeb07  8bf0                 mov esi, eax
// 008aeb09  c644246000           mov byte ptr [esp + 0x60], 0
// 008aeb0e  e88de6faff           call 0x85d1a0
// 008aeb13  8d4c246c             lea ecx, [esp + 0x6c]
// 008aeb17  ff15082ea400         call dword ptr [0xa42e08]
// 008aeb1d  8bc6                 mov eax, esi
// 008aeb1f  eb1d                 jmp 0x8aeb3e
// 008aeb21  8d4c2448             lea ecx, [esp + 0x48]
// 008aeb25  c644246000           mov byte ptr [esp + 0x60], 0
// 008aeb2a  e871e6faff           call 0x85d1a0
// 008aeb2f  8d4c246c             lea ecx, [esp + 0x6c]
// 008aeb33  ff15082ea400         call dword ptr [0xa42e08]
// 008aeb39  b808000000           mov eax, 8
// 008aeb3e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008aeb42  64890d00000000       mov dword ptr fs:[0], ecx
// 008aeb49  59                   pop ecx
// 008aeb4a  5f                   pop edi
// 008aeb4b  5e                   pop esi
// 008aeb4c  5d                   pop ebp
// 008aeb4d  5b                   pop ebx
// 008aeb4e  83c450               add esp, 0x50
// 008aeb51  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcColumnHeight@CXTPReportPaintManager@@MAEHPAVCDC@@PAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp