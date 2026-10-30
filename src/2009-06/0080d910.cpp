// roc 2009-06 0080d910  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 1198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080d910
//
// 0080d910  6aff                 push -1
// 0080d912  68e6218800           push 0x8821e6
// 0080d917  64a100000000         mov eax, dword ptr fs:[0]
// 0080d91d  50                   push eax
// 0080d91e  83ec08               sub esp, 8
// 0080d921  55                   push ebp
// 0080d922  56                   push esi
// 0080d923  57                   push edi
// 0080d924  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080d929  33c4                 xor eax, esp
// 0080d92b  50                   push eax
// 0080d92c  8d442418             lea eax, [esp + 0x18]
// 0080d930  64a300000000         mov dword ptr fs:[0], eax
// 0080d936  8bf1                 mov esi, ecx
// 0080d938  e8d3f8ffff           call 0x80d210
// 0080d93d  e8be93ffff           call 0x806d00
// 0080d942  8bc8                 mov ecx, eax
// 0080d944  e8977affff           call 0x8053e0
// 0080d949  85c0                 test eax, eax
// 0080d94b  0f8467030000         je 0x80dcb8
// 0080d951  51                   push ecx
// 0080d952  8bcc                 mov ecx, esp
// 0080d954  89642414             mov dword ptr [esp + 0x14], esp
// 0080d958  33ff                 xor edi, edi
// 0080d95a  6894c79000           push 0x90c794
// 0080d95f  89becc000000         mov dword ptr [esi + 0xcc], edi
// 0080d965  ff1508fd8900         call dword ptr [0x89fd08]
// 0080d96b  51                   push ecx
// 0080d96c  8bcc                 mov ecx, esp
// 0080d96e  8964241c             mov dword ptr [esp + 0x1c], esp
// 0080d972  6888c79000           push 0x90c788
// 0080d977  897c242c             mov dword ptr [esp + 0x2c], edi
// 0080d97b  ff1508fd8900         call dword ptr [0x89fd08]
// 0080d981  c644242801           mov byte ptr [esp + 0x28], 1
// 0080d986  e87593ffff           call 0x806d00
// 0080d98b  83cfff               or edi, 0xffffffff
// 0080d98e  8bc8                 mov ecx, eax
// 0080d990  897c2428             mov dword ptr [esp + 0x28], edi
// 0080d994  e8678cffff           call 0x806600
// 0080d999  894648               mov dword ptr [esi + 0x48], eax
// 0080d99c  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080d99f  3bc7                 cmp eax, edi
// 0080d9a1  7503                 jne 0x80d9a6
// 0080d9a3  8b4648               mov eax, dword ptr [esi + 0x48]
// 0080d9a6  51                   push ecx
// 0080d9a7  8bcc                 mov ecx, esp
// 0080d9a9  89642418             mov dword ptr [esp + 0x18], esp
// 0080d9ad  687cc79000           push 0x90c77c
// 0080d9b2  898654010000         mov dword ptr [esi + 0x154], eax
// 0080d9b8  ff1508fd8900         call dword ptr [0x89fd08]
// 0080d9be  51                   push ecx
// 0080d9bf  8bcc                 mov ecx, esp
// 0080d9c1  89642418             mov dword ptr [esp + 0x18], esp
// 0080d9c5  6888c79000           push 0x90c788
// 0080d9ca  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0080d9d2  ff1508fd8900         call dword ptr [0x89fd08]
// 0080d9d8  c644242803           mov byte ptr [esp + 0x28], 3
// 0080d9dd  e81e93ffff           call 0x806d00
// 0080d9e2  8bc8                 mov ecx, eax
// 0080d9e4  897c2428             mov dword ptr [esp + 0x28], edi
// 0080d9e8  e8138cffff           call 0x806600
// 0080d9ed  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0080d9f3  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0080d9f9  3bc7                 cmp eax, edi
// 0080d9fb  7506                 jne 0x80da03
// 0080d9fd  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0080da03  51                   push ecx
// 0080da04  8bcc                 mov ecx, esp
// 0080da06  89642418             mov dword ptr [esp + 0x18], esp
// 0080da0a  6870c79000           push 0x90c770
// 0080da0f  898648010000         mov dword ptr [esi + 0x148], eax
// 0080da15  ff1508fd8900         call dword ptr [0x89fd08]
// 0080da1b  51                   push ecx
// 0080da1c  8bcc                 mov ecx, esp
// 0080da1e  89642418             mov dword ptr [esp + 0x18], esp
// 0080da22  6888c79000           push 0x90c788
// 0080da27  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0080da2f  ff1508fd8900         call dword ptr [0x89fd08]
// 0080da35  c644242805           mov byte ptr [esp + 0x28], 5
// 0080da3a  e8c192ffff           call 0x806d00
// 0080da3f  8bc8                 mov ecx, eax
// 0080da41  897c2428             mov dword ptr [esp + 0x28], edi
// 0080da45  e8b68bffff           call 0x806600
// 0080da4a  898630010000         mov dword ptr [esi + 0x130], eax
// 0080da50  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0080da56  3bc7                 cmp eax, edi
// 0080da58  7506                 jne 0x80da60
// 0080da5a  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0080da60  51                   push ecx
// 0080da61  8bcc                 mov ecx, esp
// 0080da63  89642418             mov dword ptr [esp + 0x18], esp
// 0080da67  6828039000           push 0x900328
// 0080da6c  898660010000         mov dword ptr [esi + 0x160], eax
// 0080da72  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0080da7c  ff1508fd8900         call dword ptr [0x89fd08]
// 0080da82  51                   push ecx
// 0080da83  8bcc                 mov ecx, esp
// 0080da85  89642418             mov dword ptr [esp + 0x18], esp
// 0080da89  6820039000           push 0x900320
// 0080da8e  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 0080da96  ff1508fd8900         call dword ptr [0x89fd08]
// 0080da9c  c644242807           mov byte ptr [esp + 0x28], 7
// 0080daa1  e85a92ffff           call 0x806d00
// 0080daa6  8bc8                 mov ecx, eax
// 0080daa8  897c2428             mov dword ptr [esp + 0x28], edi
// 0080daac  e84f8bffff           call 0x806600
// 0080dab1  8d6e04               lea ebp, [esi + 4]
// 0080dab4  50                   push eax
// 0080dab5  8bcd                 mov ecx, ebp
// 0080dab7  e8b46ff4ff           call 0x754a70
// 0080dabc  55                   push ebp
// 0080dabd  8d4e24               lea ecx, [esi + 0x24]
// 0080dac0  e85b65f4ff           call 0x754020
// 0080dac5  51                   push ecx
// 0080dac6  8bcc                 mov ecx, esp
// 0080dac8  89642418             mov dword ptr [esp + 0x18], esp
// 0080dacc  68101f9000           push 0x901f10
// 0080dad1  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dad7  51                   push ecx
// 0080dad8  8bcc                 mov ecx, esp
// 0080dada  89642418             mov dword ptr [esp + 0x18], esp
// 0080dade  68ccff8b00           push 0x8bffcc
// 0080dae3  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0080daeb  ff1508fd8900         call dword ptr [0x89fd08]
// 0080daf1  c644242809           mov byte ptr [esp + 0x28], 9
// 0080daf6  e80592ffff           call 0x806d00
// 0080dafb  8bc8                 mov ecx, eax
// 0080dafd  897c2428             mov dword ptr [esp + 0x28], edi
// 0080db01  e8fa8affff           call 0x806600
// 0080db06  51                   push ecx
// 0080db07  8bcc                 mov ecx, esp
// 0080db09  89642418             mov dword ptr [esp + 0x18], esp
// 0080db0d  682c1e9000           push 0x901e2c
// 0080db12  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0080db18  ff1508fd8900         call dword ptr [0x89fd08]
// 0080db1e  51                   push ecx
// 0080db1f  8bcc                 mov ecx, esp
// 0080db21  89642418             mov dword ptr [esp + 0x18], esp
// 0080db25  68ccff8b00           push 0x8bffcc
// 0080db2a  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 0080db32  ff1508fd8900         call dword ptr [0x89fd08]
// 0080db38  c64424280b           mov byte ptr [esp + 0x28], 0xb
// 0080db3d  e8be91ffff           call 0x806d00
// 0080db42  8bc8                 mov ecx, eax
// 0080db44  897c2428             mov dword ptr [esp + 0x28], edi
// 0080db48  e8b38affff           call 0x806600
// 0080db4d  51                   push ecx
// 0080db4e  8bcc                 mov ecx, esp
// 0080db50  89642418             mov dword ptr [esp + 0x18], esp
// 0080db54  68841e9000           push 0x901e84
// 0080db59  894678               mov dword ptr [esi + 0x78], eax
// 0080db5c  ff1508fd8900         call dword ptr [0x89fd08]
// 0080db62  51                   push ecx
// 0080db63  8bcc                 mov ecx, esp
// 0080db65  89642418             mov dword ptr [esp + 0x18], esp
// 0080db69  68ccff8b00           push 0x8bffcc
// 0080db6e  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 0080db76  ff1508fd8900         call dword ptr [0x89fd08]
// 0080db7c  c64424280d           mov byte ptr [esp + 0x28], 0xd
// 0080db81  e87a91ffff           call 0x806d00
// 0080db86  897c2428             mov dword ptr [esp + 0x28], edi
// 0080db8a  8bc8                 mov ecx, eax
// 0080db8c  e86f8affff           call 0x806600
// 0080db91  51                   push ecx
// 0080db92  8bcc                 mov ecx, esp
// 0080db94  89642418             mov dword ptr [esp + 0x18], esp
// 0080db98  686c1f9000           push 0x901f6c
// 0080db9d  898684000000         mov dword ptr [esi + 0x84], eax
// 0080dba3  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dba9  51                   push ecx
// 0080dbaa  8bcc                 mov ecx, esp
// 0080dbac  89642418             mov dword ptr [esp + 0x18], esp
// 0080dbb0  68ccff8b00           push 0x8bffcc
// 0080dbb5  c744242c0e000000     mov dword ptr [esp + 0x2c], 0xe
// 0080dbbd  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dbc3  c64424280f           mov byte ptr [esp + 0x28], 0xf
// 0080dbc8  e83391ffff           call 0x806d00
// 0080dbcd  8bc8                 mov ecx, eax
// 0080dbcf  897c2428             mov dword ptr [esp + 0x28], edi
// 0080dbd3  e8288affff           call 0x806600
// 0080dbd8  51                   push ecx
// 0080dbd9  8bcc                 mov ecx, esp
// 0080dbdb  89642418             mov dword ptr [esp + 0x18], esp
// 0080dbdf  6810039000           push 0x900310
// 0080dbe4  89860c020000         mov dword ptr [esi + 0x20c], eax
// 0080dbea  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dbf0  51                   push ecx
// 0080dbf1  8bcc                 mov ecx, esp
// 0080dbf3  89642418             mov dword ptr [esp + 0x18], esp
// 0080dbf7  6820039000           push 0x900320
// 0080dbfc  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 0080dc04  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dc0a  c644242811           mov byte ptr [esp + 0x28], 0x11
// 0080dc0f  e8ec90ffff           call 0x806d00
// 0080dc14  8bc8                 mov ecx, eax
// 0080dc16  897c2428             mov dword ptr [esp + 0x28], edi
// 0080dc1a  e8e189ffff           call 0x806600
// 0080dc1f  51                   push ecx
// 0080dc20  8bcc                 mov ecx, esp
// 0080dc22  89642418             mov dword ptr [esp + 0x18], esp
// 0080dc26  6810039000           push 0x900310
// 0080dc2b  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0080dc31  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dc37  51                   push ecx
// 0080dc38  8bcc                 mov ecx, esp
// 0080dc3a  89642418             mov dword ptr [esp + 0x18], esp
// 0080dc3e  6820039000           push 0x900320
// 0080dc43  c744242c12000000     mov dword ptr [esp + 0x2c], 0x12
// 0080dc4b  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dc51  c644242813           mov byte ptr [esp + 0x28], 0x13
// 0080dc56  e8a590ffff           call 0x806d00
// 0080dc5b  8bc8                 mov ecx, eax
// 0080dc5d  897c2428             mov dword ptr [esp + 0x28], edi
// 0080dc61  e89a89ffff           call 0x806600
// 0080dc66  51                   push ecx
// 0080dc67  8bcc                 mov ecx, esp
// 0080dc69  89642418             mov dword ptr [esp + 0x18], esp
// 0080dc6d  6800039000           push 0x900300
// 0080dc72  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0080dc78  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dc7e  51                   push ecx
// 0080dc7f  8bcc                 mov ecx, esp
// 0080dc81  89642418             mov dword ptr [esp + 0x18], esp
// 0080dc85  6820039000           push 0x900320
// 0080dc8a  c744242c14000000     mov dword ptr [esp + 0x2c], 0x14
// 0080dc92  ff1508fd8900         call dword ptr [0x89fd08]
// 0080dc98  c644242815           mov byte ptr [esp + 0x28], 0x15
// 0080dc9d  e85e90ffff           call 0x806d00
// 0080dca2  8bc8                 mov ecx, eax
// 0080dca4  897c2428             mov dword ptr [esp + 0x28], edi
// 0080dca8  e85389ffff           call 0x806600
// 0080dcad  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0080dcb3  e9e9000000           jmp 0x80dda1
// 0080dcb8  e8636ef4ff           call 0x754b20
// 0080dcbd  6a21                 push 0x21
// 0080dcbf  8bc8                 mov ecx, eax
// 0080dcc1  e8da65f4ff           call 0x7542a0
// 0080dcc6  898690000000         mov dword ptr [esi + 0x90], eax
// 0080dccc  e84f6ef4ff           call 0x754b20
// 0080dcd1  6a12                 push 0x12
// 0080dcd3  8bc8                 mov ecx, eax
// 0080dcd5  e8c665f4ff           call 0x7542a0
// 0080dcda  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0080dce0  c746483b619c00       mov dword ptr [esi + 0x48], 0x9c613b
// 0080dce7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080dcea  83f8ff               cmp eax, -1
// 0080dced  7503                 jne 0x80dcf2
// 0080dcef  8b4648               mov eax, dword ptr [esi + 0x48]
// 0080dcf2  898654010000         mov dword ptr [esi + 0x154], eax
// 0080dcf8  b800359a00           mov eax, 0x9a3500
// 0080dcfd  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0080dd03  898648010000         mov dword ptr [esi + 0x148], eax
// 0080dd09  b875a6f100           mov eax, 0xf1a675
// 0080dd0e  68ffc06f00           push 0x6fc0ff
// 0080dd13  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0080dd19  898630010000         mov dword ptr [esi + 0x130], eax
// 0080dd1f  898660010000         mov dword ptr [esi + 0x160], eax
// 0080dd25  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0080dd2f  e83c6df4ff           call 0x754a70
// 0080dd34  6800008000           push 0x800000
// 0080dd39  8d8e00010000         lea ecx, [esi + 0x100]
// 0080dd3f  e82c6df4ff           call 0x754a70
// 0080dd44  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080dd4a  51                   push ecx
// 0080dd4b  d91c24               fstp dword ptr [esp]
// 0080dd4e  68fcfdfe00           push 0xfefdfc
// 0080dd53  68c4dafa00           push 0xfadac4
// 0080dd58  8d4e04               lea ecx, [esi + 4]
// 0080dd5b  e8a062f4ff           call 0x754000
// 0080dd60  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0080dd66  51                   push ecx
// 0080dd67  d91c24               fstp dword ptr [esp]
// 0080dd6a  68c4dafa00           push 0xfadac4
// 0080dd6f  689ebef500           push 0xf5be9e
// 0080dd74  8d4e24               lea ecx, [esi + 0x24]
// 0080dd77  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 0080dd81  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0080dd88  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 0080dd92  e86962f4ff           call 0x754000
// 0080dd97  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 0080dda1  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0080ddab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080ddaf  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ddb6  59                   pop ecx
// 0080ddb7  5f                   pop edi
// 0080ddb8  5e                   pop esi
// 0080ddb9  5d                   pop ebp
// 0080ddba  83c414               add esp, 0x14
// 0080ddbd  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2007@CXTPTabPaintManager@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp