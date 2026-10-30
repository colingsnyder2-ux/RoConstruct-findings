// roc 2011-06 0088cac0  unit: CXTPRibbonTheme  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088cac0
//
// 0088cac0  6aff                 push -1
// 0088cac2  68c190a000           push 0xa090c1
// 0088cac7  64a100000000         mov eax, dword ptr fs:[0]
// 0088cacd  50                   push eax
// 0088cace  83ec78               sub esp, 0x78
// 0088cad1  55                   push ebp
// 0088cad2  56                   push esi
// 0088cad3  57                   push edi
// 0088cad4  a12058c900           mov eax, dword ptr [0xc95820]
// 0088cad9  33c4                 xor eax, esp
// 0088cadb  50                   push eax
// 0088cadc  8d842488000000       lea eax, [esp + 0x88]
// 0088cae3  64a300000000         mov dword ptr fs:[0], eax
// 0088cae9  8bf9                 mov edi, ecx
// 0088caeb  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 0088caf2  8bcd                 mov ecx, ebp
// 0088caf4  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0088caff  e814fb1300           call 0x9cc618
// 0088cb04  a900000001           test eax, 0x1000000
// 0088cb09  744c                 je 0x88cb57
// 0088cb0b  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0088cb12  8b06                 mov eax, dword ptr [esi]
// 0088cb14  8b5038               mov edx, dword ptr [eax + 0x38]
// 0088cb17  68ffffff00           push 0xffffff
// 0088cb1c  8bce                 mov ecx, esi
// 0088cb1e  ffd2                 call edx
// 0088cb20  8b3e                 mov edi, dword ptr [esi]
// 0088cb22  6824880000           push 0x8824
// 0088cb27  8d8424a0000000       lea eax, [esp + 0xa0]
// 0088cb2e  50                   push eax
// 0088cb2f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0088cb36  ff15a826a400         call dword ptr [0xa426a8]
// 0088cb3c  50                   push eax
// 0088cb3d  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0088cb44  ff15c82da400         call dword ptr [0xa42dc8]
// 0088cb4a  8b5770               mov edx, dword ptr [edi + 0x70]
// 0088cb4d  50                   push eax
// 0088cb4e  8bce                 mov ecx, esi
// 0088cb50  ffd2                 call edx
// 0088cb52  e924020000           jmp 0x88cd7b
// 0088cb57  6a00                 push 0
// 0088cb59  8d4c2420             lea ecx, [esp + 0x20]
// 0088cb5d  e89e03ffff           call 0x87cf00
// 0088cb62  688c09ad00           push 0xad098c
// 0088cb67  6a00                 push 0
// 0088cb69  8d4c2424             lea ecx, [esp + 0x24]
// 0088cb6d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0088cb75  e89608ffff           call 0x87d410
// 0088cb7a  8d4c241c             lea ecx, [esp + 0x1c]
// 0088cb7e  e84d07ffff           call 0x87d2d0
// 0088cb83  6a00                 push 0
// 0088cb85  85c0                 test eax, eax
// 0088cb87  7547                 jne 0x88cbd0
// 0088cb89  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 0088cb90  8b06                 mov eax, dword ptr [esi]
// 0088cb92  8b5038               mov edx, dword ptr [eax + 0x38]
// 0088cb95  8bce                 mov ecx, esi
// 0088cb97  ffd2                 call edx
// 0088cb99  8b3e                 mov edi, dword ptr [esi]
// 0088cb9b  6824880000           push 0x8824
// 0088cba0  8d8424a0000000       lea eax, [esp + 0xa0]
// 0088cba7  50                   push eax
// 0088cba8  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0088cbaf  ff15a826a400         call dword ptr [0xa426a8]
// 0088cbb5  50                   push eax
// 0088cbb6  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0088cbbd  ff15c82da400         call dword ptr [0xa42dc8]
// 0088cbc3  8b5770               mov edx, dword ptr [edi + 0x70]
// 0088cbc6  50                   push eax
// 0088cbc7  8bce                 mov ecx, esi
// 0088cbc9  ffd2                 call edx
// 0088cbcb  e99a010000           jmp 0x88cd6a
// 0088cbd0  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0088cbd7  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0088cbde  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0088cbe5  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088cbe9  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088cbed  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0088cbf4  6a05                 push 5
// 0088cbf6  8d4c2430             lea ecx, [esp + 0x30]
// 0088cbfa  51                   push ecx
// 0088cbfb  8954243c             mov dword ptr [esp + 0x3c], edx
// 0088cbff  89442440             mov dword ptr [esp + 0x40], eax
// 0088cc03  ff15e41ba400         call dword ptr [0xa41be4]
// 0088cc09  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0088cc10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0088cc18  85c0                 test eax, eax
// 0088cc1a  7403                 je 0x88cc1f
// 0088cc1c  8b4004               mov eax, dword ptr [eax + 4]
// 0088cc1f  8d542410             lea edx, [esp + 0x10]
// 0088cc23  52                   push edx
// 0088cc24  6a00                 push 0
// 0088cc26  6a02                 push 2
// 0088cc28  8d4c2434             lea ecx, [esp + 0x34]
// 0088cc2c  51                   push ecx
// 0088cc2d  50                   push eax
// 0088cc2e  8d4c2430             lea ecx, [esp + 0x30]
// 0088cc32  e89909ffff           call 0x87d5d0
// 0088cc37  8b742410             mov esi, dword ptr [esp + 0x10]
// 0088cc3b  89442418             mov dword ptr [esp + 0x18], eax
// 0088cc3f  85f6                 test esi, esi
// 0088cc41  0f8413010000         je 0x88cd5a
// 0088cc47  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0088cc4e  85c0                 test eax, eax
// 0088cc50  7504                 jne 0x88cc56
// 0088cc52  33d2                 xor edx, edx
// 0088cc54  eb03                 jmp 0x88cc59
// 0088cc56  8b5004               mov edx, dword ptr [eax + 4]
// 0088cc59  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088cc5d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088cc61  682000cc00           push 0xcc0020
// 0088cc66  50                   push eax
// 0088cc67  51                   push ecx
// 0088cc68  52                   push edx
// 0088cc69  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088cc6d  2bd0                 sub edx, eax
// 0088cc6f  52                   push edx
// 0088cc70  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088cc74  2bd1                 sub edx, ecx
// 0088cc76  52                   push edx
// 0088cc77  50                   push eax
// 0088cc78  51                   push ecx
// 0088cc79  56                   push esi
// 0088cc7a  ff159001a400         call dword ptr [0xa40190]
// 0088cc80  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088cc84  6a00                 push 0
// 0088cc86  50                   push eax
// 0088cc87  ff15f800a400         call dword ptr [0xa400f8]
// 0088cc8d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088cc91  81c7b4050000         add edi, 0x5b4
// 0088cc97  57                   push edi
// 0088cc98  51                   push ecx
// 0088cc99  c744245040000000     mov dword ptr [esp + 0x50], 0x40
// 0088cca1  c744245400280000     mov dword ptr [esp + 0x54], 0x2800
// 0088cca9  c784248400000008000000 mov dword ptr [esp + 0x84], 8
// 0088ccb4  e8fff81300           call 0x9cc5b8
// 0088ccb9  50                   push eax
// 0088ccba  8d4c2440             lea ecx, [esp + 0x40]
// 0088ccbe  e85d04fdff           call 0x85d120
// 0088ccc3  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0088ccca  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0088ccd2  ff15c82da400         call dword ptr [0xa42dc8]
// 0088ccd8  50                   push eax
// 0088ccd9  8d4c2418             lea ecx, [esp + 0x18]
// 0088ccdd  e84e33ffff           call 0x880030
// 0088cce2  8d542448             lea edx, [esp + 0x48]
// 0088cce6  52                   push edx
// 0088cce7  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0088ccee  51                   push ecx
// 0088ccef  6824880000           push 0x8824
// 0088ccf4  6aff                 push -1
// 0088ccf6  8bc8                 mov ecx, eax
// 0088ccf8  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 0088cd00  e8fb6edcff           call 0x653c00
// 0088cd05  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 0088cd0c  f7da                 neg edx
// 0088cd0e  1bd2                 sbb edx, edx
// 0088cd10  50                   push eax
// 0088cd11  83c202               add edx, 2
// 0088cd14  52                   push edx
// 0088cd15  8bcd                 mov ecx, ebp
// 0088cd17  e8fcf81300           call 0x9cc618
// 0088cd1c  2500000001           and eax, 0x1000000
// 0088cd21  0d00004000           or eax, 0x400000
// 0088cd26  c1e816               shr eax, 0x16
// 0088cd29  50                   push eax
// 0088cd2a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088cd2e  50                   push eax
// 0088cd2f  8d4c243c             lea ecx, [esp + 0x3c]
// 0088cd33  e8c807ffff           call 0x87d500
// 0088cd38  8d4c2414             lea ecx, [esp + 0x14]
// 0088cd3c  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0088cd44  e8572affff           call 0x87f7a0
// 0088cd49  8d4c2438             lea ecx, [esp + 0x38]
// 0088cd4d  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0088cd55  e84604fdff           call 0x85d1a0
// 0088cd5a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088cd5e  6a01                 push 1
// 0088cd60  51                   push ecx
// 0088cd61  8d4c2424             lea ecx, [esp + 0x24]
// 0088cd65  e81609ffff           call 0x87d680
// 0088cd6a  8d4c241c             lea ecx, [esp + 0x1c]
// 0088cd6e  c684249000000000     mov byte ptr [esp + 0x90], 0
// 0088cd76  e8a50affff           call 0x87d820
// 0088cd7b  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0088cd82  ff15082ea400         call dword ptr [0xa42e08]
// 0088cd88  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0088cd8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0088cd96  59                   pop ecx
// 0088cd97  5f                   pop edi
// 0088cd98  5e                   pop esi
// 0088cd99  5d                   pop ebp
// 0088cd9a  81c484000000         add esp, 0x84
// 0088cda0  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawDwmCaptionText@CXTPRibbonTheme@@IAEXPAVCDC@@VCRect@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp