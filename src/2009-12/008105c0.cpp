// roc 2009-12 008105c0  unit: CXTPImageManager  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008105c0
//
// 008105c0  6aff                 push -1
// 008105c2  6870a09500           push 0x95a070
// 008105c7  64a100000000         mov eax, dword ptr fs:[0]
// 008105cd  50                   push eax
// 008105ce  83ec40               sub esp, 0x40
// 008105d1  53                   push ebx
// 008105d2  55                   push ebp
// 008105d3  56                   push esi
// 008105d4  57                   push edi
// 008105d5  a10052b600           mov eax, dword ptr [0xb65200]
// 008105da  33c4                 xor eax, esp
// 008105dc  50                   push eax
// 008105dd  8d442454             lea eax, [esp + 0x54]
// 008105e1  64a300000000         mov dword ptr fs:[0], eax
// 008105e7  8be9                 mov ebp, ecx
// 008105e9  33db                 xor ebx, ebx
// 008105eb  be18229a00           mov esi, 0x9a2218
// 008105f0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008105f4  89742418             mov dword ptr [esp + 0x18], esi
// 008105f8  8b442464             mov eax, dword ptr [esp + 0x64]
// 008105fc  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00810600  895c2414             mov dword ptr [esp + 0x14], ebx
// 00810604  3bc3                 cmp eax, ebx
// 00810606  7504                 jne 0x81060c
// 00810608  33c0                 xor eax, eax
// 0081060a  eb03                 jmp 0x81060f
// 0081060c  8b4004               mov eax, dword ptr [eax + 4]
// 0081060f  8b542478             mov edx, dword ptr [esp + 0x78]
// 00810613  8d4c2414             lea ecx, [esp + 0x14]
// 00810617  51                   push ecx
// 00810618  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0081061c  52                   push edx
// 0081061d  51                   push ecx
// 0081061e  50                   push eax
// 0081061f  e81c85ffff           call 0x808b40
// 00810624  83c410               add esp, 0x10
// 00810627  50                   push eax
// 00810628  8d4c241c             lea ecx, [esp + 0x1c]
// 0081062c  e8f937feff           call 0x7f3e2a
// 00810631  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00810635  3bfb                 cmp edi, ebx
// 00810637  7509                 jne 0x810642
// 00810639  89742418             mov dword ptr [esp + 0x18], esi
// 0081063d  e9a9010000           jmp 0x8107eb
// 00810642  8d542418             lea edx, [esp + 0x18]
// 00810646  52                   push edx
// 00810647  8d7508               lea esi, [ebp + 8]
// 0081064a  56                   push esi
// 0081064b  8d4c2448             lea ecx, [esp + 0x48]
// 0081064f  e82cb20300           call 0x84b880
// 00810654  68ffffff00           push 0xffffff
// 00810659  8d4c2444             lea ecx, [esp + 0x44]
// 0081065d  c644246001           mov byte ptr [esp + 0x60], 1
// 00810662  e8b35e1100           call 0x92651a
// 00810667  53                   push ebx
// 00810668  8d4c2444             lea ecx, [esp + 0x44]
// 0081066c  e8af5e1100           call 0x926520
// 00810671  8b4504               mov eax, dword ptr [ebp + 4]
// 00810674  3bc3                 cmp eax, ebx
// 00810676  745c                 je 0x8106d4
// 00810678  50                   push eax
// 00810679  8bce                 mov ecx, esi
// 0081067b  e81098ffff           call 0x809e90
// 00810680  3bf3                 cmp esi, ebx
// 00810682  7504                 jne 0x810688
// 00810684  33c0                 xor eax, eax
// 00810686  eb03                 jmp 0x81068b
// 00810688  8b4604               mov eax, dword ptr [esi + 4]
// 0081068b  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0081068e  8b5524               mov edx, dword ptr [ebp + 0x24]
// 00810691  682000cc00           push 0xcc0020
// 00810696  51                   push ecx
// 00810697  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081069b  52                   push edx
// 0081069c  8b5104               mov edx, dword ptr [ecx + 4]
// 0081069f  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008106a6  53                   push ebx
// 008106a7  52                   push edx
// 008106a8  8b542458             mov edx, dword ptr [esp + 0x58]
// 008106ac  50                   push eax
// 008106ad  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008106b4  50                   push eax
// 008106b5  51                   push ecx
// 008106b6  53                   push ebx
// 008106b7  53                   push ebx
// 008106b8  52                   push edx
// 008106b9  ff151cb19800         call dword ptr [0x98b11c]
// 008106bf  8b4610               mov eax, dword ptr [esi + 0x10]
// 008106c2  3bc3                 cmp eax, ebx
// 008106c4  740e                 je 0x8106d4
// 008106c6  8b4e04               mov ecx, dword ptr [esi + 4]
// 008106c9  50                   push eax
// 008106ca  51                   push ecx
// 008106cb  ff154cb19800         call dword ptr [0x98b14c]
// 008106d1  895e10               mov dword ptr [esi + 0x10], ebx
// 008106d4  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008106d8  0faf4c2478           imul ecx, dword ptr [esp + 0x78]
// 008106dd  33c0                 xor eax, eax
// 008106df  85c9                 test ecx, ecx
// 008106e1  7e25                 jle 0x810708
// 008106e3  8b17                 mov edx, dword ptr [edi]
// 008106e5  f7da                 neg edx
// 008106e7  1bd2                 sbb edx, edx
// 008106e9  81e200000001         and edx, 0x1000000
// 008106ef  81c2000000ff         add edx, 0xff000000
// 008106f5  8917                 mov dword ptr [edi], edx
// 008106f7  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008106fb  0faf4c2478           imul ecx, dword ptr [esp + 0x78]
// 00810700  40                   inc eax
// 00810701  83c704               add edi, 4
// 00810704  3bc1                 cmp eax, ecx
// 00810706  7cdb                 jl 0x8106e3
// 00810708  8b4d00               mov ecx, dword ptr [ebp]
// 0081070b  3bcb                 cmp ecx, ebx
// 0081070d  7468                 je 0x810777
// 0081070f  3bf3                 cmp esi, ebx
// 00810711  7504                 jne 0x810717
// 00810713  33c0                 xor eax, eax
// 00810715  eb03                 jmp 0x81071a
// 00810717  8b4604               mov eax, dword ptr [esi + 4]
// 0081071a  8b3d4cb19800         mov edi, dword ptr [0x98b14c]
// 00810720  51                   push ecx
// 00810721  50                   push eax
// 00810722  ffd7                 call edi
// 00810724  894610               mov dword ptr [esi + 0x10], eax
// 00810727  3bf3                 cmp esi, ebx
// 00810729  7504                 jne 0x81072f
// 0081072b  33c0                 xor eax, eax
// 0081072d  eb03                 jmp 0x810732
// 0081072f  8b4604               mov eax, dword ptr [esi + 4]
// 00810732  8b5528               mov edx, dword ptr [ebp + 0x28]
// 00810735  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00810738  6846006600           push 0x660046
// 0081073d  52                   push edx
// 0081073e  8b542470             mov edx, dword ptr [esp + 0x70]
// 00810742  51                   push ecx
// 00810743  8b4a04               mov ecx, dword ptr [edx + 4]
// 00810746  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0081074d  53                   push ebx
// 0081074e  51                   push ecx
// 0081074f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00810753  50                   push eax
// 00810754  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0081075b  52                   push edx
// 0081075c  50                   push eax
// 0081075d  53                   push ebx
// 0081075e  53                   push ebx
// 0081075f  51                   push ecx
// 00810760  ff151cb19800         call dword ptr [0x98b11c]
// 00810766  8b4610               mov eax, dword ptr [esi + 0x10]
// 00810769  3bc3                 cmp eax, ebx
// 0081076b  740a                 je 0x810777
// 0081076d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00810770  50                   push eax
// 00810771  51                   push ecx
// 00810772  ffd7                 call edi
// 00810774  895e10               mov dword ptr [esi + 0x10], ebx
// 00810777  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0081077b  8b542474             mov edx, dword ptr [esp + 0x74]
// 0081077f  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00810783  89442430             mov dword ptr [esp + 0x30], eax
// 00810787  03c2                 add eax, edx
// 00810789  89442438             mov dword ptr [esp + 0x38], eax
// 0081078d  8b442470             mov eax, dword ptr [esp + 0x70]
// 00810791  89442434             mov dword ptr [esp + 0x34], eax
// 00810795  03c1                 add eax, ecx
// 00810797  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081079b  8b442464             mov eax, dword ptr [esp + 0x64]
// 0081079f  895c2420             mov dword ptr [esp + 0x20], ebx
// 008107a3  895c2424             mov dword ptr [esp + 0x24], ebx
// 008107a7  89542428             mov dword ptr [esp + 0x28], edx
// 008107ab  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008107af  3bc3                 cmp eax, ebx
// 008107b1  7504                 jne 0x8107b7
// 008107b3  33c0                 xor eax, eax
// 008107b5  eb03                 jmp 0x8107ba
// 008107b7  8b4004               mov eax, dword ptr [eax + 4]
// 008107ba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008107be  8d542420             lea edx, [esp + 0x20]
// 008107c2  52                   push edx
// 008107c3  51                   push ecx
// 008107c4  8d542438             lea edx, [esp + 0x38]
// 008107c8  52                   push edx
// 008107c9  50                   push eax
// 008107ca  e8e1fcffff           call 0x8104b0
// 008107cf  8bc8                 mov ecx, eax
// 008107d1  e82a98ffff           call 0x80a000
// 008107d6  8d4c2440             lea ecx, [esp + 0x40]
// 008107da  885c245c             mov byte ptr [esp + 0x5c], bl
// 008107de  e8adb10300           call 0x84b990
// 008107e3  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008107eb  8d4c2418             lea ecx, [esp + 0x18]
// 008107ef  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008107f7  e834eabfff           call 0x40f230
// 008107fc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00810800  64890d00000000       mov dword ptr fs:[0], ecx
// 00810807  59                   pop ecx
// 00810808  5f                   pop edi
// 00810809  5e                   pop esi
// 0081080a  5d                   pop ebp
// 0081080b  5b                   pop ebx
// 0081080c  83c44c               add esp, 0x4c
// 0081080f  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawIconComposited@CXTPImageManagerResource@@AAEXPAVCDC@@PAUXTP_IMAGERESOURCE_INFO@@VCPoint@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp