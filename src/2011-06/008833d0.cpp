// roc 2011-06 008833d0  unit: CXTPControlGalleryPaintManager  size: 3093 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008833d0
//
// 008833d0  81ec84000000         sub esp, 0x84
// 008833d6  53                   push ebx
// 008833d7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008833de  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008833e1  55                   push ebp
// 008833e2  56                   push esi
// 008833e3  57                   push edi
// 008833e4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008833eb  85c0                 test eax, eax
// 008833ed  741d                 je 0x88340c
// 008833ef  83c9ff               or ecx, 0xffffffff
// 008833f2  83783000             cmp dword ptr [eax + 0x30], 0
// 008833f6  750b                 jne 0x883403
// 008833f8  833800               cmp dword ptr [eax], 0
// 008833fb  7506                 jne 0x883403
// 008833fd  894c2410             mov dword ptr [esp + 0x10], ecx
// 00883401  eb14                 jmp 0x883417
// 00883403  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00883406  89442410             mov dword ptr [esp + 0x10], eax
// 0088340a  eb0b                 jmp 0x883417
// 0088340c  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 0088340f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00883417  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0088341a  2b531c               sub edx, dword ptr [ebx + 0x1c]
// 0088341d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00883421  85d2                 test edx, edx
// 00883423  0f8eaf0b0000         jle 0x883fd8
// 00883429  8b4308               mov eax, dword ptr [ebx + 8]
// 0088342c  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0088342f  2b4304               sub eax, dword ptr [ebx + 4]
// 00883432  40                   inc eax
// 00883433  85c0                 test eax, eax
// 00883435  7e14                 jle 0x88344b
// 00883437  8b13                 mov edx, dword ptr [ebx]
// 00883439  8b4204               mov eax, dword ptr [edx + 4]
// 0088343c  8bcb                 mov ecx, ebx
// 0088343e  ffd0                 call eax
// 00883440  85c0                 test eax, eax
// 00883442  7407                 je 0x88344b
// 00883444  bf01000000           mov edi, 1
// 00883449  eb02                 jmp 0x88344d
// 0088344b  33ff                 xor edi, edi
// 0088344d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00883450  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00883453  8bf1                 mov esi, ecx
// 00883455  2bf0                 sub esi, eax
// 00883457  2b4328               sub eax, dword ptr [ebx + 0x28]
// 0088345a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088345e  85ff                 test edi, edi
// 00883460  7405                 je 0x883467
// 00883462  3b4b2c               cmp ecx, dword ptr [ebx + 0x2c]
// 00883465  7e06                 jle 0x88346d
// 00883467  33f6                 xor esi, esi
// 00883469  8974244c             mov dword ptr [esp + 0x4c], esi
// 0088346d  8bcb                 mov ecx, ebx
// 0088346f  e80c0d0700           call 0x8f4180
// 00883474  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 00883478  89442448             mov dword ptr [esp + 0x48], eax
// 0088347c  0f84b1050000         je 0x883a33
// 00883482  8d4b48               lea ecx, [ebx + 0x48]
// 00883485  51                   push ecx
// 00883486  8d942488000000       lea edx, [esp + 0x88]
// 0088348d  52                   push edx
// 0088348e  ff15681ca400         call dword ptr [0xa41c68]
// 00883494  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 00883497  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0088349e  8b5328               mov edx, dword ptr [ebx + 0x28]
// 008834a1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008834a8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008834ac  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008834b3  896c2424             mov dword ptr [esp + 0x24], ebp
// 008834b7  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008834bb  896c245c             mov dword ptr [esp + 0x5c], ebp
// 008834bf  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008834c3  89542444             mov dword ptr [esp + 0x44], edx
// 008834c7  89542454             mov dword ptr [esp + 0x54], edx
// 008834cb  89542474             mov dword ptr [esp + 0x74], edx
// 008834cf  03d5                 add edx, ebp
// 008834d1  03f2                 add esi, edx
// 008834d3  89442438             mov dword ptr [esp + 0x38], eax
// 008834d7  89442418             mov dword ptr [esp + 0x18], eax
// 008834db  89442450             mov dword ptr [esp + 0x50], eax
// 008834df  89442470             mov dword ptr [esp + 0x70], eax
// 008834e3  89442428             mov dword ptr [esp + 0x28], eax
// 008834e7  89442460             mov dword ptr [esp + 0x60], eax
// 008834eb  8b442448             mov eax, dword ptr [esp + 0x48]
// 008834ef  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008834f3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008834fa  8954247c             mov dword ptr [esp + 0x7c], edx
// 008834fe  8954242c             mov dword ptr [esp + 0x2c], edx
// 00883502  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883506  894c2440             mov dword ptr [esp + 0x40], ecx
// 0088350a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0088350e  894c2458             mov dword ptr [esp + 0x58], ecx
// 00883512  894c2478             mov dword ptr [esp + 0x78], ecx
// 00883516  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088351a  89742434             mov dword ptr [esp + 0x34], esi
// 0088351e  89742464             mov dword ptr [esp + 0x64], esi
// 00883522  894c2468             mov dword ptr [esp + 0x68], ecx
// 00883526  8954246c             mov dword ptr [esp + 0x6c], edx
// 0088352a  83f803               cmp eax, 3
// 0088352d  0f85fc010000         jne 0x88372f
// 00883533  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 0088353a  83c620               add esi, 0x20
// 0088353d  8bce                 mov ecx, esi
// 0088353f  e88c9dffff           call 0x87d2d0
// 00883544  85c0                 test eax, eax
// 00883546  0f8443030000         je 0x88388f
// 0088354c  85ff                 test edi, edi
// 0088354e  7505                 jne 0x883555
// 00883550  8d4f04               lea ecx, [edi + 4]
// 00883553  eb1a                 jmp 0x88356f
// 00883555  b83c000000           mov eax, 0x3c
// 0088355a  39442410             cmp dword ptr [esp + 0x10], eax
// 0088355e  7505                 jne 0x883565
// 00883560  8d48c7               lea ecx, [eax - 0x39]
// 00883563  eb0a                 jmp 0x88356f
// 00883565  33c9                 xor ecx, ecx
// 00883567  39442414             cmp dword ptr [esp + 0x14], eax
// 0088356b  0f94c1               sete cl
// 0088356e  41                   inc ecx
// 0088356f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00883576  85db                 test ebx, ebx
// 00883578  7504                 jne 0x88357e
// 0088357a  33c0                 xor eax, eax
// 0088357c  eb03                 jmp 0x883581
// 0088357e  8b4304               mov eax, dword ptr [ebx + 4]
// 00883581  6a00                 push 0
// 00883583  8d54243c             lea edx, [esp + 0x3c]
// 00883587  52                   push edx
// 00883588  51                   push ecx
// 00883589  6a01                 push 1
// 0088358b  50                   push eax
// 0088358c  8bce                 mov ecx, esi
// 0088358e  e86d9affff           call 0x87d000
// 00883593  85ff                 test edi, edi
// 00883595  7505                 jne 0x88359c
// 00883597  8d4f08               lea ecx, [edi + 8]
// 0088359a  eb1c                 jmp 0x8835b8
// 0088359c  b83d000000           mov eax, 0x3d
// 008835a1  39442410             cmp dword ptr [esp + 0x10], eax
// 008835a5  7505                 jne 0x8835ac
// 008835a7  8d48ca               lea ecx, [eax - 0x36]
// 008835aa  eb0c                 jmp 0x8835b8
// 008835ac  33c9                 xor ecx, ecx
// 008835ae  39442414             cmp dword ptr [esp + 0x14], eax
// 008835b2  0f94c1               sete cl
// 008835b5  83c105               add ecx, 5
// 008835b8  85db                 test ebx, ebx
// 008835ba  7504                 jne 0x8835c0
// 008835bc  33c0                 xor eax, eax
// 008835be  eb03                 jmp 0x8835c3
// 008835c0  8b4304               mov eax, dword ptr [ebx + 4]
// 008835c3  6a00                 push 0
// 008835c5  8d54241c             lea edx, [esp + 0x1c]
// 008835c9  52                   push edx
// 008835ca  51                   push ecx
// 008835cb  6a01                 push 1
// 008835cd  50                   push eax
// 008835ce  8bce                 mov ecx, esi
// 008835d0  e82b9affff           call 0x87d000
// 008835d5  8b2d641ca400         mov ebp, dword ptr [0xa41c64]
// 008835db  8d442450             lea eax, [esp + 0x50]
// 008835df  50                   push eax
// 008835e0  ffd5                 call ebp
// 008835e2  85c0                 test eax, eax
// 008835e4  0f85ee090000         jne 0x883fd8
// 008835ea  8d4c2470             lea ecx, [esp + 0x70]
// 008835ee  51                   push ecx
// 008835ef  ffd5                 call ebp
// 008835f1  85c0                 test eax, eax
// 008835f3  7540                 jne 0x883635
// 008835f5  85ff                 test edi, edi
// 008835f7  7505                 jne 0x8835fe
// 008835f9  8d4804               lea ecx, [eax + 4]
// 008835fc  eb1a                 jmp 0x883618
// 008835fe  b83e000000           mov eax, 0x3e
// 00883603  39442410             cmp dword ptr [esp + 0x10], eax
// 00883607  7505                 jne 0x88360e
// 00883609  8d48c5               lea ecx, [eax - 0x3b]
// 0088360c  eb0a                 jmp 0x883618
// 0088360e  33c9                 xor ecx, ecx
// 00883610  39442414             cmp dword ptr [esp + 0x14], eax
// 00883614  0f94c1               sete cl
// 00883617  41                   inc ecx
// 00883618  85db                 test ebx, ebx
// 0088361a  7504                 jne 0x883620
// 0088361c  33c0                 xor eax, eax
// 0088361e  eb03                 jmp 0x883623
// 00883620  8b4304               mov eax, dword ptr [ebx + 4]
// 00883623  6a00                 push 0
// 00883625  8d542474             lea edx, [esp + 0x74]
// 00883629  52                   push edx
// 0088362a  51                   push ecx
// 0088362b  6a06                 push 6
// 0088362d  50                   push eax
// 0088362e  8bce                 mov ecx, esi
// 00883630  e8cb99ffff           call 0x87d000
// 00883635  8d442428             lea eax, [esp + 0x28]
// 00883639  50                   push eax
// 0088363a  ffd5                 call ebp
// 0088363c  85c0                 test eax, eax
// 0088363e  0f858f000000         jne 0x8836d3
// 00883644  b840000000           mov eax, 0x40
// 00883649  85ff                 test edi, edi
// 0088364b  7505                 jne 0x883652
// 0088364d  8d48c4               lea ecx, [eax - 0x3c]
// 00883650  eb17                 jmp 0x883669
// 00883652  39442410             cmp dword ptr [esp + 0x10], eax
// 00883656  7507                 jne 0x88365f
// 00883658  b903000000           mov ecx, 3
// 0088365d  eb0a                 jmp 0x883669
// 0088365f  33c9                 xor ecx, ecx
// 00883661  39442414             cmp dword ptr [esp + 0x14], eax
// 00883665  0f94c1               sete cl
// 00883668  41                   inc ecx
// 00883669  85db                 test ebx, ebx
// 0088366b  7504                 jne 0x883671
// 0088366d  33c0                 xor eax, eax
// 0088366f  eb03                 jmp 0x883674
// 00883671  8b4304               mov eax, dword ptr [ebx + 4]
// 00883674  6a00                 push 0
// 00883676  8d54242c             lea edx, [esp + 0x2c]
// 0088367a  52                   push edx
// 0088367b  51                   push ecx
// 0088367c  6a03                 push 3
// 0088367e  50                   push eax
// 0088367f  8bce                 mov ecx, esi
// 00883681  e87a99ffff           call 0x87d000
// 00883686  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088368a  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0088368e  83f80d               cmp eax, 0xd
// 00883691  7e40                 jle 0x8836d3
// 00883693  85ff                 test edi, edi
// 00883695  7505                 jne 0x88369c
// 00883697  8d4f04               lea ecx, [edi + 4]
// 0088369a  eb1a                 jmp 0x8836b6
// 0088369c  b840000000           mov eax, 0x40
// 008836a1  39442410             cmp dword ptr [esp + 0x10], eax
// 008836a5  7505                 jne 0x8836ac
// 008836a7  8d48c3               lea ecx, [eax - 0x3d]
// 008836aa  eb0a                 jmp 0x8836b6
// 008836ac  33c9                 xor ecx, ecx
// 008836ae  39442414             cmp dword ptr [esp + 0x14], eax
// 008836b2  0f94c1               sete cl
// 008836b5  41                   inc ecx
// 008836b6  85db                 test ebx, ebx
// 008836b8  7504                 jne 0x8836be
// 008836ba  33c0                 xor eax, eax
// 008836bc  eb03                 jmp 0x8836c1
// 008836be  8b4304               mov eax, dword ptr [ebx + 4]
// 008836c1  6a00                 push 0
// 008836c3  8d54242c             lea edx, [esp + 0x2c]
// 008836c7  52                   push edx
// 008836c8  51                   push ecx
// 008836c9  6a09                 push 9
// 008836cb  50                   push eax
// 008836cc  8bce                 mov ecx, esi
// 008836ce  e82d99ffff           call 0x87d000
// 008836d3  8d442460             lea eax, [esp + 0x60]
// 008836d7  50                   push eax
// 008836d8  ffd5                 call ebp
// 008836da  85c0                 test eax, eax
// 008836dc  0f85f6080000         jne 0x883fd8
// 008836e2  85ff                 test edi, edi
// 008836e4  7505                 jne 0x8836eb
// 008836e6  8d4804               lea ecx, [eax + 4]
// 008836e9  eb1a                 jmp 0x883705
// 008836eb  b83f000000           mov eax, 0x3f
// 008836f0  39442410             cmp dword ptr [esp + 0x10], eax
// 008836f4  7505                 jne 0x8836fb
// 008836f6  8d48c4               lea ecx, [eax - 0x3c]
// 008836f9  eb0a                 jmp 0x883705
// 008836fb  33c9                 xor ecx, ecx
// 008836fd  39442414             cmp dword ptr [esp + 0x14], eax
// 00883701  0f94c1               sete cl
// 00883704  41                   inc ecx
// 00883705  85db                 test ebx, ebx
// 00883707  7504                 jne 0x88370d
// 00883709  33c0                 xor eax, eax
// 0088370b  eb03                 jmp 0x883710
// 0088370d  8b4304               mov eax, dword ptr [ebx + 4]
// 00883710  6a00                 push 0
// 00883712  8d542464             lea edx, [esp + 0x64]
// 00883716  52                   push edx
// 00883717  51                   push ecx
// 00883718  6a07                 push 7
// 0088371a  50                   push eax
// 0088371b  8bce                 mov ecx, esi
// 0088371d  e8de98ffff           call 0x87d000
// 00883722  5f                   pop edi
// 00883723  5e                   pop esi
// 00883724  5d                   pop ebp
// 00883725  5b                   pop ebx
// 00883726  81c484000000         add esp, 0x84
// 0088372c  c20800               ret 8
// 0088372f  83f802               cmp eax, 2
// 00883732  0f8557010000         jne 0x88388f
// 00883738  e8a31cfcff           call 0x8453e0
// 0088373d  6a0f                 push 0xf
// 0088373f  8bc8                 mov ecx, eax
// 00883741  e86a14fcff           call 0x844bb0
// 00883746  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0088374d  50                   push eax
// 0088374e  8d44243c             lea eax, [esp + 0x3c]
// 00883752  50                   push eax
// 00883753  8bce                 mov ecx, esi
// 00883755  e8c676f8ff           call 0x80ae20
// 0088375a  85ff                 test edi, edi
// 0088375c  742e                 je 0x88378c
// 0088375e  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00883763  7527                 jne 0x88378c
// 00883765  e8761cfcff           call 0x8453e0
// 0088376a  6a14                 push 0x14
// 0088376c  8bc8                 mov ecx, eax
// 0088376e  e83d14fcff           call 0x844bb0
// 00883773  8be8                 mov ebp, eax
// 00883775  e8661cfcff           call 0x8453e0
// 0088377a  6a10                 push 0x10
// 0088377c  8bc8                 mov ecx, eax
// 0088377e  e82d14fcff           call 0x844bb0
// 00883783  55                   push ebp
// 00883784  50                   push eax
// 00883785  8d4c2440             lea ecx, [esp + 0x40]
// 00883789  51                   push ecx
// 0088378a  eb25                 jmp 0x8837b1
// 0088378c  e84f1cfcff           call 0x8453e0
// 00883791  6a10                 push 0x10
// 00883793  8bc8                 mov ecx, eax
// 00883795  e81614fcff           call 0x844bb0
// 0088379a  8be8                 mov ebp, eax
// 0088379c  e83f1cfcff           call 0x8453e0
// 008837a1  6a14                 push 0x14
// 008837a3  8bc8                 mov ecx, eax
// 008837a5  e80614fcff           call 0x844bb0
// 008837aa  55                   push ebp
// 008837ab  50                   push eax
// 008837ac  8d542440             lea edx, [esp + 0x40]
// 008837b0  52                   push edx
// 008837b1  8bce                 mov ecx, esi
// 008837b3  e86276f8ff           call 0x80ae1a
// 008837b8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008837bc  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008837c0  57                   push edi
// 008837c1  6a01                 push 1
// 008837c3  6a00                 push 0
// 008837c5  83ec10               sub esp, 0x10
// 008837c8  8bc4                 mov eax, esp
// 008837ca  8908                 mov dword ptr [eax], ecx
// 008837cc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008837d0  895004               mov dword ptr [eax + 4], edx
// 008837d3  8b542460             mov edx, dword ptr [esp + 0x60]
// 008837d7  894808               mov dword ptr [eax + 8], ecx
// 008837da  56                   push esi
// 008837db  89500c               mov dword ptr [eax + 0xc], edx
// 008837de  e8bdfaffff           call 0x8832a0
// 008837e3  83c420               add esp, 0x20
// 008837e6  e8f51bfcff           call 0x8453e0
// 008837eb  6a0f                 push 0xf
// 008837ed  8bc8                 mov ecx, eax
// 008837ef  e8bc13fcff           call 0x844bb0
// 008837f4  50                   push eax
// 008837f5  8d44241c             lea eax, [esp + 0x1c]
// 008837f9  50                   push eax
// 008837fa  8bce                 mov ecx, esi
// 008837fc  e81f76f8ff           call 0x80ae20
// 00883801  85ff                 test edi, edi
// 00883803  742e                 je 0x883833
// 00883805  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0088380a  7527                 jne 0x883833
// 0088380c  e8cf1bfcff           call 0x8453e0
// 00883811  6a14                 push 0x14
// 00883813  8bc8                 mov ecx, eax
// 00883815  e89613fcff           call 0x844bb0
// 0088381a  8be8                 mov ebp, eax
// 0088381c  e8bf1bfcff           call 0x8453e0
// 00883821  6a10                 push 0x10
// 00883823  8bc8                 mov ecx, eax
// 00883825  e88613fcff           call 0x844bb0
// 0088382a  55                   push ebp
// 0088382b  50                   push eax
// 0088382c  8d4c2420             lea ecx, [esp + 0x20]
// 00883830  51                   push ecx
// 00883831  eb25                 jmp 0x883858
// 00883833  e8a81bfcff           call 0x8453e0
// 00883838  6a10                 push 0x10
// 0088383a  8bc8                 mov ecx, eax
// 0088383c  e86f13fcff           call 0x844bb0
// 00883841  8be8                 mov ebp, eax
// 00883843  e8981bfcff           call 0x8453e0
// 00883848  6a14                 push 0x14
// 0088384a  8bc8                 mov ecx, eax
// 0088384c  e85f13fcff           call 0x844bb0
// 00883851  55                   push ebp
// 00883852  50                   push eax
// 00883853  8d542420             lea edx, [esp + 0x20]
// 00883857  52                   push edx
// 00883858  8bce                 mov ecx, esi
// 0088385a  e8bb75f8ff           call 0x80ae1a
// 0088385f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00883863  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883867  57                   push edi
// 00883868  6a00                 push 0
// 0088386a  6a00                 push 0
// 0088386c  83ec10               sub esp, 0x10
// 0088386f  8bc4                 mov eax, esp
// 00883871  8908                 mov dword ptr [eax], ecx
// 00883873  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00883877  895004               mov dword ptr [eax + 4], edx
// 0088387a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088387e  894808               mov dword ptr [eax + 8], ecx
// 00883881  56                   push esi
// 00883882  89500c               mov dword ptr [eax + 0xc], edx
// 00883885  e816faffff           call 0x8832a0
// 0088388a  83c420               add esp, 0x20
// 0088388d  eb72                 jmp 0x883901
// 0088388f  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00883896  85f6                 test esi, esi
// 00883898  7504                 jne 0x88389e
// 0088389a  33c0                 xor eax, eax
// 0088389c  eb03                 jmp 0x8838a1
// 0088389e  8b4604               mov eax, dword ptr [esi + 4]
// 008838a1  f7df                 neg edi
// 008838a3  1bff                 sbb edi, edi
// 008838a5  8b2d241ca400         mov ebp, dword ptr [0xa41c24]
// 008838ab  33c9                 xor ecx, ecx
// 008838ad  81e700ffffff         and edi, 0xffffff00
// 008838b3  81c700010000         add edi, 0x100
// 008838b9  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 008838be  8d542438             lea edx, [esp + 0x38]
// 008838c2  0f95c1               setne cl
// 008838c5  49                   dec ecx
// 008838c6  81e100020000         and ecx, 0x200
// 008838cc  0bcf                 or ecx, edi
// 008838ce  51                   push ecx
// 008838cf  6a03                 push 3
// 008838d1  52                   push edx
// 008838d2  50                   push eax
// 008838d3  ffd5                 call ebp
// 008838d5  85f6                 test esi, esi
// 008838d7  7504                 jne 0x8838dd
// 008838d9  33c0                 xor eax, eax
// 008838db  eb03                 jmp 0x8838e0
// 008838dd  8b4604               mov eax, dword ptr [esi + 4]
// 008838e0  33c9                 xor ecx, ecx
// 008838e2  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 008838e7  8d542418             lea edx, [esp + 0x18]
// 008838eb  0f95c1               setne cl
// 008838ee  49                   dec ecx
// 008838ef  81e100020000         and ecx, 0x200
// 008838f5  0bcf                 or ecx, edi
// 008838f7  83c901               or ecx, 1
// 008838fa  51                   push ecx
// 008838fb  6a03                 push 3
// 008838fd  52                   push edx
// 008838fe  50                   push eax
// 008838ff  ffd5                 call ebp
// 00883901  8b03                 mov eax, dword ptr [ebx]
// 00883903  8b5008               mov edx, dword ptr [eax + 8]
// 00883906  8bcb                 mov ecx, ebx
// 00883908  ffd2                 call edx
// 0088390a  85c0                 test eax, eax
// 0088390c  7504                 jne 0x883912
// 0088390e  33d2                 xor edx, edx
// 00883910  eb03                 jmp 0x883915
// 00883912  8b5020               mov edx, dword ptr [eax + 0x20]
// 00883915  85f6                 test esi, esi
// 00883917  7504                 jne 0x88391d
// 00883919  33c9                 xor ecx, ecx
// 0088391b  eb03                 jmp 0x883920
// 0088391d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00883920  85c0                 test eax, eax
// 00883922  7403                 je 0x883927
// 00883924  8b4020               mov eax, dword ptr [eax + 0x20]
// 00883927  52                   push edx
// 00883928  51                   push ecx
// 00883929  6837010000           push 0x137
// 0088392e  50                   push eax
// 0088392f  ff15a01ca400         call dword ptr [0xa41ca0]
// 00883935  85f6                 test esi, esi
// 00883937  7504                 jne 0x88393d
// 00883939  33c9                 xor ecx, ecx
// 0088393b  eb03                 jmp 0x883940
// 0088393d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00883940  50                   push eax
// 00883941  8d442454             lea eax, [esp + 0x54]
// 00883945  50                   push eax
// 00883946  51                   push ecx
// 00883947  ff15e81ba400         call dword ptr [0xa41be8]
// 0088394d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00883951  8b2d301ba400         mov ebp, dword ptr [0xa41b30]
// 00883957  83fb3e               cmp ebx, 0x3e
// 0088395a  7513                 jne 0x88396f
// 0088395c  85f6                 test esi, esi
// 0088395e  7504                 jne 0x883964
// 00883960  33c0                 xor eax, eax
// 00883962  eb03                 jmp 0x883967
// 00883964  8b4604               mov eax, dword ptr [esi + 4]
// 00883967  8d4c2470             lea ecx, [esp + 0x70]
// 0088396b  51                   push ecx
// 0088396c  50                   push eax
// 0088396d  ffd5                 call ebp
// 0088396f  8b3d641ca400         mov edi, dword ptr [0xa41c64]
// 00883975  8d542450             lea edx, [esp + 0x50]
// 00883979  52                   push edx
// 0088397a  ffd7                 call edi
// 0088397c  85c0                 test eax, eax
// 0088397e  7579                 jne 0x8839f9
// 00883980  8d442428             lea eax, [esp + 0x28]
// 00883984  50                   push eax
// 00883985  ffd7                 call edi
// 00883987  85c0                 test eax, eax
// 00883989  756e                 jne 0x8839f9
// 0088398b  e8501afcff           call 0x8453e0
// 00883990  6a0f                 push 0xf
// 00883992  8bc8                 mov ecx, eax
// 00883994  e81712fcff           call 0x844bb0
// 00883999  50                   push eax
// 0088399a  8d4c242c             lea ecx, [esp + 0x2c]
// 0088399e  51                   push ecx
// 0088399f  8bce                 mov ecx, esi
// 008839a1  e87a74f8ff           call 0x80ae20
// 008839a6  837c244802           cmp dword ptr [esp + 0x48], 2
// 008839ab  752e                 jne 0x8839db
// 008839ad  e82e1afcff           call 0x8453e0
// 008839b2  6a10                 push 0x10
// 008839b4  8bc8                 mov ecx, eax
// 008839b6  e8f511fcff           call 0x844bb0
// 008839bb  8bf8                 mov edi, eax
// 008839bd  e81e1afcff           call 0x8453e0
// 008839c2  6a14                 push 0x14
// 008839c4  8bc8                 mov ecx, eax
// 008839c6  e8e511fcff           call 0x844bb0
// 008839cb  57                   push edi
// 008839cc  50                   push eax
// 008839cd  8d542430             lea edx, [esp + 0x30]
// 008839d1  52                   push edx
// 008839d2  8bce                 mov ecx, esi
// 008839d4  e84174f8ff           call 0x80ae1a
// 008839d9  eb1e                 jmp 0x8839f9
// 008839db  85f6                 test esi, esi
// 008839dd  7504                 jne 0x8839e3
// 008839df  33c0                 xor eax, eax
// 008839e1  eb03                 jmp 0x8839e6
// 008839e3  8b4604               mov eax, dword ptr [esi + 4]
// 008839e6  680f200000           push 0x200f
// 008839eb  6a05                 push 5
// 008839ed  8d4c2430             lea ecx, [esp + 0x30]
// 008839f1  51                   push ecx
// 008839f2  50                   push eax
// 008839f3  ff155c1aa400         call dword ptr [0xa41a5c]
// 008839f9  83fb3f               cmp ebx, 0x3f
// 008839fc  0f85d6050000         jne 0x883fd8
// 00883a02  85f6                 test esi, esi
// 00883a04  7515                 jne 0x883a1b
// 00883a06  8d542460             lea edx, [esp + 0x60]
// 00883a0a  52                   push edx
// 00883a0b  56                   push esi
// 00883a0c  ffd5                 call ebp
// 00883a0e  5f                   pop edi
// 00883a0f  5e                   pop esi
// 00883a10  5d                   pop ebp
// 00883a11  5b                   pop ebx
// 00883a12  81c484000000         add esp, 0x84
// 00883a18  c20800               ret 8
// 00883a1b  8b7604               mov esi, dword ptr [esi + 4]
// 00883a1e  8d542460             lea edx, [esp + 0x60]
// 00883a22  52                   push edx
// 00883a23  56                   push esi
// 00883a24  ffd5                 call ebp
// 00883a26  5f                   pop edi
// 00883a27  5e                   pop esi
// 00883a28  5d                   pop ebp
// 00883a29  5b                   pop ebx
// 00883a2a  81c484000000         add esp, 0x84
// 00883a30  c20800               ret 8
// 00883a33  8d4348               lea eax, [ebx + 0x48]
// 00883a36  50                   push eax
// 00883a37  8d8c2488000000       lea ecx, [esp + 0x88]
// 00883a3e  51                   push ecx
// 00883a3f  ff15681ca400         call dword ptr [0xa41c68]
// 00883a45  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 00883a48  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00883a4f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00883a56  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00883a5d  896c2418             mov dword ptr [esp + 0x18], ebp
// 00883a61  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00883a68  896c2420             mov dword ptr [esp + 0x20], ebp
// 00883a6c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00883a70  89542428             mov dword ptr [esp + 0x28], edx
// 00883a74  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00883a77  8944242c             mov dword ptr [esp + 0x2c], eax
// 00883a7b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00883a7f  89442454             mov dword ptr [esp + 0x54], eax
// 00883a83  89442464             mov dword ptr [esp + 0x64], eax
// 00883a87  8944243c             mov dword ptr [esp + 0x3c], eax
// 00883a8b  89442474             mov dword ptr [esp + 0x74], eax
// 00883a8f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00883a93  896c2458             mov dword ptr [esp + 0x58], ebp
// 00883a97  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00883a9b  89542430             mov dword ptr [esp + 0x30], edx
// 00883a9f  89542450             mov dword ptr [esp + 0x50], edx
// 00883aa3  89542460             mov dword ptr [esp + 0x60], edx
// 00883aa7  03d5                 add edx, ebp
// 00883aa9  03f2                 add esi, edx
// 00883aab  89442478             mov dword ptr [esp + 0x78], eax
// 00883aaf  8b442448             mov eax, dword ptr [esp + 0x48]
// 00883ab3  894c2434             mov dword ptr [esp + 0x34], ecx
// 00883ab7  894c2424             mov dword ptr [esp + 0x24], ecx
// 00883abb  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00883abf  89542468             mov dword ptr [esp + 0x68], edx
// 00883ac3  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00883ac7  89542438             mov dword ptr [esp + 0x38], edx
// 00883acb  89742440             mov dword ptr [esp + 0x40], esi
// 00883acf  894c2444             mov dword ptr [esp + 0x44], ecx
// 00883ad3  89742470             mov dword ptr [esp + 0x70], esi
// 00883ad7  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00883adb  83f803               cmp eax, 3
// 00883ade  0f85fe010000         jne 0x883ce2
// 00883ae4  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 00883aeb  83c620               add esi, 0x20
// 00883aee  8bce                 mov ecx, esi
// 00883af0  e8db97ffff           call 0x87d2d0
// 00883af5  85c0                 test eax, eax
// 00883af7  0f8445030000         je 0x883e42
// 00883afd  85ff                 test edi, edi
// 00883aff  7505                 jne 0x883b06
// 00883b01  8d4f0c               lea ecx, [edi + 0xc]
// 00883b04  eb1c                 jmp 0x883b22
// 00883b06  b83c000000           mov eax, 0x3c
// 00883b0b  39442410             cmp dword ptr [esp + 0x10], eax
// 00883b0f  7505                 jne 0x883b16
// 00883b11  8d48cf               lea ecx, [eax - 0x31]
// 00883b14  eb0c                 jmp 0x883b22
// 00883b16  33c9                 xor ecx, ecx
// 00883b18  39442414             cmp dword ptr [esp + 0x14], eax
// 00883b1c  0f94c1               sete cl
// 00883b1f  83c109               add ecx, 9
// 00883b22  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00883b29  85ed                 test ebp, ebp
// 00883b2b  7504                 jne 0x883b31
// 00883b2d  33c0                 xor eax, eax
// 00883b2f  eb03                 jmp 0x883b34
// 00883b31  8b4504               mov eax, dword ptr [ebp + 4]
// 00883b34  6a00                 push 0
// 00883b36  8d54242c             lea edx, [esp + 0x2c]
// 00883b3a  52                   push edx
// 00883b3b  51                   push ecx
// 00883b3c  6a01                 push 1
// 00883b3e  50                   push eax
// 00883b3f  8bce                 mov ecx, esi
// 00883b41  e8ba94ffff           call 0x87d000
// 00883b46  85ff                 test edi, edi
// 00883b48  7505                 jne 0x883b4f
// 00883b4a  8d4f10               lea ecx, [edi + 0x10]
// 00883b4d  eb1c                 jmp 0x883b6b
// 00883b4f  b83d000000           mov eax, 0x3d
// 00883b54  39442410             cmp dword ptr [esp + 0x10], eax
// 00883b58  7505                 jne 0x883b5f
// 00883b5a  8d48d2               lea ecx, [eax - 0x2e]
// 00883b5d  eb0c                 jmp 0x883b6b
// 00883b5f  33c9                 xor ecx, ecx
// 00883b61  39442414             cmp dword ptr [esp + 0x14], eax
// 00883b65  0f94c1               sete cl
// 00883b68  83c10d               add ecx, 0xd
// 00883b6b  85ed                 test ebp, ebp
// 00883b6d  7504                 jne 0x883b73
// 00883b6f  33c0                 xor eax, eax
// 00883b71  eb03                 jmp 0x883b76
// 00883b73  8b4504               mov eax, dword ptr [ebp + 4]
// 00883b76  6a00                 push 0
// 00883b78  8d54241c             lea edx, [esp + 0x1c]
// 00883b7c  52                   push edx
// 00883b7d  51                   push ecx
// 00883b7e  6a01                 push 1
// 00883b80  50                   push eax
// 00883b81  8bce                 mov ecx, esi
// 00883b83  e87894ffff           call 0x87d000
// 00883b88  8b1d641ca400         mov ebx, dword ptr [0xa41c64]
// 00883b8e  8d442450             lea eax, [esp + 0x50]
// 00883b92  50                   push eax
// 00883b93  ffd3                 call ebx
// 00883b95  85c0                 test eax, eax
// 00883b97  0f853b040000         jne 0x883fd8
// 00883b9d  8d4c2460             lea ecx, [esp + 0x60]
// 00883ba1  51                   push ecx
// 00883ba2  ffd3                 call ebx
// 00883ba4  85c0                 test eax, eax
// 00883ba6  7540                 jne 0x883be8
// 00883ba8  85ff                 test edi, edi
// 00883baa  7505                 jne 0x883bb1
// 00883bac  8d4804               lea ecx, [eax + 4]
// 00883baf  eb1a                 jmp 0x883bcb
// 00883bb1  b83e000000           mov eax, 0x3e
// 00883bb6  39442410             cmp dword ptr [esp + 0x10], eax
// 00883bba  7505                 jne 0x883bc1
// 00883bbc  8d48c5               lea ecx, [eax - 0x3b]
// 00883bbf  eb0a                 jmp 0x883bcb
// 00883bc1  33c9                 xor ecx, ecx
// 00883bc3  39442414             cmp dword ptr [esp + 0x14], eax
// 00883bc7  0f94c1               sete cl
// 00883bca  41                   inc ecx
// 00883bcb  85ed                 test ebp, ebp
// 00883bcd  7504                 jne 0x883bd3
// 00883bcf  33c0                 xor eax, eax
// 00883bd1  eb03                 jmp 0x883bd6
// 00883bd3  8b4504               mov eax, dword ptr [ebp + 4]
// 00883bd6  6a00                 push 0
// 00883bd8  8d542464             lea edx, [esp + 0x64]
// 00883bdc  52                   push edx
// 00883bdd  51                   push ecx
// 00883bde  6a04                 push 4
// 00883be0  50                   push eax
// 00883be1  8bce                 mov ecx, esi
// 00883be3  e81894ffff           call 0x87d000
// 00883be8  8d442438             lea eax, [esp + 0x38]
// 00883bec  50                   push eax
// 00883bed  ffd3                 call ebx
// 00883bef  85c0                 test eax, eax
// 00883bf1  0f858f000000         jne 0x883c86
// 00883bf7  b840000000           mov eax, 0x40
// 00883bfc  85ff                 test edi, edi
// 00883bfe  7505                 jne 0x883c05
// 00883c00  8d48c4               lea ecx, [eax - 0x3c]
// 00883c03  eb17                 jmp 0x883c1c
// 00883c05  39442410             cmp dword ptr [esp + 0x10], eax
// 00883c09  7507                 jne 0x883c12
// 00883c0b  b903000000           mov ecx, 3
// 00883c10  eb0a                 jmp 0x883c1c
// 00883c12  33c9                 xor ecx, ecx
// 00883c14  39442414             cmp dword ptr [esp + 0x14], eax
// 00883c18  0f94c1               sete cl
// 00883c1b  41                   inc ecx
// 00883c1c  85ed                 test ebp, ebp
// 00883c1e  7504                 jne 0x883c24
// 00883c20  33c0                 xor eax, eax
// 00883c22  eb03                 jmp 0x883c27
// 00883c24  8b4504               mov eax, dword ptr [ebp + 4]
// 00883c27  6a00                 push 0
// 00883c29  8d54243c             lea edx, [esp + 0x3c]
// 00883c2d  52                   push edx
// 00883c2e  51                   push ecx
// 00883c2f  6a02                 push 2
// 00883c31  50                   push eax
// 00883c32  8bce                 mov ecx, esi
// 00883c34  e8c793ffff           call 0x87d000
// 00883c39  8b442440             mov eax, dword ptr [esp + 0x40]
// 00883c3d  2b442438             sub eax, dword ptr [esp + 0x38]
// 00883c41  83f80d               cmp eax, 0xd
// 00883c44  7e40                 jle 0x883c86
// 00883c46  85ff                 test edi, edi
// 00883c48  7505                 jne 0x883c4f
// 00883c4a  8d4f04               lea ecx, [edi + 4]
// 00883c4d  eb1a                 jmp 0x883c69
// 00883c4f  b840000000           mov eax, 0x40
// 00883c54  39442410             cmp dword ptr [esp + 0x10], eax
// 00883c58  7505                 jne 0x883c5f
// 00883c5a  8d48c3               lea ecx, [eax - 0x3d]
// 00883c5d  eb0a                 jmp 0x883c69
// 00883c5f  33c9                 xor ecx, ecx
// 00883c61  39442414             cmp dword ptr [esp + 0x14], eax
// 00883c65  0f94c1               sete cl
// 00883c68  41                   inc ecx
// 00883c69  85ed                 test ebp, ebp
// 00883c6b  7504                 jne 0x883c71
// 00883c6d  33c0                 xor eax, eax
// 00883c6f  eb03                 jmp 0x883c74
// 00883c71  8b4504               mov eax, dword ptr [ebp + 4]
// 00883c74  6a00                 push 0
// 00883c76  8d54243c             lea edx, [esp + 0x3c]
// 00883c7a  52                   push edx
// 00883c7b  51                   push ecx
// 00883c7c  6a08                 push 8
// 00883c7e  50                   push eax
// 00883c7f  8bce                 mov ecx, esi
// 00883c81  e87a93ffff           call 0x87d000
// 00883c86  8d442470             lea eax, [esp + 0x70]
// 00883c8a  50                   push eax
// 00883c8b  ffd3                 call ebx
// 00883c8d  85c0                 test eax, eax
// 00883c8f  0f8543030000         jne 0x883fd8
// 00883c95  85ff                 test edi, edi
// 00883c97  7505                 jne 0x883c9e
// 00883c99  8d4804               lea ecx, [eax + 4]
// 00883c9c  eb1a                 jmp 0x883cb8
// 00883c9e  b83f000000           mov eax, 0x3f
// 00883ca3  39442410             cmp dword ptr [esp + 0x10], eax
// 00883ca7  7505                 jne 0x883cae
// 00883ca9  8d48c4               lea ecx, [eax - 0x3c]
// 00883cac  eb0a                 jmp 0x883cb8
// 00883cae  33c9                 xor ecx, ecx
// 00883cb0  39442414             cmp dword ptr [esp + 0x14], eax
// 00883cb4  0f94c1               sete cl
// 00883cb7  41                   inc ecx
// 00883cb8  85ed                 test ebp, ebp
// 00883cba  7504                 jne 0x883cc0
// 00883cbc  33c0                 xor eax, eax
// 00883cbe  eb03                 jmp 0x883cc3
// 00883cc0  8b4504               mov eax, dword ptr [ebp + 4]
// 00883cc3  6a00                 push 0
// 00883cc5  8d542474             lea edx, [esp + 0x74]
// 00883cc9  52                   push edx
// 00883cca  51                   push ecx
// 00883ccb  6a05                 push 5
// 00883ccd  50                   push eax
// 00883cce  8bce                 mov ecx, esi
// 00883cd0  e82b93ffff           call 0x87d000
// 00883cd5  5f                   pop edi
// 00883cd6  5e                   pop esi
// 00883cd7  5d                   pop ebp
// 00883cd8  5b                   pop ebx
// 00883cd9  81c484000000         add esp, 0x84
// 00883cdf  c20800               ret 8
// 00883ce2  83f802               cmp eax, 2
// 00883ce5  0f8557010000         jne 0x883e42
// 00883ceb  e8f016fcff           call 0x8453e0
// 00883cf0  6a0f                 push 0xf
// 00883cf2  8bc8                 mov ecx, eax
// 00883cf4  e8b70efcff           call 0x844bb0
// 00883cf9  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00883d00  50                   push eax
// 00883d01  8d44242c             lea eax, [esp + 0x2c]
// 00883d05  50                   push eax
// 00883d06  8bce                 mov ecx, esi
// 00883d08  e81371f8ff           call 0x80ae20
// 00883d0d  85ff                 test edi, edi
// 00883d0f  742e                 je 0x883d3f
// 00883d11  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00883d16  7527                 jne 0x883d3f
// 00883d18  e8c316fcff           call 0x8453e0
// 00883d1d  6a14                 push 0x14
// 00883d1f  8bc8                 mov ecx, eax
// 00883d21  e88a0efcff           call 0x844bb0
// 00883d26  8be8                 mov ebp, eax
// 00883d28  e8b316fcff           call 0x8453e0
// 00883d2d  6a10                 push 0x10
// 00883d2f  8bc8                 mov ecx, eax
// 00883d31  e87a0efcff           call 0x844bb0
// 00883d36  55                   push ebp
// 00883d37  50                   push eax
// 00883d38  8d4c2430             lea ecx, [esp + 0x30]
// 00883d3c  51                   push ecx
// 00883d3d  eb25                 jmp 0x883d64
// 00883d3f  e89c16fcff           call 0x8453e0
// 00883d44  6a10                 push 0x10
// 00883d46  8bc8                 mov ecx, eax
// 00883d48  e8630efcff           call 0x844bb0
// 00883d4d  8be8                 mov ebp, eax
// 00883d4f  e88c16fcff           call 0x8453e0
// 00883d54  6a14                 push 0x14
// 00883d56  8bc8                 mov ecx, eax
// 00883d58  e8530efcff           call 0x844bb0
// 00883d5d  55                   push ebp
// 00883d5e  50                   push eax
// 00883d5f  8d542430             lea edx, [esp + 0x30]
// 00883d63  52                   push edx
// 00883d64  8bce                 mov ecx, esi
// 00883d66  e8af70f8ff           call 0x80ae1a
// 00883d6b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00883d6f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00883d73  57                   push edi
// 00883d74  6a01                 push 1
// 00883d76  6a01                 push 1
// 00883d78  83ec10               sub esp, 0x10
// 00883d7b  8bc4                 mov eax, esp
// 00883d7d  8908                 mov dword ptr [eax], ecx
// 00883d7f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00883d83  895004               mov dword ptr [eax + 4], edx
// 00883d86  8b542450             mov edx, dword ptr [esp + 0x50]
// 00883d8a  894808               mov dword ptr [eax + 8], ecx
// 00883d8d  56                   push esi
// 00883d8e  89500c               mov dword ptr [eax + 0xc], edx
// 00883d91  e80af5ffff           call 0x8832a0
// 00883d96  83c420               add esp, 0x20
// 00883d99  e84216fcff           call 0x8453e0
// 00883d9e  6a0f                 push 0xf
// 00883da0  8bc8                 mov ecx, eax
// 00883da2  e8090efcff           call 0x844bb0
// 00883da7  50                   push eax
// 00883da8  8d44241c             lea eax, [esp + 0x1c]
// 00883dac  50                   push eax
// 00883dad  8bce                 mov ecx, esi
// 00883daf  e86c70f8ff           call 0x80ae20
// 00883db4  85ff                 test edi, edi
// 00883db6  742e                 je 0x883de6
// 00883db8  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00883dbd  7527                 jne 0x883de6
// 00883dbf  e81c16fcff           call 0x8453e0
// 00883dc4  6a14                 push 0x14
// 00883dc6  8bc8                 mov ecx, eax
// 00883dc8  e8e30dfcff           call 0x844bb0
// 00883dcd  8be8                 mov ebp, eax
// 00883dcf  e80c16fcff           call 0x8453e0
// 00883dd4  6a10                 push 0x10
// 00883dd6  8bc8                 mov ecx, eax
// 00883dd8  e8d30dfcff           call 0x844bb0
// 00883ddd  55                   push ebp
// 00883dde  50                   push eax
// 00883ddf  8d4c2420             lea ecx, [esp + 0x20]
// 00883de3  51                   push ecx
// 00883de4  eb25                 jmp 0x883e0b
// 00883de6  e8f515fcff           call 0x8453e0
// 00883deb  6a10                 push 0x10
// 00883ded  8bc8                 mov ecx, eax
// 00883def  e8bc0dfcff           call 0x844bb0
// 00883df4  8be8                 mov ebp, eax
// 00883df6  e8e515fcff           call 0x8453e0
// 00883dfb  6a14                 push 0x14
// 00883dfd  8bc8                 mov ecx, eax
// 00883dff  e8ac0dfcff           call 0x844bb0
// 00883e04  55                   push ebp
// 00883e05  50                   push eax
// 00883e06  8d542420             lea edx, [esp + 0x20]
// 00883e0a  52                   push edx
// 00883e0b  8bce                 mov ecx, esi
// 00883e0d  e80870f8ff           call 0x80ae1a
// 00883e12  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00883e16  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883e1a  57                   push edi
// 00883e1b  6a00                 push 0
// 00883e1d  6a01                 push 1
// 00883e1f  83ec10               sub esp, 0x10
// 00883e22  8bc4                 mov eax, esp
// 00883e24  8908                 mov dword ptr [eax], ecx
// 00883e26  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00883e2a  895004               mov dword ptr [eax + 4], edx
// 00883e2d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00883e31  894808               mov dword ptr [eax + 8], ecx
// 00883e34  56                   push esi
// 00883e35  89500c               mov dword ptr [eax + 0xc], edx
// 00883e38  e863f4ffff           call 0x8832a0
// 00883e3d  83c420               add esp, 0x20
// 00883e40  eb75                 jmp 0x883eb7
// 00883e42  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00883e49  85f6                 test esi, esi
// 00883e4b  7504                 jne 0x883e51
// 00883e4d  33c0                 xor eax, eax
// 00883e4f  eb03                 jmp 0x883e54
// 00883e51  8b4604               mov eax, dword ptr [esi + 4]
// 00883e54  f7df                 neg edi
// 00883e56  1bff                 sbb edi, edi
// 00883e58  33c9                 xor ecx, ecx
// 00883e5a  8b2d241ca400         mov ebp, dword ptr [0xa41c24]
// 00883e60  81e700ffffff         and edi, 0xffffff00
// 00883e66  81c700010000         add edi, 0x100
// 00883e6c  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00883e71  8d542428             lea edx, [esp + 0x28]
// 00883e75  0f95c1               setne cl
// 00883e78  49                   dec ecx
// 00883e79  81e100020000         and ecx, 0x200
// 00883e7f  0bcf                 or ecx, edi
// 00883e81  83c902               or ecx, 2
// 00883e84  51                   push ecx
// 00883e85  6a03                 push 3
// 00883e87  52                   push edx
// 00883e88  50                   push eax
// 00883e89  ffd5                 call ebp
// 00883e8b  85f6                 test esi, esi
// 00883e8d  7504                 jne 0x883e93
// 00883e8f  33c0                 xor eax, eax
// 00883e91  eb03                 jmp 0x883e96
// 00883e93  8b4604               mov eax, dword ptr [esi + 4]
// 00883e96  33c9                 xor ecx, ecx
// 00883e98  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00883e9d  8d542418             lea edx, [esp + 0x18]
// 00883ea1  0f95c1               setne cl
// 00883ea4  49                   dec ecx
// 00883ea5  81e100020000         and ecx, 0x200
// 00883eab  0bcf                 or ecx, edi
// 00883ead  83c903               or ecx, 3
// 00883eb0  51                   push ecx
// 00883eb1  6a03                 push 3
// 00883eb3  52                   push edx
// 00883eb4  50                   push eax
// 00883eb5  ffd5                 call ebp
// 00883eb7  8b03                 mov eax, dword ptr [ebx]
// 00883eb9  8b5008               mov edx, dword ptr [eax + 8]
// 00883ebc  8bcb                 mov ecx, ebx
// 00883ebe  ffd2                 call edx
// 00883ec0  85c0                 test eax, eax
// 00883ec2  7504                 jne 0x883ec8
// 00883ec4  33d2                 xor edx, edx
// 00883ec6  eb03                 jmp 0x883ecb
// 00883ec8  8b5020               mov edx, dword ptr [eax + 0x20]
// 00883ecb  85f6                 test esi, esi
// 00883ecd  7504                 jne 0x883ed3
// 00883ecf  33c9                 xor ecx, ecx
// 00883ed1  eb03                 jmp 0x883ed6
// 00883ed3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00883ed6  85c0                 test eax, eax
// 00883ed8  7403                 je 0x883edd
// 00883eda  8b4020               mov eax, dword ptr [eax + 0x20]
// 00883edd  52                   push edx
// 00883ede  51                   push ecx
// 00883edf  6837010000           push 0x137
// 00883ee4  50                   push eax
// 00883ee5  ff15a01ca400         call dword ptr [0xa41ca0]
// 00883eeb  85f6                 test esi, esi
// 00883eed  7504                 jne 0x883ef3
// 00883eef  33c9                 xor ecx, ecx
// 00883ef1  eb03                 jmp 0x883ef6
// 00883ef3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00883ef6  50                   push eax
// 00883ef7  8d442454             lea eax, [esp + 0x54]
// 00883efb  50                   push eax
// 00883efc  51                   push ecx
// 00883efd  ff15e81ba400         call dword ptr [0xa41be8]
// 00883f03  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00883f07  8b2d301ba400         mov ebp, dword ptr [0xa41b30]
// 00883f0d  83fb3e               cmp ebx, 0x3e
// 00883f10  7513                 jne 0x883f25
// 00883f12  85f6                 test esi, esi
// 00883f14  7504                 jne 0x883f1a
// 00883f16  33c0                 xor eax, eax
// 00883f18  eb03                 jmp 0x883f1d
// 00883f1a  8b4604               mov eax, dword ptr [esi + 4]
// 00883f1d  8d4c2460             lea ecx, [esp + 0x60]
// 00883f21  51                   push ecx
// 00883f22  50                   push eax
// 00883f23  ffd5                 call ebp
// 00883f25  8b3d641ca400         mov edi, dword ptr [0xa41c64]
// 00883f2b  8d542450             lea edx, [esp + 0x50]
// 00883f2f  52                   push edx
// 00883f30  ffd7                 call edi
// 00883f32  85c0                 test eax, eax
// 00883f34  7579                 jne 0x883faf
// 00883f36  8d442438             lea eax, [esp + 0x38]
// 00883f3a  50                   push eax
// 00883f3b  ffd7                 call edi
// 00883f3d  85c0                 test eax, eax
// 00883f3f  756e                 jne 0x883faf
// 00883f41  e89a14fcff           call 0x8453e0
// 00883f46  6a0f                 push 0xf
// 00883f48  8bc8                 mov ecx, eax
// 00883f4a  e8610cfcff           call 0x844bb0
// 00883f4f  50                   push eax
// 00883f50  8d4c243c             lea ecx, [esp + 0x3c]
// 00883f54  51                   push ecx
// 00883f55  8bce                 mov ecx, esi
// 00883f57  e8c46ef8ff           call 0x80ae20
// 00883f5c  837c244802           cmp dword ptr [esp + 0x48], 2
// 00883f61  752e                 jne 0x883f91
// 00883f63  e87814fcff           call 0x8453e0
// 00883f68  6a10                 push 0x10
// 00883f6a  8bc8                 mov ecx, eax
// 00883f6c  e83f0cfcff           call 0x844bb0
// 00883f71  8bf8                 mov edi, eax
// 00883f73  e86814fcff           call 0x8453e0
// 00883f78  6a14                 push 0x14
// 00883f7a  8bc8                 mov ecx, eax
// 00883f7c  e82f0cfcff           call 0x844bb0
// 00883f81  57                   push edi
// 00883f82  50                   push eax
// 00883f83  8d542440             lea edx, [esp + 0x40]
// 00883f87  52                   push edx
// 00883f88  8bce                 mov ecx, esi
// 00883f8a  e88b6ef8ff           call 0x80ae1a
// 00883f8f  eb1e                 jmp 0x883faf
// 00883f91  85f6                 test esi, esi
// 00883f93  7504                 jne 0x883f99
// 00883f95  33c0                 xor eax, eax
// 00883f97  eb03                 jmp 0x883f9c
// 00883f99  8b4604               mov eax, dword ptr [esi + 4]
// 00883f9c  680f200000           push 0x200f
// 00883fa1  6a05                 push 5
// 00883fa3  8d4c2440             lea ecx, [esp + 0x40]
// 00883fa7  51                   push ecx
// 00883fa8  50                   push eax
// 00883fa9  ff155c1aa400         call dword ptr [0xa41a5c]
// 00883faf  83fb3f               cmp ebx, 0x3f
// 00883fb2  7524                 jne 0x883fd8
// 00883fb4  85f6                 test esi, esi
// 00883fb6  7515                 jne 0x883fcd
// 00883fb8  8d542470             lea edx, [esp + 0x70]
// 00883fbc  52                   push edx
// 00883fbd  56                   push esi
// 00883fbe  ffd5                 call ebp
// 00883fc0  5f                   pop edi
// 00883fc1  5e                   pop esi
// 00883fc2  5d                   pop ebp
// 00883fc3  5b                   pop ebx
// 00883fc4  81c484000000         add esp, 0x84
// 00883fca  c20800               ret 8
// 00883fcd  8b7604               mov esi, dword ptr [esi + 4]
// 00883fd0  8d542470             lea edx, [esp + 0x70]
// 00883fd4  52                   push edx
// 00883fd5  56                   push esi
// 00883fd6  ffd5                 call ebp
// 00883fd8  5f                   pop edi
// 00883fd9  5e                   pop esi
// 00883fda  5d                   pop ebp
// 00883fdb  5b                   pop ebx
// 00883fdc  81c484000000         add esp, 0x84
// 00883fe2  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
