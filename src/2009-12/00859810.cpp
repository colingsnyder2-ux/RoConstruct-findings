// roc 2009-12 00859810  unit: CXTPTabClientWnd::CWorkspace  size: 936 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859810
//
// 00859810  6aff                 push -1
// 00859812  68e8e19500           push 0x95e1e8
// 00859817  64a100000000         mov eax, dword ptr fs:[0]
// 0085981d  50                   push eax
// 0085981e  83ec38               sub esp, 0x38
// 00859821  53                   push ebx
// 00859822  55                   push ebp
// 00859823  56                   push esi
// 00859824  57                   push edi
// 00859825  a10052b600           mov eax, dword ptr [0xb65200]
// 0085982a  33c4                 xor eax, esp
// 0085982c  50                   push eax
// 0085982d  8d44244c             lea eax, [esp + 0x4c]
// 00859831  64a300000000         mov dword ptr fs:[0], eax
// 00859837  8bf1                 mov esi, ecx
// 00859839  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0085983f  e80cceffff           call 0x856650
// 00859844  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00859848  ba01000000           mov edx, 1
// 0085984d  3bc2                 cmp eax, edx
// 0085984f  7517                 jne 0x859868
// 00859851  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00859854  39505c               cmp dword ptr [eax + 0x5c], edx
// 00859857  750f                 jne 0x859868
// 00859859  8b06                 mov eax, dword ptr [esi]
// 0085985b  8b5060               mov edx, dword ptr [eax + 0x60]
// 0085985e  53                   push ebx
// 0085985f  8bce                 mov ecx, esi
// 00859861  ffd2                 call edx
// 00859863  e93a030000           jmp 0x859ba2
// 00859868  395e04               cmp dword ptr [esi + 4], ebx
// 0085986b  7403                 je 0x859870
// 0085986d  895e04               mov dword ptr [esi + 4], ebx
// 00859870  895164               mov dword ptr [ecx + 0x64], edx
// 00859873  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00859879  56                   push esi
// 0085987a  e8b1b6ffff           call 0x854f30
// 0085987f  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00859885  33ff                 xor edi, edi
// 00859887  897864               mov dword ptr [eax + 0x64], edi
// 0085988a  8b16                 mov edx, dword ptr [esi]
// 0085988c  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0085988f  8bce                 mov ecx, esi
// 00859891  ffd0                 call eax
// 00859893  397820               cmp dword ptr [eax + 0x20], edi
// 00859896  7403                 je 0x85989b
// 00859898  895e08               mov dword ptr [esi + 8], ebx
// 0085989b  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 0085989f  55                   push ebp
// 008598a0  ff152ccc9800         call dword ptr [0x98cc2c]
// 008598a6  8b16                 mov edx, dword ptr [esi]
// 008598a8  8b4204               mov eax, dword ptr [edx + 4]
// 008598ab  8bce                 mov ecx, esi
// 008598ad  ffd0                 call eax
// 008598af  8d4c2438             lea ecx, [esp + 0x38]
// 008598b3  e828baffff           call 0x8552e0
// 008598b8  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008598bc  897c2454             mov dword ptr [esp + 0x54], edi
// 008598c0  7e4a                 jle 0x85990c
// 008598c2  85ff                 test edi, edi
// 008598c4  7c0f                 jl 0x8598d5
// 008598c6  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008598c9  7d0a                 jge 0x8598d5
// 008598cb  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008598ce  8d04b9               lea eax, [ecx + edi*4]
// 008598d1  8b00                 mov eax, dword ptr [eax]
// 008598d3  eb02                 jmp 0x8598d7
// 008598d5  33c0                 xor eax, eax
// 008598d7  8b5044               mov edx, dword ptr [eax + 0x44]
// 008598da  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008598dd  8954241c             mov dword ptr [esp + 0x1c], edx
// 008598e1  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008598e4  8b4050               mov eax, dword ptr [eax + 0x50]
// 008598e7  894c2420             mov dword ptr [esp + 0x20], ecx
// 008598eb  8d4c241c             lea ecx, [esp + 0x1c]
// 008598ef  89542424             mov dword ptr [esp + 0x24], edx
// 008598f3  8b542440             mov edx, dword ptr [esp + 0x40]
// 008598f7  51                   push ecx
// 008598f8  52                   push edx
// 008598f9  8d4c2440             lea ecx, [esp + 0x40]
// 008598fd  89442430             mov dword ptr [esp + 0x30], eax
// 00859901  e83abdffff           call 0x855640
// 00859906  47                   inc edi
// 00859907  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 0085990a  7cb6                 jl 0x8598c2
// 0085990c  33c0                 xor eax, eax
// 0085990e  50                   push eax
// 0085990f  50                   push eax
// 00859910  50                   push eax
// 00859911  89442420             mov dword ptr [esp + 0x20], eax
// 00859915  89442424             mov dword ptr [esp + 0x24], eax
// 00859919  8d442428             lea eax, [esp + 0x28]
// 0085991d  50                   push eax
// 0085991e  ff15b0ca9800         call dword ptr [0x98cab0]
// 00859924  ff1528cc9800         call dword ptr [0x98cc28]
// 0085992a  3bc5                 cmp eax, ebp
// 0085992c  0f85b0010000         jne 0x859ae2
// 00859932  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00859936  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085993a  3d00020000           cmp eax, 0x200
// 0085993f  0f8765010000         ja 0x859aaa
// 00859945  7424                 je 0x85996b
// 00859947  83f81f               cmp eax, 0x1f
// 0085994a  0f84ac010000         je 0x859afc
// 00859950  3d00010000           cmp eax, 0x100
// 00859955  0f855b010000         jne 0x859ab6
// 0085995b  837c24241b           cmp dword ptr [esp + 0x24], 0x1b
// 00859960  0f8496010000         je 0x859afc
// 00859966  e956010000           jmp 0x859ac1
// 0085996b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085996f  8bc8                 mov ecx, eax
// 00859971  c1e910               shr ecx, 0x10
// 00859974  0fbfc9               movsx ecx, cx
// 00859977  98                   cwde 
// 00859978  8d7e24               lea edi, [esi + 0x24]
// 0085997b  57                   push edi
// 0085997c  89442464             mov dword ptr [esp + 0x64], eax
// 00859980  894c2468             mov dword ptr [esp + 0x68], ecx
// 00859984  ff1568cc9800         call dword ptr [0x98cc68]
// 0085998a  85c0                 test eax, eax
// 0085998c  7555                 jne 0x8599e3
// 0085998e  8b542464             mov edx, dword ptr [esp + 0x64]
// 00859992  8b442460             mov eax, dword ptr [esp + 0x60]
// 00859996  52                   push edx
// 00859997  50                   push eax
// 00859998  57                   push edi
// 00859999  ff155cca9800         call dword ptr [0x98ca5c]
// 0085999f  85c0                 test eax, eax
// 008599a1  7540                 jne 0x8599e3
// 008599a3  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 008599a9  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 008599af  0f840c010000         je 0x859ac1
// 008599b5  39442414             cmp dword ptr [esp + 0x14], eax
// 008599b9  750d                 jne 0x8599c8
// 008599bb  e890cfffff           call 0x856950
// 008599c0  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008599c8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008599cc  8b542460             mov edx, dword ptr [esp + 0x60]
// 008599d0  53                   push ebx
// 008599d1  51                   push ecx
// 008599d2  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 008599d8  52                   push edx
// 008599d9  e862eaffff           call 0x858440
// 008599de  e9de000000           jmp 0x859ac1
// 008599e3  33ff                 xor edi, edi
// 008599e5  397c2414             cmp dword ptr [esp + 0x14], edi
// 008599e9  7427                 je 0x859a12
// 008599eb  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 008599f1  e8fae9ffff           call 0x8583f0
// 008599f6  e823a1f9ff           call 0x7f3b1e
// 008599fb  68007f0000           push 0x7f00
// 00859a00  57                   push edi
// 00859a01  ff1548ca9800         call dword ptr [0x98ca48]
// 00859a07  50                   push eax
// 00859a08  ff1520ca9800         call dword ptr [0x98ca20]
// 00859a0e  897c2414             mov dword ptr [esp + 0x14], edi
// 00859a12  85ed                 test ebp, ebp
// 00859a14  0f8ea7000000         jle 0x859ac1
// 00859a1a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00859a1e  8bff                 mov edi, edi
// 00859a20  8b442468             mov eax, dword ptr [esp + 0x68]
// 00859a24  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00859a27  7425                 je 0x859a4e
// 00859a29  85ff                 test edi, edi
// 00859a2b  0f8cbe000000         jl 0x859aef
// 00859a31  3bfd                 cmp edi, ebp
// 00859a33  0f8db6000000         jge 0x859aef
// 00859a39  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00859a3d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00859a41  51                   push ecx
// 00859a42  52                   push edx
// 00859a43  53                   push ebx
// 00859a44  ff155cca9800         call dword ptr [0x98ca5c]
// 00859a4a  85c0                 test eax, eax
// 00859a4c  750e                 jne 0x859a5c
// 00859a4e  47                   inc edi
// 00859a4f  83c310               add ebx, 0x10
// 00859a52  3bfd                 cmp edi, ebp
// 00859a54  7cca                 jl 0x859a20
// 00859a56  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00859a5a  eb65                 jmp 0x859ac1
// 00859a5c  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00859a5f  0f8d8a000000         jge 0x859aef
// 00859a65  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00859a69  8b4658               mov eax, dword ptr [esi + 0x58]
// 00859a6c  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00859a6f  8d14bd00000000       lea edx, [edi*4]
// 00859a76  03c2                 add eax, edx
// 00859a78  85c9                 test ecx, ecx
// 00859a7a  7c73                 jl 0x859aef
// 00859a7c  3b4e5c               cmp ecx, dword ptr [esi + 0x5c]
// 00859a7f  7d6e                 jge 0x859aef
// 00859a81  8b5e58               mov ebx, dword ptr [esi + 0x58]
// 00859a84  8b00                 mov eax, dword ptr [eax]
// 00859a86  8d0c8b               lea ecx, [ebx + ecx*4]
// 00859a89  8901                 mov dword ptr [ecx], eax
// 00859a8b  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00859a8e  7d5f                 jge 0x859aef
// 00859a90  8b4658               mov eax, dword ptr [esi + 0x58]
// 00859a93  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00859a97  03c2                 add eax, edx
// 00859a99  8908                 mov dword ptr [eax], ecx
// 00859a9b  8b16                 mov edx, dword ptr [esi]
// 00859a9d  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00859aa0  8bce                 mov ecx, esi
// 00859aa2  ffd0                 call eax
// 00859aa4  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00859aa8  eb17                 jmp 0x859ac1
// 00859aaa  2d02020000           sub eax, 0x202
// 00859aaf  7443                 je 0x859af4
// 00859ab1  83e802               sub eax, 2
// 00859ab4  7446                 je 0x859afc
// 00859ab6  8d4c241c             lea ecx, [esp + 0x1c]
// 00859aba  51                   push ecx
// 00859abb  ff1594ca9800         call dword ptr [0x98ca94]
// 00859ac1  6a00                 push 0
// 00859ac3  6a00                 push 0
// 00859ac5  6a00                 push 0
// 00859ac7  8d542428             lea edx, [esp + 0x28]
// 00859acb  52                   push edx
// 00859acc  ff15b0ca9800         call dword ptr [0x98cab0]
// 00859ad2  ff1528cc9800         call dword ptr [0x98cc28]
// 00859ad8  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 00859adc  0f8454feffff         je 0x859936
// 00859ae2  8d44241c             lea eax, [esp + 0x1c]
// 00859ae6  50                   push eax
// 00859ae7  ff1594ca9800         call dword ptr [0x98ca94]
// 00859aed  eb0d                 jmp 0x859afc
// 00859aef  e818a0f9ff           call 0x7f3b0c
// 00859af4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00859afc  ff1520cc9800         call dword ptr [0x98cc20]
// 00859b02  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00859b06  8b542460             mov edx, dword ptr [esp + 0x60]
// 00859b0a  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00859b0e  51                   push ecx
// 00859b0f  52                   push edx
// 00859b10  50                   push eax
// 00859b11  8bce                 mov ecx, esi
// 00859b13  e8285f0700           call 0x8cfa40
// 00859b18  8b16                 mov edx, dword ptr [esi]
// 00859b1a  8b4260               mov eax, dword ptr [edx + 0x60]
// 00859b1d  53                   push ebx
// 00859b1e  8bce                 mov ecx, esi
// 00859b20  ffd0                 call eax
// 00859b22  837c241400           cmp dword ptr [esp + 0x14], 0
// 00859b27  745f                 je 0x859b88
// 00859b29  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00859b2f  e8bce8ffff           call 0x8583f0
// 00859b34  e8e59ff9ff           call 0x7f3b1e
// 00859b39  68007f0000           push 0x7f00
// 00859b3e  6a00                 push 0
// 00859b40  ff1548ca9800         call dword ptr [0x98ca48]
// 00859b46  50                   push eax
// 00859b47  ff1520ca9800         call dword ptr [0x98ca20]
// 00859b4d  837c241800           cmp dword ptr [esp + 0x18], 0
// 00859b52  7434                 je 0x859b88
// 00859b54  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00859b5a  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00859b60  85c0                 test eax, eax
// 00859b62  7424                 je 0x859b88
// 00859b64  83f801               cmp eax, 1
// 00859b67  7511                 jne 0x859b7a
// 00859b69  8b542464             mov edx, dword ptr [esp + 0x64]
// 00859b6d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00859b71  52                   push edx
// 00859b72  50                   push eax
// 00859b73  e8a8cfffff           call 0x856b20
// 00859b78  eb0e                 jmp 0x859b88
// 00859b7a  8b91f0000000         mov edx, dword ptr [ecx + 0xf0]
// 00859b80  50                   push eax
// 00859b81  52                   push edx
// 00859b82  53                   push ebx
// 00859b83  e8c8faffff           call 0x859650
// 00859b88  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00859b8b  53                   push ebx
// 00859b8c  e89f470700           call 0x8ce330
// 00859b91  8d4c2438             lea ecx, [esp + 0x38]
// 00859b95  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00859b9d  e85eb7ffff           call 0x855300
// 00859ba2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00859ba6  64890d00000000       mov dword ptr fs:[0], ecx
// 00859bad  59                   pop ecx
// 00859bae  5f                   pop edi
// 00859baf  5e                   pop esi
// 00859bb0  5d                   pop ebp
// 00859bb1  5b                   pop ebx
// 00859bb2  83c444               add esp, 0x44
// 00859bb5  c21000               ret 0x10
// copied from an identical function in another client (function ?ReOrder@CWorkspace@CXTPTabClientWnd@@MAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp