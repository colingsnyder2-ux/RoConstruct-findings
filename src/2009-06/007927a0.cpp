// roc 2009-06 007927a0  unit: CXTPReportColumns  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007927a0
//
// 007927a0  6aff                 push -1
// 007927a2  68e9b68700           push 0x87b6e9
// 007927a7  64a100000000         mov eax, dword ptr fs:[0]
// 007927ad  50                   push eax
// 007927ae  81ece0000000         sub esp, 0xe0
// 007927b4  53                   push ebx
// 007927b5  55                   push ebp
// 007927b6  56                   push esi
// 007927b7  57                   push edi
// 007927b8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007927bd  33c4                 xor eax, esp
// 007927bf  50                   push eax
// 007927c0  8d8424f4000000       lea eax, [esp + 0xf4]
// 007927c7  64a300000000         mov dword ptr fs:[0], eax
// 007927cd  8bd9                 mov ebx, ecx
// 007927cf  8d4c2418             lea ecx, [esp + 0x18]
// 007927d3  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007927d9  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 007927e0  8b07                 mov eax, dword ptr [edi]
// 007927e2  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007927e8  33f6                 xor esi, esi
// 007927ea  89b424fc000000       mov dword ptr [esp + 0xfc], esi
// 007927f1  6824009000           push 0x900024
// 007927f6  8bcf                 mov ecx, edi
// 007927f8  397728               cmp dword ptr [edi + 0x28], esi
// 007927fb  0f8501010000         jne 0x792902
// 00792801  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00792804  89742430             mov dword ptr [esp + 0x30], esi
// 00792808  ffd2                 call edx
// 0079280a  8be8                 mov ebp, eax
// 0079280c  896c2424             mov dword ptr [esp + 0x24], ebp
// 00792810  8b4500               mov eax, dword ptr [ebp]
// 00792813  8b5004               mov edx, dword ptr [eax + 4]
// 00792816  6a00                 push 0
// 00792818  56                   push esi
// 00792819  8bcd                 mov ecx, ebp
// 0079281b  c684240401000001     mov byte ptr [esp + 0x104], 1
// 00792823  ffd2                 call edx
// 00792825  8944241c             mov dword ptr [esp + 0x1c], eax
// 00792829  33c0                 xor eax, eax
// 0079282b  89442414             mov dword ptr [esp + 0x14], eax
// 0079282f  85f6                 test esi, esi
// 00792831  0f8eb3000000         jle 0x7928ea
// 00792837  eb0b                 jmp 0x792844
// 00792839  8da42400000000       lea esp, [esp]
// 00792840  8b442414             mov eax, dword ptr [esp + 0x14]
// 00792844  85c0                 test eax, eax
// 00792846  7c10                 jl 0x792858
// 00792848  3b4330               cmp eax, dword ptr [ebx + 0x30]
// 0079284b  7d0b                 jge 0x792858
// 0079284d  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00792850  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00792853  8d0481               lea eax, [ecx + eax*4]
// 00792856  eb02                 jmp 0x79285a
// 00792858  33ff                 xor edi, edi
// 0079285a  8b5500               mov edx, dword ptr [ebp]
// 0079285d  8b5208               mov edx, dword ptr [edx + 8]
// 00792860  8d44241c             lea eax, [esp + 0x1c]
// 00792864  50                   push eax
// 00792865  8bcd                 mov ecx, ebp
// 00792867  ffd2                 call edx
// 00792869  8bf0                 mov esi, eax
// 0079286b  89742428             mov dword ptr [esp + 0x28], esi
// 0079286f  8bcf                 mov ecx, edi
// 00792871  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 00792879  e832a6fbff           call 0x74ceb0
// 0079287e  89442420             mov dword ptr [esp + 0x20], eax
// 00792882  8d4720               lea eax, [edi + 0x20]
// 00792885  50                   push eax
// 00792886  8d4c241c             lea ecx, [esp + 0x1c]
// 0079288a  ff1508fa8900         call dword ptr [0x89fa08]
// 00792890  8d4c2420             lea ecx, [esp + 0x20]
// 00792894  51                   push ecx
// 00792895  6818009000           push 0x900018
// 0079289a  56                   push esi
// 0079289b  e8d033feff           call 0x775c70
// 007928a0  8d542424             lea edx, [esp + 0x24]
// 007928a4  52                   push edx
// 007928a5  6894d08b00           push 0x8bd094
// 007928aa  56                   push esi
// 007928ab  e88034feff           call 0x775d30
// 007928b0  8b07                 mov eax, dword ptr [edi]
// 007928b2  8b5058               mov edx, dword ptr [eax + 0x58]
// 007928b5  83c418               add esp, 0x18
// 007928b8  56                   push esi
// 007928b9  8bcf                 mov ecx, edi
// 007928bb  ffd2                 call edx
// 007928bd  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 007928c5  85f6                 test esi, esi
// 007928c7  7407                 je 0x7928d0
// 007928c9  8bce                 mov ecx, esi
// 007928cb  e8d866f8ff           call 0x718fa8
// 007928d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 007928d4  40                   inc eax
// 007928d5  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 007928d9  89442414             mov dword ptr [esp + 0x14], eax
// 007928dd  0f8c5dffffff         jl 0x792840
// 007928e3  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 007928ea  8b4500               mov eax, dword ptr [ebp]
// 007928ed  8b10                 mov edx, dword ptr [eax]
// 007928ef  6a01                 push 1
// 007928f1  8bcd                 mov ecx, ebp
// 007928f3  c684240001000000     mov byte ptr [esp + 0x100], 0
// 007928fb  ffd2                 call edx
// 007928fd  e948010000           jmp 0x792a4a
// 00792902  ffd2                 call edx
// 00792904  8be8                 mov ebp, eax
// 00792906  896c2428             mov dword ptr [esp + 0x28], ebp
// 0079290a  8b4500               mov eax, dword ptr [ebp]
// 0079290d  8b5004               mov edx, dword ptr [eax + 4]
// 00792910  56                   push esi
// 00792911  56                   push esi
// 00792912  8bcd                 mov ecx, ebp
// 00792914  c684240401000003     mov byte ptr [esp + 0x104], 3
// 0079291c  ffd2                 call edx
// 0079291e  6a01                 push 1
// 00792920  6a01                 push 1
// 00792922  6aff                 push -1
// 00792924  6a01                 push 1
// 00792926  56                   push esi
// 00792927  6816d28a00           push 0x8ad216
// 0079292c  56                   push esi
// 0079292d  8d4c244c             lea ecx, [esp + 0x4c]
// 00792931  89442430             mov dword ptr [esp + 0x30], eax
// 00792935  e8a6a9fbff           call 0x74d2e0
// 0079293a  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 00792942  8974241c             mov dword ptr [esp + 0x1c], esi
// 00792946  39742414             cmp dword ptr [esp + 0x14], esi
// 0079294a  0f84d6000000         je 0x792a26
// 00792950  8b4500               mov eax, dword ptr [ebp]
// 00792953  8b5008               mov edx, dword ptr [eax + 8]
// 00792956  8d4c2414             lea ecx, [esp + 0x14]
// 0079295a  51                   push ecx
// 0079295b  8bcd                 mov ecx, ebp
// 0079295d  ffd2                 call edx
// 0079295f  8bf0                 mov esi, eax
// 00792961  89742424             mov dword ptr [esp + 0x24], esi
// 00792965  6aff                 push -1
// 00792967  8d442424             lea eax, [esp + 0x24]
// 0079296b  50                   push eax
// 0079296c  6818009000           push 0x900018
// 00792971  56                   push esi
// 00792972  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 0079297a  e82133feff           call 0x775ca0
// 0079297f  83c410               add esp, 0x10
// 00792982  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 00792986  763f                 jbe 0x7929c7
// 00792988  8d4c2418             lea ecx, [esp + 0x18]
// 0079298c  51                   push ecx
// 0079298d  6894d08b00           push 0x8bd094
// 00792992  56                   push esi
// 00792993  e89833feff           call 0x775d30
// 00792998  83c40c               add esp, 0xc
// 0079299b  8d4c2418             lea ecx, [esp + 0x18]
// 0079299f  ff155cfb8900         call dword ptr [0x89fb5c]
// 007929a5  84c0                 test al, al
// 007929a7  751e                 jne 0x7929c7
// 007929a9  8d542418             lea edx, [esp + 0x18]
// 007929ad  52                   push edx
// 007929ae  8bcb                 mov ecx, ebx
// 007929b0  e8cbfaffff           call 0x792480
// 007929b5  8bf8                 mov edi, eax
// 007929b7  85ff                 test edi, edi
// 007929b9  7522                 jne 0x7929dd
// 007929bb  56                   push esi
// 007929bc  8d4c2434             lea ecx, [esp + 0x34]
// 007929c0  e89ba3fbff           call 0x74cd60
// 007929c5  eb3a                 jmp 0x792a01
// 007929c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 007929cb  50                   push eax
// 007929cc  8bcb                 mov ecx, ebx
// 007929ce  e84dfaffff           call 0x792420
// 007929d3  8bf8                 mov edi, eax
// 007929d5  85ff                 test edi, edi
// 007929d7  0f8409010000         je 0x792ae6
// 007929dd  8b17                 mov edx, dword ptr [edi]
// 007929df  8b4258               mov eax, dword ptr [edx + 0x58]
// 007929e2  56                   push esi
// 007929e3  8bcf                 mov ecx, edi
// 007929e5  ffd0                 call eax
// 007929e7  57                   push edi
// 007929e8  8bcb                 mov ecx, ebx
// 007929ea  e8b1f9ffff           call 0x7923a0
// 007929ef  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007929f3  50                   push eax
// 007929f4  57                   push edi
// 007929f5  8bcb                 mov ecx, ebx
// 007929f7  e8e4fcffff           call 0x7926e0
// 007929fc  47                   inc edi
// 007929fd  897c241c             mov dword ptr [esp + 0x1c], edi
// 00792a01  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 00792a09  85f6                 test esi, esi
// 00792a0b  7407                 je 0x792a14
// 00792a0d  8bce                 mov ecx, esi
// 00792a0f  e89465f8ff           call 0x718fa8
// 00792a14  837c241400           cmp dword ptr [esp + 0x14], 0
// 00792a19  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 00792a20  0f852affffff         jne 0x792950
// 00792a26  8d4c2430             lea ecx, [esp + 0x30]
// 00792a2a  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 00792a32  e819a6fbff           call 0x74d050
// 00792a37  8b5500               mov edx, dword ptr [ebp]
// 00792a3a  8b02                 mov eax, dword ptr [edx]
// 00792a3c  6a01                 push 1
// 00792a3e  8bcd                 mov ecx, ebp
// 00792a40  c684240001000000     mov byte ptr [esp + 0x100], 0
// 00792a48  ffd0                 call eax
// 00792a4a  8b17                 mov edx, dword ptr [edi]
// 00792a4c  8b4270               mov eax, dword ptr [edx + 0x70]
// 00792a4f  680c009000           push 0x90000c
// 00792a54  8bcf                 mov ecx, edi
// 00792a56  ffd0                 call eax
// 00792a58  8be8                 mov ebp, eax
// 00792a5a  896c2428             mov dword ptr [esp + 0x28], ebp
// 00792a5e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00792a61  8b11                 mov edx, dword ptr [ecx]
// 00792a63  8b4258               mov eax, dword ptr [edx + 0x58]
// 00792a66  55                   push ebp
// 00792a67  c684240001000006     mov byte ptr [esp + 0x100], 6
// 00792a6f  ffd0                 call eax
// 00792a71  8b17                 mov edx, dword ptr [edi]
// 00792a73  8b4270               mov eax, dword ptr [edx + 0x70]
// 00792a76  6800009000           push 0x900000
// 00792a7b  8bcf                 mov ecx, edi
// 00792a7d  ffd0                 call eax
// 00792a7f  8bf0                 mov esi, eax
// 00792a81  89742424             mov dword ptr [esp + 0x24], esi
// 00792a85  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00792a88  8b13                 mov edx, dword ptr [ebx]
// 00792a8a  8b4258               mov eax, dword ptr [edx + 0x58]
// 00792a8d  56                   push esi
// 00792a8e  8bcb                 mov ecx, ebx
// 00792a90  c684240001000007     mov byte ptr [esp + 0x100], 7
// 00792a98  ffd0                 call eax
// 00792a9a  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 00792aa2  85f6                 test esi, esi
// 00792aa4  7407                 je 0x792aad
// 00792aa6  8bce                 mov ecx, esi
// 00792aa8  e8fb64f8ff           call 0x718fa8
// 00792aad  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 00792ab5  85ed                 test ebp, ebp
// 00792ab7  7407                 je 0x792ac0
// 00792ab9  8bcd                 mov ecx, ebp
// 00792abb  e8e864f8ff           call 0x718fa8
// 00792ac0  8d4c2418             lea ecx, [esp + 0x18]
// 00792ac4  ff1510fd8900         call dword ptr [0x89fd10]
// 00792aca  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 00792ad1  64890d00000000       mov dword ptr fs:[0], ecx
// 00792ad8  59                   pop ecx
// 00792ad9  5f                   pop edi
// 00792ada  5e                   pop esi
// 00792adb  5d                   pop ebp
// 00792adc  5b                   pop ebx
// 00792add  81c4ec000000         add esp, 0xec
// 00792ae3  c20400               ret 4
// 00792ae6  6a00                 push 0
// 00792ae8  6a05                 push 5
// 00792aea  e8b36af8ff           call 0x7195a2
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportColumns@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportColumns.cpp