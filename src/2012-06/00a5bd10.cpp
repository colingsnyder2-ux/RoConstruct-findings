// roc 2012-06 00a5bd10  unit: CXTPPropertyGridPaintManager  size: 1081 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5bd10
//
// 00a5bd10  6aff                 push -1
// 00a5bd12  681e79ae00           push 0xae791e
// 00a5bd17  64a100000000         mov eax, dword ptr fs:[0]
// 00a5bd1d  50                   push eax
// 00a5bd1e  81ec80000000         sub esp, 0x80
// 00a5bd24  53                   push ebx
// 00a5bd25  55                   push ebp
// 00a5bd26  56                   push esi
// 00a5bd27  57                   push edi
// 00a5bd28  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5bd2d  33c4                 xor eax, esp
// 00a5bd2f  50                   push eax
// 00a5bd30  8d842494000000       lea eax, [esp + 0x94]
// 00a5bd37  64a300000000         mov dword ptr fs:[0], eax
// 00a5bd3d  8bf9                 mov edi, ecx
// 00a5bd3f  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a5bd42  50                   push eax
// 00a5bd43  8d4c2438             lea ecx, [esp + 0x38]
// 00a5bd47  e85494f7ff           call 0x9d51a0
// 00a5bd4c  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 00a5bd50  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00a5bd57  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a5bd5f  7521                 jne 0xa5bd82
// 00a5bd61  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a5bd64  83f8ff               cmp eax, -1
// 00a5bd67  7505                 jne 0xa5bd6e
// 00a5bd69  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 00a5bd6c  eb02                 jmp 0xa5bd70
// 00a5bd6e  8bd8                 mov ebx, eax
// 00a5bd70  e8eb1af6ff           call 0x9bd860
// 00a5bd75  6a0f                 push 0xf
// 00a5bd77  8bc8                 mov ecx, eax
// 00a5bd79  e86212f6ff           call 0x9bcfe0
// 00a5bd7e  3bd8                 cmp ebx, eax
// 00a5bd80  756c                 jne 0xa5bdee
// 00a5bd82  85f6                 test esi, esi
// 00a5bd84  7504                 jne 0xa5bd8a
// 00a5bd86  33db                 xor ebx, ebx
// 00a5bd88  eb03                 jmp 0xa5bd8d
// 00a5bd8a  8b5e04               mov ebx, dword ptr [esi + 4]
// 00a5bd8d  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a5bd90  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a5bd93  51                   push ecx
// 00a5bd94  ff15503ab200         call dword ptr [0xb23a50]
// 00a5bd9a  50                   push eax
// 00a5bd9b  e8c668f2ff           call 0x982666
// 00a5bda0  8b5760               mov edx, dword ptr [edi + 0x60]
// 00a5bda3  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 00a5bda6  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a5bda9  51                   push ecx
// 00a5bdaa  53                   push ebx
// 00a5bdab  6838010000           push 0x138
// 00a5bdb0  50                   push eax
// 00a5bdb1  ff15043cb200         call dword ptr [0xb23c04]
// 00a5bdb7  89442418             mov dword ptr [esp + 0x18], eax
// 00a5bdbb  85c0                 test eax, eax
// 00a5bdbd  742f                 je 0xa5bdee
// 00a5bdbf  85f6                 test esi, esi
// 00a5bdc1  7515                 jne 0xa5bdd8
// 00a5bdc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5bdc7  51                   push ecx
// 00a5bdc8  8d542438             lea edx, [esp + 0x38]
// 00a5bdcc  33c0                 xor eax, eax
// 00a5bdce  52                   push edx
// 00a5bdcf  50                   push eax
// 00a5bdd0  ff157c3cb200         call dword ptr [0xb23c7c]
// 00a5bdd6  eb2e                 jmp 0xa5be06
// 00a5bdd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5bddc  8b4604               mov eax, dword ptr [esi + 4]
// 00a5bddf  51                   push ecx
// 00a5bde0  8d542438             lea edx, [esp + 0x38]
// 00a5bde4  52                   push edx
// 00a5bde5  50                   push eax
// 00a5bde6  ff157c3cb200         call dword ptr [0xb23c7c]
// 00a5bdec  eb18                 jmp 0xa5be06
// 00a5bdee  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a5bdf1  83f8ff               cmp eax, -1
// 00a5bdf4  7503                 jne 0xa5bdf9
// 00a5bdf6  8b4734               mov eax, dword ptr [edi + 0x34]
// 00a5bdf9  50                   push eax
// 00a5bdfa  8d442438             lea eax, [esp + 0x38]
// 00a5bdfe  50                   push eax
// 00a5bdff  8bce                 mov ecx, esi
// 00a5be01  e8a670f2ff           call 0x982eac
// 00a5be06  6a01                 push 1
// 00a5be08  8bce                 mov ecx, esi
// 00a5be0a  e899d70300           call 0xa995a8
// 00a5be0f  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a5be12  8b4160               mov eax, dword ptr [ecx + 0x60]
// 00a5be15  85c0                 test eax, eax
// 00a5be17  0f8468020000         je 0xa5c085
// 00a5be1d  e87e5af8ff           call 0x9e18a0
// 00a5be22  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5be26  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a5be2a  8be8                 mov ebp, eax
// 00a5be2c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a5be30  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a5be34  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a5be38  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a5be3c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a5be3f  89542428             mov dword ptr [esp + 0x28], edx
// 00a5be43  89442430             mov dword ptr [esp + 0x30], eax
// 00a5be47  2b4154               sub eax, dword ptr [ecx + 0x54]
// 00a5be4a  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a5be4f  89442428             mov dword ptr [esp + 0x28], eax
// 00a5be53  7406                 je 0xa5be5b
// 00a5be55  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 00a5be59  7522                 jne 0xa5be7d
// 00a5be5b  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5be5e  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a5be61  83c034               add eax, 0x34
// 00a5be64  83f9ff               cmp ecx, -1
// 00a5be67  7505                 jne 0xa5be6e
// 00a5be69  8b4004               mov eax, dword ptr [eax + 4]
// 00a5be6c  eb02                 jmp 0xa5be70
// 00a5be6e  8bc1                 mov eax, ecx
// 00a5be70  50                   push eax
// 00a5be71  8d542428             lea edx, [esp + 0x28]
// 00a5be75  52                   push edx
// 00a5be76  8bce                 mov ecx, esi
// 00a5be78  e82f70f2ff           call 0x982eac
// 00a5be7d  8b07                 mov eax, dword ptr [edi]
// 00a5be7f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a5be82  6a00                 push 0
// 00a5be84  8d4c2428             lea ecx, [esp + 0x28]
// 00a5be88  51                   push ecx
// 00a5be89  56                   push esi
// 00a5be8a  8bcf                 mov ecx, edi
// 00a5be8c  ffd2                 call edx
// 00a5be8e  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5be91  83c028               add eax, 0x28
// 00a5be94  50                   push eax
// 00a5be95  56                   push esi
// 00a5be96  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00a5be9d  e88e96f7ff           call 0x9d5530
// 00a5bea2  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 00a5bead  85ed                 test ebp, ebp
// 00a5beaf  0f84aa010000         je 0xa5c05f
// 00a5beb5  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5beb8  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a5bebb  83c040               add eax, 0x40
// 00a5bebe  83f9ff               cmp ecx, -1
// 00a5bec1  7505                 jne 0xa5bec8
// 00a5bec3  8b4004               mov eax, dword ptr [eax + 4]
// 00a5bec6  eb02                 jmp 0xa5beca
// 00a5bec8  8bc1                 mov eax, ecx
// 00a5beca  8b16                 mov edx, dword ptr [esi]
// 00a5becc  50                   push eax
// 00a5becd  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5bed0  8bce                 mov ecx, esi
// 00a5bed2  ffd0                 call eax
// 00a5bed4  6a01                 push 1
// 00a5bed6  8bce                 mov ecx, esi
// 00a5bed8  e8cbd60300           call 0xa995a8
// 00a5bedd  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5bee1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5bee5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5bee9  6afd                 push -3
// 00a5beeb  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a5beef  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a5bef3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5bef7  6afa                 push -6
// 00a5bef9  8d54244c             lea edx, [esp + 0x4c]
// 00a5befd  52                   push edx
// 00a5befe  89442458             mov dword ptr [esp + 0x58], eax
// 00a5bf02  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a5bf06  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a5bf0c  8d442420             lea eax, [esp + 0x20]
// 00a5bf10  50                   push eax
// 00a5bf11  8bcd                 mov ecx, ebp
// 00a5bf13  e8f8869fff           call 0x454610
// 00a5bf18  8bd8                 mov ebx, eax
// 00a5bf1a  8b0e                 mov ecx, dword ptr [esi]
// 00a5bf1c  6820080000           push 0x820
// 00a5bf21  8d542448             lea edx, [esp + 0x48]
// 00a5bf25  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a5bf29  52                   push edx
// 00a5bf2a  8bcb                 mov ecx, ebx
// 00a5bf2c  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00a5bf34  ff155846b200         call dword ptr [0xb24658]
// 00a5bf3a  50                   push eax
// 00a5bf3b  8bcb                 mov ecx, ebx
// 00a5bf3d  ff159847b200         call dword ptr [0xb24798]
// 00a5bf43  50                   push eax
// 00a5bf44  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5bf48  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a5bf4b  8bce                 mov ecx, esi
// 00a5bf4d  ffd2                 call edx
// 00a5bf4f  8d4c2420             lea ecx, [esp + 0x20]
// 00a5bf53  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 00a5bf5b  ff15d047b200         call dword ptr [0xb247d0]
// 00a5bf61  8d442414             lea eax, [esp + 0x14]
// 00a5bf65  50                   push eax
// 00a5bf66  8bcd                 mov ecx, ebp
// 00a5bf68  e88323f9ff           call 0x9ee2f0
// 00a5bf6d  8d4c2414             lea ecx, [esp + 0x14]
// 00a5bf71  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00a5bf79  ff156046b200         call dword ptr [0xb24660]
// 00a5bf7f  84c0                 test al, al
// 00a5bf81  0f85ce000000         jne 0xa5c055
// 00a5bf87  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00a5bf8a  83c120               add ecx, 0x20
// 00a5bf8d  51                   push ecx
// 00a5bf8e  56                   push esi
// 00a5bf8f  8d4c247c             lea ecx, [esp + 0x7c]
// 00a5bf93  e89895f7ff           call 0x9d5530
// 00a5bf98  8d4c2464             lea ecx, [esp + 0x64]
// 00a5bf9c  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 00a5bfa4  e85791f7ff           call 0x9d5100
// 00a5bfa9  8d542420             lea edx, [esp + 0x20]
// 00a5bfad  52                   push edx
// 00a5bfae  8bcd                 mov ecx, ebp
// 00a5bfb0  e85b869fff           call 0x454610
// 00a5bfb5  68200c0000           push 0xc20
// 00a5bfba  8d4c2468             lea ecx, [esp + 0x68]
// 00a5bfbe  51                   push ecx
// 00a5bfbf  50                   push eax
// 00a5bfc0  8bce                 mov ecx, esi
// 00a5bfc2  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 00a5bfca  e801c4f2ff           call 0x9883d0
// 00a5bfcf  8d4c2420             lea ecx, [esp + 0x20]
// 00a5bfd3  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 00a5bfdb  ff15d047b200         call dword ptr [0xb247d0]
// 00a5bfe1  8b442470             mov eax, dword ptr [esp + 0x70]
// 00a5bfe5  2b442468             sub eax, dword ptr [esp + 0x68]
// 00a5bfe9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5bfed  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5bff1  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00a5bff5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a5bff9  83c006               add eax, 6
// 00a5bffc  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a5c000  03d0                 add edx, eax
// 00a5c002  83c106               add ecx, 6
// 00a5c005  89542458             mov dword ptr [esp + 0x58], edx
// 00a5c009  83eb03               sub ebx, 3
// 00a5c00c  6810080000           push 0x810
// 00a5c011  8d542458             lea edx, [esp + 0x58]
// 00a5c015  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a5c019  83ed06               sub ebp, 6
// 00a5c01c  895c2464             mov dword ptr [esp + 0x64], ebx
// 00a5c020  8b1e                 mov ebx, dword ptr [esi]
// 00a5c022  52                   push edx
// 00a5c023  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5c027  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a5c02b  ff155846b200         call dword ptr [0xb24658]
// 00a5c031  50                   push eax
// 00a5c032  8d4c2420             lea ecx, [esp + 0x20]
// 00a5c036  ff159847b200         call dword ptr [0xb24798]
// 00a5c03c  50                   push eax
// 00a5c03d  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00a5c040  8bce                 mov ecx, esi
// 00a5c042  ffd0                 call eax
// 00a5c044  8d4c2474             lea ecx, [esp + 0x74]
// 00a5c048  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00a5c050  e85b95f7ff           call 0x9d55b0
// 00a5c055  8d4c2414             lea ecx, [esp + 0x14]
// 00a5c059  ff15d047b200         call dword ptr [0xb247d0]
// 00a5c05f  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a5c062  bafdffffff           mov edx, 0xfffffffd
// 00a5c067  2b5154               sub edx, dword ptr [ecx + 0x54]
// 00a5c06a  8d8c2484000000       lea ecx, [esp + 0x84]
// 00a5c071  01542440             add dword ptr [esp + 0x40], edx
// 00a5c075  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00a5c080  e82b95f7ff           call 0x9d55b0
// 00a5c085  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a5c088  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 00a5c08e  83782800             cmp dword ptr [eax + 0x28], 0
// 00a5c092  0f8495000000         je 0xa5c12d
// 00a5c098  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a5c09c  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a5c0a0  89442448             mov dword ptr [esp + 0x48], eax
// 00a5c0a4  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a5c0a8  89542444             mov dword ptr [esp + 0x44], edx
// 00a5c0ac  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5c0b0  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a5c0b4  89442450             mov dword ptr [esp + 0x50], eax
// 00a5c0b8  2b4158               sub eax, dword ptr [ecx + 0x58]
// 00a5c0bb  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a5c0c0  89442448             mov dword ptr [esp + 0x48], eax
// 00a5c0c4  7406                 je 0xa5c0cc
// 00a5c0c6  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 00a5c0ca  7522                 jne 0xa5c0ee
// 00a5c0cc  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a5c0cf  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a5c0d2  83c034               add eax, 0x34
// 00a5c0d5  83f9ff               cmp ecx, -1
// 00a5c0d8  7505                 jne 0xa5c0df
// 00a5c0da  8b4004               mov eax, dword ptr [eax + 4]
// 00a5c0dd  eb02                 jmp 0xa5c0e1
// 00a5c0df  8bc1                 mov eax, ecx
// 00a5c0e1  50                   push eax
// 00a5c0e2  8d442448             lea eax, [esp + 0x48]
// 00a5c0e6  50                   push eax
// 00a5c0e7  8bce                 mov ecx, esi
// 00a5c0e9  e8be6df2ff           call 0x982eac
// 00a5c0ee  8b17                 mov edx, dword ptr [edi]
// 00a5c0f0  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a5c0f3  6a00                 push 0
// 00a5c0f5  8d442448             lea eax, [esp + 0x48]
// 00a5c0f9  50                   push eax
// 00a5c0fa  56                   push esi
// 00a5c0fb  8bcf                 mov ecx, edi
// 00a5c0fd  ffd2                 call edx
// 00a5c0ff  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a5c103  33c9                 xor ecx, ecx
// 00a5c105  51                   push ecx
// 00a5c106  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5c10a  33c0                 xor eax, eax
// 00a5c10c  50                   push eax
// 00a5c10d  83ec10               sub esp, 0x10
// 00a5c110  8bc4                 mov eax, esp
// 00a5c112  8908                 mov dword ptr [eax], ecx
// 00a5c114  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a5c118  895004               mov dword ptr [eax + 4], edx
// 00a5c11b  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a5c11f  894808               mov dword ptr [eax + 8], ecx
// 00a5c122  56                   push esi
// 00a5c123  8bcf                 mov ecx, edi
// 00a5c125  89500c               mov dword ptr [eax + 0xc], edx
// 00a5c128  e8d3deffff           call 0xa5a000
// 00a5c12d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a5c134  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5c13b  59                   pop ecx
// 00a5c13c  5f                   pop edi
// 00a5c13d  5e                   pop esi
// 00a5c13e  5d                   pop ebp
// 00a5c13f  5b                   pop ebx
// 00a5c140  81c48c000000         add esp, 0x8c
// 00a5c146  c20400               ret 4
// copied from an identical function in another client (function ?FillPropertyGrid@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp