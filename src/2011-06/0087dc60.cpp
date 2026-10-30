// roc 2011-06 0087dc60  unit: CXTPReportColumns  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087dc60
//
// 0087dc60  6aff                 push -1
// 0087dc62  68f987a000           push 0xa087f9
// 0087dc67  64a100000000         mov eax, dword ptr fs:[0]
// 0087dc6d  50                   push eax
// 0087dc6e  81ece0000000         sub esp, 0xe0
// 0087dc74  53                   push ebx
// 0087dc75  55                   push ebp
// 0087dc76  56                   push esi
// 0087dc77  57                   push edi
// 0087dc78  a12058c900           mov eax, dword ptr [0xc95820]
// 0087dc7d  33c4                 xor eax, esp
// 0087dc7f  50                   push eax
// 0087dc80  8d8424f4000000       lea eax, [esp + 0xf4]
// 0087dc87  64a300000000         mov dword ptr fs:[0], eax
// 0087dc8d  8bd9                 mov ebx, ecx
// 0087dc8f  8d4c2418             lea ecx, [esp + 0x18]
// 0087dc93  ff15b42da400         call dword ptr [0xa42db4]
// 0087dc99  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0087dca0  8b07                 mov eax, dword ptr [edi]
// 0087dca2  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0087dca8  33f6                 xor esi, esi
// 0087dcaa  89b424fc000000       mov dword ptr [esp + 0xfc], esi
// 0087dcb1  6884edac00           push 0xaced84
// 0087dcb6  8bcf                 mov ecx, edi
// 0087dcb8  397728               cmp dword ptr [edi + 0x28], esi
// 0087dcbb  0f8501010000         jne 0x87ddc2
// 0087dcc1  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0087dcc4  89742430             mov dword ptr [esp + 0x30], esi
// 0087dcc8  ffd2                 call edx
// 0087dcca  8be8                 mov ebp, eax
// 0087dccc  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087dcd0  8b4500               mov eax, dword ptr [ebp]
// 0087dcd3  8b5004               mov edx, dword ptr [eax + 4]
// 0087dcd6  6a00                 push 0
// 0087dcd8  56                   push esi
// 0087dcd9  8bcd                 mov ecx, ebp
// 0087dcdb  c684240401000001     mov byte ptr [esp + 0x104], 1
// 0087dce3  ffd2                 call edx
// 0087dce5  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087dce9  33c0                 xor eax, eax
// 0087dceb  89442414             mov dword ptr [esp + 0x14], eax
// 0087dcef  85f6                 test esi, esi
// 0087dcf1  0f8eb3000000         jle 0x87ddaa
// 0087dcf7  eb0b                 jmp 0x87dd04
// 0087dcf9  8da42400000000       lea esp, [esp]
// 0087dd00  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087dd04  85c0                 test eax, eax
// 0087dd06  7c10                 jl 0x87dd18
// 0087dd08  3b4330               cmp eax, dword ptr [ebx + 0x30]
// 0087dd0b  7d0b                 jge 0x87dd18
// 0087dd0d  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 0087dd10  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0087dd13  8d0481               lea eax, [ecx + eax*4]
// 0087dd16  eb02                 jmp 0x87dd1a
// 0087dd18  33ff                 xor edi, edi
// 0087dd1a  8b5500               mov edx, dword ptr [ebp]
// 0087dd1d  8b5208               mov edx, dword ptr [edx + 8]
// 0087dd20  8d44241c             lea eax, [esp + 0x1c]
// 0087dd24  50                   push eax
// 0087dd25  8bcd                 mov ecx, ebp
// 0087dd27  ffd2                 call edx
// 0087dd29  8bf0                 mov esi, eax
// 0087dd2b  89742428             mov dword ptr [esp + 0x28], esi
// 0087dd2f  8bcf                 mov ecx, edi
// 0087dd31  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 0087dd39  e892640200           call 0x8a41d0
// 0087dd3e  89442420             mov dword ptr [esp + 0x20], eax
// 0087dd42  8d4720               lea eax, [edi + 0x20]
// 0087dd45  50                   push eax
// 0087dd46  8d4c241c             lea ecx, [esp + 0x1c]
// 0087dd4a  ff156425a400         call dword ptr [0xa42564]
// 0087dd50  8d4c2420             lea ecx, [esp + 0x20]
// 0087dd54  51                   push ecx
// 0087dd55  6878edac00           push 0xaced78
// 0087dd5a  56                   push esi
// 0087dd5b  e8c021feff           call 0x85ff20
// 0087dd60  8d542424             lea edx, [esp + 0x24]
// 0087dd64  52                   push edx
// 0087dd65  688c5da700           push 0xa75d8c
// 0087dd6a  56                   push esi
// 0087dd6b  e87022feff           call 0x85ffe0
// 0087dd70  8b07                 mov eax, dword ptr [edi]
// 0087dd72  8b5058               mov edx, dword ptr [eax + 0x58]
// 0087dd75  83c418               add esp, 0x18
// 0087dd78  56                   push esi
// 0087dd79  8bcf                 mov ecx, edi
// 0087dd7b  ffd2                 call edx
// 0087dd7d  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 0087dd85  85f6                 test esi, esi
// 0087dd87  7407                 je 0x87dd90
// 0087dd89  8bce                 mov ecx, esi
// 0087dd8b  e84ac8f8ff           call 0x80a5da
// 0087dd90  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087dd94  40                   inc eax
// 0087dd95  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0087dd99  89442414             mov dword ptr [esp + 0x14], eax
// 0087dd9d  0f8c5dffffff         jl 0x87dd00
// 0087dda3  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0087ddaa  8b4500               mov eax, dword ptr [ebp]
// 0087ddad  8b10                 mov edx, dword ptr [eax]
// 0087ddaf  6a01                 push 1
// 0087ddb1  8bcd                 mov ecx, ebp
// 0087ddb3  c684240001000000     mov byte ptr [esp + 0x100], 0
// 0087ddbb  ffd2                 call edx
// 0087ddbd  e948010000           jmp 0x87df0a
// 0087ddc2  ffd2                 call edx
// 0087ddc4  8be8                 mov ebp, eax
// 0087ddc6  896c2428             mov dword ptr [esp + 0x28], ebp
// 0087ddca  8b4500               mov eax, dword ptr [ebp]
// 0087ddcd  8b5004               mov edx, dword ptr [eax + 4]
// 0087ddd0  56                   push esi
// 0087ddd1  56                   push esi
// 0087ddd2  8bcd                 mov ecx, ebp
// 0087ddd4  c684240401000003     mov byte ptr [esp + 0x104], 3
// 0087dddc  ffd2                 call edx
// 0087ddde  6a01                 push 1
// 0087dde0  6a01                 push 1
// 0087dde2  6aff                 push -1
// 0087dde4  6a01                 push 1
// 0087dde6  56                   push esi
// 0087dde7  68cabea500           push 0xa5beca
// 0087ddec  56                   push esi
// 0087dded  8d4c244c             lea ecx, [esp + 0x4c]
// 0087ddf1  89442430             mov dword ptr [esp + 0x30], eax
// 0087ddf5  e8f623fbff           call 0x8301f0
// 0087ddfa  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0087de02  8974241c             mov dword ptr [esp + 0x1c], esi
// 0087de06  39742414             cmp dword ptr [esp + 0x14], esi
// 0087de0a  0f84d6000000         je 0x87dee6
// 0087de10  8b4500               mov eax, dword ptr [ebp]
// 0087de13  8b5008               mov edx, dword ptr [eax + 8]
// 0087de16  8d4c2414             lea ecx, [esp + 0x14]
// 0087de1a  51                   push ecx
// 0087de1b  8bcd                 mov ecx, ebp
// 0087de1d  ffd2                 call edx
// 0087de1f  8bf0                 mov esi, eax
// 0087de21  89742424             mov dword ptr [esp + 0x24], esi
// 0087de25  6aff                 push -1
// 0087de27  8d442424             lea eax, [esp + 0x24]
// 0087de2b  50                   push eax
// 0087de2c  6878edac00           push 0xaced78
// 0087de31  56                   push esi
// 0087de32  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 0087de3a  e81121feff           call 0x85ff50
// 0087de3f  83c410               add esp, 0x10
// 0087de42  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 0087de46  763f                 jbe 0x87de87
// 0087de48  8d4c2418             lea ecx, [esp + 0x18]
// 0087de4c  51                   push ecx
// 0087de4d  688c5da700           push 0xa75d8c
// 0087de52  56                   push esi
// 0087de53  e88821feff           call 0x85ffe0
// 0087de58  83c40c               add esp, 0xc
// 0087de5b  8d4c2418             lea ecx, [esp + 0x18]
// 0087de5f  ff15b026a400         call dword ptr [0xa426b0]
// 0087de65  84c0                 test al, al
// 0087de67  751e                 jne 0x87de87
// 0087de69  8d542418             lea edx, [esp + 0x18]
// 0087de6d  52                   push edx
// 0087de6e  8bcb                 mov ecx, ebx
// 0087de70  e8cbfaffff           call 0x87d940
// 0087de75  8bf8                 mov edi, eax
// 0087de77  85ff                 test edi, edi
// 0087de79  7522                 jne 0x87de9d
// 0087de7b  56                   push esi
// 0087de7c  8d4c2434             lea ecx, [esp + 0x34]
// 0087de80  e8fb1dfbff           call 0x82fc80
// 0087de85  eb3a                 jmp 0x87dec1
// 0087de87  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087de8b  50                   push eax
// 0087de8c  8bcb                 mov ecx, ebx
// 0087de8e  e84dfaffff           call 0x87d8e0
// 0087de93  8bf8                 mov edi, eax
// 0087de95  85ff                 test edi, edi
// 0087de97  0f8409010000         je 0x87dfa6
// 0087de9d  8b17                 mov edx, dword ptr [edi]
// 0087de9f  8b4258               mov eax, dword ptr [edx + 0x58]
// 0087dea2  56                   push esi
// 0087dea3  8bcf                 mov ecx, edi
// 0087dea5  ffd0                 call eax
// 0087dea7  57                   push edi
// 0087dea8  8bcb                 mov ecx, ebx
// 0087deaa  e8b1f9ffff           call 0x87d860
// 0087deaf  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0087deb3  50                   push eax
// 0087deb4  57                   push edi
// 0087deb5  8bcb                 mov ecx, ebx
// 0087deb7  e8e4fcffff           call 0x87dba0
// 0087debc  47                   inc edi
// 0087debd  897c241c             mov dword ptr [esp + 0x1c], edi
// 0087dec1  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0087dec9  85f6                 test esi, esi
// 0087decb  7407                 je 0x87ded4
// 0087decd  8bce                 mov ecx, esi
// 0087decf  e806c7f8ff           call 0x80a5da
// 0087ded4  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087ded9  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 0087dee0  0f852affffff         jne 0x87de10
// 0087dee6  8d4c2430             lea ecx, [esp + 0x30]
// 0087deea  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 0087def2  e86920fbff           call 0x82ff60
// 0087def7  8b5500               mov edx, dword ptr [ebp]
// 0087defa  8b02                 mov eax, dword ptr [edx]
// 0087defc  6a01                 push 1
// 0087defe  8bcd                 mov ecx, ebp
// 0087df00  c684240001000000     mov byte ptr [esp + 0x100], 0
// 0087df08  ffd0                 call eax
// 0087df0a  8b17                 mov edx, dword ptr [edi]
// 0087df0c  8b4270               mov eax, dword ptr [edx + 0x70]
// 0087df0f  686cedac00           push 0xaced6c
// 0087df14  8bcf                 mov ecx, edi
// 0087df16  ffd0                 call eax
// 0087df18  8be8                 mov ebp, eax
// 0087df1a  896c2428             mov dword ptr [esp + 0x28], ebp
// 0087df1e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0087df21  8b11                 mov edx, dword ptr [ecx]
// 0087df23  8b4258               mov eax, dword ptr [edx + 0x58]
// 0087df26  55                   push ebp
// 0087df27  c684240001000006     mov byte ptr [esp + 0x100], 6
// 0087df2f  ffd0                 call eax
// 0087df31  8b17                 mov edx, dword ptr [edi]
// 0087df33  8b4270               mov eax, dword ptr [edx + 0x70]
// 0087df36  6860edac00           push 0xaced60
// 0087df3b  8bcf                 mov ecx, edi
// 0087df3d  ffd0                 call eax
// 0087df3f  8bf0                 mov esi, eax
// 0087df41  89742424             mov dword ptr [esp + 0x24], esi
// 0087df45  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 0087df48  8b13                 mov edx, dword ptr [ebx]
// 0087df4a  8b4258               mov eax, dword ptr [edx + 0x58]
// 0087df4d  56                   push esi
// 0087df4e  8bcb                 mov ecx, ebx
// 0087df50  c684240001000007     mov byte ptr [esp + 0x100], 7
// 0087df58  ffd0                 call eax
// 0087df5a  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 0087df62  85f6                 test esi, esi
// 0087df64  7407                 je 0x87df6d
// 0087df66  8bce                 mov ecx, esi
// 0087df68  e86dc6f8ff           call 0x80a5da
// 0087df6d  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 0087df75  85ed                 test ebp, ebp
// 0087df77  7407                 je 0x87df80
// 0087df79  8bcd                 mov ecx, ebp
// 0087df7b  e85ac6f8ff           call 0x80a5da
// 0087df80  8d4c2418             lea ecx, [esp + 0x18]
// 0087df84  ff15082ea400         call dword ptr [0xa42e08]
// 0087df8a  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 0087df91  64890d00000000       mov dword ptr fs:[0], ecx
// 0087df98  59                   pop ecx
// 0087df99  5f                   pop edi
// 0087df9a  5e                   pop esi
// 0087df9b  5d                   pop ebp
// 0087df9c  5b                   pop ebx
// 0087df9d  81c4ec000000         add esp, 0xec
// 0087dfa3  c20400               ret 4
// 0087dfa6  6a00                 push 0
// 0087dfa8  6a05                 push 5
// 0087dfaa  e825ccf8ff           call 0x80abd4
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportColumns@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportColumns.cpp