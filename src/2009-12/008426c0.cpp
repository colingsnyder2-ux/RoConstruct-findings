// roc 2009-12 008426c0  unit: CXTPPopupBar  size: 1023 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008426c0
//
// 008426c0  6aff                 push -1
// 008426c2  682ad09500           push 0x95d02a
// 008426c7  64a100000000         mov eax, dword ptr fs:[0]
// 008426cd  50                   push eax
// 008426ce  83ec6c               sub esp, 0x6c
// 008426d1  53                   push ebx
// 008426d2  55                   push ebp
// 008426d3  56                   push esi
// 008426d4  57                   push edi
// 008426d5  a10052b600           mov eax, dword ptr [0xb65200]
// 008426da  33c4                 xor eax, esp
// 008426dc  50                   push eax
// 008426dd  8d842480000000       lea eax, [esp + 0x80]
// 008426e4  64a300000000         mov dword ptr fs:[0], eax
// 008426ea  8bf1                 mov esi, ecx
// 008426ec  bd01000000           mov ebp, 1
// 008426f1  56                   push esi
// 008426f2  8d4c2470             lea ecx, [esp + 0x70]
// 008426f6  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 008426fc  e8d51ffbff           call 0x7f46d6
// 00842701  33db                 xor ebx, ebx
// 00842703  8bce                 mov ecx, esi
// 00842705  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 0084270c  e87f1efcff           call 0x804590
// 00842711  8b10                 mov edx, dword ptr [eax]
// 00842713  53                   push ebx
// 00842714  8bc8                 mov ecx, eax
// 00842716  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 0084271c  56                   push esi
// 0084271d  ffd0                 call eax
// 0084271f  50                   push eax
// 00842720  8d4c2470             lea ecx, [esp + 0x70]
// 00842724  51                   push ecx
// 00842725  8d4c2454             lea ecx, [esp + 0x54]
// 00842729  e8328f0000           call 0x84b660
// 0084272e  53                   push ebx
// 0084272f  8d542460             lea edx, [esp + 0x60]
// 00842733  52                   push edx
// 00842734  53                   push ebx
// 00842735  6a30                 push 0x30
// 00842737  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0084273f  ff1500cc9800         call dword ptr [0x98cc00]
// 00842745  8b06                 mov eax, dword ptr [esi]
// 00842747  8b90b8010000         mov edx, dword ptr [eax + 0x1b8]
// 0084274d  8d4c243c             lea ecx, [esp + 0x3c]
// 00842751  51                   push ecx
// 00842752  8bce                 mov ecx, esi
// 00842754  ffd2                 call edx
// 00842756  895c2428             mov dword ptr [esp + 0x28], ebx
// 0084275a  399eb0010000         cmp dword ptr [esi + 0x1b0], ebx
// 00842760  7446                 je 0x8427a8
// 00842762  8bce                 mov ecx, esi
// 00842764  e8271efcff           call 0x804590
// 00842769  53                   push ebx
// 0084276a  53                   push ebx
// 0084276b  83ec10               sub esp, 0x10
// 0084276e  8bf8                 mov edi, eax
// 00842770  8964242c             mov dword ptr [esp + 0x2c], esp
// 00842774  8bc4                 mov eax, esp
// 00842776  53                   push ebx
// 00842777  50                   push eax
// 00842778  ff1564cc9800         call dword ptr [0x98cc64]
// 0084277e  8b07                 mov eax, dword ptr [edi]
// 00842780  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 00842786  8d8c2484000000       lea ecx, [esp + 0x84]
// 0084278d  51                   push ecx
// 0084278e  8d542448             lea edx, [esp + 0x48]
// 00842792  52                   push edx
// 00842793  8bcf                 mov ecx, edi
// 00842795  ffd0                 call eax
// 00842797  8b08                 mov ecx, dword ptr [eax]
// 00842799  8b4004               mov eax, dword ptr [eax + 4]
// 0084279c  01442440             add dword ptr [esp + 0x40], eax
// 008427a0  894c2424             mov dword ptr [esp + 0x24], ecx
// 008427a4  89442428             mov dword ptr [esp + 0x28], eax
// 008427a8  39aef8000000         cmp dword ptr [esi + 0xf8], ebp
// 008427ae  7575                 jne 0x842825
// 008427b0  8b16                 mov edx, dword ptr [esi]
// 008427b2  8b82e4010000         mov eax, dword ptr [edx + 0x1e4]
// 008427b8  8bce                 mov ecx, esi
// 008427ba  ffd0                 call eax
// 008427bc  53                   push ebx
// 008427bd  8d4c2440             lea ecx, [esp + 0x40]
// 008427c1  51                   push ecx
// 008427c2  6842010000           push 0x142
// 008427c7  8bce                 mov ecx, esi
// 008427c9  e872d1d8ff           call 0x5cf940
// 008427ce  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008427d4  50                   push eax
// 008427d5  8d54247c             lea edx, [esp + 0x7c]
// 008427d9  52                   push edx
// 008427da  8d442428             lea eax, [esp + 0x28]
// 008427de  50                   push eax
// 008427df  e8dc510000           call 0x8479c0
// 008427e4  8b542440             mov edx, dword ptr [esp + 0x40]
// 008427e8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008427ec  2b442444             sub eax, dword ptr [esp + 0x44]
// 008427f0  52                   push edx
// 008427f1  8bca                 mov ecx, edx
// 008427f3  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 008427f7  50                   push eax
// 008427f8  51                   push ecx
// 008427f9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008427fd  51                   push ecx
// 008427fe  8d96b4010000         lea edx, [esi + 0x1b4]
// 00842804  52                   push edx
// 00842805  ff1538ca9800         call dword ptr [0x98ca38]
// 0084280b  8d86c4010000         lea eax, [esi + 0x1c4]
// 00842811  50                   push eax
// 00842812  ff159cca9800         call dword ptr [0x98ca9c]
// 00842818  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084281c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00842820  e949020000           jmp 0x842a6e
// 00842825  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0084282b  53                   push ebx
// 0084282c  55                   push ebp
// 0084282d  6aff                 push -1
// 0084282f  6a0a                 push 0xa
// 00842831  e80a2b0000           call 0x845340
// 00842836  3bc3                 cmp eax, ebx
// 00842838  740e                 je 0x842848
// 0084283a  8b10                 mov edx, dword ptr [eax]
// 0084283c  8bc8                 mov ecx, eax
// 0084283e  8b8218010000         mov eax, dword ptr [edx + 0x118]
// 00842844  ffd0                 call eax
// 00842846  eb02                 jmp 0x84284a
// 00842848  33c0                 xor eax, eax
// 0084284a  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 00842850  895c2430             mov dword ptr [esp + 0x30], ebx
// 00842854  3bc3                 cmp eax, ebx
// 00842856  7415                 je 0x84286d
// 00842858  83e802               sub eax, 2
// 0084285b  f7d8                 neg eax
// 0084285d  1bc0                 sbb eax, eax
// 0084285f  83e003               and eax, 3
// 00842862  83c008               add eax, 8
// 00842865  01442448             add dword ptr [esp + 0x48], eax
// 00842869  89442430             mov dword ptr [esp + 0x30], eax
// 0084286d  399c2494000000       cmp dword ptr [esp + 0x94], ebx
// 00842874  754e                 jne 0x8428c4
// 00842876  8bce                 mov ecx, esi
// 00842878  33ff                 xor edi, edi
// 0084287a  e8d129fcff           call 0x805250
// 0084287f  85c0                 test eax, eax
// 00842881  7e2e                 jle 0x8428b1
// 00842883  57                   push edi
// 00842884  8bce                 mov ecx, esi
// 00842886  e8d529fcff           call 0x805260
// 0084288b  3bc3                 cmp eax, ebx
// 0084288d  7415                 je 0x8428a4
// 0084288f  39b000010000         cmp dword ptr [eax + 0x100], esi
// 00842895  750d                 jne 0x8428a4
// 00842897  8b10                 mov edx, dword ptr [eax]
// 00842899  8bc8                 mov ecx, eax
// 0084289b  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 008428a1  53                   push ebx
// 008428a2  ffd0                 call eax
// 008428a4  8bce                 mov ecx, esi
// 008428a6  03fd                 add edi, ebp
// 008428a8  e8a329fcff           call 0x805250
// 008428ad  3bf8                 cmp edi, eax
// 008428af  7cd2                 jl 0x842883
// 008428b1  8bce                 mov ecx, esi
// 008428b3  e818f3ffff           call 0x841bd0
// 008428b8  8b16                 mov edx, dword ptr [esi]
// 008428ba  8b82e4010000         mov eax, dword ptr [edx + 0x1e4]
// 008428c0  8bce                 mov ecx, esi
// 008428c2  ffd0                 call eax
// 008428c4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008428ca  68be230000           push 0x23be
// 008428cf  e82c4a0000           call 0x847300
// 008428d4  33ed                 xor ebp, ebp
// 008428d6  8bf8                 mov edi, eax
// 008428d8  399ea4010000         cmp dword ptr [esi + 0x1a4], ebx
// 008428de  0f84a8000000         je 0x84298c
// 008428e4  8bce                 mov ecx, esi
// 008428e6  e8a51cfcff           call 0x804590
// 008428eb  8b10                 mov edx, dword ptr [eax]
// 008428ed  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 008428f3  53                   push ebx
// 008428f4  53                   push ebx
// 008428f5  56                   push esi
// 008428f6  53                   push ebx
// 008428f7  6a01                 push 1
// 008428f9  8d8c2480000000       lea ecx, [esp + 0x80]
// 00842900  51                   push ecx
// 00842901  8d4c244c             lea ecx, [esp + 0x4c]
// 00842905  51                   push ecx
// 00842906  8bc8                 mov ecx, eax
// 00842908  ffd2                 call edx
// 0084290a  8b08                 mov ecx, dword ptr [eax]
// 0084290c  8b6804               mov ebp, dword ptr [eax + 4]
// 0084290f  016c2448             add dword ptr [esp + 0x48], ebp
// 00842913  894c2414             mov dword ptr [esp + 0x14], ecx
// 00842917  3bfb                 cmp edi, ebx
// 00842919  7575                 jne 0x842990
// 0084291b  6874010000           push 0x174
// 00842920  e83b0ffbff           call 0x7f3860
// 00842925  8bf8                 mov edi, eax
// 00842927  83c404               add esp, 4
// 0084292a  897c2414             mov dword ptr [esp + 0x14], edi
// 0084292e  c684248800000002     mov byte ptr [esp + 0x88], 2
// 00842936  3bfb                 cmp edi, ebx
// 00842938  742a                 je 0x842964
// 0084293a  8bcf                 mov ecx, edi
// 0084293c  e81fd80400           call 0x890160
// 00842941  c707549e9f00         mov dword ptr [edi], 0x9f9e54
// 00842947  c74720f49d9f00       mov dword ptr [edi + 0x20], 0x9f9df4
// 0084294e  c787fc00000001000000 mov dword ptr [edi + 0xfc], 1
// 00842958  c787d40000005a000000 mov dword ptr [edi + 0xd4], 0x5a
// 00842962  eb02                 jmp 0x842966
// 00842964  33ff                 xor edi, edi
// 00842966  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0084296c  6a01                 push 1
// 0084296e  6aff                 push -1
// 00842970  6856fd9900           push 0x99fd56
// 00842975  68be230000           push 0x23be
// 0084297a  57                   push edi
// 0084297b  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 00842983  e868560000           call 0x847ff0
// 00842988  8bf8                 mov edi, eax
// 0084298a  eb04                 jmp 0x842990
// 0084298c  3bfb                 cmp edi, ebx
// 0084298e  740e                 je 0x84299e
// 00842990  8b17                 mov edx, dword ptr [edi]
// 00842992  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00842998  6a01                 push 1
// 0084299a  8bcf                 mov ecx, edi
// 0084299c  ffd0                 call eax
// 0084299e  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008429a5  8d4c243c             lea ecx, [esp + 0x3c]
// 008429a9  51                   push ecx
// 008429aa  52                   push edx
// 008429ab  8d442474             lea eax, [esp + 0x74]
// 008429af  50                   push eax
// 008429b0  8d4c2428             lea ecx, [esp + 0x28]
// 008429b4  51                   push ecx
// 008429b5  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008429bb  e8c03c0000           call 0x846680
// 008429c0  399ea4010000         cmp dword ptr [esi + 0x1a4], ebx
// 008429c6  744d                 je 0x842a15
// 008429c8  8b17                 mov edx, dword ptr [edi]
// 008429ca  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 008429d0  53                   push ebx
// 008429d1  8bcf                 mov ecx, edi
// 008429d3  ffd0                 call eax
// 008429d5  8b442420             mov eax, dword ptr [esp + 0x20]
// 008429d9  2b442448             sub eax, dword ptr [esp + 0x48]
// 008429dd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008429e1  2b542444             sub edx, dword ptr [esp + 0x44]
// 008429e5  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008429e9  8d0c28               lea ecx, [eax + ebp]
// 008429ec  8b2f                 mov ebp, dword ptr [edi]
// 008429ee  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 008429f5  83ec10               sub esp, 0x10
// 008429f8  8bcc                 mov ecx, esp
// 008429fa  8919                 mov dword ptr [ecx], ebx
// 008429fc  894104               mov dword ptr [ecx + 4], eax
// 008429ff  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 00842a02  895108               mov dword ptr [ecx + 8], edx
// 00842a05  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 00842a0c  89510c               mov dword ptr [ecx + 0xc], edx
// 00842a0f  8bcf                 mov ecx, edi
// 00842a11  ffd0                 call eax
// 00842a13  33db                 xor ebx, ebx
// 00842a15  8b542440             mov edx, dword ptr [esp + 0x40]
// 00842a19  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00842a1d  2b442444             sub eax, dword ptr [esp + 0x44]
// 00842a21  8b3d38ca9800         mov edi, dword ptr [0x98ca38]
// 00842a27  52                   push edx
// 00842a28  8bca                 mov ecx, edx
// 00842a2a  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 00842a2e  50                   push eax
// 00842a2f  51                   push ecx
// 00842a30  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00842a34  51                   push ecx
// 00842a35  8d96b4010000         lea edx, [esi + 0x1b4]
// 00842a3b  52                   push edx
// 00842a3c  ffd7                 call edi
// 00842a3e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00842a42  2b442448             sub eax, dword ptr [esp + 0x48]
// 00842a46  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00842a4a  8d1408               lea edx, [eax + ecx]
// 00842a4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00842a51  2b4c2444             sub ecx, dword ptr [esp + 0x44]
// 00842a55  52                   push edx
// 00842a56  8b542440             mov edx, dword ptr [esp + 0x40]
// 00842a5a  51                   push ecx
// 00842a5b  50                   push eax
// 00842a5c  52                   push edx
// 00842a5d  8d86c4010000         lea eax, [esi + 0x1c4]
// 00842a63  50                   push eax
// 00842a64  ffd7                 call edi
// 00842a66  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00842a6a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00842a6e  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 00842a74  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00842a7b  890e                 mov dword ptr [esi], ecx
// 00842a7d  8d4c244c             lea ecx, [esp + 0x4c]
// 00842a81  895604               mov dword ptr [esi + 4], edx
// 00842a84  889c2488000000       mov byte ptr [esp + 0x88], bl
// 00842a8b  e8508c0000           call 0x84b6e0
// 00842a90  8d4c246c             lea ecx, [esp + 0x6c]
// 00842a94  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 00842a9f  e82c1cfbff           call 0x7f46d0
// 00842aa4  8bc6                 mov eax, esi
// 00842aa6  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00842aad  64890d00000000       mov dword ptr fs:[0], ecx
// 00842ab4  59                   pop ecx
// 00842ab5  5f                   pop edi
// 00842ab6  5e                   pop esi
// 00842ab7  5d                   pop ebp
// 00842ab8  5b                   pop ebx
// 00842ab9  83c478               add esp, 0x78
// 00842abc  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPPopupBar@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp