// roc 2010-06 00782e40  unit: seg_00780000  size: 1156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782e40
//
// 00782e40  83ec50               sub esp, 0x50
// 00782e43  53                   push ebx
// 00782e44  56                   push esi
// 00782e45  8bd8                 mov ebx, eax
// 00782e47  8b03                 mov eax, dword ptr [ebx]
// 00782e49  57                   push edi
// 00782e4a  50                   push eax
// 00782e4b  e880f5ffff           call 0x7823d0
// 00782e50  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782e53  8b08                 mov ecx, dword ptr [eax]
// 00782e55  83c404               add esp, 4
// 00782e58  8d51ff               lea edx, [ecx - 1]
// 00782e5b  8910                 mov dword ptr [eax], edx
// 00782e5d  85c9                 test ecx, ecx
// 00782e5f  760f                 jbe 0x782e70
// 00782e61  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00782e64  8b5104               mov edx, dword ptr [ecx + 4]
// 00782e67  0fb602               movzx eax, byte ptr [edx]
// 00782e6a  42                   inc edx
// 00782e6b  895104               mov dword ptr [ecx + 4], edx
// 00782e6e  eb0c                 jmp 0x782e7c
// 00782e70  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782e73  50                   push eax
// 00782e74  e8a7b4ffff           call 0x77e320
// 00782e79  83c404               add esp, 4
// 00782e7c  8903                 mov dword ptr [ebx], eax
// 00782e7e  3b442460             cmp eax, dword ptr [esp + 0x60]
// 00782e82  0f849d020000         je 0x783125
// 00782e88  55                   push ebp
// 00782e89  8b2deca79e00         mov ebp, dword ptr [0x9ea7ec]
// 00782e8f  90                   nop 
// 00782e90  8b03                 mov eax, dword ptr [ebx]
// 00782e92  8d4801               lea ecx, [eax + 1]
// 00782e95  83f95d               cmp ecx, 0x5d
// 00782e98  0f873a010000         ja 0x782fd8
// 00782e9e  0fb689c4317800       movzx ecx, byte ptr [ecx + 0x7831c4]
// 00782ea5  ff248db4317800       jmp dword ptr [ecx*4 + 0x7831b4]
// 00782eac  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00782eaf  6a50                 push 0x50
// 00782eb1  83c210               add edx, 0x10
// 00782eb4  52                   push edx
// 00782eb5  8d442418             lea eax, [esp + 0x18]
// 00782eb9  50                   push eax
// 00782eba  e841fffaff           call 0x732e00
// 00782ebf  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00782ec2  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00782ec5  68e036a500           push 0xa536e0
// 00782eca  51                   push ecx
// 00782ecb  8d542424             lea edx, [esp + 0x24]
// 00782ecf  52                   push edx
// 00782ed0  6808dea400           push 0xa4de08
// 00782ed5  50                   push eax
// 00782ed6  e805fffaff           call 0x732de0
// 00782edb  8b0d1836a500         mov ecx, dword ptr [0xa53618]
// 00782ee1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00782ee4  51                   push ecx
// 00782ee5  50                   push eax
// 00782ee6  684c36a500           push 0xa5364c
// 00782eeb  52                   push edx
// 00782eec  e8effefaff           call 0x732de0
// 00782ef1  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00782ef4  6a03                 push 3
// 00782ef6  50                   push eax
// 00782ef7  e8b4d1faff           call 0x7300b0
// 00782efc  83c438               add esp, 0x38
// 00782eff  e914020000           jmp 0x783118
// 00782f04  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00782f07  6a50                 push 0x50
// 00782f09  83c110               add ecx, 0x10
// 00782f0c  51                   push ecx
// 00782f0d  8d542418             lea edx, [esp + 0x18]
// 00782f11  52                   push edx
// 00782f12  e8e9fefaff           call 0x732e00
// 00782f17  8b4304               mov eax, dword ptr [ebx + 4]
// 00782f1a  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00782f1d  68e036a500           push 0xa536e0
// 00782f22  50                   push eax
// 00782f23  8d4c2424             lea ecx, [esp + 0x24]
// 00782f27  51                   push ecx
// 00782f28  6808dea400           push 0xa4de08
// 00782f2d  52                   push edx
// 00782f2e  e8adfefaff           call 0x732de0
// 00782f33  6a00                 push 0
// 00782f35  8bf0                 mov esi, eax
// 00782f37  e894f4ffff           call 0x7823d0
// 00782f3c  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00782f3f  8b00                 mov eax, dword ptr [eax]
// 00782f41  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00782f44  50                   push eax
// 00782f45  56                   push esi
// 00782f46  684c36a500           push 0xa5364c
// 00782f4b  51                   push ecx
// 00782f4c  e88ffefaff           call 0x732de0
// 00782f51  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00782f54  6a03                 push 3
// 00782f56  52                   push edx
// 00782f57  e854d1faff           call 0x7300b0
// 00782f5c  83c43c               add esp, 0x3c
// 00782f5f  e9b4010000           jmp 0x783118
// 00782f64  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782f67  8b08                 mov ecx, dword ptr [eax]
// 00782f69  8d51ff               lea edx, [ecx - 1]
// 00782f6c  8910                 mov dword ptr [eax], edx
// 00782f6e  85c9                 test ecx, ecx
// 00782f70  760f                 jbe 0x782f81
// 00782f72  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00782f75  8b5104               mov edx, dword ptr [ecx + 4]
// 00782f78  0fb602               movzx eax, byte ptr [edx]
// 00782f7b  42                   inc edx
// 00782f7c  895104               mov dword ptr [ecx + 4], edx
// 00782f7f  eb0c                 jmp 0x782f8d
// 00782f81  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782f84  50                   push eax
// 00782f85  e896b3ffff           call 0x77e320
// 00782f8a  83c404               add esp, 4
// 00782f8d  8d4801               lea ecx, [eax + 1]
// 00782f90  8903                 mov dword ptr [ebx], eax
// 00782f92  83f977               cmp ecx, 0x77
// 00782f95  0f8780000000         ja 0x78301b
// 00782f9b  0fb6894c327800       movzx ecx, byte ptr [ecx + 0x78324c]
// 00782fa2  ff248d24327800       jmp dword ptr [ecx*4 + 0x783224]
// 00782fa9  b807000000           mov eax, 7
// 00782fae  eb28                 jmp 0x782fd8
// 00782fb0  b808000000           mov eax, 8
// 00782fb5  eb21                 jmp 0x782fd8
// 00782fb7  b80c000000           mov eax, 0xc
// 00782fbc  eb1a                 jmp 0x782fd8
// 00782fbe  b80a000000           mov eax, 0xa
// 00782fc3  eb13                 jmp 0x782fd8
// 00782fc5  b80d000000           mov eax, 0xd
// 00782fca  eb0c                 jmp 0x782fd8
// 00782fcc  b809000000           mov eax, 9
// 00782fd1  eb05                 jmp 0x782fd8
// 00782fd3  b80b000000           mov eax, 0xb
// 00782fd8  50                   push eax
// 00782fd9  e8f2f3ffff           call 0x7823d0
// 00782fde  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782fe1  8b08                 mov ecx, dword ptr [eax]
// 00782fe3  83c404               add esp, 4
// 00782fe6  8d51ff               lea edx, [ecx - 1]
// 00782fe9  8910                 mov dword ptr [eax], edx
// 00782feb  85c9                 test ecx, ecx
// 00782fed  0f8617010000         jbe 0x78310a
// 00782ff3  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00782ff6  8b5104               mov edx, dword ptr [ecx + 4]
// 00782ff9  0fb602               movzx eax, byte ptr [edx]
// 00782ffc  42                   inc edx
// 00782ffd  895104               mov dword ptr [ecx + 4], edx
// 00783000  e911010000           jmp 0x783116
// 00783005  6a0a                 push 0xa
// 00783007  e8c4f3ffff           call 0x7823d0
// 0078300c  83c404               add esp, 4
// 0078300f  8bf3                 mov esi, ebx
// 00783011  e8eaf5ffff           call 0x782600
// 00783016  e9fd000000           jmp 0x783118
// 0078301b  50                   push eax
// 0078301c  ffd5                 call ebp
// 0078301e  83c404               add esp, 4
// 00783021  85c0                 test eax, eax
// 00783023  752f                 jne 0x783054
// 00783025  8b0b                 mov ecx, dword ptr [ebx]
// 00783027  51                   push ecx
// 00783028  e8a3f3ffff           call 0x7823d0
// 0078302d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00783030  8b08                 mov ecx, dword ptr [eax]
// 00783032  83c404               add esp, 4
// 00783035  8d51ff               lea edx, [ecx - 1]
// 00783038  8910                 mov dword ptr [eax], edx
// 0078303a  85c9                 test ecx, ecx
// 0078303c  0f86c8000000         jbe 0x78310a
// 00783042  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00783045  8b5104               mov edx, dword ptr [ecx + 4]
// 00783048  0fb602               movzx eax, byte ptr [edx]
// 0078304b  42                   inc edx
// 0078304c  895104               mov dword ptr [ecx + 4], edx
// 0078304f  e9c2000000           jmp 0x783116
// 00783054  33f6                 xor esi, esi
// 00783056  33ff                 xor edi, edi
// 00783058  8b13                 mov edx, dword ptr [ebx]
// 0078305a  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0078305d  8d0cbf               lea ecx, [edi + edi*4]
// 00783060  8d7c4ad0             lea edi, [edx + ecx*2 - 0x30]
// 00783064  8b08                 mov ecx, dword ptr [eax]
// 00783066  8d51ff               lea edx, [ecx - 1]
// 00783069  8910                 mov dword ptr [eax], edx
// 0078306b  85c9                 test ecx, ecx
// 0078306d  760f                 jbe 0x78307e
// 0078306f  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00783072  8b5104               mov edx, dword ptr [ecx + 4]
// 00783075  0fb602               movzx eax, byte ptr [edx]
// 00783078  42                   inc edx
// 00783079  895104               mov dword ptr [ecx + 4], edx
// 0078307c  eb0c                 jmp 0x78308a
// 0078307e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00783081  50                   push eax
// 00783082  e899b2ffff           call 0x77e320
// 00783087  83c404               add esp, 4
// 0078308a  46                   inc esi
// 0078308b  83fe03               cmp esi, 3
// 0078308e  8903                 mov dword ptr [ebx], eax
// 00783090  7d0a                 jge 0x78309c
// 00783092  50                   push eax
// 00783093  ffd5                 call ebp
// 00783095  83c404               add esp, 4
// 00783098  85c0                 test eax, eax
// 0078309a  75bc                 jne 0x783058
// 0078309c  81ffff000000         cmp edi, 0xff
// 007830a2  7e5b                 jle 0x7830ff
// 007830a4  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 007830a7  6a50                 push 0x50
// 007830a9  83c110               add ecx, 0x10
// 007830ac  51                   push ecx
// 007830ad  8d542418             lea edx, [esp + 0x18]
// 007830b1  52                   push edx
// 007830b2  e849fdfaff           call 0x732e00
// 007830b7  8b4304               mov eax, dword ptr [ebx + 4]
// 007830ba  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007830bd  68c436a500           push 0xa536c4
// 007830c2  50                   push eax
// 007830c3  8d4c2424             lea ecx, [esp + 0x24]
// 007830c7  51                   push ecx
// 007830c8  6808dea400           push 0xa4de08
// 007830cd  52                   push edx
// 007830ce  e80dfdfaff           call 0x732de0
// 007830d3  6a00                 push 0
// 007830d5  8bf0                 mov esi, eax
// 007830d7  e8f4f2ffff           call 0x7823d0
// 007830dc  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 007830df  8b00                 mov eax, dword ptr [eax]
// 007830e1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007830e4  50                   push eax
// 007830e5  56                   push esi
// 007830e6  684c36a500           push 0xa5364c
// 007830eb  51                   push ecx
// 007830ec  e8effcfaff           call 0x732de0
// 007830f1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007830f4  6a03                 push 3
// 007830f6  52                   push edx
// 007830f7  e8b4cffaff           call 0x7300b0
// 007830fc  83c43c               add esp, 0x3c
// 007830ff  57                   push edi
// 00783100  e8cbf2ffff           call 0x7823d0
// 00783105  83c404               add esp, 4
// 00783108  eb0e                 jmp 0x783118
// 0078310a  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0078310d  50                   push eax
// 0078310e  e80db2ffff           call 0x77e320
// 00783113  83c404               add esp, 4
// 00783116  8903                 mov dword ptr [ebx], eax
// 00783118  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0078311c  390b                 cmp dword ptr [ebx], ecx
// 0078311e  0f856cfdffff         jne 0x782e90
// 00783124  5d                   pop ebp
// 00783125  8b13                 mov edx, dword ptr [ebx]
// 00783127  52                   push edx
// 00783128  e8a3f2ffff           call 0x7823d0
// 0078312d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00783130  8b08                 mov ecx, dword ptr [eax]
// 00783132  83c404               add esp, 4
// 00783135  8d51ff               lea edx, [ecx - 1]
// 00783138  8910                 mov dword ptr [eax], edx
// 0078313a  85c9                 test ecx, ecx
// 0078313c  760f                 jbe 0x78314d
// 0078313e  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00783141  8b5104               mov edx, dword ptr [ecx + 4]
// 00783144  0fb602               movzx eax, byte ptr [edx]
// 00783147  42                   inc edx
// 00783148  895104               mov dword ptr [ecx + 4], edx
// 0078314b  eb0c                 jmp 0x783159
// 0078314d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00783150  50                   push eax
// 00783151  e8cab1ffff           call 0x77e320
// 00783156  83c404               add esp, 4
// 00783159  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0078315c  8b7334               mov esi, dword ptr [ebx + 0x34]
// 0078315f  8903                 mov dword ptr [ebx], eax
// 00783161  8b4104               mov eax, dword ptr [ecx + 4]
// 00783164  8b09                 mov ecx, dword ptr [ecx]
// 00783166  83e802               sub eax, 2
// 00783169  50                   push eax
// 0078316a  41                   inc ecx
// 0078316b  51                   push ecx
// 0078316c  56                   push esi
// 0078316d  e86eacffff           call 0x77dde0
// 00783172  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00783175  8b5104               mov edx, dword ptr [ecx + 4]
// 00783178  8bf8                 mov edi, eax
// 0078317a  57                   push edi
// 0078317b  52                   push edx
// 0078317c  56                   push esi
// 0078317d  e8aeaaffff           call 0x77dc30
// 00783182  83c418               add esp, 0x18
// 00783185  83780800             cmp dword ptr [eax + 8], 0
// 00783189  751a                 jne 0x7831a5
// 0078318b  c70001000000         mov dword ptr [eax], 1
// 00783191  c7400801000000       mov dword ptr [eax + 8], 1
// 00783198  8b442464             mov eax, dword ptr [esp + 0x64]
// 0078319c  8938                 mov dword ptr [eax], edi
// 0078319e  5f                   pop edi
// 0078319f  5e                   pop esi
// 007831a0  5b                   pop ebx
// 007831a1  83c450               add esp, 0x50
// 007831a4  c3                   ret 
// 007831a5  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007831a9  8939                 mov dword ptr [ecx], edi
// 007831ab  5f                   pop edi
// 007831ac  5e                   pop esi
// 007831ad  5b                   pop ebx
// 007831ae  83c450               add esp, 0x50
// 007831b1  c3                   ret 
// 007831b2  8bff                 mov edi, edi
// 007831b4  ac                   lodsb al, byte ptr [esi]
// 007831b5  2e7800               js 0x7831b8
// 007831b8  042f                 add al, 0x2f
// 007831ba  7800                 js 0x7831bc
// 007831bc  642f                 das 
// 007831be  7800                 js 0x7831c0
// 007831c0  d82f                 fsubr dword ptr [edi]
// 007831c2  7800                 js 0x7831c4
// 007831c4  0003                 add byte ptr [ebx], al
// 007831c6  0303                 add eax, dword ptr [ebx]
// 007831c8  0303                 add eax, dword ptr [ebx]
// 007831ca  0303                 add eax, dword ptr [ebx]
// 007831cc  0303                 add eax, dword ptr [ebx]
// 007831ce  0301                 add eax, dword ptr [ecx]
// 007831d0  0303                 add eax, dword ptr [ebx]
// 007831d2  0103                 add dword ptr [ebx], eax
// 007831d4  0303                 add eax, dword ptr [ebx]
// 007831d6  0303                 add eax, dword ptr [ebx]
// 007831d8  0303                 add eax, dword ptr [ebx]
// 007831da  0303                 add eax, dword ptr [ebx]
// 007831dc  0303                 add eax, dword ptr [ebx]
// 007831de  0303                 add eax, dword ptr [ebx]
// 007831e0  0303                 add eax, dword ptr [ebx]
// 007831e2  0303                 add eax, dword ptr [ebx]
// 007831e4  0303                 add eax, dword ptr [ebx]
// 007831e6  0303                 add eax, dword ptr [ebx]
// 007831e8  0303                 add eax, dword ptr [ebx]
// 007831ea  0303                 add eax, dword ptr [ebx]
// 007831ec  0303                 add eax, dword ptr [ebx]
// 007831ee  0303                 add eax, dword ptr [ebx]
// 007831f0  0303                 add eax, dword ptr [ebx]
// 007831f2  0303                 add eax, dword ptr [ebx]
// 007831f4  0303                 add eax, dword ptr [ebx]
// 007831f6  0303                 add eax, dword ptr [ebx]
// 007831f8  0303                 add eax, dword ptr [ebx]
// 007831fa  0303                 add eax, dword ptr [ebx]
// 007831fc  0303                 add eax, dword ptr [ebx]
// 007831fe  0303                 add eax, dword ptr [ebx]
// 00783200  0303                 add eax, dword ptr [ebx]
// 00783202  0303                 add eax, dword ptr [ebx]
// 00783204  0303                 add eax, dword ptr [ebx]
// 00783206  0303                 add eax, dword ptr [ebx]
// 00783208  0303                 add eax, dword ptr [ebx]
// 0078320a  0303                 add eax, dword ptr [ebx]
// 0078320c  0303                 add eax, dword ptr [ebx]
// 0078320e  0303                 add eax, dword ptr [ebx]
// 00783210  0303                 add eax, dword ptr [ebx]
// 00783212  0303                 add eax, dword ptr [ebx]
// 00783214  0303                 add eax, dword ptr [ebx]
// 00783216  0303                 add eax, dword ptr [ebx]
// 00783218  0303                 add eax, dword ptr [ebx]
// 0078321a  0303                 add eax, dword ptr [ebx]
// 0078321c  0303                 add eax, dword ptr [ebx]
// 0078321e  0303                 add eax, dword ptr [ebx]
// 00783220  0302                 add eax, dword ptr [edx]
// 00783222  8bff                 mov edi, edi
// 00783224  1831                 sbb byte ptr [ecx], dh
// 00783226  7800                 js 0x783228
// 00783228  05307800a9           add eax, 0xa9007830
// 0078322d  2f                   das 
// 0078322e  7800                 js 0x783230
// 00783230  b02f                 mov al, 0x2f
// 00783232  7800                 js 0x783234
// 00783234  b72f                 mov bh, 0x2f
// 00783236  7800                 js 0x783238
// 00783238  be2f7800c5           mov esi, 0xc500782f
// 0078323d  2f                   das 
// 0078323e  7800                 js 0x783240
// 00783240  cc                   int3 
// 00783241  2f                   das 
// 00783242  7800                 js 0x783244
// 00783244  d32f                 shr dword ptr [edi], cl
// 00783246  7800                 js 0x783248
// 00783248  1b30                 sbb esi, dword ptr [eax]
// 0078324a  7800                 js 0x78324c
// 0078324c  0009                 add byte ptr [ecx], cl
// 0078324e  0909                 or dword ptr [ecx], ecx
// 00783250  0909                 or dword ptr [ecx], ecx
// 00783252  0909                 or dword ptr [ecx], ecx
// 00783254  0909                 or dword ptr [ecx], ecx
// 00783256  0901                 or dword ptr [ecx], eax
// 00783258  0909                 or dword ptr [ecx], ecx
// 0078325a  0109                 add dword ptr [ecx], ecx
// 0078325c  0909                 or dword ptr [ecx], ecx
// 0078325e  0909                 or dword ptr [ecx], ecx
// 00783260  0909                 or dword ptr [ecx], ecx
// 00783262  0909                 or dword ptr [ecx], ecx
// 00783264  0909                 or dword ptr [ecx], ecx
// 00783266  0909                 or dword ptr [ecx], ecx
// 00783268  0909                 or dword ptr [ecx], ecx
// 0078326a  0909                 or dword ptr [ecx], ecx
// 0078326c  0909                 or dword ptr [ecx], ecx
// 0078326e  0909                 or dword ptr [ecx], ecx
// 00783270  0909                 or dword ptr [ecx], ecx
// 00783272  0909                 or dword ptr [ecx], ecx
// 00783274  0909                 or dword ptr [ecx], ecx
// 00783276  0909                 or dword ptr [ecx], ecx
// 00783278  0909                 or dword ptr [ecx], ecx
// 0078327a  0909                 or dword ptr [ecx], ecx
// 0078327c  0909                 or dword ptr [ecx], ecx
// 0078327e  0909                 or dword ptr [ecx], ecx
// 00783280  0909                 or dword ptr [ecx], ecx
// 00783282  0909                 or dword ptr [ecx], ecx
// 00783284  0909                 or dword ptr [ecx], ecx
// 00783286  0909                 or dword ptr [ecx], ecx
// 00783288  0909                 or dword ptr [ecx], ecx
// 0078328a  0909                 or dword ptr [ecx], ecx
// 0078328c  0909                 or dword ptr [ecx], ecx
// 0078328e  0909                 or dword ptr [ecx], ecx
// 00783290  0909                 or dword ptr [ecx], ecx
// 00783292  0909                 or dword ptr [ecx], ecx
// 00783294  0909                 or dword ptr [ecx], ecx
// 00783296  0909                 or dword ptr [ecx], ecx
// 00783298  0909                 or dword ptr [ecx], ecx
// 0078329a  0909                 or dword ptr [ecx], ecx
// 0078329c  0909                 or dword ptr [ecx], ecx
// 0078329e  0909                 or dword ptr [ecx], ecx
// 007832a0  0909                 or dword ptr [ecx], ecx
// 007832a2  0909                 or dword ptr [ecx], ecx
// 007832a4  0909                 or dword ptr [ecx], ecx
// 007832a6  0909                 or dword ptr [ecx], ecx
// 007832a8  0909                 or dword ptr [ecx], ecx
// 007832aa  0909                 or dword ptr [ecx], ecx
// 007832ac  0909                 or dword ptr [ecx], ecx
// 007832ae  0203                 add al, byte ptr [ebx]
// 007832b0  0909                 or dword ptr [ecx], ecx
// 007832b2  090409               or dword ptr [ecx + ecx], eax
// 007832b5  0909                 or dword ptr [ecx], ecx
// 007832b7  0909                 or dword ptr [ecx], ecx
// 007832b9  0909                 or dword ptr [ecx], ecx
// 007832bb  0509090906           add eax, 0x6090909
// 007832c0  0907                 or dword ptr [edi], eax
// 007832c2  0908                 or dword ptr [eax], ecx
// copied from an identical function in another client (function _read_string)

// roc-cl: 30729
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll llex.c