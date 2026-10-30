// roc 2010-06 0082fa30  unit: CXTPRibbonTheme  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082fa30
//
// 0082fa30  6aff                 push -1
// 0082fa32  68c15f9b00           push 0x9b5fc1
// 0082fa37  64a100000000         mov eax, dword ptr fs:[0]
// 0082fa3d  50                   push eax
// 0082fa3e  83ec78               sub esp, 0x78
// 0082fa41  55                   push ebp
// 0082fa42  56                   push esi
// 0082fa43  57                   push edi
// 0082fa44  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082fa49  33c4                 xor eax, esp
// 0082fa4b  50                   push eax
// 0082fa4c  8d842488000000       lea eax, [esp + 0x88]
// 0082fa53  64a300000000         mov dword ptr fs:[0], eax
// 0082fa59  8bf9                 mov edi, ecx
// 0082fa5b  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 0082fa62  8bcd                 mov ecx, ebp
// 0082fa64  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0082fa6f  e86ad31400           call 0x97cdde
// 0082fa74  a900000001           test eax, 0x1000000
// 0082fa79  744c                 je 0x82fac7
// 0082fa7b  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0082fa82  8b06                 mov eax, dword ptr [esi]
// 0082fa84  8b5038               mov edx, dword ptr [eax + 0x38]
// 0082fa87  68ffffff00           push 0xffffff
// 0082fa8c  8bce                 mov ecx, esi
// 0082fa8e  ffd2                 call edx
// 0082fa90  8b3e                 mov edi, dword ptr [esi]
// 0082fa92  6824880000           push 0x8824
// 0082fa97  8d8424a0000000       lea eax, [esp + 0xa0]
// 0082fa9e  50                   push eax
// 0082fa9f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0082faa6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0082faac  50                   push eax
// 0082faad  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0082fab4  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082faba  8b5770               mov edx, dword ptr [edi + 0x70]
// 0082fabd  50                   push eax
// 0082fabe  8bce                 mov ecx, esi
// 0082fac0  ffd2                 call edx
// 0082fac2  e924020000           jmp 0x82fceb
// 0082fac7  6a00                 push 0
// 0082fac9  8d4c2420             lea ecx, [esp + 0x20]
// 0082facd  e86efcfeff           call 0x81f740
// 0082fad2  686c5fa600           push 0xa65f6c
// 0082fad7  6a00                 push 0
// 0082fad9  8d4c2424             lea ecx, [esp + 0x24]
// 0082fadd  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0082fae5  e81602ffff           call 0x81fd00
// 0082faea  8d4c241c             lea ecx, [esp + 0x1c]
// 0082faee  e8cd00ffff           call 0x81fbc0
// 0082faf3  6a00                 push 0
// 0082faf5  85c0                 test eax, eax
// 0082faf7  7547                 jne 0x82fb40
// 0082faf9  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 0082fb00  8b06                 mov eax, dword ptr [esi]
// 0082fb02  8b5038               mov edx, dword ptr [eax + 0x38]
// 0082fb05  8bce                 mov ecx, esi
// 0082fb07  ffd2                 call edx
// 0082fb09  8b3e                 mov edi, dword ptr [esi]
// 0082fb0b  6824880000           push 0x8824
// 0082fb10  8d8424a0000000       lea eax, [esp + 0xa0]
// 0082fb17  50                   push eax
// 0082fb18  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0082fb1f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0082fb25  50                   push eax
// 0082fb26  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0082fb2d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082fb33  8b5770               mov edx, dword ptr [edi + 0x70]
// 0082fb36  50                   push eax
// 0082fb37  8bce                 mov ecx, esi
// 0082fb39  ffd2                 call edx
// 0082fb3b  e99a010000           jmp 0x82fcda
// 0082fb40  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0082fb47  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0082fb4e  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0082fb55  894c2430             mov dword ptr [esp + 0x30], ecx
// 0082fb59  8944242c             mov dword ptr [esp + 0x2c], eax
// 0082fb5d  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0082fb64  6a05                 push 5
// 0082fb66  8d4c2430             lea ecx, [esp + 0x30]
// 0082fb6a  51                   push ecx
// 0082fb6b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0082fb6f  89442440             mov dword ptr [esp + 0x40], eax
// 0082fb73  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0082fb79  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0082fb80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082fb88  85c0                 test eax, eax
// 0082fb8a  7403                 je 0x82fb8f
// 0082fb8c  8b4004               mov eax, dword ptr [eax + 4]
// 0082fb8f  8d542410             lea edx, [esp + 0x10]
// 0082fb93  52                   push edx
// 0082fb94  6a00                 push 0
// 0082fb96  6a02                 push 2
// 0082fb98  8d4c2434             lea ecx, [esp + 0x34]
// 0082fb9c  51                   push ecx
// 0082fb9d  50                   push eax
// 0082fb9e  8d4c2430             lea ecx, [esp + 0x30]
// 0082fba2  e81903ffff           call 0x81fec0
// 0082fba7  8b742410             mov esi, dword ptr [esp + 0x10]
// 0082fbab  89442418             mov dword ptr [esp + 0x18], eax
// 0082fbaf  85f6                 test esi, esi
// 0082fbb1  0f8413010000         je 0x82fcca
// 0082fbb7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0082fbbe  85c0                 test eax, eax
// 0082fbc0  7504                 jne 0x82fbc6
// 0082fbc2  33d2                 xor edx, edx
// 0082fbc4  eb03                 jmp 0x82fbc9
// 0082fbc6  8b5004               mov edx, dword ptr [eax + 4]
// 0082fbc9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082fbcd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082fbd1  682000cc00           push 0xcc0020
// 0082fbd6  50                   push eax
// 0082fbd7  51                   push ecx
// 0082fbd8  52                   push edx
// 0082fbd9  8b542444             mov edx, dword ptr [esp + 0x44]
// 0082fbdd  2bd0                 sub edx, eax
// 0082fbdf  52                   push edx
// 0082fbe0  8b542444             mov edx, dword ptr [esp + 0x44]
// 0082fbe4  2bd1                 sub edx, ecx
// 0082fbe6  52                   push edx
// 0082fbe7  50                   push eax
// 0082fbe8  51                   push ecx
// 0082fbe9  56                   push esi
// 0082fbea  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 0082fbf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082fbf4  6a00                 push 0
// 0082fbf6  50                   push eax
// 0082fbf7  ff1548a19e00         call dword ptr [0x9ea148]
// 0082fbfd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082fc01  81c7b4050000         add edi, 0x5b4
// 0082fc07  57                   push edi
// 0082fc08  51                   push ecx
// 0082fc09  c744245040000000     mov dword ptr [esp + 0x50], 0x40
// 0082fc11  c744245400280000     mov dword ptr [esp + 0x54], 0x2800
// 0082fc19  c784248400000008000000 mov dword ptr [esp + 0x84], 8
// 0082fc24  e843d11400           call 0x97cd6c
// 0082fc29  50                   push eax
// 0082fc2a  8d4c2440             lea ecx, [esp + 0x40]
// 0082fc2e  e86dfafcff           call 0x7ff6a0
// 0082fc33  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0082fc3a  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0082fc42  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082fc48  50                   push eax
// 0082fc49  8d4c2418             lea ecx, [esp + 0x18]
// 0082fc4d  e84e2dffff           call 0x8229a0
// 0082fc52  8d542448             lea edx, [esp + 0x48]
// 0082fc56  52                   push edx
// 0082fc57  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0082fc5e  51                   push ecx
// 0082fc5f  6824880000           push 0x8824
// 0082fc64  6aff                 push -1
// 0082fc66  8bc8                 mov ecx, eax
// 0082fc68  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 0082fc70  e85b11c6ff           call 0x490dd0
// 0082fc75  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 0082fc7c  f7da                 neg edx
// 0082fc7e  1bd2                 sbb edx, edx
// 0082fc80  50                   push eax
// 0082fc81  83c202               add edx, 2
// 0082fc84  52                   push edx
// 0082fc85  8bcd                 mov ecx, ebp
// 0082fc87  e852d11400           call 0x97cdde
// 0082fc8c  2500000001           and eax, 0x1000000
// 0082fc91  0d00004000           or eax, 0x400000
// 0082fc96  c1e816               shr eax, 0x16
// 0082fc99  50                   push eax
// 0082fc9a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082fc9e  50                   push eax
// 0082fc9f  8d4c243c             lea ecx, [esp + 0x3c]
// 0082fca3  e84801ffff           call 0x81fdf0
// 0082fca8  8d4c2414             lea ecx, [esp + 0x14]
// 0082fcac  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0082fcb4  e8c723ffff           call 0x822080
// 0082fcb9  8d4c2438             lea ecx, [esp + 0x38]
// 0082fcbd  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0082fcc5  e856fafcff           call 0x7ff720
// 0082fcca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082fcce  6a01                 push 1
// 0082fcd0  51                   push ecx
// 0082fcd1  8d4c2424             lea ecx, [esp + 0x24]
// 0082fcd5  e89602ffff           call 0x81ff70
// 0082fcda  8d4c241c             lea ecx, [esp + 0x1c]
// 0082fcde  c684249000000000     mov byte ptr [esp + 0x90], 0
// 0082fce6  e82504ffff           call 0x820110
// 0082fceb  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0082fcf2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0082fcf8  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0082fcff  64890d00000000       mov dword ptr fs:[0], ecx
// 0082fd06  59                   pop ecx
// 0082fd07  5f                   pop edi
// 0082fd08  5e                   pop esi
// 0082fd09  5d                   pop ebp
// 0082fd0a  81c484000000         add esp, 0x84
// 0082fd10  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawDwmCaptionText@CXTPRibbonTheme@@IAEXPAVCDC@@VCRect@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp