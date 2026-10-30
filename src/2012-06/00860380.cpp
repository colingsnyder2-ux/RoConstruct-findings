// roc 2012-06 00860380  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00860380
//
// 00860380  55                   push ebp
// 00860381  8bec                 mov ebp, esp
// 00860383  6aff                 push -1
// 00860385  6830e8ac00           push 0xace830
// 0086038a  64a100000000         mov eax, dword ptr fs:[0]
// 00860390  50                   push eax
// 00860391  64892500000000       mov dword ptr fs:[0], esp
// 00860398  83ec38               sub esp, 0x38
// 0086039b  53                   push ebx
// 0086039c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0086039f  56                   push esi
// 008603a0  8bf1                 mov esi, ecx
// 008603a2  f6465001             test byte ptr [esi + 0x50], 1
// 008603a6  57                   push edi
// 008603a7  8965f0               mov dword ptr [ebp - 0x10], esp
// 008603aa  7510                 jne 0x8603bc
// 008603ac  8d4508               lea eax, [ebp + 8]
// 008603af  50                   push eax
// 008603b0  895d08               mov dword ptr [ebp + 8], ebx
// 008603b3  e8e8f2ffff           call 0x85f6a0
// 008603b8  834e5001             or dword ptr [esi + 0x50], 1
// 008603bc  f6465002             test byte ptr [esi + 0x50], 2
// 008603c0  7416                 je 0x8603d8
// 008603c2  83c8ff               or eax, 0xffffffff
// 008603c5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 008603c8  64890d00000000       mov dword ptr fs:[0], ecx
// 008603cf  5f                   pop edi
// 008603d0  5e                   pop esi
// 008603d1  5b                   pop ebx
// 008603d2  8be5                 mov esp, ebp
// 008603d4  5d                   pop ebp
// 008603d5  c20c00               ret 0xc
// 008603d8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 008603db  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008603de  57                   push edi
// 008603df  51                   push ecx
// 008603e0  33c0                 xor eax, eax
// 008603e2  53                   push ebx
// 008603e3  8bce                 mov ecx, esi
// 008603e5  8945fc               mov dword ptr [ebp - 4], eax
// 008603e8  894508               mov dword ptr [ebp + 8], eax
// 008603eb  e860ddffff           call 0x85e150
// 008603f0  83f8ff               cmp eax, -1
// 008603f3  7436                 je 0x86042b
// 008603f5  3bc7                 cmp eax, edi
// 008603f7  894508               mov dword ptr [ebp + 8], eax
// 008603fa  7d41                 jge 0x86043d
// 008603fc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008603ff  2bf8                 sub edi, eax
// 00860401  57                   push edi
// 00860402  03c2                 add eax, edx
// 00860404  50                   push eax
// 00860405  53                   push ebx
// 00860406  8bce                 mov ecx, esi
// 00860408  e843ddffff           call 0x85e150
// 0086040d  83f8ff               cmp eax, -1
// 00860410  7419                 je 0x86042b
// 00860412  014508               add dword ptr [ebp + 8], eax
// 00860415  8b4508               mov eax, dword ptr [ebp + 8]
// 00860418  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0086041b  64890d00000000       mov dword ptr fs:[0], ecx
// 00860422  5f                   pop edi
// 00860423  5e                   pop esi
// 00860424  5b                   pop ebx
// 00860425  8be5                 mov esp, ebp
// 00860427  5d                   pop ebp
// 00860428  c20c00               ret 0xc
// 0086042b  8d450c               lea eax, [ebp + 0xc]
// 0086042e  50                   push eax
// 0086042f  8bce                 mov ecx, esi
// 00860431  895d0c               mov dword ptr [ebp + 0xc], ebx
// 00860434  e8c7faffff           call 0x85ff00
// 00860439  834e5002             or dword ptr [esi + 0x50], 2
// 0086043d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00860440  8b4508               mov eax, dword ptr [ebp + 8]
// 00860443  5f                   pop edi
// 00860444  5e                   pop esi
// 00860445  64890d00000000       mov dword ptr fs:[0], ecx
// 0086044c  5b                   pop ebx
// 0086044d  8be5                 mov esp, ebp
// 0086044f  5d                   pop ebp
// 00860450  c20c00               ret 0xc
// 00860453  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00860456  51                   push ecx
// 00860457  8d4dbc               lea ecx, [ebp - 0x44]
// 0086045a  e8f1d0ffff           call 0x85d550
// 0086045f  68182cd200           push 0xd22c18
// 00860464  8d55bc               lea edx, [ebp - 0x44]
// 00860467  52                   push edx
// 00860468  e8d72c1200           call 0x983144
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp