// roc 2008-06 0043ee40  unit: RBX::Soundscape::VSoundId::?$ContentItem  size: 836 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043ee40
//
// 0043ee40  55                   push ebp
// 0043ee41  8bec                 mov ebp, esp
// 0043ee43  6aff                 push -1
// 0043ee45  6800097c00           push 0x7c0900
// 0043ee4a  64a100000000         mov eax, dword ptr fs:[0]
// 0043ee50  50                   push eax
// 0043ee51  64892500000000       mov dword ptr fs:[0], esp
// 0043ee58  83ec6c               sub esp, 0x6c
// 0043ee5b  53                   push ebx
// 0043ee5c  56                   push esi
// 0043ee5d  57                   push edi
// 0043ee5e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043ee61  8bd9                 mov ebx, ecx
// 0043ee63  33f6                 xor esi, esi
// 0043ee65  6a04                 push 4
// 0043ee67  895dec               mov dword ptr [ebp - 0x14], ebx
// 0043ee6a  8975fc               mov dword ptr [ebp - 4], esi
// 0043ee6d  e8ae1a2600           call 0x6a0920
// 0043ee72  83c404               add esp, 4
// 0043ee75  3bc6                 cmp eax, esi
// 0043ee77  7407                 je 0x43ee80
// 0043ee79  8d4da0               lea ecx, [ebp - 0x60]
// 0043ee7c  8908                 mov dword ptr [eax], ecx
// 0043ee7e  eb02                 jmp 0x43ee82
// 0043ee80  33c0                 xor eax, eax
// 0043ee82  8945a0               mov dword ptr [ebp - 0x60], eax
// 0043ee85  8975ac               mov dword ptr [ebp - 0x54], esi
// 0043ee88  8975b0               mov dword ptr [ebp - 0x50], esi
// 0043ee8b  8975b4               mov dword ptr [ebp - 0x4c], esi
// 0043ee8e  8b8328010000         mov eax, dword ptr [ebx + 0x128]
// 0043ee94  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 0043ee9a  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 0043eea0  0518020000           add eax, 0x218
// 0043eea5  8b00                 mov eax, dword ptr [eax]
// 0043eea7  c645fc02             mov byte ptr [ebp - 4], 2
// 0043eeab  8955c8               mov dword ptr [ebp - 0x38], edx
// 0043eeae  8945c4               mov dword ptr [ebp - 0x3c], eax
// 0043eeb1  39b31c010000         cmp dword ptr [ebx + 0x11c], esi
// 0043eeb7  7606                 jbe 0x43eebf
// 0043eeb9  ff1590288000         call dword ptr [0x802890]
// 0043eebf  8b8b10010000         mov ecx, dword ptr [ebx + 0x110]
// 0043eec5  8975d0               mov dword ptr [ebp - 0x30], esi
// 0043eec8  8bb31c010000         mov esi, dword ptr [ebx + 0x11c]
// 0043eece  894dcc               mov dword ptr [ebp - 0x34], ecx
// 0043eed1  3bb320010000         cmp esi, dword ptr [ebx + 0x120]
// 0043eed7  7606                 jbe 0x43eedf
// 0043eed9  ff1590288000         call dword ptr [0x802890]
// 0043eedf  8bbb10010000         mov edi, dword ptr [ebx + 0x110]
// 0043eee5  897dd4               mov dword ptr [ebp - 0x2c], edi
// 0043eee8  8975d8               mov dword ptr [ebp - 0x28], esi
// 0043eeeb  eb03                 jmp 0x43eef0
// 0043eeed  8d4900               lea ecx, [ecx]
// 0043eef0  85ff                 test edi, edi
// 0043eef2  7405                 je 0x43eef9
// 0043eef4  3b7dcc               cmp edi, dword ptr [ebp - 0x34]
// 0043eef7  7406                 je 0x43eeff
// 0043eef9  ff1590288000         call dword ptr [0x802890]
// 0043eeff  3b75d0               cmp esi, dword ptr [ebp - 0x30]
// 0043ef02  0f8462010000         je 0x43f06a
// 0043ef08  85ff                 test edi, edi
// 0043ef0a  0f850a010000         jne 0x43f01a
// 0043ef10  ff1590288000         call dword ptr [0x802890]
// 0043ef16  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0043ef19  7206                 jb 0x43ef21
// 0043ef1b  ff1590288000         call dword ptr [0x802890]
// 0043ef21  8b16                 mov edx, dword ptr [esi]
// 0043ef23  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 0043ef29  8d45e8               lea eax, [ebp - 0x18]
// 0043ef2c  8955e8               mov dword ptr [ebp - 0x18], edx
// 0043ef2f  50                   push eax
// 0043ef30  8d55bc               lea edx, [ebp - 0x44]
// 0043ef33  81c118020000         add ecx, 0x218
// 0043ef39  52                   push edx
// 0043ef3a  e8e1b3ffff           call 0x43a320
// 0043ef3f  8b7dbc               mov edi, dword ptr [ebp - 0x44]
// 0043ef42  85ff                 test edi, edi
// 0043ef44  7405                 je 0x43ef4b
// 0043ef46  3b7dc4               cmp edi, dword ptr [ebp - 0x3c]
// 0043ef49  7406                 je 0x43ef51
// 0043ef4b  ff1590288000         call dword ptr [0x802890]
// 0043ef51  8b75c0               mov esi, dword ptr [ebp - 0x40]
// 0043ef54  3b75c8               cmp esi, dword ptr [ebp - 0x38]
// 0043ef57  0f84dd000000         je 0x43f03a
// 0043ef5d  85ff                 test edi, edi
// 0043ef5f  0f85bc000000         jne 0x43f021
// 0043ef65  ff1590288000         call dword ptr [0x802890]
// 0043ef6b  33c0                 xor eax, eax
// 0043ef6d  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043ef70  7506                 jne 0x43ef78
// 0043ef72  ff1590288000         call dword ptr [0x802890]
// 0043ef78  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0043ef7b  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 0043ef7e  7606                 jbe 0x43ef86
// 0043ef80  ff1590288000         call dword ptr [0x802890]
// 0043ef86  8b4610               mov eax, dword ptr [esi + 0x10]
// 0043ef89  895de0               mov dword ptr [ebp - 0x20], ebx
// 0043ef8c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043ef92  8945dc               mov dword ptr [ebp - 0x24], eax
// 0043ef95  85ff                 test edi, edi
// 0043ef97  0f858b000000         jne 0x43f028
// 0043ef9d  ffd3                 call ebx
// 0043ef9f  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043efa2  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043efa5  7505                 jne 0x43efac
// 0043efa7  ffd3                 call ebx
// 0043efa9  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043efac  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043efaf  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043efb2  7605                 jbe 0x43efb9
// 0043efb4  ffd3                 call ebx
// 0043efb6  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043efb9  8b7610               mov esi, dword ptr [esi + 0x10]
// 0043efbc  8d642400             lea esp, [esp]
// 0043efc0  85c0                 test eax, eax
// 0043efc2  7404                 je 0x43efc8
// 0043efc4  3bc6                 cmp eax, esi
// 0043efc6  7405                 je 0x43efcd
// 0043efc8  ffd3                 call ebx
// 0043efca  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043efcd  397de0               cmp dword ptr [ebp - 0x20], edi
// 0043efd0  7465                 je 0x43f037
// 0043efd2  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043efd8  85c0                 test eax, eax
// 0043efda  7553                 jne 0x43f02f
// 0043efdc  ffd3                 call ebx
// 0043efde  33c0                 xor eax, eax
// 0043efe0  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0043efe3  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0043efe6  7202                 jb 0x43efea
// 0043efe8  ffd3                 call ebx
// 0043efea  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0043efed  52                   push edx
// 0043efee  8d4da0               lea ecx, [ebp - 0x60]
// 0043eff1  e81a11feff           call 0x420110
// 0043eff6  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043eff9  85c0                 test eax, eax
// 0043effb  7536                 jne 0x43f033
// 0043effd  ffd3                 call ebx
// 0043efff  33c0                 xor eax, eax
// 0043f001  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0043f004  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0043f007  7202                 jb 0x43f00b
// 0043f009  ffd3                 call ebx
// 0043f00b  8345e008             add dword ptr [ebp - 0x20], 8
// 0043f00f  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043f015  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043f018  eba6                 jmp 0x43efc0
// 0043f01a  8b3f                 mov edi, dword ptr [edi]
// 0043f01c  e9f5feffff           jmp 0x43ef16
// 0043f021  8b07                 mov eax, dword ptr [edi]
// 0043f023  e945ffffff           jmp 0x43ef6d
// 0043f028  8b3f                 mov edi, dword ptr [edi]
// 0043f02a  e973ffffff           jmp 0x43efa2
// 0043f02f  8b00                 mov eax, dword ptr [eax]
// 0043f031  ebad                 jmp 0x43efe0
// 0043f033  8b00                 mov eax, dword ptr [eax]
// 0043f035  ebca                 jmp 0x43f001
// 0043f037  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0043f03a  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0043f03d  85c0                 test eax, eax
// 0043f03f  7525                 jne 0x43f066
// 0043f041  ff1590288000         call dword ptr [0x802890]
// 0043f047  33c0                 xor eax, eax
// 0043f049  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 0043f04c  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0043f04f  7206                 jb 0x43f057
// 0043f051  ff1590288000         call dword ptr [0x802890]
// 0043f057  8345d804             add dword ptr [ebp - 0x28], 4
// 0043f05b  8b7dd4               mov edi, dword ptr [ebp - 0x2c]
// 0043f05e  8b75d8               mov esi, dword ptr [ebp - 0x28]
// 0043f061  e98afeffff           jmp 0x43eef0
// 0043f066  8b00                 mov eax, dword ptr [eax]
// 0043f068  ebdf                 jmp 0x43f049
// 0043f06a  8b7508               mov esi, dword ptr [ebp + 8]
// 0043f06d  d906                 fld dword ptr [esi]
// 0043f06f  8b75c0               mov esi, dword ptr [ebp - 0x40]
// 0043f072  33c9                 xor ecx, ecx
// 0043f074  d95d08               fstp dword ptr [ebp + 8]
// 0043f077  8b7d08               mov edi, dword ptr [ebp + 8]
// 0043f07a  b820a74300           mov eax, 0x43a720
// 0043f07f  8bd8                 mov ebx, eax
// 0043f081  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 0043f084  894d8c               mov dword ptr [ebp - 0x74], ecx
// 0043f087  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 0043f08a  ba10f27100           mov edx, 0x71f210
// 0043f08f  895594               mov dword ptr [ebp - 0x6c], edx
// 0043f092  894508               mov dword ptr [ebp + 8], eax
// 0043f095  3bc8                 cmp ecx, eax
// 0043f097  760c                 jbe 0x43f0a5
// 0043f099  ff1590288000         call dword ptr [0x802890]
// 0043f09f  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 0043f0a2  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 0043f0a5  8b55a0               mov edx, dword ptr [ebp - 0x60]
// 0043f0a8  8955bc               mov dword ptr [ebp - 0x44], edx
// 0043f0ab  894de8               mov dword ptr [ebp - 0x18], ecx
// 0043f0ae  3bc8                 cmp ecx, eax
// 0043f0b0  7606                 jbe 0x43f0b8
// 0043f0b2  ff1590288000         call dword ptr [0x802890]
// 0043f0b8  8b4d8c               mov ecx, dword ptr [ebp - 0x74]
// 0043f0bb  8b5594               mov edx, dword ptr [ebp - 0x6c]
// 0043f0be  83ec18               sub esp, 0x18
// 0043f0c1  8bc4                 mov eax, esp
// 0043f0c3  8918                 mov dword ptr [eax], ebx
// 0043f0c5  894804               mov dword ptr [eax + 4], ecx
// 0043f0c8  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0043f0cb  894808               mov dword ptr [eax + 8], ecx
// 0043f0ce  8b4dbc               mov ecx, dword ptr [ebp - 0x44]
// 0043f0d1  89500c               mov dword ptr [eax + 0xc], edx
// 0043f0d4  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 0043f0d7  897010               mov dword ptr [eax + 0x10], esi
// 0043f0da  897814               mov dword ptr [eax + 0x14], edi
// 0043f0dd  8b4508               mov eax, dword ptr [ebp + 8]
// 0043f0e0  50                   push eax
// 0043f0e1  8b45a0               mov eax, dword ptr [ebp - 0x60]
// 0043f0e4  51                   push ecx
// 0043f0e5  52                   push edx
// 0043f0e6  50                   push eax
// 0043f0e7  8d4d88               lea ecx, [ebp - 0x78]
// 0043f0ea  51                   push ecx
// 0043f0eb  e850d8ffff           call 0x43c940
// 0043f0f0  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0043f0f3  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043f0f9  33c9                 xor ecx, ecx
// 0043f0fb  83c42c               add esp, 0x2c
// 0043f0fe  398898010000         cmp dword ptr [eax + 0x198], ecx
// 0043f104  7472                 je 0x43f178
// 0043f106  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043f10c  894db8               mov dword ptr [ebp - 0x48], ecx
// 0043f10f  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0043f112  894dc0               mov dword ptr [ebp - 0x40], ecx
// 0043f115  50                   push eax
// 0043f116  8d4db8               lea ecx, [ebp - 0x48]
// 0043f119  c645fc03             mov byte ptr [ebp - 4], 3
// 0043f11d  e8de7d1300           call 0x576f00
// 0043f122  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 0043f128  8b4204               mov eax, dword ptr [edx + 4]
// 0043f12b  8d4804               lea ecx, [eax + 4]
// 0043f12e  c645fc04             mov byte ptr [ebp - 4], 4
// 0043f132  ff1564248000         call dword ptr [0x802464]
// 0043f138  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0043f13e  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 0043f144  52                   push edx
// 0043f145  50                   push eax
// 0043f146  e875d41400           call 0x58c5c0
// 0043f14b  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043f151  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043f157  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 0043f15d  8d88f0010000         lea ecx, [eax + 0x1f0]
// 0043f163  8b02                 mov eax, dword ptr [edx]
// 0043f165  83c408               add esp, 8
// 0043f168  6a01                 push 1
// 0043f16a  ffd0                 call eax
// 0043f16c  8d4db8               lea ecx, [ebp - 0x48]
// 0043f16f  c645fc02             mov byte ptr [ebp - 4], 2
// 0043f173  e848821300           call 0x5773c0
// 0043f178  8d4da0               lea ecx, [ebp - 0x60]
// 0043f17b  c645fc00             mov byte ptr [ebp - 4], 0
// 0043f17f  e85c3e1600           call 0x5a2fe0

void func_0043ee40()
{
}
