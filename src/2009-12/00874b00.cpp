// roc 2009-12 00874b00  unit: CXTPRibbonTheme  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00874b00
//
// 00874b00  6aff                 push -1
// 00874b02  6841009600           push 0x960041
// 00874b07  64a100000000         mov eax, dword ptr fs:[0]
// 00874b0d  50                   push eax
// 00874b0e  83ec78               sub esp, 0x78
// 00874b11  55                   push ebp
// 00874b12  56                   push esi
// 00874b13  57                   push edi
// 00874b14  a10052b600           mov eax, dword ptr [0xb65200]
// 00874b19  33c4                 xor eax, esp
// 00874b1b  50                   push eax
// 00874b1c  8d842488000000       lea eax, [esp + 0x88]
// 00874b23  64a300000000         mov dword ptr fs:[0], eax
// 00874b29  8bf9                 mov edi, ecx
// 00874b2b  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 00874b32  8bcd                 mov ecx, ebp
// 00874b34  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 00874b3f  e82e190b00           call 0x926472
// 00874b44  a900000001           test eax, 0x1000000
// 00874b49  744c                 je 0x874b97
// 00874b4b  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00874b52  8b06                 mov eax, dword ptr [esi]
// 00874b54  8b5038               mov edx, dword ptr [eax + 0x38]
// 00874b57  68ffffff00           push 0xffffff
// 00874b5c  8bce                 mov ecx, esi
// 00874b5e  ffd2                 call edx
// 00874b60  8b3e                 mov edi, dword ptr [esi]
// 00874b62  6824880000           push 0x8824
// 00874b67  8d8424a0000000       lea eax, [esp + 0xa0]
// 00874b6e  50                   push eax
// 00874b6f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00874b76  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00874b7c  50                   push eax
// 00874b7d  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00874b84  ff1580de9800         call dword ptr [0x98de80]
// 00874b8a  8b5770               mov edx, dword ptr [edi + 0x70]
// 00874b8d  50                   push eax
// 00874b8e  8bce                 mov ecx, esi
// 00874b90  ffd2                 call edx
// 00874b92  e924020000           jmp 0x874dbb
// 00874b97  6a00                 push 0
// 00874b99  8d4c2420             lea ecx, [esp + 0x20]
// 00874b9d  e89e6bffff           call 0x86b740
// 00874ba2  682c16a000           push 0xa0162c
// 00874ba7  6a00                 push 0
// 00874ba9  8d4c2424             lea ecx, [esp + 0x24]
// 00874bad  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00874bb5  e84671ffff           call 0x86bd00
// 00874bba  8d4c241c             lea ecx, [esp + 0x1c]
// 00874bbe  e8fd6fffff           call 0x86bbc0
// 00874bc3  6a00                 push 0
// 00874bc5  85c0                 test eax, eax
// 00874bc7  7547                 jne 0x874c10
// 00874bc9  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00874bd0  8b06                 mov eax, dword ptr [esi]
// 00874bd2  8b5038               mov edx, dword ptr [eax + 0x38]
// 00874bd5  8bce                 mov ecx, esi
// 00874bd7  ffd2                 call edx
// 00874bd9  8b3e                 mov edi, dword ptr [esi]
// 00874bdb  6824880000           push 0x8824
// 00874be0  8d8424a0000000       lea eax, [esp + 0xa0]
// 00874be7  50                   push eax
// 00874be8  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00874bef  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00874bf5  50                   push eax
// 00874bf6  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00874bfd  ff1580de9800         call dword ptr [0x98de80]
// 00874c03  8b5770               mov edx, dword ptr [edi + 0x70]
// 00874c06  50                   push eax
// 00874c07  8bce                 mov ecx, esi
// 00874c09  ffd2                 call edx
// 00874c0b  e99a010000           jmp 0x874daa
// 00874c10  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00874c17  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00874c1e  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00874c25  894c2430             mov dword ptr [esp + 0x30], ecx
// 00874c29  8944242c             mov dword ptr [esp + 0x2c], eax
// 00874c2d  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00874c34  6a05                 push 5
// 00874c36  8d4c2430             lea ecx, [esp + 0x30]
// 00874c3a  51                   push ecx
// 00874c3b  8954243c             mov dword ptr [esp + 0x3c], edx
// 00874c3f  89442440             mov dword ptr [esp + 0x40], eax
// 00874c43  ff1558ca9800         call dword ptr [0x98ca58]
// 00874c49  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00874c50  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00874c58  85c0                 test eax, eax
// 00874c5a  7403                 je 0x874c5f
// 00874c5c  8b4004               mov eax, dword ptr [eax + 4]
// 00874c5f  8d542410             lea edx, [esp + 0x10]
// 00874c63  52                   push edx
// 00874c64  6a00                 push 0
// 00874c66  6a02                 push 2
// 00874c68  8d4c2434             lea ecx, [esp + 0x34]
// 00874c6c  51                   push ecx
// 00874c6d  50                   push eax
// 00874c6e  8d4c2430             lea ecx, [esp + 0x30]
// 00874c72  e84972ffff           call 0x86bec0
// 00874c77  8b742410             mov esi, dword ptr [esp + 0x10]
// 00874c7b  89442418             mov dword ptr [esp + 0x18], eax
// 00874c7f  85f6                 test esi, esi
// 00874c81  0f8413010000         je 0x874d9a
// 00874c87  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00874c8e  85c0                 test eax, eax
// 00874c90  7504                 jne 0x874c96
// 00874c92  33d2                 xor edx, edx
// 00874c94  eb03                 jmp 0x874c99
// 00874c96  8b5004               mov edx, dword ptr [eax + 4]
// 00874c99  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00874c9d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00874ca1  682000cc00           push 0xcc0020
// 00874ca6  50                   push eax
// 00874ca7  51                   push ecx
// 00874ca8  52                   push edx
// 00874ca9  8b542444             mov edx, dword ptr [esp + 0x44]
// 00874cad  2bd0                 sub edx, eax
// 00874caf  52                   push edx
// 00874cb0  8b542444             mov edx, dword ptr [esp + 0x44]
// 00874cb4  2bd1                 sub edx, ecx
// 00874cb6  52                   push edx
// 00874cb7  50                   push eax
// 00874cb8  51                   push ecx
// 00874cb9  56                   push esi
// 00874cba  ff1548b19800         call dword ptr [0x98b148]
// 00874cc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00874cc4  6a00                 push 0
// 00874cc6  50                   push eax
// 00874cc7  ff1500b19800         call dword ptr [0x98b100]
// 00874ccd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00874cd1  81c7b4050000         add edi, 0x5b4
// 00874cd7  57                   push edi
// 00874cd8  51                   push ecx
// 00874cd9  c744245040000000     mov dword ptr [esp + 0x50], 0x40
// 00874ce1  c744245400280000     mov dword ptr [esp + 0x54], 0x2800
// 00874ce9  c784248400000008000000 mov dword ptr [esp + 0x84], 8
// 00874cf4  e837170b00           call 0x926430
// 00874cf9  50                   push eax
// 00874cfa  8d4c2440             lea ecx, [esp + 0x40]
// 00874cfe  e85d69fdff           call 0x84b660
// 00874d03  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00874d0a  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00874d12  ff1580de9800         call dword ptr [0x98de80]
// 00874d18  50                   push eax
// 00874d19  8d4c2418             lea ecx, [esp + 0x18]
// 00874d1d  e86e9cffff           call 0x86e990
// 00874d22  8d542448             lea edx, [esp + 0x48]
// 00874d26  52                   push edx
// 00874d27  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00874d2e  51                   push ecx
// 00874d2f  6824880000           push 0x8824
// 00874d34  6aff                 push -1
// 00874d36  8bc8                 mov ecx, eax
// 00874d38  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 00874d40  e82ba9cbff           call 0x52f670
// 00874d45  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 00874d4c  f7da                 neg edx
// 00874d4e  1bd2                 sbb edx, edx
// 00874d50  50                   push eax
// 00874d51  83c202               add edx, 2
// 00874d54  52                   push edx
// 00874d55  8bcd                 mov ecx, ebp
// 00874d57  e816170b00           call 0x926472
// 00874d5c  2500000001           and eax, 0x1000000
// 00874d61  0d00004000           or eax, 0x400000
// 00874d66  c1e816               shr eax, 0x16
// 00874d69  50                   push eax
// 00874d6a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00874d6e  50                   push eax
// 00874d6f  8d4c243c             lea ecx, [esp + 0x3c]
// 00874d73  e87870ffff           call 0x86bdf0
// 00874d78  8d4c2414             lea ecx, [esp + 0x14]
// 00874d7c  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00874d84  e8e792ffff           call 0x86e070
// 00874d89  8d4c2438             lea ecx, [esp + 0x38]
// 00874d8d  c684249000000001     mov byte ptr [esp + 0x90], 1
// 00874d95  e84669fdff           call 0x84b6e0
// 00874d9a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00874d9e  6a01                 push 1
// 00874da0  51                   push ecx
// 00874da1  8d4c2424             lea ecx, [esp + 0x24]
// 00874da5  e8c671ffff           call 0x86bf70
// 00874daa  8d4c241c             lea ecx, [esp + 0x1c]
// 00874dae  c684249000000000     mov byte ptr [esp + 0x90], 0
// 00874db6  e85573ffff           call 0x86c110
// 00874dbb  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00874dc2  ff15c0de9800         call dword ptr [0x98dec0]
// 00874dc8  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00874dcf  64890d00000000       mov dword ptr fs:[0], ecx
// 00874dd6  59                   pop ecx
// 00874dd7  5f                   pop edi
// 00874dd8  5e                   pop esi
// 00874dd9  5d                   pop ebp
// 00874dda  81c484000000         add esp, 0x84
// 00874de0  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawDwmCaptionText@CXTPRibbonTheme@@IAEXPAVCDC@@VCRect@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp