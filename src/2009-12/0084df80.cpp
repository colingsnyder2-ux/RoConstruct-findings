// roc 2009-12 0084df80  unit: CXTPPropertyGrid  size: 965 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084df80
//
// 0084df80  83ec08               sub esp, 8
// 0084df83  33c0                 xor eax, eax
// 0084df85  39442410             cmp dword ptr [esp + 0x10], eax
// 0084df89  53                   push ebx
// 0084df8a  0f95c0               setne al
// 0084df8d  55                   push ebp
// 0084df8e  56                   push esi
// 0084df8f  57                   push edi
// 0084df90  8bf9                 mov edi, ecx
// 0084df92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084df96  897c2414             mov dword ptr [esp + 0x14], edi
// 0084df9a  8d4400ff             lea eax, [eax + eax - 1]
// 0084df9e  8bf0                 mov esi, eax
// 0084dfa0  89742410             mov dword ptr [esp + 0x10], esi
// 0084dfa4  03f1                 add esi, ecx
// 0084dfa6  8bcf                 mov ecx, edi
// 0084dfa8  e8d3faffff           call 0x84da80
// 0084dfad  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0084dfb1  8bd8                 mov ebx, eax
// 0084dfb3  85ed                 test ebp, ebp
// 0084dfb5  7509                 jne 0x84dfc0
// 0084dfb7  8bcb                 mov ecx, ebx
// 0084dfb9  e882ad0100           call 0x868d40
// 0084dfbe  8be8                 mov ebp, eax
// 0084dfc0  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0084dfc4  0f8471030000         je 0x84e33b
// 0084dfca  eb08                 jmp 0x84dfd4
// 0084dfcc  8d642400             lea esp, [esp]
// 0084dfd0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0084dfd4  83feff               cmp esi, -1
// 0084dfd7  7563                 jne 0x84e03c
// 0084dfd9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084dfdd  4e                   dec esi
// 0084dfde  83bf3401000000       cmp dword ptr [edi + 0x134], 0
// 0084dfe5  7455                 je 0x84e03c
// 0084dfe7  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084dfec  754a                 jne 0x84e038
// 0084dfee  85ed                 test ebp, ebp
// 0084dff0  7446                 je 0x84e038
// 0084dff2  8bbd80000000         mov edi, dword ptr [ebp + 0x80]
// 0084dff8  4f                   dec edi
// 0084dff9  85ff                 test edi, edi
// 0084dffb  7c3f                 jl 0x84e03c
// 0084dffd  8bcb                 mov ecx, ebx
// 0084dfff  e8fe5bfaff           call 0x7f3c02
// 0084e004  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0084e007  6a00                 push 0
// 0084e009  57                   push edi
// 0084e00a  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0084e010  6886010000           push 0x186
// 0084e015  52                   push edx
// 0084e016  ffd7                 call edi
// 0084e018  8bcb                 mov ecx, ebx
// 0084e01a  e871b20100           call 0x869290
// 0084e01f  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084e024  0f8511030000         jne 0x84e33b
// 0084e02a  8bcb                 mov ecx, ebx
// 0084e02c  e80fad0100           call 0x868d40
// 0084e031  8be8                 mov ebp, eax
// 0084e033  e988000000           jmp 0x84e0c0
// 0084e038  33ff                 xor edi, edi
// 0084e03a  ebc1                 jmp 0x84dffd
// 0084e03c  85f6                 test esi, esi
// 0084e03e  0f84f6010000         je 0x84e23a
// 0084e044  83fe01               cmp esi, 1
// 0084e047  7518                 jne 0x84e061
// 0084e049  85ed                 test ebp, ebp
// 0084e04b  740f                 je 0x84e05c
// 0084e04d  8bcd                 mov ecx, ebp
// 0084e04f  e86c710000           call 0x8551c0
// 0084e054  a801                 test al, 1
// 0084e056  0f85f8010000         jne 0x84e254
// 0084e05c  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084e060  46                   inc esi
// 0084e061  83fe02               cmp esi, 2
// 0084e064  754b                 jne 0x84e0b1
// 0084e066  85ed                 test ebp, ebp
// 0084e068  7440                 je 0x84e0aa
// 0084e06a  8bcd                 mov ecx, ebp
// 0084e06c  e85f680100           call 0x8648d0
// 0084e071  8bc8                 mov ecx, eax
// 0084e073  e8b8d1f5ff           call 0x7ab230
// 0084e078  85c0                 test eax, eax
// 0084e07a  7e2e                 jle 0x84e0aa
// 0084e07c  6a00                 push 0
// 0084e07e  8bcd                 mov ecx, ebp
// 0084e080  e84b680100           call 0x8648d0
// 0084e085  8bc8                 mov ecx, eax
// 0084e087  e8c4990700           call 0x8c7a50
// 0084e08c  8bf0                 mov esi, eax
// 0084e08e  85f6                 test esi, esi
// 0084e090  7418                 je 0x84e0aa
// 0084e092  837e2000             cmp dword ptr [esi + 0x20], 0
// 0084e096  7412                 je 0x84e0aa
// 0084e098  8bce                 mov ecx, esi
// 0084e09a  e8d3830d00           call 0x926472
// 0084e09f  a900000100           test eax, 0x10000
// 0084e0a4  0f85ce010000         jne 0x84e278
// 0084e0aa  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084e0ae  83c602               add esi, 2
// 0084e0b1  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0084e0b7  83fe03               cmp esi, 3
// 0084e0ba  0f8582000000         jne 0x84e142
// 0084e0c0  85ed                 test ebp, ebp
// 0084e0c2  7477                 je 0x84e13b
// 0084e0c4  8b4500               mov eax, dword ptr [ebp]
// 0084e0c7  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0084e0cd  8bcd                 mov ecx, ebp
// 0084e0cf  ffd2                 call edx
// 0084e0d1  85c0                 test eax, eax
// 0084e0d3  7466                 je 0x84e13b
// 0084e0d5  8bcd                 mov ecx, ebp
// 0084e0d7  e8e4670100           call 0x8648c0
// 0084e0dc  8b8b54010000         mov ecx, dword ptr [ebx + 0x154]
// 0084e0e2  8bf0                 mov esi, eax
// 0084e0e4  85c9                 test ecx, ecx
// 0084e0e6  0f84d3010000         je 0x84e2bf
// 0084e0ec  39692c               cmp dword ptr [ecx + 0x2c], ebp
// 0084e0ef  0f85ca010000         jne 0x84e2bf
// 0084e0f5  e8964e0500           call 0x8a2f90
// 0084e0fa  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084e0ff  7432                 je 0x84e133
// 0084e101  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0084e104  49                   dec ecx
// 0084e105  3bc1                 cmp eax, ecx
// 0084e107  7d32                 jge 0x84e13b
// 0084e109  83c001               add eax, 1
// 0084e10c  0f8877010000         js 0x84e289
// 0084e112  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0084e115  0f8d6e010000         jge 0x84e289
// 0084e11b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0084e11e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0084e121  50                   push eax
// 0084e122  8bcb                 mov ecx, ebx
// 0084e124  e8b7a90100           call 0x868ae0
// 0084e129  5f                   pop edi
// 0084e12a  5e                   pop esi
// 0084e12b  5d                   pop ebp
// 0084e12c  5b                   pop ebx
// 0084e12d  83c408               add esp, 8
// 0084e130  c20c00               ret 0xc
// 0084e133  85c0                 test eax, eax
// 0084e135  0f8f62010000         jg 0x84e29d
// 0084e13b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084e13f  83c603               add esi, 3
// 0084e142  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084e146  83fe04               cmp esi, 4
// 0084e149  0f8581000000         jne 0x84e1d0
// 0084e14f  83ba3401000000       cmp dword ptr [edx + 0x134], 0
// 0084e156  7471                 je 0x84e1c9
// 0084e158  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084e15d  7411                 je 0x84e170
// 0084e15f  85ed                 test ebp, ebp
// 0084e161  7409                 je 0x84e16c
// 0084e163  8bb580000000         mov esi, dword ptr [ebp + 0x80]
// 0084e169  46                   inc esi
// 0084e16a  eb16                 jmp 0x84e182
// 0084e16c  33f6                 xor esi, esi
// 0084e16e  eb12                 jmp 0x84e182
// 0084e170  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0084e173  6a00                 push 0
// 0084e175  6a00                 push 0
// 0084e177  688b010000           push 0x18b
// 0084e17c  52                   push edx
// 0084e17d  ffd7                 call edi
// 0084e17f  8bf0                 mov esi, eax
// 0084e181  4e                   dec esi
// 0084e182  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0084e185  6a00                 push 0
// 0084e187  6a00                 push 0
// 0084e189  688b010000           push 0x18b
// 0084e18e  50                   push eax
// 0084e18f  ffd7                 call edi
// 0084e191  3bf0                 cmp esi, eax
// 0084e193  7d30                 jge 0x84e1c5
// 0084e195  8bcb                 mov ecx, ebx
// 0084e197  e8665afaff           call 0x7f3c02
// 0084e19c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0084e19f  6a00                 push 0
// 0084e1a1  56                   push esi
// 0084e1a2  6886010000           push 0x186
// 0084e1a7  51                   push ecx
// 0084e1a8  ffd7                 call edi
// 0084e1aa  8bcb                 mov ecx, ebx
// 0084e1ac  e8dfb00100           call 0x869290
// 0084e1b1  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084e1b6  0f857f010000         jne 0x84e33b
// 0084e1bc  8bcb                 mov ecx, ebx
// 0084e1be  e87dab0100           call 0x868d40
// 0084e1c3  8be8                 mov ebp, eax
// 0084e1c5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084e1c9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084e1cd  83c604               add esi, 4
// 0084e1d0  83fe05               cmp esi, 5
// 0084e1d3  7517                 jne 0x84e1ec
// 0084e1d5  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 0084e1db  83782800             cmp dword ptr [eax + 0x28], 0
// 0084e1df  0f85f3000000         jne 0x84e2d8
// 0084e1e5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084e1e9  83c605               add esi, 5
// 0084e1ec  83fe06               cmp esi, 6
// 0084e1ef  7405                 je 0x84e1f6
// 0084e1f1  83fefe               cmp esi, -2
// 0084e1f4  7524                 jne 0x84e21a
// 0084e1f6  33c9                 xor ecx, ecx
// 0084e1f8  394c2420             cmp dword ptr [esp + 0x20], ecx
// 0084e1fc  0f94c1               sete cl
// 0084e1ff  51                   push ecx
// 0084e200  8bca                 mov ecx, edx
// 0084e202  e8f9fcffff           call 0x84df00
// 0084e207  85c0                 test eax, eax
// 0084e209  0f8525010000         jne 0x84e334
// 0084e20f  83ee06               sub esi, 6
// 0084e212  f7de                 neg esi
// 0084e214  1bf6                 sbb esi, esi
// 0084e216  83e606               and esi, 6
// 0084e219  4e                   dec esi
// 0084e21a  8d5602               lea edx, [esi + 2]
// 0084e21d  83fa08               cmp edx, 8
// 0084e220  0f8715010000         ja 0x84e33b
// 0084e226  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0084e22a  0f85a0fdffff         jne 0x84dfd0
// 0084e230  5f                   pop edi
// 0084e231  5e                   pop esi
// 0084e232  5d                   pop ebp
// 0084e233  5b                   pop ebx
// 0084e234  83c408               add esp, 8
// 0084e237  c20c00               ret 0xc
// 0084e23a  8bcb                 mov ecx, ebx
// 0084e23c  e8c159faff           call 0x7f3c02
// 0084e241  6a00                 push 0
// 0084e243  8bcb                 mov ecx, ebx
// 0084e245  e896a80100           call 0x868ae0
// 0084e24a  5f                   pop edi
// 0084e24b  5e                   pop esi
// 0084e24c  5d                   pop ebp
// 0084e24d  5b                   pop ebx
// 0084e24e  83c408               add esp, 8
// 0084e251  c20c00               ret 0xc
// 0084e254  8b4500               mov eax, dword ptr [ebp]
// 0084e257  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0084e25d  8bcd                 mov ecx, ebp
// 0084e25f  ffd2                 call edx
// 0084e261  8b4500               mov eax, dword ptr [ebp]
// 0084e264  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0084e26a  8bcd                 mov ecx, ebp
// 0084e26c  ffd2                 call edx
// 0084e26e  5f                   pop edi
// 0084e26f  5e                   pop esi
// 0084e270  5d                   pop ebp
// 0084e271  5b                   pop ebx
// 0084e272  83c408               add esp, 8
// 0084e275  c20c00               ret 0xc
// 0084e278  8bce                 mov ecx, esi
// 0084e27a  e88359faff           call 0x7f3c02
// 0084e27f  5f                   pop edi
// 0084e280  5e                   pop esi
// 0084e281  5d                   pop ebp
// 0084e282  5b                   pop ebx
// 0084e283  83c408               add esp, 8
// 0084e286  c20c00               ret 0xc
// 0084e289  33c0                 xor eax, eax
// 0084e28b  50                   push eax
// 0084e28c  8bcb                 mov ecx, ebx
// 0084e28e  e84da80100           call 0x868ae0
// 0084e293  5f                   pop edi
// 0084e294  5e                   pop esi
// 0084e295  5d                   pop ebp
// 0084e296  5b                   pop ebx
// 0084e297  83c408               add esp, 8
// 0084e29a  c20c00               ret 0xc
// 0084e29d  83c0ff               add eax, -1
// 0084e2a0  78e7                 js 0x84e289
// 0084e2a2  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0084e2a5  7de2                 jge 0x84e289
// 0084e2a7  8b5624               mov edx, dword ptr [esi + 0x24]
// 0084e2aa  8b0482               mov eax, dword ptr [edx + eax*4]
// 0084e2ad  50                   push eax
// 0084e2ae  8bcb                 mov ecx, ebx
// 0084e2b0  e82ba80100           call 0x868ae0
// 0084e2b5  5f                   pop edi
// 0084e2b6  5e                   pop esi
// 0084e2b7  5d                   pop ebp
// 0084e2b8  5b                   pop ebx
// 0084e2b9  83c408               add esp, 8
// 0084e2bc  c20c00               ret 0xc
// 0084e2bf  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084e2c4  7407                 je 0x84e2cd
// 0084e2c6  33c0                 xor eax, eax
// 0084e2c8  e945feffff           jmp 0x84e112
// 0084e2cd  8b4628               mov eax, dword ptr [esi + 0x28]
// 0084e2d0  83e801               sub eax, 1
// 0084e2d3  e934feffff           jmp 0x84e10c
// 0084e2d8  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084e2dd  7404                 je 0x84e2e3
// 0084e2df  33c0                 xor eax, eax
// 0084e2e1  eb08                 jmp 0x84e2eb
// 0084e2e3  8bc8                 mov ecx, eax
// 0084e2e5  e896f9ffff           call 0x84dc80
// 0084e2ea  48                   dec eax
// 0084e2eb  8bca                 mov ecx, edx
// 0084e2ed  898248010000         mov dword ptr [edx + 0x148], eax
// 0084e2f3  c7828001000001000000 mov dword ptr [edx + 0x180], 1
// 0084e2fd  e80059faff           call 0x7f3c02
// 0084e302  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084e306  5f                   pop edi
// 0084e307  5e                   pop esi
// 0084e308  5d                   pop ebp
// 0084e309  c7808001000000000000 mov dword ptr [eax + 0x180], 0
// 0084e313  5b                   pop ebx
// 0084e314  83c408               add esp, 8
// 0084e317  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0084e31f  c744240800000000     mov dword ptr [esp + 8], 0
// 0084e327  8b5020               mov edx, dword ptr [eax + 0x20]
// 0084e32a  89542404             mov dword ptr [esp + 4], edx
// 0084e32e  ff25e8cb9800         jmp dword ptr [0x98cbe8]
// 0084e334  8bc8                 mov ecx, eax
// 0084e336  e8c758faff           call 0x7f3c02
// 0084e33b  5f                   pop edi
// 0084e33c  5e                   pop esi
// 0084e33d  5d                   pop ebp
// 0084e33e  5b                   pop ebx
// 0084e33f  83c408               add esp, 8
// 0084e342  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnNavigate@CXTPPropertyGrid@@UAEXW4XTPPropertyGridUI@@HPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp