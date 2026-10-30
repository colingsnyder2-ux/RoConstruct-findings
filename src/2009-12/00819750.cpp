// roc 2009-12 00819750  unit: CRobloxReportView  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819750
//
// 00819750  6aff                 push -1
// 00819752  682ca99500           push 0x95a92c
// 00819757  64a100000000         mov eax, dword ptr fs:[0]
// 0081975d  50                   push eax
// 0081975e  81ec9c000000         sub esp, 0x9c
// 00819764  53                   push ebx
// 00819765  55                   push ebp
// 00819766  56                   push esi
// 00819767  57                   push edi
// 00819768  a10052b600           mov eax, dword ptr [0xb65200]
// 0081976d  33c4                 xor eax, esp
// 0081976f  50                   push eax
// 00819770  8d8424b0000000       lea eax, [esp + 0xb0]
// 00819777  64a300000000         mov dword ptr fs:[0], eax
// 0081977d  8bd9                 mov ebx, ecx
// 0081977f  33ff                 xor edi, edi
// 00819781  53                   push ebx
// 00819782  8d4c2440             lea ecx, [esp + 0x40]
// 00819786  897c241c             mov dword ptr [esp + 0x1c], edi
// 0081978a  e8f1400300           call 0x84d880
// 0081978f  8d4c241c             lea ecx, [esp + 0x1c]
// 00819793  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 0081979a  ff1574de9800         call dword ptr [0x98de74]
// 008197a0  8bcb                 mov ecx, ebx
// 008197a2  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 008197aa  e89fa3fdff           call 0x7f3b4e
// 008197af  85c0                 test eax, eax
// 008197b1  7413                 je 0x8197c6
// 008197b3  8d44241c             lea eax, [esp + 0x1c]
// 008197b7  50                   push eax
// 008197b8  8bcb                 mov ecx, ebx
// 008197ba  e88fa3fdff           call 0x7f3b4e
// 008197bf  8bc8                 mov ecx, eax
// 008197c1  e882a6fdff           call 0x7f3e48
// 008197c6  6860469f00           push 0x9f4660
// 008197cb  8d4c2440             lea ecx, [esp + 0x40]
// 008197cf  e840a4fdff           call 0x7f3c14
// 008197d4  8d4c241c             lea ecx, [esp + 0x1c]
// 008197d8  ff1580de9800         call dword ptr [0x98de80]
// 008197de  50                   push eax
// 008197df  68c9000000           push 0xc9
// 008197e4  8d4c2444             lea ecx, [esp + 0x44]
// 008197e8  e86bce1000           call 0x926658
// 008197ed  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 008197f4  8d4c2414             lea ecx, [esp + 0x14]
// 008197f8  51                   push ecx
// 008197f9  8b0e                 mov ecx, dword ptr [esi]
// 008197fb  e852ce1000           call 0x926652
// 00819800  8bc8                 mov ecx, eax
// 00819802  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 0081980a  ff1580de9800         call dword ptr [0x98de80]
// 00819810  50                   push eax
// 00819811  68ca000000           push 0xca
// 00819816  8d4c2444             lea ecx, [esp + 0x44]
// 0081981a  e839ce1000           call 0x926658
// 0081981f  8d4c2414             lea ecx, [esp + 0x14]
// 00819823  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0081982b  ff15c0de9800         call dword ptr [0x98dec0]
// 00819831  8b0e                 mov ecx, dword ptr [esi]
// 00819833  8d542420             lea edx, [esp + 0x20]
// 00819837  52                   push edx
// 00819838  e80fce1000           call 0x92664c
// 0081983d  8bc8                 mov ecx, eax
// 0081983f  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 00819847  ff1580de9800         call dword ptr [0x98de80]
// 0081984d  50                   push eax
// 0081984e  68cb000000           push 0xcb
// 00819853  8d4c2444             lea ecx, [esp + 0x44]
// 00819857  e8fccd1000           call 0x926658
// 0081985c  8d4c2420             lea ecx, [esp + 0x20]
// 00819860  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00819868  ff15c0de9800         call dword ptr [0x98dec0]
// 0081986e  6a05                 push 5
// 00819870  8d4c2440             lea ecx, [esp + 0x40]
// 00819874  e8cfa2fdff           call 0x7f3b48
// 00819879  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0081987d  50                   push eax
// 0081987e  ff15a4ca9800         call dword ptr [0x98caa4]
// 00819884  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00819887  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0081988a  8b5628               mov edx, dword ptr [esi + 0x28]
// 0081988d  8d6e24               lea ebp, [esi + 0x24]
// 00819890  894c2428             mov dword ptr [esp + 0x28], ecx
// 00819894  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00819897  89442430             mov dword ptr [esp + 0x30], eax
// 0081989b  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 008198a1  8954242c             mov dword ptr [esp + 0x2c], edx
// 008198a5  8b5614               mov edx, dword ptr [esi + 0x14]
// 008198a8  894c2434             mov dword ptr [esp + 0x34], ecx
// 008198ac  8b4830               mov ecx, dword ptr [eax + 0x30]
// 008198af  897830               mov dword ptr [eax + 0x30], edi
// 008198b2  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 008198b9  89542414             mov dword ptr [esp + 0x14], edx
// 008198bd  8b17                 mov edx, dword ptr [edi]
// 008198bf  8b4224               mov eax, dword ptr [edx + 0x24]
// 008198c2  894c2424             mov dword ptr [esp + 0x24], ecx
// 008198c6  8bcf                 mov ecx, edi
// 008198c8  ffd0                 call eax
// 008198ca  6a00                 push 0
// 008198cc  6a00                 push 0
// 008198ce  6a00                 push 0
// 008198d0  6a00                 push 0
// 008198d2  8bcf                 mov ecx, edi
// 008198d4  e85daefdff           call 0x7f4736
// 008198d9  8b4368               mov eax, dword ptr [ebx + 0x68]
// 008198dc  894614               mov dword ptr [esi + 0x14], eax
// 008198df  3b442414             cmp eax, dword ptr [esp + 0x14]
// 008198e3  0f83be000000         jae 0x8199a7
// 008198e9  8da42400000000       lea esp, [esp]
// 008198f0  8b13                 mov edx, dword ptr [ebx]
// 008198f2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008198f8  56                   push esi
// 008198f9  57                   push edi
// 008198fa  8bcb                 mov ecx, ebx
// 008198fc  ffd0                 call eax
// 008198fe  837e1000             cmp dword ptr [esi + 0x10], 0
// 00819902  0f849f000000         je 0x8199a7
// 00819908  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0081990b  51                   push ecx
// 0081990c  8d542420             lea edx, [esp + 0x20]
// 00819910  68d4689a00           push 0x9a68d4
// 00819915  52                   push edx
// 00819916  ff157cde9800         call dword ptr [0x98de7c]
// 0081991c  83c40c               add esp, 0xc
// 0081991f  8d4c241c             lea ecx, [esp + 0x1c]
// 00819923  ff1580de9800         call dword ptr [0x98de80]
// 00819929  50                   push eax
// 0081992a  68cc000000           push 0xcc
// 0081992f  8d4c2444             lea ecx, [esp + 0x44]
// 00819933  e820cd1000           call 0x926658
// 00819938  8b4708               mov eax, dword ptr [edi + 8]
// 0081993b  6a0a                 push 0xa
// 0081993d  50                   push eax
// 0081993e  ff1564b19800         call dword ptr [0x98b164]
// 00819944  8b4f08               mov ecx, dword ptr [edi + 8]
// 00819947  6a08                 push 8
// 00819949  51                   push ecx
// 0081994a  89442440             mov dword ptr [esp + 0x40], eax
// 0081994e  ff1564b19800         call dword ptr [0x98b164]
// 00819954  8b542438             mov edx, dword ptr [esp + 0x38]
// 00819958  52                   push edx
// 00819959  50                   push eax
// 0081995a  6a00                 push 0
// 0081995c  6a00                 push 0
// 0081995e  55                   push ebp
// 0081995f  ff1538ca9800         call dword ptr [0x98ca38]
// 00819965  8b4708               mov eax, dword ptr [edi + 8]
// 00819968  6a02                 push 2
// 0081996a  55                   push ebp
// 0081996b  50                   push eax
// 0081996c  ff15d4b09800         call dword ptr [0x98b0d4]
// 00819972  8b13                 mov edx, dword ptr [ebx]
// 00819974  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0081997a  56                   push esi
// 0081997b  57                   push edi
// 0081997c  8bcb                 mov ecx, ebx
// 0081997e  ffd0                 call eax
// 00819980  ff4614               inc dword ptr [esi + 0x14]
// 00819983  6a00                 push 0
// 00819985  6a00                 push 0
// 00819987  e8743e0300           call 0x84d800
// 0081998c  85c0                 test eax, eax
// 0081998e  740f                 je 0x81999f
// 00819990  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00819994  394e14               cmp dword ptr [esi + 0x14], ecx
// 00819997  0f8253ffffff         jb 0x8198f0
// 0081999d  eb08                 jmp 0x8199a7
// 0081999f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008199a7  8d4c243c             lea ecx, [esp + 0x3c]
// 008199ab  e82e9ffdff           call 0x7f38de
// 008199b0  837c241800           cmp dword ptr [esp + 0x18], 0
// 008199b5  751a                 jne 0x8199d1
// 008199b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 008199bb  394614               cmp dword ptr [esi + 0x14], eax
// 008199be  7407                 je 0x8199c7
// 008199c0  3dffff0000           cmp eax, 0xffff
// 008199c5  750a                 jne 0x8199d1
// 008199c7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008199cf  eb08                 jmp 0x8199d9
// 008199d1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008199d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008199dd  895610               mov dword ptr [esi + 0x10], edx
// 008199e0  8b07                 mov eax, dword ptr [edi]
// 008199e2  8b5028               mov edx, dword ptr [eax + 0x28]
// 008199e5  6aff                 push -1
// 008199e7  8bcf                 mov ecx, edi
// 008199e9  ffd2                 call edx
// 008199eb  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 008199f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008199f5  8b542414             mov edx, dword ptr [esp + 0x14]
// 008199f9  894830               mov dword ptr [eax + 0x30], ecx
// 008199fc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00819a00  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00819a04  894500               mov dword ptr [ebp], eax
// 00819a07  8b442434             mov eax, dword ptr [esp + 0x34]
// 00819a0b  895614               mov dword ptr [esi + 0x14], edx
// 00819a0e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00819a12  894d04               mov dword ptr [ebp + 4], ecx
// 00819a15  895508               mov dword ptr [ebp + 8], edx
// 00819a18  8d4c241c             lea ecx, [esp + 0x1c]
// 00819a1c  89450c               mov dword ptr [ebp + 0xc], eax
// 00819a1f  ff15c0de9800         call dword ptr [0x98dec0]
// 00819a25  8d4c243c             lea ecx, [esp + 0x3c]
// 00819a29  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 00819a34  c744243c6c419f00     mov dword ptr [esp + 0x3c], 0x9f416c
// 00819a3c  e84fa7fdff           call 0x7f4190
// 00819a41  8b442418             mov eax, dword ptr [esp + 0x18]
// 00819a45  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00819a4c  64890d00000000       mov dword ptr fs:[0], ecx
// 00819a53  59                   pop ecx
// 00819a54  5f                   pop edi
// 00819a55  5e                   pop esi
// 00819a56  5d                   pop ebp
// 00819a57  5b                   pop ebx
// 00819a58  81c4a8000000         add esp, 0xa8
// 00819a5e  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CXTPReportView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp