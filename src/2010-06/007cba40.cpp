// roc 2010-06 007cba40  unit: MyXTPCommandBars  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cba40
//
// 007cba40  51                   push ecx
// 007cba41  53                   push ebx
// 007cba42  55                   push ebp
// 007cba43  56                   push esi
// 007cba44  8b742414             mov esi, dword ptr [esp + 0x14]
// 007cba48  57                   push edi
// 007cba49  33db                 xor ebx, ebx
// 007cba4b  8bf9                 mov edi, ecx
// 007cba4d  895e3c               mov dword ptr [esi + 0x3c], ebx
// 007cba50  895e40               mov dword ptr [esi + 0x40], ebx
// 007cba53  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 007cba59  e862cdffff           call 0x7c87c0
// 007cba5e  8bc8                 mov ecx, eax
// 007cba60  e81b17feff           call 0x7ad180
// 007cba65  89442410             mov dword ptr [esp + 0x10], eax
// 007cba69  6a20                 push 0x20
// 007cba6b  8d44241c             lea eax, [esp + 0x1c]
// 007cba6f  50                   push eax
// 007cba70  68dc83a500           push 0xa583dc
// 007cba75  56                   push esi
// 007cba76  c744242820000000     mov dword ptr [esp + 0x28], 0x20
// 007cba7e  e8bd8f0300           call 0x804a40
// 007cba83  6a01                 push 1
// 007cba85  8d4f20               lea ecx, [edi + 0x20]
// 007cba88  51                   push ecx
// 007cba89  68c883a500           push 0xa583c8
// 007cba8e  56                   push esi
// 007cba8f  e83c900300           call 0x804ad0
// 007cba94  6a01                 push 1
// 007cba96  8d5724               lea edx, [edi + 0x24]
// 007cba99  52                   push edx
// 007cba9a  68b483a500           push 0xa583b4
// 007cba9f  56                   push esi
// 007cbaa0  e82b900300           call 0x804ad0
// 007cbaa5  6a01                 push 1
// 007cbaa7  8d4728               lea eax, [edi + 0x28]
// 007cbaaa  50                   push eax
// 007cbaab  68a083a500           push 0xa583a0
// 007cbab0  56                   push esi
// 007cbab1  e81a900300           call 0x804ad0
// 007cbab6  83c440               add esp, 0x40
// 007cbab9  53                   push ebx
// 007cbaba  8d4f2c               lea ecx, [edi + 0x2c]
// 007cbabd  51                   push ecx
// 007cbabe  688c83a500           push 0xa5838c
// 007cbac3  56                   push esi
// 007cbac4  e807900300           call 0x804ad0
// 007cbac9  53                   push ebx
// 007cbaca  8d5730               lea edx, [edi + 0x30]
// 007cbacd  52                   push edx
// 007cbace  688083a500           push 0xa58380
// 007cbad3  56                   push esi
// 007cbad4  e8f78f0300           call 0x804ad0
// 007cbad9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007cbadd  83c420               add esp, 0x20
// 007cbae0  837c241807           cmp dword ptr [esp + 0x18], 7
// 007cbae5  7639                 jbe 0x7cbb20
// 007cbae7  395e28               cmp dword ptr [esi + 0x28], ebx
// 007cbaea  7518                 jne 0x7cbb04
// 007cbaec  8b06                 mov eax, dword ptr [esi]
// 007cbaee  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 007cbaf4  8bce                 mov ecx, esi
// 007cbaf6  ffd2                 call edx
// 007cbaf8  85c0                 test eax, eax
// 007cbafa  7408                 je 0x7cbb04
// 007cbafc  399fb4000000         cmp dword ptr [edi + 0xb4], ebx
// 007cbb02  7415                 je 0x7cbb19
// 007cbb04  8d87a8000000         lea eax, [edi + 0xa8]
// 007cbb0a  50                   push eax
// 007cbb0b  687083a500           push 0xa58370
// 007cbb10  56                   push esi
// 007cbb11  e86afdffff           call 0x7cb880
// 007cbb16  83c40c               add esp, 0xc
// 007cbb19  837c241807           cmp dword ptr [esp + 0x18], 7
// 007cbb1e  7704                 ja 0x7cbb24
// 007cbb20  3beb                 cmp ebp, ebx
// 007cbb22  741b                 je 0x7cbb3f
// 007cbb24  53                   push ebx
// 007cbb25  8d4f54               lea ecx, [edi + 0x54]
// 007cbb28  51                   push ecx
// 007cbb29  686483a500           push 0xa58364
// 007cbb2e  56                   push esi
// 007cbb2f  e80c8f0300           call 0x804a40
// 007cbb34  83c410               add esp, 0x10
// 007cbb37  3beb                 cmp ebp, ebx
// 007cbb39  0f8583010000         jne 0x7cbcc2
// 007cbb3f  6a01                 push 1
// 007cbb41  8d5f34               lea ebx, [edi + 0x34]
// 007cbb44  53                   push ebx
// 007cbb45  685083a500           push 0xa58350
// 007cbb4a  56                   push esi
// 007cbb4b  e8808f0300           call 0x804ad0
// 007cbb50  6a01                 push 1
// 007cbb52  8d6f38               lea ebp, [edi + 0x38]
// 007cbb55  55                   push ebp
// 007cbb56  683883a500           push 0xa58338
// 007cbb5b  56                   push esi
// 007cbb5c  e86f8f0300           call 0x804ad0
// 007cbb61  33c9                 xor ecx, ecx
// 007cbb63  51                   push ecx
// 007cbb64  33c0                 xor eax, eax
// 007cbb66  50                   push eax
// 007cbb67  8d5764               lea edx, [edi + 0x64]
// 007cbb6a  52                   push edx
// 007cbb6b  682c83a500           push 0xa5832c
// 007cbb70  56                   push esi
// 007cbb71  e84a900300           call 0x804bc0
// 007cbb76  33c9                 xor ecx, ecx
// 007cbb78  51                   push ecx
// 007cbb79  33c0                 xor eax, eax
// 007cbb7b  50                   push eax
// 007cbb7c  8d476c               lea eax, [edi + 0x6c]
// 007cbb7f  50                   push eax
// 007cbb80  681c83a500           push 0xa5831c
// 007cbb85  56                   push esi
// 007cbb86  e835900300           call 0x804bc0
// 007cbb8b  83c448               add esp, 0x48
// 007cbb8e  837e2800             cmp dword ptr [esi + 0x28], 0
// 007cbb92  7519                 jne 0x7cbbad
// 007cbb94  8b16                 mov edx, dword ptr [esi]
// 007cbb96  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 007cbb9c  8bce                 mov ecx, esi
// 007cbb9e  ffd0                 call eax
// 007cbba0  85c0                 test eax, eax
// 007cbba2  7409                 je 0x7cbbad
// 007cbba4  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 007cbbab  7415                 je 0x7cbbc2
// 007cbbad  8d8f8c000000         lea ecx, [edi + 0x8c]
// 007cbbb3  51                   push ecx
// 007cbbb4  680c83a500           push 0xa5830c
// 007cbbb9  56                   push esi
// 007cbbba  e8c1fcffff           call 0x7cb880
// 007cbbbf  83c40c               add esp, 0xc
// 007cbbc2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007cbbc6  6a00                 push 0
// 007cbbc8  83c208               add edx, 8
// 007cbbcb  52                   push edx
// 007cbbcc  68fc82a500           push 0xa582fc
// 007cbbd1  56                   push esi
// 007cbbd2  e8f98e0300           call 0x804ad0
// 007cbbd7  8b442420             mov eax, dword ptr [esp + 0x20]
// 007cbbdb  6a01                 push 1
// 007cbbdd  83c004               add eax, 4
// 007cbbe0  50                   push eax
// 007cbbe1  68e882a500           push 0xa582e8
// 007cbbe6  56                   push esi
// 007cbbe7  e8e48e0300           call 0x804ad0
// 007cbbec  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007cbbf0  6a01                 push 1
// 007cbbf2  51                   push ecx
// 007cbbf3  68d882a500           push 0xa582d8
// 007cbbf8  56                   push esi
// 007cbbf9  e8d28e0300           call 0x804ad0
// 007cbbfe  83c430               add esp, 0x30
// 007cbc01  837c241807           cmp dword ptr [esp + 0x18], 7
// 007cbc06  767b                 jbe 0x7cbc83
// 007cbc08  6a01                 push 1
// 007cbc0a  53                   push ebx
// 007cbc0b  685083a500           push 0xa58350
// 007cbc10  56                   push esi
// 007cbc11  e8ba8e0300           call 0x804ad0
// 007cbc16  6a01                 push 1
// 007cbc18  55                   push ebp
// 007cbc19  683883a500           push 0xa58338
// 007cbc1e  56                   push esi
// 007cbc1f  e8ac8e0300           call 0x804ad0
// 007cbc24  6a00                 push 0
// 007cbc26  8d573c               lea edx, [edi + 0x3c]
// 007cbc29  52                   push edx
// 007cbc2a  68c882a500           push 0xa582c8
// 007cbc2f  56                   push esi
// 007cbc30  e89b8e0300           call 0x804ad0
// 007cbc35  6a00                 push 0
// 007cbc37  8d4740               lea eax, [edi + 0x40]
// 007cbc3a  50                   push eax
// 007cbc3b  68b482a500           push 0xa582b4
// 007cbc40  56                   push esi
// 007cbc41  e88a8e0300           call 0x804ad0
// 007cbc46  83c440               add esp, 0x40
// 007cbc49  6a01                 push 1
// 007cbc4b  8d4f44               lea ecx, [edi + 0x44]
// 007cbc4e  51                   push ecx
// 007cbc4f  689c82a500           push 0xa5829c
// 007cbc54  56                   push esi
// 007cbc55  e8768e0300           call 0x804ad0
// 007cbc5a  6a01                 push 1
// 007cbc5c  8d5748               lea edx, [edi + 0x48]
// 007cbc5f  52                   push edx
// 007cbc60  688482a500           push 0xa58284
// 007cbc65  56                   push esi
// 007cbc66  e8658e0300           call 0x804ad0
// 007cbc6b  33c9                 xor ecx, ecx
// 007cbc6d  51                   push ecx
// 007cbc6e  33c0                 xor eax, eax
// 007cbc70  50                   push eax
// 007cbc71  8d4774               lea eax, [edi + 0x74]
// 007cbc74  50                   push eax
// 007cbc75  687482a500           push 0xa58274
// 007cbc7a  56                   push esi
// 007cbc7b  e8408f0300           call 0x804bc0
// 007cbc80  83c434               add esp, 0x34
// 007cbc83  837c241808           cmp dword ptr [esp + 0x18], 8
// 007cbc88  7638                 jbe 0x7cbcc2
// 007cbc8a  6a01                 push 1
// 007cbc8c  8d4f5c               lea ecx, [edi + 0x5c]
// 007cbc8f  51                   push ecx
// 007cbc90  686482a500           push 0xa58264
// 007cbc95  56                   push esi
// 007cbc96  e8a58d0300           call 0x804a40
// 007cbc9b  6a00                 push 0
// 007cbc9d  8d9fcc000000         lea ebx, [edi + 0xcc]
// 007cbca3  53                   push ebx
// 007cbca4  685082a500           push 0xa58250
// 007cbca9  56                   push esi
// 007cbcaa  e8918d0300           call 0x804a40
// 007cbcaf  83c420               add esp, 0x20
// 007cbcb2  837e2800             cmp dword ptr [esi + 0x28], 0
// 007cbcb6  740a                 je 0x7cbcc2
// 007cbcb8  8b13                 mov edx, dword ptr [ebx]
// 007cbcba  52                   push edx
// 007cbcbb  8bcf                 mov ecx, edi
// 007cbcbd  e8bec3ffff           call 0x7c8080
// 007cbcc2  5f                   pop edi
// 007cbcc3  5e                   pop esi
// 007cbcc4  5d                   pop ebp
// 007cbcc5  5b                   pop ebx
// 007cbcc6  59                   pop ecx
// 007cbcc7  c20800               ret 8
// copied from an identical function in another client (function ?DoPropExchange@CXTPCommandBarsOptions@@QAEXPAVCXTPPropExchange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp