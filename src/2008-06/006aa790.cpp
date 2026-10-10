// roc 2008-06 006aa790  unit: CPatchedControlComboBox  size: 474 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aa790
//
// 006aa790  56                   push esi
// 006aa791  8bf1                 mov esi, ecx
// 006aa793  8b06                 mov eax, dword ptr [esi]
// 006aa795  8b5074               mov edx, dword ptr [eax + 0x74]
// 006aa798  ffd2                 call edx
// 006aa79a  85c0                 test eax, eax
// 006aa79c  7504                 jne 0x6aa7a2
// 006aa79e  5e                   pop esi
// 006aa79f  c20800               ret 8
// 006aa7a2  53                   push ebx
// 006aa7a3  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006aa7a7  83fb2e               cmp ebx, 0x2e
// 006aa7aa  7409                 je 0x6aa7b5
// 006aa7ac  83fb08               cmp ebx, 8
// 006aa7af  7404                 je 0x6aa7b5
// 006aa7b1  33c0                 xor eax, eax
// 006aa7b3  eb05                 jmp 0x6aa7ba
// 006aa7b5  b801000000           mov eax, 1
// 006aa7ba  8986b0010000         mov dword ptr [esi + 0x1b0], eax
// 006aa7c0  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006aa7c6  85c0                 test eax, eax
// 006aa7c8  7410                 je 0x6aa7da
// 006aa7ca  83785400             cmp dword ptr [eax + 0x54], 0
// 006aa7ce  740a                 je 0x6aa7da
// 006aa7d0  5b                   pop ebx
// 006aa7d1  b802000000           mov eax, 2
// 006aa7d6  5e                   pop esi
// 006aa7d7  c20800               ret 8
// 006aa7da  83fb09               cmp ebx, 9
// 006aa7dd  7519                 jne 0x6aa7f8
// 006aa7df  83bed001000000       cmp dword ptr [esi + 0x1d0], 0
// 006aa7e6  7409                 je 0x6aa7f1
// 006aa7e8  f686b401000008       test byte ptr [esi + 0x1b4], 8
// 006aa7ef  755f                 jne 0x6aa850
// 006aa7f1  5b                   pop ebx
// 006aa7f2  33c0                 xor eax, eax
// 006aa7f4  5e                   pop esi
// 006aa7f5  c20800               ret 8
// 006aa7f8  83fb0d               cmp ebx, 0xd
// 006aa7fb  74f4                 je 0x6aa7f1
// 006aa7fd  83fb1b               cmp ebx, 0x1b
// 006aa800  754e                 jne 0x6aa850
// 006aa802  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006aa808  8b01                 mov eax, dword ptr [ecx]
// 006aa80a  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 006aa810  ffd2                 call edx
// 006aa812  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 006aa818  50                   push eax
// 006aa819  8bce                 mov ecx, esi
// 006aa81b  e810daffff           call 0x6a8230
// 006aa820  8d8e94010000         lea ecx, [esi + 0x194]
// 006aa826  51                   push ecx
// 006aa827  8bce                 mov ecx, esi
// 006aa829  e8c2eeffff           call 0x6a96f0
// 006aa82e  8b16                 mov edx, dword ptr [esi]
// 006aa830  8b4270               mov eax, dword ptr [edx + 0x70]
// 006aa833  6a00                 push 0
// 006aa835  8bce                 mov ecx, esi
// 006aa837  ffd0                 call eax
// 006aa839  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006aa83f  33c0                 xor eax, eax
// 006aa841  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 006aa848  5b                   pop ebx
// 006aa849  0f94c0               sete al
// 006aa84c  5e                   pop esi
// 006aa84d  c20800               ret 8
// 006aa850  55                   push ebp
// 006aa851  8b2da42d8000         mov ebp, dword ptr [0x802da4]
// 006aa857  85c0                 test eax, eax
// 006aa859  743a                 je 0x6aa895
// 006aa85b  83782000             cmp dword ptr [eax + 0x20], 0
// 006aa85f  7434                 je 0x6aa895
// 006aa861  6a12                 push 0x12
// 006aa863  ffd5                 call ebp
// 006aa865  6685c0               test ax, ax
// 006aa868  7d2b                 jge 0x6aa895
// 006aa86a  6a11                 push 0x11
// 006aa86c  ffd5                 call ebp
// 006aa86e  6685c0               test ax, ax
// 006aa871  7c22                 jl 0x6aa895
// 006aa873  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006aa879  e892a50000           call 0x6b4e10
// 006aa87e  85c0                 test eax, eax
// 006aa880  7413                 je 0x6aa895
// 006aa882  0fbed3               movsx edx, bl
// 006aa885  52                   push edx
// 006aa886  8bc8                 mov ecx, eax
// 006aa888  e8f3a0ffff           call 0x6a4980
// 006aa88d  85c0                 test eax, eax
// 006aa88f  0f859e000000         jne 0x6aa933
// 006aa895  83fb73               cmp ebx, 0x73
// 006aa898  7573                 jne 0x6aa90d
// 006aa89a  6a12                 push 0x12
// 006aa89c  ffd5                 call ebp
// 006aa89e  6685c0               test ax, ax
// 006aa8a1  7d7d                 jge 0x6aa920
// 006aa8a3  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 006aa8a9  57                   push edi
// 006aa8aa  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006aa8ae  85c9                 test ecx, ecx
// 006aa8b0  740b                 je 0x6aa8bd
// 006aa8b2  57                   push edi
// 006aa8b3  53                   push ebx
// 006aa8b4  e8d7c0ffff           call 0x6a6990
// 006aa8b9  85c0                 test eax, eax
// 006aa8bb  7544                 jne 0x6aa901
// 006aa8bd  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006aa8c4  741d                 je 0x6aa8e3
// 006aa8c6  83fb26               cmp ebx, 0x26
// 006aa8c9  740f                 je 0x6aa8da
// 006aa8cb  83fb28               cmp ebx, 0x28
// 006aa8ce  740a                 je 0x6aa8da
// 006aa8d0  83fb22               cmp ebx, 0x22
// 006aa8d3  7405                 je 0x6aa8da
// 006aa8d5  83fb21               cmp ebx, 0x21
// 006aa8d8  7564                 jne 0x6aa93e
// 006aa8da  6a12                 push 0x12
// 006aa8dc  ffd5                 call ebp
// 006aa8de  6685c0               test ax, ax
// 006aa8e1  7c5b                 jl 0x6aa93e
// 006aa8e3  8bce                 mov ecx, esi
// 006aa8e5  e856f8ffff           call 0x6aa140
// 006aa8ea  85c0                 test eax, eax
// 006aa8ec  7450                 je 0x6aa93e
// 006aa8ee  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006aa8f4  8b11                 mov edx, dword ptr [ecx]
// 006aa8f6  8b8228020000         mov eax, dword ptr [edx + 0x228]
// 006aa8fc  57                   push edi
// 006aa8fd  53                   push ebx
// 006aa8fe  56                   push esi
// 006aa8ff  ffd0                 call eax
// 006aa901  5f                   pop edi
// 006aa902  5d                   pop ebp
// 006aa903  5b                   pop ebx
// 006aa904  b801000000           mov eax, 1
// 006aa909  5e                   pop esi
// 006aa90a  c20800               ret 8
// 006aa90d  83fb26               cmp ebx, 0x26
// 006aa910  7405                 je 0x6aa917
// 006aa912  83fb28               cmp ebx, 0x28
// 006aa915  758c                 jne 0x6aa8a3
// 006aa917  6a12                 push 0x12
// 006aa919  ffd5                 call ebp
// 006aa91b  6685c0               test ax, ax
// 006aa91e  7d83                 jge 0x6aa8a3
// 006aa920  8b16                 mov edx, dword ptr [esi]
// 006aa922  33c9                 xor ecx, ecx
// 006aa924  51                   push ecx
// 006aa925  33c0                 xor eax, eax
// 006aa927  50                   push eax
// 006aa928  8b82e8000000         mov eax, dword ptr [edx + 0xe8]
// 006aa92e  51                   push ecx
// 006aa92f  8bce                 mov ecx, esi
// 006aa931  ffd0                 call eax
// 006aa933  5d                   pop ebp
// 006aa934  5b                   pop ebx
// 006aa935  b801000000           mov eax, 1
// 006aa93a  5e                   pop esi
// 006aa93b  c20800               ret 8
// 006aa93e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006aa944  85c9                 test ecx, ecx
// 006aa946  7416                 je 0x6aa95e
// 006aa948  83792000             cmp dword ptr [ecx + 0x20], 0
// 006aa94c  7410                 je 0x6aa95e
// 006aa94e  57                   push edi
// 006aa94f  53                   push ebx
// 006aa950  e87bbeffff           call 0x6a67d0
// 006aa955  85c0                 test eax, eax
// 006aa957  b801000000           mov eax, 1
// 006aa95c  7505                 jne 0x6aa963
// 006aa95e  b802000000           mov eax, 2
// 006aa963  5f                   pop edi
// 006aa964  5d                   pop ebp
// 006aa965  5b                   pop ebx
// 006aa966  5e                   pop esi
// 006aa967  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookKeyDown@CXTPControlComboBox@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
