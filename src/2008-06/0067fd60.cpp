// roc 2008-06 0067fd60  unit: Ogre::RbxSky  size: 5120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067fd60
//
// 0067fd60  6aff                 push -1
// 0067fd62  68a1db7d00           push 0x7ddba1
// 0067fd67  64a100000000         mov eax, dword ptr fs:[0]
// 0067fd6d  50                   push eax
// 0067fd6e  64892500000000       mov dword ptr fs:[0], esp
// 0067fd75  81ec20010000         sub esp, 0x120
// 0067fd7b  53                   push ebx
// 0067fd7c  55                   push ebp
// 0067fd7d  56                   push esi
// 0067fd7e  8bf1                 mov esi, ecx
// 0067fd80  57                   push edi
// 0067fd81  8d4e04               lea ecx, [esi + 4]
// 0067fd84  89b424d8000000       mov dword ptr [esp + 0xd8], esi
// 0067fd8b  c7066ce58400         mov dword ptr [esi], 0x84e56c
// 0067fd91  ff15884c8000         call dword ptr [0x804c88]
// 0067fd97  33db                 xor ebx, ebx
// 0067fd99  8d4e10               lea ecx, [esi + 0x10]
// 0067fd9c  899c2438010000       mov dword ptr [esp + 0x138], ebx
// 0067fda3  ff15884c8000         call dword ptr [0x804c88]
// 0067fda9  8d4e1c               lea ecx, [esi + 0x1c]
// 0067fdac  c684243801000001     mov byte ptr [esp + 0x138], 1
// 0067fdb4  ff15884c8000         call dword ptr [0x804c88]
// 0067fdba  8d4e28               lea ecx, [esi + 0x28]
// 0067fdbd  c684243801000002     mov byte ptr [esp + 0x138], 2
// 0067fdc5  ff15884c8000         call dword ptr [0x804c88]
// 0067fdcb  8d4e54               lea ecx, [esi + 0x54]
// 0067fdce  c684243801000003     mov byte ptr [esp + 0x138], 3
// 0067fdd6  ff1500438000         call dword ptr [0x804300]
// 0067fddc  8d4e60               lea ecx, [esi + 0x60]
// 0067fddf  c684243801000004     mov byte ptr [esp + 0x138], 4
// 0067fde7  ff1500438000         call dword ptr [0x804300]
// 0067fded  8d4e6c               lea ecx, [esi + 0x6c]
// 0067fdf0  c684243801000005     mov byte ptr [esp + 0x138], 5
// 0067fdf8  ff1500438000         call dword ptr [0x804300]
// 0067fdfe  8d4e78               lea ecx, [esi + 0x78]
// 0067fe01  c684243801000006     mov byte ptr [esp + 0x138], 6
// 0067fe09  ff1500438000         call dword ptr [0x804300]
// 0067fe0f  6a04                 push 4
// 0067fe11  c684243c01000007     mov byte ptr [esp + 0x13c], 7
// 0067fe19  889e84000000         mov byte ptr [esi + 0x84], bl
// 0067fe1f  8dbe88000000         lea edi, [esi + 0x88]
// 0067fe25  e8f60a0200           call 0x6a0920
// 0067fe2a  83c404               add esp, 4
// 0067fe2d  3bc3                 cmp eax, ebx
// 0067fe2f  7404                 je 0x67fe35
// 0067fe31  8938                 mov dword ptr [eax], edi
// 0067fe33  eb02                 jmp 0x67fe37
// 0067fe35  33c0                 xor eax, eax
// 0067fe37  8907                 mov dword ptr [edi], eax
// 0067fe39  895f0c               mov dword ptr [edi + 0xc], ebx
// 0067fe3c  895f10               mov dword ptr [edi + 0x10], ebx
// 0067fe3f  895f14               mov dword ptr [edi + 0x14], ebx
// 0067fe42  6a04                 push 4
// 0067fe44  c684243c01000009     mov byte ptr [esp + 0x13c], 9
// 0067fe4c  8dbea0000000         lea edi, [esi + 0xa0]
// 0067fe52  e8c90a0200           call 0x6a0920
// 0067fe57  83c404               add esp, 4
// 0067fe5a  3bc3                 cmp eax, ebx
// 0067fe5c  7404                 je 0x67fe62
// 0067fe5e  8938                 mov dword ptr [eax], edi
// 0067fe60  eb02                 jmp 0x67fe64
// 0067fe62  33c0                 xor eax, eax
// 0067fe64  8907                 mov dword ptr [edi], eax
// 0067fe66  895f0c               mov dword ptr [edi + 0xc], ebx
// 0067fe69  895f10               mov dword ptr [edi + 0x10], ebx
// 0067fe6c  895f14               mov dword ptr [edi + 0x14], ebx
// 0067fe6f  8a842448010000       mov al, byte ptr [esp + 0x148]
// 0067fe76  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0067fe7e  8886b8000000         mov byte ptr [esi + 0xb8], al
// 0067fe84  84c0                 test al, al
// 0067fe86  0f84b7120000         je 0x681143
// 0067fe8c  68c4638100           push 0x8163c4
// 0067fe91  8d4c2474             lea ecx, [esp + 0x74]
// 0067fe95  ff1558248000         call dword ptr [0x802458]
// 0067fe9b  8b2d444c8000         mov ebp, dword ptr [0x804c44]
// 0067fea1  c68424380100000c     mov byte ptr [esp + 0x138], 0xc
// 0067fea9  ffd5                 call ebp
// 0067feab  8b3de4238000         mov edi, dword ptr [0x8023e4]
// 0067feb1  8bd8                 mov ebx, eax
// 0067feb3  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 0067feba  6864e78400           push 0x84e764
// 0067febf  50                   push eax
// 0067fec0  8d4c2458             lea ecx, [esp + 0x58]
// 0067fec4  51                   push ecx
// 0067fec5  ffd7                 call edi
// 0067fec7  83c40c               add esp, 0xc
// 0067feca  d9e8                 fld1 
// 0067fecc  8b13                 mov edx, dword ptr [ebx]
// 0067fece  8b527c               mov edx, dword ptr [edx + 0x7c]
// 0067fed1  6a00                 push 0
// 0067fed3  6a00                 push 0
// 0067fed5  51                   push ecx
// 0067fed6  d91c24               fstp dword ptr [esp]
// 0067fed9  6aff                 push -1
// 0067fedb  6a02                 push 2
// 0067fedd  8d8c2484000000       lea ecx, [esp + 0x84]
// 0067fee4  51                   push ecx
// 0067fee5  50                   push eax
// 0067fee6  8d44245c             lea eax, [esp + 0x5c]
// 0067feea  50                   push eax
// 0067feeb  8bcb                 mov ecx, ebx
// 0067feed  c68424580100000d     mov byte ptr [esp + 0x158], 0xd
// 0067fef5  ffd2                 call edx
// 0067fef7  50                   push eax
// 0067fef8  8d4e10               lea ecx, [esi + 0x10]
// 0067fefb  c684243c0100000e     mov byte ptr [esp + 0x13c], 0xe
// 0067ff03  ff1514468000         call dword ptr [0x804614]
// 0067ff09  8d4c2440             lea ecx, [esp + 0x40]
// 0067ff0d  c68424380100000d     mov byte ptr [esp + 0x138], 0xd
// 0067ff15  ff158c4c8000         call dword ptr [0x804c8c]
// 0067ff1b  8d4c2450             lea ecx, [esp + 0x50]
// 0067ff1f  c68424380100000c     mov byte ptr [esp + 0x138], 0xc
// 0067ff27  ff1568248000         call dword ptr [0x802468]
// 0067ff2d  8d4c2470             lea ecx, [esp + 0x70]
// 0067ff31  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0067ff39  ff1568248000         call dword ptr [0x802468]
// 0067ff3f  68c4638100           push 0x8163c4
// 0067ff44  8d4c2474             lea ecx, [esp + 0x74]
// 0067ff48  ff1558248000         call dword ptr [0x802458]
// 0067ff4e  c68424380100000f     mov byte ptr [esp + 0x138], 0xf
// 0067ff56  ffd5                 call ebp
// 0067ff58  8bd8                 mov ebx, eax
// 0067ff5a  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 0067ff61  685ce78400           push 0x84e75c
// 0067ff66  50                   push eax
// 0067ff67  8d4c2458             lea ecx, [esp + 0x58]
// 0067ff6b  51                   push ecx
// 0067ff6c  ffd7                 call edi
// 0067ff6e  83c40c               add esp, 0xc
// 0067ff71  d9e8                 fld1 
// 0067ff73  8b13                 mov edx, dword ptr [ebx]
// 0067ff75  8b527c               mov edx, dword ptr [edx + 0x7c]
// 0067ff78  6a00                 push 0
// 0067ff7a  6a00                 push 0
// 0067ff7c  51                   push ecx
// 0067ff7d  d91c24               fstp dword ptr [esp]
// 0067ff80  6aff                 push -1
// 0067ff82  6a02                 push 2
// 0067ff84  8d8c2484000000       lea ecx, [esp + 0x84]
// 0067ff8b  51                   push ecx
// 0067ff8c  50                   push eax
// 0067ff8d  8d44245c             lea eax, [esp + 0x5c]
// 0067ff91  50                   push eax
// 0067ff92  8bcb                 mov ecx, ebx
// 0067ff94  c684245801000010     mov byte ptr [esp + 0x158], 0x10
// 0067ff9c  ffd2                 call edx
// 0067ff9e  50                   push eax
// 0067ff9f  8d4e04               lea ecx, [esi + 4]
// 0067ffa2  c684243c01000011     mov byte ptr [esp + 0x13c], 0x11
// 0067ffaa  ff1514468000         call dword ptr [0x804614]
// 0067ffb0  8d4c2440             lea ecx, [esp + 0x40]
// 0067ffb4  c684243801000010     mov byte ptr [esp + 0x138], 0x10
// 0067ffbc  ff158c4c8000         call dword ptr [0x804c8c]
// 0067ffc2  8d4c2450             lea ecx, [esp + 0x50]
// 0067ffc6  c68424380100000f     mov byte ptr [esp + 0x138], 0xf
// 0067ffce  ff1568248000         call dword ptr [0x802468]
// 0067ffd4  8d4c2470             lea ecx, [esp + 0x70]
// 0067ffd8  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0067ffe0  ff1568248000         call dword ptr [0x802468]
// 0067ffe6  68c4638100           push 0x8163c4
// 0067ffeb  8d4c2474             lea ecx, [esp + 0x74]
// 0067ffef  ff1558248000         call dword ptr [0x802458]
// 0067fff5  c684243801000012     mov byte ptr [esp + 0x138], 0x12
// 0067fffd  ffd5                 call ebp
// 0067ffff  8be8                 mov ebp, eax
// 00680001  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 00680008  684ce78400           push 0x84e74c
// 0068000d  50                   push eax
// 0068000e  8d4c2458             lea ecx, [esp + 0x58]
// 00680012  51                   push ecx
// 00680013  ffd7                 call edi
// 00680015  83c40c               add esp, 0xc
// 00680018  d9e8                 fld1 
// 0068001a  8b5500               mov edx, dword ptr [ebp]
// 0068001d  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00680020  6a00                 push 0
// 00680022  6a00                 push 0
// 00680024  51                   push ecx
// 00680025  d91c24               fstp dword ptr [esp]
// 00680028  6aff                 push -1
// 0068002a  6a02                 push 2
// 0068002c  8d8c2484000000       lea ecx, [esp + 0x84]
// 00680033  51                   push ecx
// 00680034  50                   push eax
// 00680035  8d44245c             lea eax, [esp + 0x5c]
// 00680039  b313                 mov bl, 0x13
// 0068003b  50                   push eax
// 0068003c  8bcd                 mov ecx, ebp
// 0068003e  889c2458010000       mov byte ptr [esp + 0x158], bl
// 00680045  ffd2                 call edx
// 00680047  50                   push eax
// 00680048  8d4e28               lea ecx, [esi + 0x28]
// 0068004b  c684243c01000014     mov byte ptr [esp + 0x13c], 0x14
// 00680053  ff1514468000         call dword ptr [0x804614]
// 00680059  8d4c2440             lea ecx, [esp + 0x40]
// 0068005d  889c2438010000       mov byte ptr [esp + 0x138], bl
// 00680064  ff158c4c8000         call dword ptr [0x804c8c]
// 0068006a  8d4c2450             lea ecx, [esp + 0x50]
// 0068006e  c684243801000012     mov byte ptr [esp + 0x138], 0x12
// 00680076  ff1568248000         call dword ptr [0x802468]
// 0068007c  8d4c2470             lea ecx, [esp + 0x70]
// 00680080  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680088  ff1568248000         call dword ptr [0x802468]
// 0068008e  8b9c2440010000       mov ebx, dword ptr [esp + 0x140]
// 00680095  68c4638100           push 0x8163c4
// 0068009a  8d4c2474             lea ecx, [esp + 0x74]
// 0068009e  8d6b04               lea ebp, [ebx + 4]
// 006800a1  ff1558248000         call dword ptr [0x802458]
// 006800a7  c684243801000015     mov byte ptr [esp + 0x138], 0x15
// 006800af  ff15604e8000         call dword ptr [0x804e60]
// 006800b5  6844e78400           push 0x84e744
// 006800ba  89442420             mov dword ptr [esp + 0x20], eax
// 006800be  8d442454             lea eax, [esp + 0x54]
// 006800c2  55                   push ebp
// 006800c3  50                   push eax
// 006800c4  ffd7                 call edi
// 006800c6  83c40c               add esp, 0xc
// 006800c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006800cd  8b11                 mov edx, dword ptr [ecx]
// 006800cf  6a00                 push 0
// 006800d1  c684243c01000016     mov byte ptr [esp + 0x13c], 0x16
// 006800d9  6a00                 push 0
// 006800db  8b5210               mov edx, dword ptr [edx + 0x10]
// 006800de  6a00                 push 0
// 006800e0  8d4c247c             lea ecx, [esp + 0x7c]
// 006800e4  51                   push ecx
// 006800e5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006800e9  50                   push eax
// 006800ea  8d44243c             lea eax, [esp + 0x3c]
// 006800ee  50                   push eax
// 006800ef  ffd2                 call edx
// 006800f1  50                   push eax
// 006800f2  8d4e54               lea ecx, [esi + 0x54]
// 006800f5  c684243c01000017     mov byte ptr [esp + 0x13c], 0x17
// 006800fd  ff1568428000         call dword ptr [0x804268]
// 00680103  8b442430             mov eax, dword ptr [esp + 0x30]
// 00680107  c684243801000016     mov byte ptr [esp + 0x138], 0x16
// 0068010f  c7442428c46b8200     mov dword ptr [esp + 0x28], 0x826bc4
// 00680117  85c0                 test eax, eax
// 00680119  7418                 je 0x680133
// 0068011b  ff08                 dec dword ptr [eax]
// 0068011d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00680121  833800               cmp dword ptr [eax], 0
// 00680124  750d                 jne 0x680133
// 00680126  8b542428             mov edx, dword ptr [esp + 0x28]
// 0068012a  8b4204               mov eax, dword ptr [edx + 4]
// 0068012d  8d4c2428             lea ecx, [esp + 0x28]
// 00680131  ffd0                 call eax
// 00680133  8d4c2450             lea ecx, [esp + 0x50]
// 00680137  c684243801000015     mov byte ptr [esp + 0x138], 0x15
// 0068013f  ff1568248000         call dword ptr [0x802468]
// 00680145  8d4c2470             lea ecx, [esp + 0x70]
// 00680149  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680151  ff1568248000         call dword ptr [0x802468]
// 00680157  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0068015a  6a00                 push 0
// 0068015c  6a00                 push 0
// 0068015e  ff15e0458000         call dword ptr [0x8045e0]
// 00680164  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00680167  6a00                 push 0
// 00680169  6a00                 push 0
// 0068016b  ff156c428000         call dword ptr [0x80426c]
// 00680171  8bc8                 mov ecx, eax
// 00680173  ff1570428000         call dword ptr [0x804270]
// 00680179  8bc8                 mov ecx, eax
// 0068017b  ff1510468000         call dword ptr [0x804610]
// 00680181  d9ee                 fldz 
// 00680183  8b150c468000         mov edx, dword ptr [0x80460c]
// 00680189  51                   push ecx
// 0068018a  d91c24               fstp dword ptr [esp]
// 0068018d  52                   push edx
// 0068018e  52                   push edx
// 0068018f  6a00                 push 0
// 00680191  6a01                 push 1
// 00680193  6a02                 push 2
// 00680195  8bc8                 mov ecx, eax
// 00680197  89442430             mov dword ptr [esp + 0x30], eax
// 0068019b  ff1508468000         call dword ptr [0x804608]
// 006801a1  d9ee                 fldz 
// 006801a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006801a7  83ec0c               sub esp, 0xc
// 006801aa  d95c2408             fstp dword ptr [esp + 8]
// 006801ae  d9e8                 fld1 
// 006801b0  d9542404             fst dword ptr [esp + 4]
// 006801b4  d91c24               fstp dword ptr [esp]
// 006801b7  6a00                 push 0
// 006801b9  6a01                 push 1
// 006801bb  6a02                 push 2
// 006801bd  ff1504468000         call dword ptr [0x804604]
// 006801c3  8b4608               mov eax, dword ptr [esi + 8]
// 006801c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006801ca  6a02                 push 2
// 006801cc  83c024               add eax, 0x24
// 006801cf  50                   push eax
// 006801d0  ff150c438000         call dword ptr [0x80430c]
// 006801d6  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006801d9  6a00                 push 0
// 006801db  ff1500468000         call dword ptr [0x804600]
// 006801e1  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006801e4  6a00                 push 0
// 006801e6  ff151c4c8000         call dword ptr [0x804c1c]
// 006801ec  6838e78400           push 0x84e738
// 006801f1  8d4c2454             lea ecx, [esp + 0x54]
// 006801f5  55                   push ebp
// 006801f6  51                   push ecx
// 006801f7  ffd7                 call edi
// 006801f9  83c40c               add esp, 0xc
// 006801fc  8b15fc458000         mov edx, dword ptr [0x8045fc]
// 00680202  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00680205  52                   push edx
// 00680206  6a00                 push 0
// 00680208  50                   push eax
// 00680209  8d44244c             lea eax, [esp + 0x4c]
// 0068020d  50                   push eax
// 0068020e  c684244801000018     mov byte ptr [esp + 0x148], 0x18
// 00680216  ff15f8458000         call dword ptr [0x8045f8]
// 0068021c  50                   push eax
// 0068021d  8d4e60               lea ecx, [esi + 0x60]
// 00680220  c684243c01000019     mov byte ptr [esp + 0x13c], 0x19
// 00680228  ff15f4458000         call dword ptr [0x8045f4]
// 0068022e  8d4c2440             lea ecx, [esp + 0x40]
// 00680232  c684243801000018     mov byte ptr [esp + 0x138], 0x18
// 0068023a  ff15704e8000         call dword ptr [0x804e70]
// 00680240  8d4c2450             lea ecx, [esp + 0x50]
// 00680244  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068024c  ff1568248000         call dword ptr [0x802468]
// 00680252  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00680255  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00680258  6a02                 push 2
// 0068025a  83c024               add eax, 0x24
// 0068025d  50                   push eax
// 0068025e  6a00                 push 0
// 00680260  6a00                 push 0
// 00680262  6a00                 push 0
// 00680264  ff156c428000         call dword ptr [0x80426c]
// 0068026a  8bc8                 mov ecx, eax
// 0068026c  ff1570428000         call dword ptr [0x804270]
// 00680272  8bc8                 mov ecx, eax
// 00680274  ff1510438000         call dword ptr [0x804310]
// 0068027a  8bc8                 mov ecx, eax
// 0068027c  ff150c438000         call dword ptr [0x80430c]
// 00680282  68c4638100           push 0x8163c4
// 00680287  8d4c2474             lea ecx, [esp + 0x74]
// 0068028b  ff1558248000         call dword ptr [0x802458]
// 00680291  c68424380100001a     mov byte ptr [esp + 0x138], 0x1a
// 00680299  ff15604e8000         call dword ptr [0x804e60]
// 0068029f  682ce78400           push 0x84e72c
// 006802a4  8d4c2454             lea ecx, [esp + 0x54]
// 006802a8  55                   push ebp
// 006802a9  51                   push ecx
// 006802aa  89442428             mov dword ptr [esp + 0x28], eax
// 006802ae  ffd7                 call edi
// 006802b0  83c40c               add esp, 0xc
// 006802b3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006802b7  8b12                 mov edx, dword ptr [edx]
// 006802b9  8b5210               mov edx, dword ptr [edx + 0x10]
// 006802bc  6a00                 push 0
// 006802be  6a00                 push 0
// 006802c0  6a00                 push 0
// 006802c2  8d4c247c             lea ecx, [esp + 0x7c]
// 006802c6  51                   push ecx
// 006802c7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006802cb  50                   push eax
// 006802cc  8d44243c             lea eax, [esp + 0x3c]
// 006802d0  50                   push eax
// 006802d1  c68424500100001b     mov byte ptr [esp + 0x150], 0x1b
// 006802d9  ffd2                 call edx
// 006802db  50                   push eax
// 006802dc  8d4e6c               lea ecx, [esi + 0x6c]
// 006802df  c684243c0100001c     mov byte ptr [esp + 0x13c], 0x1c
// 006802e7  ff1568428000         call dword ptr [0x804268]
// 006802ed  8b442430             mov eax, dword ptr [esp + 0x30]
// 006802f1  c68424380100001b     mov byte ptr [esp + 0x138], 0x1b
// 006802f9  c7442428c46b8200     mov dword ptr [esp + 0x28], 0x826bc4
// 00680301  85c0                 test eax, eax
// 00680303  7418                 je 0x68031d
// 00680305  ff08                 dec dword ptr [eax]
// 00680307  8b442430             mov eax, dword ptr [esp + 0x30]
// 0068030b  833800               cmp dword ptr [eax], 0
// 0068030e  750d                 jne 0x68031d
// 00680310  8b542428             mov edx, dword ptr [esp + 0x28]
// 00680314  8b4204               mov eax, dword ptr [edx + 4]
// 00680317  8d4c2428             lea ecx, [esp + 0x28]
// 0068031b  ffd0                 call eax
// 0068031d  8d4c2450             lea ecx, [esp + 0x50]
// 00680321  c68424380100001a     mov byte ptr [esp + 0x138], 0x1a
// 00680329  ff1568248000         call dword ptr [0x802468]
// 0068032f  8d4c2470             lea ecx, [esp + 0x70]
// 00680333  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068033b  ff1568248000         call dword ptr [0x802468]
// 00680341  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00680344  6a00                 push 0
// 00680346  6a07                 push 7
// 00680348  ff15e0458000         call dword ptr [0x8045e0]
// 0068034e  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00680351  6a00                 push 0
// 00680353  6a00                 push 0
// 00680355  ff156c428000         call dword ptr [0x80426c]
// 0068035b  8bc8                 mov ecx, eax
// 0068035d  ff1570428000         call dword ptr [0x804270]
// 00680363  8bc8                 mov ecx, eax
// 00680365  ff1510468000         call dword ptr [0x804610]
// 0068036b  d9ee                 fldz 
// 0068036d  8b150c468000         mov edx, dword ptr [0x80460c]
// 00680373  51                   push ecx
// 00680374  d91c24               fstp dword ptr [esp]
// 00680377  52                   push edx
// 00680378  52                   push edx
// 00680379  6a00                 push 0
// 0068037b  6a01                 push 1
// 0068037d  6a02                 push 2
// 0068037f  8bc8                 mov ecx, eax
// 00680381  89442430             mov dword ptr [esp + 0x30], eax
// 00680385  ff1508468000         call dword ptr [0x804608]
// 0068038b  d9ee                 fldz 
// 0068038d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00680391  83ec0c               sub esp, 0xc
// 00680394  d95c2408             fstp dword ptr [esp + 8]
// 00680398  d9e8                 fld1 
// 0068039a  d9542404             fst dword ptr [esp + 4]
// 0068039e  d91c24               fstp dword ptr [esp]
// 006803a1  6a00                 push 0
// 006803a3  6a01                 push 1
// 006803a5  6a02                 push 2
// 006803a7  ff1504468000         call dword ptr [0x804604]
// 006803ad  8b4614               mov eax, dword ptr [esi + 0x14]
// 006803b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006803b4  6a02                 push 2
// 006803b6  83c024               add eax, 0x24
// 006803b9  50                   push eax
// 006803ba  ff150c438000         call dword ptr [0x80430c]
// 006803c0  8b4614               mov eax, dword ptr [esi + 0x14]
// 006803c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006803c7  6a02                 push 2
// 006803c9  83c024               add eax, 0x24
// 006803cc  50                   push eax
// 006803cd  ff150c438000         call dword ptr [0x80430c]
// 006803d3  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 006803d6  6a00                 push 0
// 006803d8  ff1500468000         call dword ptr [0x804600]
// 006803de  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 006803e1  6a00                 push 0
// 006803e3  ff151c4c8000         call dword ptr [0x804c1c]
// 006803e9  6828e78400           push 0x84e728
// 006803ee  8d4c2454             lea ecx, [esp + 0x54]
// 006803f2  55                   push ebp
// 006803f3  51                   push ecx
// 006803f4  ffd7                 call edi
// 006803f6  83c40c               add esp, 0xc
// 006803f9  8b13                 mov edx, dword ptr [ebx]
// 006803fb  6a01                 push 1
// 006803fd  50                   push eax
// 006803fe  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 00680404  8bcb                 mov ecx, ebx
// 00680406  c68424400100001d     mov byte ptr [esp + 0x140], 0x1d
// 0068040e  ffd0                 call eax
// 00680410  8d4c2450             lea ecx, [esp + 0x50]
// 00680414  894634               mov dword ptr [esi + 0x34], eax
// 00680417  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068041f  ff1568248000         call dword ptr [0x802468]
// 00680425  d905cc9d8100         fld dword ptr [0x819dcc]
// 0068042b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068042e  8b11                 mov edx, dword ptr [ecx]
// 00680430  83ec08               sub esp, 8
// 00680433  8b8214010000         mov eax, dword ptr [edx + 0x114]
// 00680439  d9542404             fst dword ptr [esp + 4]
// 0068043d  d91c24               fstp dword ptr [esp]
// 00680440  ffd0                 call eax
// 00680442  8b0d0c468000         mov ecx, dword ptr [0x80460c]
// 00680448  8b1588448000         mov edx, dword ptr [0x804488]
// 0068044e  51                   push ecx
// 0068044f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00680452  52                   push edx
// 00680453  ff15f0458000         call dword ptr [0x8045f0]
// 00680459  a10c468000           mov eax, dword ptr [0x80460c]
// 0068045e  8b0d88448000         mov ecx, dword ptr [0x804488]
// 00680464  50                   push eax
// 00680465  51                   push ecx
// 00680466  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00680469  ff15f0458000         call dword ptr [0x8045f0]
// 0068046f  8b150c468000         mov edx, dword ptr [0x80460c]
// 00680475  a188448000           mov eax, dword ptr [0x804488]
// 0068047a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068047d  52                   push edx
// 0068047e  50                   push eax
// 0068047f  ff15f0458000         call dword ptr [0x8045f0]
// 00680485  6844e78400           push 0x84e744
// 0068048a  8d4c2454             lea ecx, [esp + 0x54]
// 0068048e  55                   push ebp
// 0068048f  51                   push ecx
// 00680490  ffd7                 call edi
// 00680492  83c40c               add esp, 0xc
// 00680495  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00680498  8b11                 mov edx, dword ptr [ecx]
// 0068049a  50                   push eax
// 0068049b  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 006804a1  c684243c0100001e     mov byte ptr [esp + 0x13c], 0x1e
// 006804a9  ffd0                 call eax
// 006804ab  8d4c2450             lea ecx, [esp + 0x50]
// 006804af  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 006804b7  ff1568248000         call dword ptr [0x802468]
// 006804bd  6820e78400           push 0x84e720
// 006804c2  8d4c2454             lea ecx, [esp + 0x54]
// 006804c6  55                   push ebp
// 006804c7  51                   push ecx
// 006804c8  ffd7                 call edi
// 006804ca  83c40c               add esp, 0xc
// 006804cd  8b13                 mov edx, dword ptr [ebx]
// 006804cf  6a01                 push 1
// 006804d1  50                   push eax
// 006804d2  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 006804d8  8bcb                 mov ecx, ebx
// 006804da  c68424400100001f     mov byte ptr [esp + 0x140], 0x1f
// 006804e2  ffd0                 call eax
// 006804e4  8d4c2450             lea ecx, [esp + 0x50]
// 006804e8  89463c               mov dword ptr [esi + 0x3c], eax
// 006804eb  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 006804f3  ff1568248000         call dword ptr [0x802468]
// 006804f9  d905cc9d8100         fld dword ptr [0x819dcc]
// 006804ff  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00680502  8b11                 mov edx, dword ptr [ecx]
// 00680504  8b8214010000         mov eax, dword ptr [edx + 0x114]
// 0068050a  83ec08               sub esp, 8
// 0068050d  d9542404             fst dword ptr [esp + 4]
// 00680511  d91c24               fstp dword ptr [esp]
// 00680514  ffd0                 call eax
// 00680516  8b0d0c468000         mov ecx, dword ptr [0x80460c]
// 0068051c  8b1588448000         mov edx, dword ptr [0x804488]
// 00680522  51                   push ecx
// 00680523  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00680526  52                   push edx
// 00680527  ff15f0458000         call dword ptr [0x8045f0]
// 0068052d  6838e78400           push 0x84e738
// 00680532  8d442454             lea eax, [esp + 0x54]
// 00680536  55                   push ebp
// 00680537  50                   push eax
// 00680538  ffd7                 call edi
// 0068053a  83c40c               add esp, 0xc
// 0068053d  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00680540  8b11                 mov edx, dword ptr [ecx]
// 00680542  c684243801000020     mov byte ptr [esp + 0x138], 0x20
// 0068054a  50                   push eax
// 0068054b  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 00680551  ffd0                 call eax
// 00680553  8d4c2450             lea ecx, [esp + 0x50]
// 00680557  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068055f  ff1568248000         call dword ptr [0x802468]
// 00680565  6818e78400           push 0x84e718
// 0068056a  8d4c2454             lea ecx, [esp + 0x54]
// 0068056e  55                   push ebp
// 0068056f  51                   push ecx
// 00680570  ffd7                 call edi
// 00680572  83c40c               add esp, 0xc
// 00680575  8b13                 mov edx, dword ptr [ebx]
// 00680577  6a01                 push 1
// 00680579  50                   push eax
// 0068057a  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 00680580  8bcb                 mov ecx, ebx
// 00680582  c684244001000021     mov byte ptr [esp + 0x140], 0x21
// 0068058a  ffd0                 call eax
// 0068058c  8d4c2450             lea ecx, [esp + 0x50]
// 00680590  894638               mov dword ptr [esi + 0x38], eax
// 00680593  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068059b  ff1568248000         call dword ptr [0x802468]
// 006805a1  d905987a8400         fld dword ptr [0x847a98]
// 006805a7  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006805aa  8b11                 mov edx, dword ptr [ecx]
// 006805ac  8b8214010000         mov eax, dword ptr [edx + 0x114]
// 006805b2  83ec08               sub esp, 8
// 006805b5  d9542404             fst dword ptr [esp + 4]
// 006805b9  d91c24               fstp dword ptr [esp]
// 006805bc  ffd0                 call eax
// 006805be  8b0d0c468000         mov ecx, dword ptr [0x80460c]
// 006805c4  8b1588448000         mov edx, dword ptr [0x804488]
// 006805ca  51                   push ecx
// 006805cb  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006805ce  52                   push edx
// 006805cf  ff15f0458000         call dword ptr [0x8045f0]
// 006805d5  682ce78400           push 0x84e72c
// 006805da  8d442454             lea eax, [esp + 0x54]
// 006805de  55                   push ebp
// 006805df  50                   push eax
// 006805e0  ffd7                 call edi
// 006805e2  83c40c               add esp, 0xc
// 006805e5  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006805e8  8b11                 mov edx, dword ptr [ecx]
// 006805ea  50                   push eax
// 006805eb  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 006805f1  c684243c01000022     mov byte ptr [esp + 0x13c], 0x22
// 006805f9  ffd0                 call eax
// 006805fb  8d4c2450             lea ecx, [esp + 0x50]
// 006805ff  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680607  ff1568248000         call dword ptr [0x802468]
// 0068060d  6810e78400           push 0x84e710
// 00680612  8d4c2454             lea ecx, [esp + 0x54]
// 00680616  55                   push ebp
// 00680617  51                   push ecx
// 00680618  ffd7                 call edi
// 0068061a  83c40c               add esp, 0xc
// 0068061d  8b13                 mov edx, dword ptr [ebx]
// 0068061f  50                   push eax
// 00680620  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 00680626  8bcb                 mov ecx, ebx
// 00680628  c684243c01000023     mov byte ptr [esp + 0x13c], 0x23
// 00680630  ffd0                 call eax
// 00680632  8d4c2450             lea ecx, [esp + 0x50]
// 00680636  89464c               mov dword ptr [esi + 0x4c], eax
// 00680639  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680641  ff1568248000         call dword ptr [0x802468]
// 00680647  6808e78400           push 0x84e708
// 0068064c  8d4c2454             lea ecx, [esp + 0x54]
// 00680650  55                   push ebp
// 00680651  51                   push ecx
// 00680652  ffd7                 call edi
// 00680654  83c40c               add esp, 0xc
// 00680657  8944241c             mov dword ptr [esp + 0x1c], eax
// 0068065b  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0068065e  8b11                 mov edx, dword ptr [ecx]
// 00680660  c684243801000024     mov byte ptr [esp + 0x138], 0x24
// 00680668  a16c4e8000           mov eax, dword ptr [0x804e6c]
// 0068066d  8b9284010000         mov edx, dword ptr [edx + 0x184]
// 00680673  50                   push eax
// 00680674  a188448000           mov eax, dword ptr [0x804488]
// 00680679  50                   push eax
// 0068067a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0068067e  50                   push eax
// 0068067f  ffd2                 call edx
// 00680681  8d4c2450             lea ecx, [esp + 0x50]
// 00680685  894640               mov dword ptr [esi + 0x40], eax
// 00680688  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680690  ff1568248000         call dword ptr [0x802468]
// 00680696  68fce68400           push 0x84e6fc
// 0068069b  8d442454             lea eax, [esp + 0x54]
// 0068069f  55                   push ebp
// 006806a0  50                   push eax
// 006806a1  ffd7                 call edi
// 006806a3  83c40c               add esp, 0xc
// 006806a6  8944241c             mov dword ptr [esp + 0x1c], eax
// 006806aa  a16c4e8000           mov eax, dword ptr [0x804e6c]
// 006806af  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006806b2  8b11                 mov edx, dword ptr [ecx]
// 006806b4  8b9284010000         mov edx, dword ptr [edx + 0x184]
// 006806ba  50                   push eax
// 006806bb  a188448000           mov eax, dword ptr [0x804488]
// 006806c0  50                   push eax
// 006806c1  8b442424             mov eax, dword ptr [esp + 0x24]
// 006806c5  50                   push eax
// 006806c6  c684244401000025     mov byte ptr [esp + 0x144], 0x25
// 006806ce  ffd2                 call edx
// 006806d0  8d4c2450             lea ecx, [esp + 0x50]
// 006806d4  894644               mov dword ptr [esi + 0x44], eax
// 006806d7  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 006806df  ff1568248000         call dword ptr [0x802468]
// 006806e5  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006806e8  8b01                 mov eax, dword ptr [ecx]
// 006806ea  8b5634               mov edx, dword ptr [esi + 0x34]
// 006806ed  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 006806f3  52                   push edx
// 006806f4  ffd0                 call eax
// 006806f6  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006806f9  8b11                 mov edx, dword ptr [ecx]
// 006806fb  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006806fe  8b9230010000         mov edx, dword ptr [edx + 0x130]
// 00680704  50                   push eax
// 00680705  ffd2                 call edx
// 00680707  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0068070a  8b01                 mov eax, dword ptr [ecx]
// 0068070c  8b5638               mov edx, dword ptr [esi + 0x38]
// 0068070f  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 00680715  52                   push edx
// 00680716  ffd0                 call eax
// 00680718  8b4634               mov eax, dword ptr [esi + 0x34]
// 0068071b  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 00680722  c680a400000000       mov byte ptr [eax + 0xa4], 0
// 00680729  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0068072c  68f0e68400           push 0x84e6f0
// 00680731  c680a400000000       mov byte ptr [eax + 0xa4], 0
// 00680738  8b4638               mov eax, dword ptr [esi + 0x38]
// 0068073b  51                   push ecx
// 0068073c  8d542458             lea edx, [esp + 0x58]
// 00680740  52                   push edx
// 00680741  c680a400000000       mov byte ptr [eax + 0xa4], 0
// 00680748  ffd7                 call edi
// 0068074a  50                   push eax
// 0068074b  c684244801000026     mov byte ptr [esp + 0x148], 0x26
// 00680753  e83846e9ff           call 0x514d90
// 00680758  83c410               add esp, 0x10
// 0068075b  8d4c2450             lea ecx, [esp + 0x50]
// 0068075f  88442420             mov byte ptr [esp + 0x20], al
// 00680763  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068076b  ff1568248000         call dword ptr [0x802468]
// 00680771  807c242000           cmp byte ptr [esp + 0x20], 0
// 00680776  0f84f0030000         je 0x680b6c
// 0068077c  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 00680783  68f0e68400           push 0x84e6f0
// 00680788  50                   push eax
// 00680789  8d4c2458             lea ecx, [esp + 0x58]
// 0068078d  51                   push ecx
// 0068078e  ffd7                 call edi
// 00680790  83c40c               add esp, 0xc
// 00680793  6a01                 push 1
// 00680795  6a01                 push 1
// 00680797  50                   push eax
// 00680798  8d8c2498000000       lea ecx, [esp + 0x98]
// 0068079f  c684244401000027     mov byte ptr [esp + 0x144], 0x27
// 006807a7  e85452e9ff           call 0x515a00
// 006807ac  8d4c2450             lea ecx, [esp + 0x50]
// 006807b0  c684243801000029     mov byte ptr [esp + 0x138], 0x29
// 006807b8  ff1568248000         call dword ptr [0x802468]
// 006807be  6a05                 push 5
// 006807c0  8d542474             lea edx, [esp + 0x74]
// 006807c4  52                   push edx
// 006807c5  8d8c2494000000       lea ecx, [esp + 0x94]
// 006807cc  e87f55e9ff           call 0x515d50
// 006807d1  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 006807d8  8d4802               lea ecx, [eax + 2]
// 006807db  3b8c24c8000000       cmp ecx, dword ptr [esp + 0xc8]
// 006807e2  c68424380100002a     mov byte ptr [esp + 0x138], 0x2a
// 006807ea  7e1f                 jle 0x68080b
// 006807ec  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 006807f3  6a02                 push 2
// 006807f5  03d0                 add edx, eax
// 006807f7  52                   push edx
// 006807f8  8d8c2494000000       lea ecx, [esp + 0x94]
// 006807ff  e8cc4fe9ff           call 0x5157d0
// 00680804  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 0068080b  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00680812  83c002               add eax, 2
// 00680815  80bc24b000000000     cmp byte ptr [esp + 0xb0], 0
// 0068081d  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 00680824  7417                 je 0x68083d
// 00680826  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 0068082a  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 0068082e  88542420             mov byte ptr [esp + 0x20], dl
// 00680832  88442421             mov byte ptr [esp + 0x21], al
// 00680836  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 0068083b  eb05                 jmp 0x680842
// 0068083d  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00680842  98                   cwde 
// 00680843  83ec0c               sub esp, 0xc
// 00680846  89642434             mov dword ptr [esp + 0x34], esp
// 0068084a  50                   push eax
// 0068084b  8d8e88000000         lea ecx, [esi + 0x88]
// 00680851  8944242c             mov dword ptr [esp + 0x2c], eax
// 00680855  e816f4ffff           call 0x67fc70
// 0068085a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0068085e  d9ee                 fldz 
// 00680860  51                   push ecx
// 00680861  d91c24               fstp dword ptr [esp]
// 00680864  52                   push edx
// 00680865  8d8ea0000000         lea ecx, [esi + 0xa0]
// 0068086b  e8b074e4ff           call 0x4c7d20
// 00680870  33c0                 xor eax, eax
// 00680872  3944241c             cmp dword ptr [esp + 0x1c], eax
// 00680876  89442418             mov dword ptr [esp + 0x18], eax
// 0068087a  0f8ec1020000         jle 0x680b41
// 00680880  8944246c             mov dword ptr [esp + 0x6c], eax
// 00680884  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 0068088b  8d4802               lea ecx, [eax + 2]
// 0068088e  3b8c24c8000000       cmp ecx, dword ptr [esp + 0xc8]
// 00680895  7e1f                 jle 0x6808b6
// 00680897  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 0068089e  6a02                 push 2
// 006808a0  03d0                 add edx, eax
// 006808a2  52                   push edx
// 006808a3  8d8c2494000000       lea ecx, [esp + 0x94]
// 006808aa  e8214fe9ff           call 0x5157d0
// 006808af  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 006808b6  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 006808bd  83c002               add eax, 2
// 006808c0  80bc24b000000000     cmp byte ptr [esp + 0xb0], 0
// 006808c8  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 006808cf  7419                 je 0x6808ea
// 006808d1  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 006808d6  88542420             mov byte ptr [esp + 0x20], dl
// 006808da  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 006808df  88542421             mov byte ptr [esp + 0x21], dl
// 006808e3  0fb7542420           movzx edx, word ptr [esp + 0x20]
// 006808e8  eb05                 jmp 0x6808ef
// 006808ea  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 006808ef  0fbfd2               movsx edx, dx
// 006808f2  89542424             mov dword ptr [esp + 0x24], edx
// 006808f6  8d5002               lea edx, [eax + 2]
// 006808f9  3b9424c8000000       cmp edx, dword ptr [esp + 0xc8]
// 00680900  db442424             fild dword ptr [esp + 0x24]
// 00680904  dcc0                 fadd st(0), st(0)
// 00680906  d80594748200         fadd dword ptr [0x827494]
// 0068090c  d80dece68400         fmul dword ptr [0x84e6ec]
// 00680912  d95c243c             fstp dword ptr [esp + 0x3c]
// 00680916  7e26                 jle 0x68093e
// 00680918  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 0068091f  03c8                 add ecx, eax
// 00680921  6a02                 push 2
// 00680923  51                   push ecx
// 00680924  8d8c2494000000       lea ecx, [esp + 0x94]
// 0068092b  e8a04ee9ff           call 0x5157d0
// 00680930  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00680937  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 0068093e  83c002               add eax, 2
// 00680941  80bc24b000000000     cmp byte ptr [esp + 0xb0], 0
// 00680949  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 00680950  7419                 je 0x68096b
// 00680952  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 00680957  8854244c             mov byte ptr [esp + 0x4c], dl
// 0068095b  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 00680960  8854244d             mov byte ptr [esp + 0x4d], dl
// 00680964  0fb754244c           movzx edx, word ptr [esp + 0x4c]
// 00680969  eb05                 jmp 0x680970
// 0068096b  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 00680970  0fbfd2               movsx edx, dx
// 00680973  89542424             mov dword ptr [esp + 0x24], edx
// 00680977  8d5002               lea edx, [eax + 2]
// 0068097a  3b9424c8000000       cmp edx, dword ptr [esp + 0xc8]
// 00680981  db442424             fild dword ptr [esp + 0x24]
// 00680985  dcc0                 fadd st(0), st(0)
// 00680987  d80594748200         fadd dword ptr [0x827494]
// 0068098d  d80dece68400         fmul dword ptr [0x84e6ec]
// 00680993  d95c2428             fstp dword ptr [esp + 0x28]
// 00680997  7e26                 jle 0x6809bf
// 00680999  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 006809a0  03c8                 add ecx, eax
// 006809a2  6a02                 push 2
// 006809a4  51                   push ecx
// 006809a5  8d8c2494000000       lea ecx, [esp + 0x94]
// 006809ac  e81f4ee9ff           call 0x5157d0
// 006809b1  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 006809b8  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 006809bf  83c002               add eax, 2
// 006809c2  80bc24b000000000     cmp byte ptr [esp + 0xb0], 0
// 006809ca  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 006809d1  7417                 je 0x6809ea
// 006809d3  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 006809d7  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 006809db  88542434             mov byte ptr [esp + 0x34], dl
// 006809df  88442435             mov byte ptr [esp + 0x35], al
// 006809e3  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 006809e8  eb05                 jmp 0x6809ef
// 006809ea  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 006809ef  0fbfc8               movsx ecx, ax
// 006809f2  894c2424             mov dword ptr [esp + 0x24], ecx
// 006809f6  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 006809fc  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00680a02  db442424             fild dword ptr [esp + 0x24]
// 00680a06  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00680a0b  f7e9                 imul ecx
// 00680a0d  dcc0                 fadd st(0), st(0)
// 00680a0f  d80594748200         fadd dword ptr [0x827494]
// 00680a15  d80dece68400         fmul dword ptr [0x84e6ec]
// 00680a1b  d944243c             fld dword ptr [esp + 0x3c]
// 00680a1f  d905cc9d8100         fld dword ptr [0x819dcc]
// 00680a25  d1fa                 sar edx, 1
// 00680a27  dcc9                 fmul st(1), st(0)
// 00680a29  8bc2                 mov eax, edx
// 00680a2b  d9c9                 fxch st(1)
// 00680a2d  c1e81f               shr eax, 0x1f
// 00680a30  03c2                 add eax, edx
// 00680a32  d95c243c             fstp dword ptr [esp + 0x3c]
// 00680a36  d9442428             fld dword ptr [esp + 0x28]
// 00680a3a  d8c9                 fmul st(1)
// 00680a3c  d95c2428             fstp dword ptr [esp + 0x28]
// 00680a40  dec9                 fmulp st(1)
// 00680a42  d95c2424             fstp dword ptr [esp + 0x24]
// 00680a46  39442418             cmp dword ptr [esp + 0x18], eax
// 00680a4a  7206                 jb 0x680a52
// 00680a4c  ff1590288000         call dword ptr [0x802890]
// 00680a52  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00680a58  d944243c             fld dword ptr [esp + 0x3c]
// 00680a5c  0344246c             add eax, dword ptr [esp + 0x6c]
// 00680a60  d918                 fstp dword ptr [eax]
// 00680a62  d9442428             fld dword ptr [esp + 0x28]
// 00680a66  d95804               fstp dword ptr [eax + 4]
// 00680a69  d9442424             fld dword ptr [esp + 0x24]
// 00680a6d  d95808               fstp dword ptr [eax + 8]
// 00680a70  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00680a77  8d4802               lea ecx, [eax + 2]
// 00680a7a  3b8c24c8000000       cmp ecx, dword ptr [esp + 0xc8]
// 00680a81  7e1f                 jle 0x680aa2
// 00680a83  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 00680a8a  6a02                 push 2
// 00680a8c  03d0                 add edx, eax
// 00680a8e  52                   push edx
// 00680a8f  8d8c2494000000       lea ecx, [esp + 0x94]
// 00680a96  e8354de9ff           call 0x5157d0
// 00680a9b  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00680aa2  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00680aa9  83c002               add eax, 2
// 00680aac  80bc24b000000000     cmp byte ptr [esp + 0xb0], 0
// 00680ab4  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 00680abb  7417                 je 0x680ad4
// 00680abd  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 00680ac1  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 00680ac5  88542438             mov byte ptr [esp + 0x38], dl
// 00680ac9  88442439             mov byte ptr [esp + 0x39], al
// 00680acd  0fb7442438           movzx eax, word ptr [esp + 0x38]
// 00680ad2  eb05                 jmp 0x680ad9
// 00680ad4  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00680ad9  0fbfd0               movsx edx, ax
// 00680adc  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00680ae2  2b86ac000000         sub eax, dword ptr [esi + 0xac]
// 00680ae8  89542428             mov dword ptr [esp + 0x28], edx
// 00680aec  c1f802               sar eax, 2
// 00680aef  db442428             fild dword ptr [esp + 0x28]
// 00680af3  dcc0                 fadd st(0), st(0)
// 00680af5  d80594748200         fadd dword ptr [0x827494]
// 00680afb  d80dece68400         fmul dword ptr [0x84e6ec]
// 00680b01  dd542428             fst qword ptr [esp + 0x28]
// 00680b05  39442418             cmp dword ptr [esp + 0x18], eax
// 00680b09  720c                 jb 0x680b17
// 00680b0b  ddd8                 fstp st(0)
// 00680b0d  ff1590288000         call dword ptr [0x802890]
// 00680b13  dd442428             fld qword ptr [esp + 0x28]
// 00680b17  8b442418             mov eax, dword ptr [esp + 0x18]
// 00680b1b  dcc8                 fmul st(0), st(0)
// 00680b1d  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 00680b23  8344246c0c           add dword ptr [esp + 0x6c], 0xc
// 00680b28  dc05001e8200         fadd qword ptr [0x821e00]
// 00680b2e  40                   inc eax
// 00680b2f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00680b33  89442418             mov dword ptr [esp + 0x18], eax
// 00680b37  d95c81fc             fstp dword ptr [ecx + eax*4 - 4]
// 00680b3b  0f8c43fdffff         jl 0x680884
// 00680b41  8d4c2470             lea ecx, [esp + 0x70]
// 00680b45  c684243801000029     mov byte ptr [esp + 0x138], 0x29
// 00680b4d  ff1568248000         call dword ptr [0x802468]
// 00680b53  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00680b5a  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680b62  e8b950e9ff           call 0x515c20
// 00680b67  e954010000           jmp 0x680cc0
// 00680b6c  83ec0c               sub esp, 0xc
// 00680b6f  89642434             mov dword ptr [esp + 0x34], esp
// 00680b73  68b80b0000           push 0xbb8
// 00680b78  8d8e88000000         lea ecx, [esi + 0x88]
// 00680b7e  e8edf0ffff           call 0x67fc70
// 00680b83  d9ee                 fldz 
// 00680b85  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00680b8b  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00680b91  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00680b96  f7e9                 imul ecx
// 00680b98  d1fa                 sar edx, 1
// 00680b9a  8bc2                 mov eax, edx
// 00680b9c  51                   push ecx
// 00680b9d  c1e81f               shr eax, 0x1f
// 00680ba0  03c2                 add eax, edx
// 00680ba2  d91c24               fstp dword ptr [esp]
// 00680ba5  50                   push eax
// 00680ba6  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00680bac  e86f71e4ff           call 0x4c7d20
// 00680bb1  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00680bb7  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00680bbd  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00680bc2  f7e9                 imul ecx
// 00680bc4  d1fa                 sar edx, 1
// 00680bc6  8bc2                 mov eax, edx
// 00680bc8  c1e81f               shr eax, 0x1f
// 00680bcb  8d4402ff             lea eax, [edx + eax - 1]
// 00680bcf  89442418             mov dword ptr [esp + 0x18], eax
// 00680bd3  85c0                 test eax, eax
// 00680bd5  0f8ce5000000         jl 0x680cc0
// 00680bdb  8d0440               lea eax, [eax + eax*2]
// 00680bde  03c0                 add eax, eax
// 00680be0  03c0                 add eax, eax
// 00680be2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00680be6  8d4c2440             lea ecx, [esp + 0x40]
// 00680bea  51                   push ecx
// 00680beb  e8607ae9ff           call 0x518650
// 00680bf0  d9442444             fld dword ptr [esp + 0x44]
// 00680bf4  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00680bfa  d905cc9d8100         fld dword ptr [0x819dcc]
// 00680c00  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00680c06  dcc9                 fmul st(1), st(0)
// 00680c08  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00680c0d  d9c9                 fxch st(1)
// 00680c0f  f7e9                 imul ecx
// 00680c11  d95c242c             fstp dword ptr [esp + 0x2c]
// 00680c15  d9442448             fld dword ptr [esp + 0x48]
// 00680c19  d8c9                 fmul st(1)
// 00680c1b  d95c2440             fstp dword ptr [esp + 0x40]
// 00680c1f  d84c244c             fmul dword ptr [esp + 0x4c]
// 00680c23  d1fa                 sar edx, 1
// 00680c25  8bc2                 mov eax, edx
// 00680c27  c1e81f               shr eax, 0x1f
// 00680c2a  03c2                 add eax, edx
// 00680c2c  d95c2428             fstp dword ptr [esp + 0x28]
// 00680c30  83c404               add esp, 4
// 00680c33  39442418             cmp dword ptr [esp + 0x18], eax
// 00680c37  7206                 jb 0x680c3f
// 00680c39  ff1590288000         call dword ptr [0x802890]
// 00680c3f  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00680c45  d9442428             fld dword ptr [esp + 0x28]
// 00680c49  0344241c             add eax, dword ptr [esp + 0x1c]
// 00680c4d  d918                 fstp dword ptr [eax]
// 00680c4f  d944243c             fld dword ptr [esp + 0x3c]
// 00680c53  d95804               fstp dword ptr [eax + 4]
// 00680c56  d9442424             fld dword ptr [esp + 0x24]
// 00680c5a  d95808               fstp dword ptr [eax + 8]
// 00680c5d  ff15b0278000         call dword ptr [0x8027b0]
// 00680c63  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00680c69  2b8eac000000         sub ecx, dword ptr [esi + 0xac]
// 00680c6f  89442428             mov dword ptr [esp + 0x28], eax
// 00680c73  db442428             fild dword ptr [esp + 0x28]
// 00680c77  8b442418             mov eax, dword ptr [esp + 0x18]
// 00680c7b  c1f902               sar ecx, 2
// 00680c7e  d80d406e8200         fmul dword ptr [0x826e40]
// 00680c84  dd542428             fst qword ptr [esp + 0x28]
// 00680c88  3bc1                 cmp eax, ecx
// 00680c8a  7210                 jb 0x680c9c
// 00680c8c  ddd8                 fstp st(0)
// 00680c8e  ff1590288000         call dword ptr [0x802890]
// 00680c94  dd442428             fld qword ptr [esp + 0x28]
// 00680c98  8b442418             mov eax, dword ptr [esp + 0x18]
// 00680c9c  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00680ca2  dcc8                 fmul st(0), st(0)
// 00680ca4  836c241c0c           sub dword ptr [esp + 0x1c], 0xc
// 00680ca9  48                   dec eax
// 00680caa  dc05001e8200         fadd qword ptr [0x821e00]
// 00680cb0  89442418             mov dword ptr [esp + 0x18], eax
// 00680cb4  d95c8204             fstp dword ptr [edx + eax*4 + 4]
// 00680cb8  85c0                 test eax, eax
// 00680cba  0f8d26ffffff         jge 0x680be6
// 00680cc0  68e0e68400           push 0x84e6e0
// 00680cc5  8d442454             lea eax, [esp + 0x54]
// 00680cc9  55                   push ebp
// 00680cca  50                   push eax
// 00680ccb  ffd7                 call edi
// 00680ccd  83c40c               add esp, 0xc
// 00680cd0  8b13                 mov edx, dword ptr [ebx]
// 00680cd2  50                   push eax
// 00680cd3  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 00680cd9  8bcb                 mov ecx, ebx
// 00680cdb  c684243c0100002b     mov byte ptr [esp + 0x13c], 0x2b
// 00680ce3  ffd0                 call eax
// 00680ce5  8d4c2450             lea ecx, [esp + 0x50]
// 00680ce9  894648               mov dword ptr [esi + 0x48], eax
// 00680cec  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680cf4  ff1568248000         call dword ptr [0x802468]
// 00680cfa  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00680d02  eb0c                 jmp 0x680d10
// 00680d04  8da42400000000       lea esp, [esp]
// 00680d0b  eb03                 jmp 0x680d10
// 00680d0d  8d4900               lea ecx, [ecx]
// 00680d10  68c4638100           push 0x8163c4
// 00680d15  8d4c2474             lea ecx, [esp + 0x74]
// 00680d19  ff1558248000         call dword ptr [0x802458]
// 00680d1f  c68424380100002c     mov byte ptr [esp + 0x138], 0x2c
// 00680d27  ff15604e8000         call dword ptr [0x804e60]
// 00680d2d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00680d31  6a00                 push 0
// 00680d33  6a20                 push 0x20
// 00680d35  6a00                 push 0
// 00680d37  51                   push ecx
// 00680d38  8d942408010000       lea edx, [esp + 0x108]
// 00680d3f  52                   push edx
// 00680d40  8bd8                 mov ebx, eax
// 00680d42  ff15904e8000         call dword ptr [0x804e90]
// 00680d48  8944243c             mov dword ptr [esp + 0x3c], eax
// 00680d4c  68d4e68400           push 0x84e6d4
// 00680d51  8d8424f4000000       lea eax, [esp + 0xf4]
// 00680d58  55                   push ebp
// 00680d59  50                   push eax
// 00680d5a  c68424580100002d     mov byte ptr [esp + 0x158], 0x2d
// 00680d62  ffd7                 call edi
// 00680d64  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00680d68  51                   push ecx
// 00680d69  50                   push eax
// 00680d6a  8d94243c010000       lea edx, [esp + 0x13c]
// 00680d71  52                   push edx
// 00680d72  c68424640100002e     mov byte ptr [esp + 0x164], 0x2e
// 00680d7a  ff15a8248000         call dword ptr [0x8024a8]
// 00680d80  83c42c               add esp, 0x2c
// 00680d83  8b13                 mov edx, dword ptr [ebx]
// 00680d85  8b5210               mov edx, dword ptr [edx + 0x10]
// 00680d88  6a00                 push 0
// 00680d8a  6a00                 push 0
// 00680d8c  6a00                 push 0
// 00680d8e  8d4c247c             lea ecx, [esp + 0x7c]
// 00680d92  51                   push ecx
// 00680d93  50                   push eax
// 00680d94  8d442454             lea eax, [esp + 0x54]
// 00680d98  50                   push eax
// 00680d99  8bcb                 mov ecx, ebx
// 00680d9b  c68424500100002f     mov byte ptr [esp + 0x150], 0x2f
// 00680da3  ffd2                 call edx
// 00680da5  50                   push eax
// 00680da6  8d4e78               lea ecx, [esi + 0x78]
// 00680da9  c684243c01000030     mov byte ptr [esp + 0x13c], 0x30
// 00680db1  ff1568428000         call dword ptr [0x804268]
// 00680db7  8b442448             mov eax, dword ptr [esp + 0x48]
// 00680dbb  c68424380100002f     mov byte ptr [esp + 0x138], 0x2f
// 00680dc3  c7442440c46b8200     mov dword ptr [esp + 0x40], 0x826bc4
// 00680dcb  85c0                 test eax, eax
// 00680dcd  7418                 je 0x680de7
// 00680dcf  ff08                 dec dword ptr [eax]
// 00680dd1  8b442448             mov eax, dword ptr [esp + 0x48]
// 00680dd5  833800               cmp dword ptr [eax], 0
// 00680dd8  750d                 jne 0x680de7
// 00680dda  8b542440             mov edx, dword ptr [esp + 0x40]
// 00680dde  8b4204               mov eax, dword ptr [edx + 4]
// 00680de1  8d4c2440             lea ecx, [esp + 0x40]
// 00680de5  ffd0                 call eax
// 00680de7  8d8c2414010000       lea ecx, [esp + 0x114]
// 00680dee  c68424380100002e     mov byte ptr [esp + 0x138], 0x2e
// 00680df6  ff1568248000         call dword ptr [0x802468]
// 00680dfc  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00680e03  c68424380100002d     mov byte ptr [esp + 0x138], 0x2d
// 00680e0b  ff1568248000         call dword ptr [0x802468]
// 00680e11  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00680e18  c68424380100002c     mov byte ptr [esp + 0x138], 0x2c
// 00680e20  ff1568248000         call dword ptr [0x802468]
// 00680e26  8d4c2470             lea ecx, [esp + 0x70]
// 00680e2a  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 00680e32  ff1568248000         call dword ptr [0x802468]
// 00680e38  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00680e3b  6a00                 push 0
// 00680e3d  ff1500468000         call dword ptr [0x804600]
// 00680e43  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00680e46  6a00                 push 0
// 00680e48  ff151c4c8000         call dword ptr [0x804c1c]
// 00680e4e  db442418             fild dword ptr [esp + 0x18]
// 00680e52  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00680e55  51                   push ecx
// 00680e56  d9542440             fst dword ptr [esp + 0x40]
// 00680e5a  d805f8498200         fadd dword ptr [0x8249f8]
// 00680e60  d91c24               fstp dword ptr [esp]
// 00680e63  ff15ec458000         call dword ptr [0x8045ec]
// 00680e69  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00680e6d  6a00                 push 0
// 00680e6f  6a20                 push 0x20
// 00680e71  6a00                 push 0
// 00680e73  51                   push ecx
// 00680e74  8d9424ec000000       lea edx, [esp + 0xec]
// 00680e7b  52                   push edx
// 00680e7c  ff15904e8000         call dword ptr [0x804e90]
// 00680e82  8bd8                 mov ebx, eax
// 00680e84  68d0e68400           push 0x84e6d0
// 00680e89  8d842410010000       lea eax, [esp + 0x110]
// 00680e90  55                   push ebp
// 00680e91  50                   push eax
// 00680e92  c684245801000031     mov byte ptr [esp + 0x158], 0x31
// 00680e9a  ffd7                 call edi
// 00680e9c  53                   push ebx
// 00680e9d  50                   push eax
// 00680e9e  8d4c2478             lea ecx, [esp + 0x78]
// 00680ea2  51                   push ecx
// 00680ea3  c684246401000032     mov byte ptr [esp + 0x164], 0x32
// 00680eab  ff15a8248000         call dword ptr [0x8024a8]
// 00680eb1  83c42c               add esp, 0x2c
// 00680eb4  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00680ebb  c684243801000034     mov byte ptr [esp + 0x138], 0x34
// 00680ec3  ff1568248000         call dword ptr [0x802468]
// 00680ec9  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00680ed0  c684243801000035     mov byte ptr [esp + 0x138], 0x35
// 00680ed8  ff1568248000         call dword ptr [0x802468]
// 00680ede  68d4010000           push 0x1d4
// 00680ee3  e838fa0100           call 0x6a0920
// 00680ee8  8bd8                 mov ebx, eax
// 00680eea  83c404               add esp, 4
// 00680eed  895c2428             mov dword ptr [esp + 0x28], ebx
// 00680ef1  c684243801000036     mov byte ptr [esp + 0x138], 0x36
// 00680ef9  85db                 test ebx, ebx
// 00680efb  7422                 je 0x680f1f
// 00680efd  8d542450             lea edx, [esp + 0x50]
// 00680f01  52                   push edx
// 00680f02  8bcb                 mov ecx, ebx
// 00680f04  ff15e8458000         call dword ptr [0x8045e8]
// 00680f0a  8bcb                 mov ecx, ebx
// 00680f0c  c7038ce58400         mov dword ptr [ebx], 0x84e58c
// 00680f12  c7430474e58400       mov dword ptr [ebx + 4], 0x84e574
// 00680f19  894c2434             mov dword ptr [esp + 0x34], ecx
// 00680f1d  eb0c                 jmp 0x680f2b
// 00680f1f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00680f27  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00680f2b  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00680f2e  8b11                 mov edx, dword ptr [ecx]
// 00680f30  83c024               add eax, 0x24
// 00680f33  6a01                 push 1
// 00680f35  50                   push eax
// 00680f36  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 00680f3c  c684244001000035     mov byte ptr [esp + 0x140], 0x35
// 00680f44  ffd0                 call eax
// 00680f46  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00680f4c  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00680f52  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00680f57  f7e9                 imul ecx
// 00680f59  d1fa                 sar edx, 1
// 00680f5b  8bca                 mov ecx, edx
// 00680f5d  c1e91f               shr ecx, 0x1f
// 00680f60  03ca                 add ecx, edx
// 00680f62  33db                 xor ebx, ebx
// 00680f64  85c9                 test ecx, ecx
// 00680f66  0f8e79010000         jle 0x6810e5
// 00680f6c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00680f70  4a                   dec edx
// 00680f71  89542428             mov dword ptr [esp + 0x28], edx
// 00680f75  db442428             fild dword ptr [esp + 0x28]
// 00680f79  895c2438             mov dword ptr [esp + 0x38], ebx
// 00680f7d  d95c2428             fstp dword ptr [esp + 0x28]
// 00680f81  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00680f87  2b86ac000000         sub eax, dword ptr [esi + 0xac]
// 00680f8d  c1f802               sar eax, 2
// 00680f90  3bd8                 cmp ebx, eax
// 00680f92  7206                 jb 0x680f9a
// 00680f94  ff1590288000         call dword ptr [0x802890]
// 00680f9a  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 00680fa0  d90499               fld dword ptr [ecx + ebx*4]
// 00680fa3  d80d80e38100         fmul dword ptr [0x81e380]
// 00680fa9  d85c2428             fcomp dword ptr [esp + 0x28]
// 00680fad  dfe0                 fnstsw ax
// 00680faf  f6c441               test ah, 0x41
// 00680fb2  0f8503010000         jne 0x6810bb
// 00680fb8  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 00680fbe  2bd1                 sub edx, ecx
// 00680fc0  c1fa02               sar edx, 2
// 00680fc3  3bda                 cmp ebx, edx
// 00680fc5  7206                 jb 0x680fcd
// 00680fc7  ff1590288000         call dword ptr [0x802890]
// 00680fcd  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00680fd3  d90498               fld dword ptr [eax + ebx*4]
// 00680fd6  d80d80e38100         fmul dword ptr [0x81e380]
// 00680fdc  d85c243c             fcomp dword ptr [esp + 0x3c]
// 00680fe0  dfe0                 fnstsw ax
// 00680fe2  f6c441               test ah, 0x41
// 00680fe5  0f8ad0000000         jp 0x6810bb
// 00680feb  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00680ff1  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00680ff7  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00680ffc  f7e9                 imul ecx
// 00680ffe  d1fa                 sar edx, 1
// 00681000  8bca                 mov ecx, edx
// 00681002  c1e91f               shr ecx, 0x1f
// 00681005  03ca                 add ecx, edx
// 00681007  3bd9                 cmp ebx, ecx
// 00681009  7206                 jb 0x681011
// 0068100b  ff1590288000         call dword ptr [0x802890]
// 00681011  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00681017  03442438             add eax, dword ptr [esp + 0x38]
// 0068101b  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00681021  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 00681027  8944241c             mov dword ptr [esp + 0x1c], eax
// 0068102b  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00681030  f7e9                 imul ecx
// 00681032  d1fa                 sar edx, 1
// 00681034  8bc2                 mov eax, edx
// 00681036  c1e81f               shr eax, 0x1f
// 00681039  03c2                 add eax, edx
// 0068103b  3bd8                 cmp ebx, eax
// 0068103d  7206                 jb 0x681045
// 0068103f  ff1590288000         call dword ptr [0x802890]
// 00681045  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 0068104b  2b9694000000         sub edx, dword ptr [esi + 0x94]
// 00681051  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00681057  034c2438             add ecx, dword ptr [esp + 0x38]
// 0068105b  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00681060  f7ea                 imul edx
// 00681062  d1fa                 sar edx, 1
// 00681064  8bc2                 mov eax, edx
// 00681066  c1e81f               shr eax, 0x1f
// 00681069  03c2                 add eax, edx
// 0068106b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0068106f  3bd8                 cmp ebx, eax
// 00681071  720a                 jb 0x68107d
// 00681073  ff1590288000         call dword ptr [0x802890]
// 00681079  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0068107d  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00681083  03442438             add eax, dword ptr [esp + 0x38]
// 00681087  8b542434             mov edx, dword ptr [esp + 0x34]
// 0068108b  89442424             mov dword ptr [esp + 0x24], eax
// 0068108f  8b02                 mov eax, dword ptr [edx]
// 00681091  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00681095  d94208               fld dword ptr [edx + 8]
// 00681098  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 0068109e  83ec0c               sub esp, 0xc
// 006810a1  d95c2408             fstp dword ptr [esp + 8]
// 006810a5  d94104               fld dword ptr [ecx + 4]
// 006810a8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006810ac  d95c2404             fstp dword ptr [esp + 4]
// 006810b0  d901                 fld dword ptr [ecx]
// 006810b2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006810b6  d91c24               fstp dword ptr [esp]
// 006810b9  ffd2                 call edx
// 006810bb  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 006810c1  2b8e94000000         sub ecx, dword ptr [esi + 0x94]
// 006810c7  834424380c           add dword ptr [esp + 0x38], 0xc
// 006810cc  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006810d1  f7e9                 imul ecx
// 006810d3  d1fa                 sar edx, 1
// 006810d5  8bc2                 mov eax, edx
// 006810d7  c1e81f               shr eax, 0x1f
// 006810da  43                   inc ebx
// 006810db  03c2                 add eax, edx
// 006810dd  3bd8                 cmp ebx, eax
// 006810df  0f8c9cfeffff         jl 0x680f81
// 006810e5  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006810e9  8b13                 mov edx, dword ptr [ebx]
// 006810eb  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 006810f1  8bcb                 mov ecx, ebx
// 006810f3  ffd0                 call eax
// 006810f5  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006810f8  8b13                 mov edx, dword ptr [ebx]
// 006810fa  83c024               add eax, 0x24
// 006810fd  50                   push eax
// 006810fe  8b822c010000         mov eax, dword ptr [edx + 0x12c]
// 00681104  6a00                 push 0
// 00681106  8bcb                 mov ecx, ebx
// 00681108  ffd0                 call eax
// 0068110a  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0068110d  8b11                 mov edx, dword ptr [ecx]
// 0068110f  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 00681115  53                   push ebx
// 00681116  ffd0                 call eax
// 00681118  8d4c2450             lea ecx, [esp + 0x50]
// 0068111c  c683a400000000       mov byte ptr [ebx + 0xa4], 0
// 00681123  c68424380100000b     mov byte ptr [esp + 0x138], 0xb
// 0068112b  ff1568248000         call dword ptr [0x802468]
// 00681131  8b442418             mov eax, dword ptr [esp + 0x18]
// 00681135  40                   inc eax
// 00681136  83f803               cmp eax, 3
// 00681139  89442418             mov dword ptr [esp + 0x18], eax
// 0068113d  0f8ecdfbffff         jle 0x680d10
// 00681143  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 0068114a  5f                   pop edi
// 0068114b  8bc6                 mov eax, esi
// 0068114d  5e                   pop esi
// 0068114e  5d                   pop ebp
// 0068114f  64890d00000000       mov dword ptr fs:[0], ecx
// 00681156  5b                   pop ebx
// 00681157  81c42c010000         add esp, 0x12c
// 0068115d  c20c00               ret 0xc

void func_0067fd60()
{
}
