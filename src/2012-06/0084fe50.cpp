// roc 2012-06 0084fe50  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 743 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084fe50
//
// 0084fe50  83ec28               sub esp, 0x28
// 0084fe53  53                   push ebx
// 0084fe54  56                   push esi
// 0084fe55  8b742434             mov esi, dword ptr [esp + 0x34]
// 0084fe59  57                   push edi
// 0084fe5a  8b7e08               mov edi, dword ptr [esi + 8]
// 0084fe5d  6a00                 push 0
// 0084fe5f  68e83bb400           push 0xb43be8
// 0084fe64  bb01000000           mov ebx, 1
// 0084fe69  56                   push esi
// 0084fe6a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0084fe6e  e8bd640e00           call 0x936330
// 0084fe73  8907                 mov dword ptr [edi], eax
// 0084fe75  c7470804000000       mov dword ptr [edi + 8], 4
// 0084fe7c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0084fe7f  2b4608               sub eax, dword ptr [esi + 8]
// 0084fe82  83c40c               add esp, 0xc
// 0084fe85  83f810               cmp eax, 0x10
// 0084fe88  7f0a                 jg 0x84fe94
// 0084fe8a  53                   push ebx
// 0084fe8b  56                   push esi
// 0084fe8c  e8cf480000           call 0x854760
// 0084fe91  83c408               add esp, 8
// 0084fe94  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0084fe98  83460810             add dword ptr [esi + 8], 0x10
// 0084fe9c  55                   push ebp
// 0084fe9d  6a25                 push 0x25
// 0084fe9f  57                   push edi
// 0084fea0  ff15442ab200         call dword ptr [0xb22a44]
// 0084fea6  83c408               add esp, 8
// 0084fea9  89442418             mov dword ptr [esp + 0x18], eax
// 0084fead  85c0                 test eax, eax
// 0084feaf  0f84a2010000         je 0x850057
// 0084feb5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0084feb9  8d69fc               lea ebp, [ecx - 4]
// 0084febc  83c1f8               add ecx, -8
// 0084febf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0084fec3  eb04                 jmp 0x84fec9
// 0084fec5  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084fec9  8b5e08               mov ebx, dword ptr [esi + 8]
// 0084fecc  2bc7                 sub eax, edi
// 0084fece  50                   push eax
// 0084fecf  57                   push edi
// 0084fed0  56                   push esi
// 0084fed1  e85a640e00           call 0x936330
// 0084fed6  8903                 mov dword ptr [ebx], eax
// 0084fed8  c7430804000000       mov dword ptr [ebx + 8], 4
// 0084fedf  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0084fee2  2b4e08               sub ecx, dword ptr [esi + 8]
// 0084fee5  bb10000000           mov ebx, 0x10
// 0084feea  83c40c               add esp, 0xc
// 0084feed  3bcb                 cmp ecx, ebx
// 0084feef  7f0b                 jg 0x84fefc
// 0084fef1  6a01                 push 1
// 0084fef3  56                   push esi
// 0084fef4  e867480000           call 0x854760
// 0084fef9  83c408               add esp, 8
// 0084fefc  015e08               add dword ptr [esi + 8], ebx
// 0084feff  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084ff03  8a4201               mov al, byte ptr [edx + 1]
// 0084ff06  8b7e08               mov edi, dword ptr [esi + 8]
// 0084ff09  0fbec8               movsx ecx, al
// 0084ff0c  83c1db               add ecx, -0x25
// 0084ff0f  83f94e               cmp ecx, 0x4e
// 0084ff12  0f87c9000000         ja 0x84ffe1
// 0084ff18  0fb689e8008500       movzx ecx, byte ptr [ecx + 0x8500e8]
// 0084ff1f  ff248dcc008500       jmp dword ptr [ecx*4 + 0x8500cc]
// 0084ff26  8b5504               mov edx, dword ptr [ebp + 4]
// 0084ff29  8344241404           add dword ptr [esp + 0x14], 4
// 0084ff2e  83c504               add ebp, 4
// 0084ff31  85d2                 test edx, edx
// 0084ff33  7505                 jne 0x84ff3a
// 0084ff35  ba382ebd00           mov edx, 0xbd2e38
// 0084ff3a  e8c1feffff           call 0x84fe00
// 0084ff3f  e9eb000000           jmp 0x85002f
// 0084ff44  8a5504               mov dl, byte ptr [ebp + 4]
// 0084ff47  8344241404           add dword ptr [esp + 0x14], 4
// 0084ff4c  83c504               add ebp, 4
// 0084ff4f  8854243c             mov byte ptr [esp + 0x3c], dl
// 0084ff53  8d54243c             lea edx, [esp + 0x3c]
// 0084ff57  c644243d00           mov byte ptr [esp + 0x3d], 0
// 0084ff5c  e89ffeffff           call 0x84fe00
// 0084ff61  e9c9000000           jmp 0x85002f
// 0084ff66  db4504               fild dword ptr [ebp + 4]
// 0084ff69  8344241404           add dword ptr [esp + 0x14], 4
// 0084ff6e  83c504               add ebp, 4
// 0084ff71  c7470803000000       mov dword ptr [edi + 8], 3
// 0084ff78  dd1f                 fstp qword ptr [edi]
// 0084ff7a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0084ff7d  2b4608               sub eax, dword ptr [esi + 8]
// 0084ff80  3bc3                 cmp eax, ebx
// 0084ff82  e998000000           jmp 0x85001f
// 0084ff87  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084ff8b  dd4008               fld qword ptr [eax + 8]
// 0084ff8e  83c008               add eax, 8
// 0084ff91  dd1f                 fstp qword ptr [edi]
// 0084ff93  c7470803000000       mov dword ptr [edi + 8], 3
// 0084ff9a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0084ff9d  2b4e08               sub ecx, dword ptr [esi + 8]
// 0084ffa0  83c508               add ebp, 8
// 0084ffa3  89442414             mov dword ptr [esp + 0x14], eax
// 0084ffa7  3bcb                 cmp ecx, ebx
// 0084ffa9  eb74                 jmp 0x85001f
// 0084ffab  8b5504               mov edx, dword ptr [ebp + 4]
// 0084ffae  8344241404           add dword ptr [esp + 0x14], 4
// 0084ffb3  83c504               add ebp, 4
// 0084ffb6  52                   push edx
// 0084ffb7  8d442424             lea eax, [esp + 0x24]
// 0084ffbb  68342ebd00           push 0xbd2e34
// 0084ffc0  50                   push eax
// 0084ffc1  ff15402ab200         call dword ptr [0xb22a40]
// 0084ffc7  83c40c               add esp, 0xc
// 0084ffca  8d542420             lea edx, [esp + 0x20]
// 0084ffce  e82dfeffff           call 0x84fe00
// 0084ffd3  eb5a                 jmp 0x85002f
// 0084ffd5  ba302ebd00           mov edx, 0xbd2e30
// 0084ffda  e821feffff           call 0x84fe00
// 0084ffdf  eb4e                 jmp 0x85002f
// 0084ffe1  88442411             mov byte ptr [esp + 0x11], al
// 0084ffe5  8d442410             lea eax, [esp + 0x10]
// 0084ffe9  c644241025           mov byte ptr [esp + 0x10], 0x25
// 0084ffee  c644241200           mov byte ptr [esp + 0x12], 0
// 0084fff3  8d5001               lea edx, [eax + 1]
// 0084fff6  8a08                 mov cl, byte ptr [eax]
// 0084fff8  40                   inc eax
// 0084fff9  84c9                 test cl, cl
// 0084fffb  75f9                 jne 0x84fff6
// 0084fffd  2bc2                 sub eax, edx
// 0084ffff  50                   push eax
// 00850000  8d4c2414             lea ecx, [esp + 0x14]
// 00850004  51                   push ecx
// 00850005  56                   push esi
// 00850006  e825630e00           call 0x936330
// 0085000b  8907                 mov dword ptr [edi], eax
// 0085000d  c7470804000000       mov dword ptr [edi + 8], 4
// 00850014  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00850017  2b5608               sub edx, dword ptr [esi + 8]
// 0085001a  83c40c               add esp, 0xc
// 0085001d  3bd3                 cmp edx, ebx
// 0085001f  7f0b                 jg 0x85002c
// 00850021  6a01                 push 1
// 00850023  56                   push esi
// 00850024  e837470000           call 0x854760
// 00850029  83c408               add esp, 8
// 0085002c  015e08               add dword ptr [esi + 8], ebx
// 0085002f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00850033  8344241c02           add dword ptr [esp + 0x1c], 2
// 00850038  83c702               add edi, 2
// 0085003b  6a25                 push 0x25
// 0085003d  57                   push edi
// 0085003e  ff15442ab200         call dword ptr [0xb22a44]
// 00850044  83c408               add esp, 8
// 00850047  89442418             mov dword ptr [esp + 0x18], eax
// 0085004b  85c0                 test eax, eax
// 0085004d  0f8572feffff         jne 0x84fec5
// 00850053  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00850057  8b6e08               mov ebp, dword ptr [esi + 8]
// 0085005a  8bc7                 mov eax, edi
// 0085005c  8d5001               lea edx, [eax + 1]
// 0085005f  90                   nop 
// 00850060  8a08                 mov cl, byte ptr [eax]
// 00850062  40                   inc eax
// 00850063  84c9                 test cl, cl
// 00850065  75f9                 jne 0x850060
// 00850067  2bc2                 sub eax, edx
// 00850069  50                   push eax
// 0085006a  57                   push edi
// 0085006b  56                   push esi
// 0085006c  e8bf620e00           call 0x936330
// 00850071  894500               mov dword ptr [ebp], eax
// 00850074  c7450804000000       mov dword ptr [ebp + 8], 4
// 0085007b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0085007e  2b4608               sub eax, dword ptr [esi + 8]
// 00850081  83c40c               add esp, 0xc
// 00850084  83f810               cmp eax, 0x10
// 00850087  5d                   pop ebp
// 00850088  7f0b                 jg 0x850095
// 0085008a  6a01                 push 1
// 0085008c  56                   push esi
// 0085008d  e8ce460000           call 0x854760
// 00850092  83c408               add esp, 8
// 00850095  83460810             add dword ptr [esi + 8], 0x10
// 00850099  8b4608               mov eax, dword ptr [esi + 8]
// 0085009c  2b460c               sub eax, dword ptr [esi + 0xc]
// 0085009f  8d4b01               lea ecx, [ebx + 1]
// 008500a2  c1f804               sar eax, 4
// 008500a5  48                   dec eax
// 008500a6  50                   push eax
// 008500a7  51                   push ecx
// 008500a8  56                   push esi
// 008500a9  e8923d0e00           call 0x933e40
// 008500ae  f7db                 neg ebx
// 008500b0  c1e304               shl ebx, 4
// 008500b3  015e08               add dword ptr [esi + 8], ebx
// 008500b6  8b7608               mov esi, dword ptr [esi + 8]
// 008500b9  8b46f0               mov eax, dword ptr [esi - 0x10]
// 008500bc  83c40c               add esp, 0xc
// 008500bf  5f                   pop edi
// 008500c0  5e                   pop esi
// 008500c1  83c010               add eax, 0x10
// 008500c4  5b                   pop ebx
// 008500c5  83c428               add esp, 0x28
// 008500c8  c3                   ret 
// 008500c9  8d4900               lea ecx, [ecx]
// 008500cc  d5ff                 aad 0xff
// 008500ce  8400                 test byte ptr [eax], al
// 008500d0  44                   inc esp
// 008500d1  ff840066ff8400       inc dword ptr [eax + eax + 0x84ff66]
// 008500d8  87ff                 xchg edi, edi
// 008500da  8400                 test byte ptr [eax], al
// 008500dc  ab                   stosd dword ptr es:[edi], eax
// 008500dd  ff840026ff8400       inc dword ptr [eax + eax + 0x84ff26]
// 008500e4  e1ff                 loope 0x8500e5
// 008500e6  8400                 test byte ptr [eax], al
// 008500e8  0006                 add byte ptr [esi], al
// 008500ea  06                   push es
// 008500eb  06                   push es
// 008500ec  06                   push es
// 008500ed  06                   push es
// 008500ee  06                   push es
// 008500ef  06                   push es
// 008500f0  06                   push es
// 008500f1  06                   push es
// 008500f2  06                   push es
// 008500f3  06                   push es
// 008500f4  06                   push es
// 008500f5  06                   push es
// 008500f6  06                   push es
// 008500f7  06                   push es
// 008500f8  06                   push es
// 008500f9  06                   push es
// 008500fa  06                   push es
// 008500fb  06                   push es
// 008500fc  06                   push es
// 008500fd  06                   push es
// 008500fe  06                   push es
// 008500ff  06                   push es
// 00850100  06                   push es
// 00850101  06                   push es
// 00850102  06                   push es
// 00850103  06                   push es
// 00850104  06                   push es
// 00850105  06                   push es
// 00850106  06                   push es
// 00850107  06                   push es
// 00850108  06                   push es
// 00850109  06                   push es
// 0085010a  06                   push es
// 0085010b  06                   push es
// 0085010c  06                   push es
// 0085010d  06                   push es
// 0085010e  06                   push es
// 0085010f  06                   push es
// 00850110  06                   push es
// 00850111  06                   push es
// 00850112  06                   push es
// 00850113  06                   push es
// 00850114  06                   push es
// 00850115  06                   push es
// 00850116  06                   push es
// 00850117  06                   push es
// 00850118  06                   push es
// 00850119  06                   push es
// 0085011a  06                   push es
// 0085011b  06                   push es
// 0085011c  06                   push es
// 0085011d  06                   push es
// 0085011e  06                   push es
// 0085011f  06                   push es
// 00850120  06                   push es
// 00850121  06                   push es
// 00850122  06                   push es
// 00850123  06                   push es
// 00850124  06                   push es
// 00850125  06                   push es
// 00850126  0102                 add dword ptr [edx], eax
// 00850128  06                   push es
// 00850129  0306                 add eax, dword ptr [esi]
// 0085012b  06                   push es
// 0085012c  06                   push es
// 0085012d  06                   push es
// 0085012e  06                   push es
// 0085012f  06                   push es
// 00850130  06                   push es
// 00850131  06                   push es
// 00850132  06                   push es
// 00850133  0406                 add al, 6
// 00850135  06                   push es
// copied from an identical function in another client (function _luaO_pushvfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c