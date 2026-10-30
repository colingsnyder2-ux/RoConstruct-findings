// roc 2009-12 0082d030  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d030
//
// 0082d030  6aff                 push -1
// 0082d032  68a89f9500           push 0x959fa8
// 0082d037  64a100000000         mov eax, dword ptr fs:[0]
// 0082d03d  50                   push eax
// 0082d03e  83ec10               sub esp, 0x10
// 0082d041  53                   push ebx
// 0082d042  55                   push ebp
// 0082d043  56                   push esi
// 0082d044  57                   push edi
// 0082d045  a10052b600           mov eax, dword ptr [0xb65200]
// 0082d04a  33c4                 xor eax, esp
// 0082d04c  50                   push eax
// 0082d04d  8d442424             lea eax, [esp + 0x24]
// 0082d051  64a300000000         mov dword ptr fs:[0], eax
// 0082d057  8bf9                 mov edi, ecx
// 0082d059  897c2414             mov dword ptr [esp + 0x14], edi
// 0082d05d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0082d061  8b03                 mov eax, dword ptr [ebx]
// 0082d063  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0082d069  6858509f00           push 0x9f5058
// 0082d06e  8bcb                 mov ecx, ebx
// 0082d070  ffd2                 call edx
// 0082d072  8bf0                 mov esi, eax
// 0082d074  8974241c             mov dword ptr [esp + 0x1c], esi
// 0082d078  33ed                 xor ebp, ebp
// 0082d07a  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0082d07e  8bcf                 mov ecx, edi
// 0082d080  396b28               cmp dword ptr [ebx + 0x28], ebp
// 0082d083  0f85aa000000         jne 0x82d133
// 0082d089  e892fbffff           call 0x82cc20
// 0082d08e  8bd8                 mov ebx, eax
// 0082d090  8b06                 mov eax, dword ptr [esi]
// 0082d092  8b5004               mov edx, dword ptr [eax + 4]
// 0082d095  6a01                 push 1
// 0082d097  53                   push ebx
// 0082d098  8bce                 mov ecx, esi
// 0082d09a  ffd2                 call edx
// 0082d09c  3bdd                 cmp ebx, ebp
// 0082d09e  89442418             mov dword ptr [esp + 0x18], eax
// 0082d0a2  7f30                 jg 0x82d0d4
// 0082d0a4  8b06                 mov eax, dword ptr [esi]
// 0082d0a6  8b10                 mov edx, dword ptr [eax]
// 0082d0a8  6a01                 push 1
// 0082d0aa  8bce                 mov ecx, esi
// 0082d0ac  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0082d0b4  ffd2                 call edx
// 0082d0b6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082d0ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0082d0c1  59                   pop ecx
// 0082d0c2  5f                   pop edi
// 0082d0c3  5e                   pop esi
// 0082d0c4  5d                   pop ebp
// 0082d0c5  5b                   pop ebx
// 0082d0c6  83c41c               add esp, 0x1c
// 0082d0c9  c20400               ret 4
// 0082d0cc  8d642400             lea esp, [esp]
// 0082d0d0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082d0d4  55                   push ebp
// 0082d0d5  8bcf                 mov ecx, edi
// 0082d0d7  e854fbffff           call 0x82cc30
// 0082d0dc  89442434             mov dword ptr [esp + 0x34], eax
// 0082d0e0  8b06                 mov eax, dword ptr [esi]
// 0082d0e2  8b5008               mov edx, dword ptr [eax + 8]
// 0082d0e5  8d4c2418             lea ecx, [esp + 0x18]
// 0082d0e9  51                   push ecx
// 0082d0ea  8bce                 mov ecx, esi
// 0082d0ec  ffd2                 call edx
// 0082d0ee  8bf8                 mov edi, eax
// 0082d0f0  897c2420             mov dword ptr [esp + 0x20], edi
// 0082d0f4  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0082d0f9  e812dcffff           call 0x82ad10
// 0082d0fe  8b17                 mov edx, dword ptr [edi]
// 0082d100  8b5264               mov edx, dword ptr [edx + 0x64]
// 0082d103  50                   push eax
// 0082d104  8d442438             lea eax, [esp + 0x38]
// 0082d108  50                   push eax
// 0082d109  8bcf                 mov ecx, edi
// 0082d10b  ffd2                 call edx
// 0082d10d  85c0                 test eax, eax
// 0082d10f  740c                 je 0x82d11d
// 0082d111  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082d115  8b01                 mov eax, dword ptr [ecx]
// 0082d117  8b5060               mov edx, dword ptr [eax + 0x60]
// 0082d11a  57                   push edi
// 0082d11b  ffd2                 call edx
// 0082d11d  8bcf                 mov ecx, edi
// 0082d11f  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0082d124  e8b36cfcff           call 0x7f3ddc
// 0082d129  45                   inc ebp
// 0082d12a  3beb                 cmp ebp, ebx
// 0082d12c  7ca2                 jl 0x82d0d0
// 0082d12e  e971ffffff           jmp 0x82d0a4
// 0082d133  e818faffff           call 0x82cb50
// 0082d138  8b06                 mov eax, dword ptr [esi]
// 0082d13a  8b5004               mov edx, dword ptr [eax + 4]
// 0082d13d  6a01                 push 1
// 0082d13f  55                   push ebp
// 0082d140  8bce                 mov ecx, esi
// 0082d142  ffd2                 call edx
// 0082d144  89442418             mov dword ptr [esp + 0x18], eax
// 0082d148  3bc5                 cmp eax, ebp
// 0082d14a  0f8454ffffff         je 0x82d0a4
// 0082d150  b302                 mov bl, 2
// 0082d152  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0082d15a  8b06                 mov eax, dword ptr [esi]
// 0082d15c  8b5008               mov edx, dword ptr [eax + 8]
// 0082d15f  8d4c2418             lea ecx, [esp + 0x18]
// 0082d163  51                   push ecx
// 0082d164  8bce                 mov ecx, esi
// 0082d166  ffd2                 call edx
// 0082d168  8bf8                 mov edi, eax
// 0082d16a  897c2420             mov dword ptr [esp + 0x20], edi
// 0082d16e  885c242c             mov byte ptr [esp + 0x2c], bl
// 0082d172  e899dbffff           call 0x82ad10
// 0082d177  8b17                 mov edx, dword ptr [edi]
// 0082d179  8b5264               mov edx, dword ptr [edx + 0x64]
// 0082d17c  50                   push eax
// 0082d17d  8d442438             lea eax, [esp + 0x38]
// 0082d181  50                   push eax
// 0082d182  8bcf                 mov ecx, edi
// 0082d184  ffd2                 call edx
// 0082d186  85c0                 test eax, eax
// 0082d188  740c                 je 0x82d196
// 0082d18a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082d18e  8b01                 mov eax, dword ptr [ecx]
// 0082d190  8b5060               mov edx, dword ptr [eax + 0x60]
// 0082d193  57                   push edi
// 0082d194  ffd2                 call edx
// 0082d196  8b442434             mov eax, dword ptr [esp + 0x34]
// 0082d19a  85c0                 test eax, eax
// 0082d19c  7422                 je 0x82d1c0
// 0082d19e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082d1a2  50                   push eax
// 0082d1a3  e808feffff           call 0x82cfb0
// 0082d1a8  8bcf                 mov ecx, edi
// 0082d1aa  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0082d1af  e8286cfcff           call 0x7f3ddc
// 0082d1b4  837c241800           cmp dword ptr [esp + 0x18], 0
// 0082d1b9  7597                 jne 0x82d152
// 0082d1bb  e9e4feffff           jmp 0x82d0a4
// 0082d1c0  6a00                 push 0
// 0082d1c2  6a06                 push 6
// 0082d1c4  e80772fcff           call 0x7f43d0
// copied from an identical function in another client (function ?_DoPropExchange@CXTPReportRecords@@MAEXPAVCXTPPropExchange@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp