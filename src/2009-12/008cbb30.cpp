// roc 2009-12 008cbb30  unit: CXTPPropertyGridPaintManager  size: 1081 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cbb30
//
// 008cbb30  6aff                 push -1
// 008cbb32  68de4b9600           push 0x964bde
// 008cbb37  64a100000000         mov eax, dword ptr fs:[0]
// 008cbb3d  50                   push eax
// 008cbb3e  81ec80000000         sub esp, 0x80
// 008cbb44  53                   push ebx
// 008cbb45  55                   push ebp
// 008cbb46  56                   push esi
// 008cbb47  57                   push edi
// 008cbb48  a10052b600           mov eax, dword ptr [0xb65200]
// 008cbb4d  33c4                 xor eax, esp
// 008cbb4f  50                   push eax
// 008cbb50  8d842494000000       lea eax, [esp + 0x94]
// 008cbb57  64a300000000         mov dword ptr fs:[0], eax
// 008cbb5d  8bf9                 mov edi, ecx
// 008cbb5f  8b4760               mov eax, dword ptr [edi + 0x60]
// 008cbb62  50                   push eax
// 008cbb63  8d4c2438             lea ecx, [esp + 0x38]
// 008cbb67  e864f7f7ff           call 0x84b2d0
// 008cbb6c  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008cbb70  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008cbb77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008cbb7f  7521                 jne 0x8cbba2
// 008cbb81  8b4738               mov eax, dword ptr [edi + 0x38]
// 008cbb84  83f8ff               cmp eax, -1
// 008cbb87  7505                 jne 0x8cbb8e
// 008cbb89  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 008cbb8c  eb02                 jmp 0x8cbb90
// 008cbb8e  8bd8                 mov ebx, eax
// 008cbb90  e83b3ef6ff           call 0x82f9d0
// 008cbb95  6a0f                 push 0xf
// 008cbb97  8bc8                 mov ecx, eax
// 008cbb99  e86235f6ff           call 0x82f100
// 008cbb9e  3bd8                 cmp ebx, eax
// 008cbba0  756c                 jne 0x8cbc0e
// 008cbba2  85f6                 test esi, esi
// 008cbba4  7504                 jne 0x8cbbaa
// 008cbba6  33db                 xor ebx, ebx
// 008cbba8  eb03                 jmp 0x8cbbad
// 008cbbaa  8b5e04               mov ebx, dword ptr [esi + 4]
// 008cbbad  8b4760               mov eax, dword ptr [edi + 0x60]
// 008cbbb0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008cbbb3  51                   push ecx
// 008cbbb4  ff15bccb9800         call dword ptr [0x98cbbc]
// 008cbbba  50                   push eax
// 008cbbbb  e86a7ff2ff           call 0x7f3b2a
// 008cbbc0  8b5760               mov edx, dword ptr [edi + 0x60]
// 008cbbc3  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 008cbbc6  8b4020               mov eax, dword ptr [eax + 0x20]
// 008cbbc9  51                   push ecx
// 008cbbca  53                   push ebx
// 008cbbcb  6838010000           push 0x138
// 008cbbd0  50                   push eax
// 008cbbd1  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008cbbd7  89442418             mov dword ptr [esp + 0x18], eax
// 008cbbdb  85c0                 test eax, eax
// 008cbbdd  742f                 je 0x8cbc0e
// 008cbbdf  85f6                 test esi, esi
// 008cbbe1  7515                 jne 0x8cbbf8
// 008cbbe3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cbbe7  51                   push ecx
// 008cbbe8  8d542438             lea edx, [esp + 0x38]
// 008cbbec  33c0                 xor eax, eax
// 008cbbee  52                   push edx
// 008cbbef  50                   push eax
// 008cbbf0  ff1560cb9800         call dword ptr [0x98cb60]
// 008cbbf6  eb2e                 jmp 0x8cbc26
// 008cbbf8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cbbfc  8b4604               mov eax, dword ptr [esi + 4]
// 008cbbff  51                   push ecx
// 008cbc00  8d542438             lea edx, [esp + 0x38]
// 008cbc04  52                   push edx
// 008cbc05  50                   push eax
// 008cbc06  ff1560cb9800         call dword ptr [0x98cb60]
// 008cbc0c  eb18                 jmp 0x8cbc26
// 008cbc0e  8b4738               mov eax, dword ptr [edi + 0x38]
// 008cbc11  83f8ff               cmp eax, -1
// 008cbc14  7503                 jne 0x8cbc19
// 008cbc16  8b4734               mov eax, dword ptr [edi + 0x34]
// 008cbc19  50                   push eax
// 008cbc1a  8d442438             lea eax, [esp + 0x38]
// 008cbc1e  50                   push eax
// 008cbc1f  8bce                 mov ecx, esi
// 008cbc21  e8d889f2ff           call 0x7f45fe
// 008cbc26  6a01                 push 1
// 008cbc28  8bce                 mov ecx, esi
// 008cbc2a  e861a80500           call 0x926490
// 008cbc2f  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008cbc32  8b4160               mov eax, dword ptr [ecx + 0x60]
// 008cbc35  85c0                 test eax, eax
// 008cbc37  0f8468020000         je 0x8cbea5
// 008cbc3d  e8de1ff8ff           call 0x84dc20
// 008cbc42  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008cbc46  8b542438             mov edx, dword ptr [esp + 0x38]
// 008cbc4a  8be8                 mov ebp, eax
// 008cbc4c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008cbc50  8944242c             mov dword ptr [esp + 0x2c], eax
// 008cbc54  8b442440             mov eax, dword ptr [esp + 0x40]
// 008cbc58  894c2424             mov dword ptr [esp + 0x24], ecx
// 008cbc5c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008cbc5f  89542428             mov dword ptr [esp + 0x28], edx
// 008cbc63  89442430             mov dword ptr [esp + 0x30], eax
// 008cbc67  2b4154               sub eax, dword ptr [ecx + 0x54]
// 008cbc6a  837c241800           cmp dword ptr [esp + 0x18], 0
// 008cbc6f  89442428             mov dword ptr [esp + 0x28], eax
// 008cbc73  7406                 je 0x8cbc7b
// 008cbc75  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008cbc79  7522                 jne 0x8cbc9d
// 008cbc7b  8b4774               mov eax, dword ptr [edi + 0x74]
// 008cbc7e  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008cbc81  83c034               add eax, 0x34
// 008cbc84  83f9ff               cmp ecx, -1
// 008cbc87  7505                 jne 0x8cbc8e
// 008cbc89  8b4004               mov eax, dword ptr [eax + 4]
// 008cbc8c  eb02                 jmp 0x8cbc90
// 008cbc8e  8bc1                 mov eax, ecx
// 008cbc90  50                   push eax
// 008cbc91  8d542428             lea edx, [esp + 0x28]
// 008cbc95  52                   push edx
// 008cbc96  8bce                 mov ecx, esi
// 008cbc98  e86189f2ff           call 0x7f45fe
// 008cbc9d  8b07                 mov eax, dword ptr [edi]
// 008cbc9f  8b5018               mov edx, dword ptr [eax + 0x18]
// 008cbca2  6a00                 push 0
// 008cbca4  8d4c2428             lea ecx, [esp + 0x28]
// 008cbca8  51                   push ecx
// 008cbca9  56                   push esi
// 008cbcaa  8bcf                 mov ecx, edi
// 008cbcac  ffd2                 call edx
// 008cbcae  8b4774               mov eax, dword ptr [edi + 0x74]
// 008cbcb1  83c028               add eax, 0x28
// 008cbcb4  50                   push eax
// 008cbcb5  56                   push esi
// 008cbcb6  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008cbcbd  e89ef9f7ff           call 0x84b660
// 008cbcc2  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 008cbccd  85ed                 test ebp, ebp
// 008cbccf  0f84aa010000         je 0x8cbe7f
// 008cbcd5  8b4774               mov eax, dword ptr [edi + 0x74]
// 008cbcd8  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008cbcdb  83c040               add eax, 0x40
// 008cbcde  83f9ff               cmp ecx, -1
// 008cbce1  7505                 jne 0x8cbce8
// 008cbce3  8b4004               mov eax, dword ptr [eax + 4]
// 008cbce6  eb02                 jmp 0x8cbcea
// 008cbce8  8bc1                 mov eax, ecx
// 008cbcea  8b16                 mov edx, dword ptr [esi]
// 008cbcec  50                   push eax
// 008cbced  8b4238               mov eax, dword ptr [edx + 0x38]
// 008cbcf0  8bce                 mov ecx, esi
// 008cbcf2  ffd0                 call eax
// 008cbcf4  6a01                 push 1
// 008cbcf6  8bce                 mov ecx, esi
// 008cbcf8  e893a70500           call 0x926490
// 008cbcfd  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cbd01  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cbd05  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008cbd09  6afd                 push -3
// 008cbd0b  8954244c             mov dword ptr [esp + 0x4c], edx
// 008cbd0f  894c2448             mov dword ptr [esp + 0x48], ecx
// 008cbd13  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008cbd17  6afa                 push -6
// 008cbd19  8d54244c             lea edx, [esp + 0x4c]
// 008cbd1d  52                   push edx
// 008cbd1e  89442458             mov dword ptr [esp + 0x58], eax
// 008cbd22  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008cbd26  ff1558ca9800         call dword ptr [0x98ca58]
// 008cbd2c  8d442420             lea eax, [esp + 0x20]
// 008cbd30  50                   push eax
// 008cbd31  8bcd                 mov ecx, ebp
// 008cbd33  e8b868b6ff           call 0x4325f0
// 008cbd38  8bd8                 mov ebx, eax
// 008cbd3a  8b0e                 mov ecx, dword ptr [esi]
// 008cbd3c  6820080000           push 0x820
// 008cbd41  8d542448             lea edx, [esp + 0x48]
// 008cbd45  894c2420             mov dword ptr [esp + 0x20], ecx
// 008cbd49  52                   push edx
// 008cbd4a  8bcb                 mov ecx, ebx
// 008cbd4c  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 008cbd54  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008cbd5a  50                   push eax
// 008cbd5b  8bcb                 mov ecx, ebx
// 008cbd5d  ff1580de9800         call dword ptr [0x98de80]
// 008cbd63  50                   push eax
// 008cbd64  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008cbd68  8b5070               mov edx, dword ptr [eax + 0x70]
// 008cbd6b  8bce                 mov ecx, esi
// 008cbd6d  ffd2                 call edx
// 008cbd6f  8d4c2420             lea ecx, [esp + 0x20]
// 008cbd73  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008cbd7b  ff15c0de9800         call dword ptr [0x98dec0]
// 008cbd81  8d442414             lea eax, [esp + 0x14]
// 008cbd85  50                   push eax
// 008cbd86  8bcd                 mov ecx, ebp
// 008cbd88  e8c387f9ff           call 0x864550
// 008cbd8d  8d4c2414             lea ecx, [esp + 0x14]
// 008cbd91  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008cbd99  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008cbd9f  84c0                 test al, al
// 008cbda1  0f85ce000000         jne 0x8cbe75
// 008cbda7  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 008cbdaa  83c120               add ecx, 0x20
// 008cbdad  51                   push ecx
// 008cbdae  56                   push esi
// 008cbdaf  8d4c247c             lea ecx, [esp + 0x7c]
// 008cbdb3  e8a8f8f7ff           call 0x84b660
// 008cbdb8  8d4c2464             lea ecx, [esp + 0x64]
// 008cbdbc  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 008cbdc4  e867f4f7ff           call 0x84b230
// 008cbdc9  8d542420             lea edx, [esp + 0x20]
// 008cbdcd  52                   push edx
// 008cbdce  8bcd                 mov ecx, ebp
// 008cbdd0  e81b68b6ff           call 0x4325f0
// 008cbdd5  68200c0000           push 0xc20
// 008cbdda  8d4c2468             lea ecx, [esp + 0x68]
// 008cbdde  51                   push ecx
// 008cbddf  50                   push eax
// 008cbde0  8bce                 mov ecx, esi
// 008cbde2  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 008cbdea  e831ddf2ff           call 0x7f9b20
// 008cbdef  8d4c2420             lea ecx, [esp + 0x20]
// 008cbdf3  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 008cbdfb  ff15c0de9800         call dword ptr [0x98dec0]
// 008cbe01  8b442470             mov eax, dword ptr [esp + 0x70]
// 008cbe05  2b442468             sub eax, dword ptr [esp + 0x68]
// 008cbe09  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cbe0d  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cbe11  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008cbe15  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008cbe19  83c006               add eax, 6
// 008cbe1c  894c2454             mov dword ptr [esp + 0x54], ecx
// 008cbe20  03d0                 add edx, eax
// 008cbe22  83c106               add ecx, 6
// 008cbe25  89542458             mov dword ptr [esp + 0x58], edx
// 008cbe29  83eb03               sub ebx, 3
// 008cbe2c  6810080000           push 0x810
// 008cbe31  8d542458             lea edx, [esp + 0x58]
// 008cbe35  894c2458             mov dword ptr [esp + 0x58], ecx
// 008cbe39  83ed06               sub ebp, 6
// 008cbe3c  895c2464             mov dword ptr [esp + 0x64], ebx
// 008cbe40  8b1e                 mov ebx, dword ptr [esi]
// 008cbe42  52                   push edx
// 008cbe43  8d4c241c             lea ecx, [esp + 0x1c]
// 008cbe47  896c2464             mov dword ptr [esp + 0x64], ebp
// 008cbe4b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008cbe51  50                   push eax
// 008cbe52  8d4c2420             lea ecx, [esp + 0x20]
// 008cbe56  ff1580de9800         call dword ptr [0x98de80]
// 008cbe5c  50                   push eax
// 008cbe5d  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008cbe60  8bce                 mov ecx, esi
// 008cbe62  ffd0                 call eax
// 008cbe64  8d4c2474             lea ecx, [esp + 0x74]
// 008cbe68  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008cbe70  e86bf8f7ff           call 0x84b6e0
// 008cbe75  8d4c2414             lea ecx, [esp + 0x14]
// 008cbe79  ff15c0de9800         call dword ptr [0x98dec0]
// 008cbe7f  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008cbe82  bafdffffff           mov edx, 0xfffffffd
// 008cbe87  2b5154               sub edx, dword ptr [ecx + 0x54]
// 008cbe8a  8d8c2484000000       lea ecx, [esp + 0x84]
// 008cbe91  01542440             add dword ptr [esp + 0x40], edx
// 008cbe95  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008cbea0  e83bf8f7ff           call 0x84b6e0
// 008cbea5  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008cbea8  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 008cbeae  83782800             cmp dword ptr [eax + 0x28], 0
// 008cbeb2  0f8495000000         je 0x8cbf4d
// 008cbeb8  8b542434             mov edx, dword ptr [esp + 0x34]
// 008cbebc  8b442438             mov eax, dword ptr [esp + 0x38]
// 008cbec0  89442448             mov dword ptr [esp + 0x48], eax
// 008cbec4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008cbec8  89542444             mov dword ptr [esp + 0x44], edx
// 008cbecc  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008cbed0  8954244c             mov dword ptr [esp + 0x4c], edx
// 008cbed4  89442450             mov dword ptr [esp + 0x50], eax
// 008cbed8  2b4158               sub eax, dword ptr [ecx + 0x58]
// 008cbedb  837c241800           cmp dword ptr [esp + 0x18], 0
// 008cbee0  89442448             mov dword ptr [esp + 0x48], eax
// 008cbee4  7406                 je 0x8cbeec
// 008cbee6  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008cbeea  7522                 jne 0x8cbf0e
// 008cbeec  8b4774               mov eax, dword ptr [edi + 0x74]
// 008cbeef  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008cbef2  83c034               add eax, 0x34
// 008cbef5  83f9ff               cmp ecx, -1
// 008cbef8  7505                 jne 0x8cbeff
// 008cbefa  8b4004               mov eax, dword ptr [eax + 4]
// 008cbefd  eb02                 jmp 0x8cbf01
// 008cbeff  8bc1                 mov eax, ecx
// 008cbf01  50                   push eax
// 008cbf02  8d442448             lea eax, [esp + 0x48]
// 008cbf06  50                   push eax
// 008cbf07  8bce                 mov ecx, esi
// 008cbf09  e8f086f2ff           call 0x7f45fe
// 008cbf0e  8b17                 mov edx, dword ptr [edi]
// 008cbf10  8b5218               mov edx, dword ptr [edx + 0x18]
// 008cbf13  6a00                 push 0
// 008cbf15  8d442448             lea eax, [esp + 0x48]
// 008cbf19  50                   push eax
// 008cbf1a  56                   push esi
// 008cbf1b  8bcf                 mov ecx, edi
// 008cbf1d  ffd2                 call edx
// 008cbf1f  8b542448             mov edx, dword ptr [esp + 0x48]
// 008cbf23  33c9                 xor ecx, ecx
// 008cbf25  51                   push ecx
// 008cbf26  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008cbf2a  33c0                 xor eax, eax
// 008cbf2c  50                   push eax
// 008cbf2d  83ec10               sub esp, 0x10
// 008cbf30  8bc4                 mov eax, esp
// 008cbf32  8908                 mov dword ptr [eax], ecx
// 008cbf34  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008cbf38  895004               mov dword ptr [eax + 4], edx
// 008cbf3b  8b542468             mov edx, dword ptr [esp + 0x68]
// 008cbf3f  894808               mov dword ptr [eax + 8], ecx
// 008cbf42  56                   push esi
// 008cbf43  8bcf                 mov ecx, edi
// 008cbf45  89500c               mov dword ptr [eax + 0xc], edx
// 008cbf48  e8f3deffff           call 0x8c9e40
// 008cbf4d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008cbf54  64890d00000000       mov dword ptr fs:[0], ecx
// 008cbf5b  59                   pop ecx
// 008cbf5c  5f                   pop edi
// 008cbf5d  5e                   pop esi
// 008cbf5e  5d                   pop ebp
// 008cbf5f  5b                   pop ebx
// 008cbf60  81c48c000000         add esp, 0x8c
// 008cbf66  c20400               ret 4
// copied from an identical function in another client (function ?FillPropertyGrid@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp