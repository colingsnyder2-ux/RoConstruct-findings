// roc 2008-06 00784ef0  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 1908 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00784ef0
//
// 00784ef0  83ec34               sub esp, 0x34
// 00784ef3  53                   push ebx
// 00784ef4  55                   push ebp
// 00784ef5  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00784ef9  8b5548               mov edx, dword ptr [ebp + 0x48]
// 00784efc  8bc1                 mov eax, ecx
// 00784efe  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00784f01  894c240c             mov dword ptr [esp + 0xc], ecx
// 00784f05  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 00784f08  89542410             mov dword ptr [esp + 0x10], edx
// 00784f0c  8b5550               mov edx, dword ptr [ebp + 0x50]
// 00784f0f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00784f13  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00784f16  56                   push esi
// 00784f17  8954241c             mov dword ptr [esp + 0x1c], edx
// 00784f1b  57                   push edi
// 00784f1c  89442410             mov dword ptr [esp + 0x10], eax
// 00784f20  396904               cmp dword ptr [ecx + 4], ebp
// 00784f23  7511                 jne 0x784f36
// 00784f25  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00784f28  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 00784f2e  81c674010000         add esi, 0x174
// 00784f34  eb0f                 jmp 0x784f45
// 00784f36  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00784f39  8bb2e4000000         mov esi, dword ptr [edx + 0xe4]
// 00784f3f  81c6bc010000         add esi, 0x1bc
// 00784f45  8b01                 mov eax, dword ptr [ecx]
// 00784f47  8b5048               mov edx, dword ptr [eax + 0x48]
// 00784f4a  ffd2                 call edx
// 00784f4c  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00784f50  83f803               cmp eax, 3
// 00784f53  0f87c3060000         ja 0x78561c
// 00784f59  ff248554567800       jmp dword ptr [eax*4 + 0x785654]
// 00784f60  8b442420             mov eax, dword ptr [esp + 0x20]
// 00784f64  48                   dec eax
// 00784f65  89442420             mov dword ptr [esp + 0x20], eax
// 00784f69  2b442418             sub eax, dword ptr [esp + 0x18]
// 00784f6d  6a00                 push 0
// 00784f6f  99                   cdq 
// 00784f70  2bc2                 sub eax, edx
// 00784f72  8bd8                 mov ebx, eax
// 00784f74  d1fb                 sar ebx, 1
// 00784f76  8bc3                 mov eax, ebx
// 00784f78  99                   cdq 
// 00784f79  2bc2                 sub eax, edx
// 00784f7b  d1f8                 sar eax, 1
// 00784f7d  f7d8                 neg eax
// 00784f7f  50                   push eax
// 00784f80  8d44241c             lea eax, [esp + 0x1c]
// 00784f84  50                   push eax
// 00784f85  ff15682d8000         call dword ptr [0x802d68]
// 00784f8b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00784f8f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00784f93  894c2428             mov dword ptr [esp + 0x28], ecx
// 00784f97  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00784f9b  2bc8                 sub ecx, eax
// 00784f9d  8bd3                 mov edx, ebx
// 00784f9f  f7da                 neg edx
// 00784fa1  03d2                 add edx, edx
// 00784fa3  2bcb                 sub ecx, ebx
// 00784fa5  89542430             mov dword ptr [esp + 0x30], edx
// 00784fa9  894c2434             mov dword ptr [esp + 0x34], ecx
// 00784fad  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00784fb0  89442424             mov dword ptr [esp + 0x24], eax
// 00784fb4  8b01                 mov eax, dword ptr [ecx]
// 00784fb6  8d141b               lea edx, [ebx + ebx]
// 00784fb9  89542440             mov dword ptr [esp + 0x40], edx
// 00784fbd  8b5048               mov edx, dword ptr [eax + 0x48]
// 00784fc0  6a00                 push 0
// 00784fc2  895c2430             mov dword ptr [esp + 0x30], ebx
// 00784fc6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00784fce  895c2440             mov dword ptr [esp + 0x40], ebx
// 00784fd2  ffd2                 call edx
// 00784fd4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00784fd8  50                   push eax
// 00784fd9  6a04                 push 4
// 00784fdb  8d442430             lea eax, [esp + 0x30]
// 00784fdf  50                   push eax
// 00784fe0  55                   push ebp
// 00784fe1  57                   push edi
// 00784fe2  e889c6ffff           call 0x781670
// 00784fe7  8944244c             mov dword ptr [esp + 0x4c], eax
// 00784feb  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00784fee  83f8ff               cmp eax, -1
// 00784ff1  7503                 jne 0x784ff6
// 00784ff3  8b4628               mov eax, dword ptr [esi + 0x28]
// 00784ff6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00784ffa  51                   push ecx
// 00784ffb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00784fff  8d541901             lea edx, [ecx + ebx + 1]
// 00785003  52                   push edx
// 00785004  8b542428             mov edx, dword ptr [esp + 0x28]
// 00785008  4a                   dec edx
// 00785009  52                   push edx
// 0078500a  41                   inc ecx
// 0078500b  51                   push ecx
// 0078500c  50                   push eax
// 0078500d  57                   push edi
// 0078500e  e8cdc1ffff           call 0x7811e0
// 00785013  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00785016  83c418               add esp, 0x18
// 00785019  83f8ff               cmp eax, -1
// 0078501c  7505                 jne 0x785023
// 0078501e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00785021  eb02                 jmp 0x785025
// 00785023  8bc8                 mov ecx, eax
// 00785025  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785029  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078502d  40                   inc eax
// 0078502e  50                   push eax
// 0078502f  52                   push edx
// 00785030  50                   push eax
// 00785031  8b442420             mov eax, dword ptr [esp + 0x20]
// 00785035  03c3                 add eax, ebx
// 00785037  50                   push eax
// 00785038  51                   push ecx
// 00785039  57                   push edi
// 0078503a  e8a1c1ffff           call 0x7811e0
// 0078503f  8b4638               mov eax, dword ptr [esi + 0x38]
// 00785042  83c418               add esp, 0x18
// 00785045  83f8ff               cmp eax, -1
// 00785048  7503                 jne 0x78504d
// 0078504a  8b4634               mov eax, dword ptr [esi + 0x34]
// 0078504d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785051  51                   push ecx
// 00785052  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785056  8d5419ff             lea edx, [ecx + ebx - 1]
// 0078505a  52                   push edx
// 0078505b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078505f  52                   push edx
// 00785060  49                   dec ecx
// 00785061  51                   push ecx
// 00785062  50                   push eax
// 00785063  57                   push edi
// 00785064  e877c1ffff           call 0x7811e0
// 00785069  8b4608               mov eax, dword ptr [esi + 8]
// 0078506c  83c418               add esp, 0x18
// 0078506f  83f8ff               cmp eax, -1
// 00785072  7505                 jne 0x785079
// 00785074  8b4e04               mov ecx, dword ptr [esi + 4]
// 00785077  eb02                 jmp 0x78507b
// 00785079  8bc8                 mov ecx, eax
// 0078507b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078507f  50                   push eax
// 00785080  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785084  8d1418               lea edx, [eax + ebx]
// 00785087  52                   push edx
// 00785088  8b542428             mov edx, dword ptr [esp + 0x28]
// 0078508c  4a                   dec edx
// 0078508d  52                   push edx
// 0078508e  50                   push eax
// 0078508f  51                   push ecx
// 00785090  57                   push edi
// 00785091  e84ac1ffff           call 0x7811e0
// 00785096  8b4608               mov eax, dword ptr [esi + 8]
// 00785099  83c418               add esp, 0x18
// 0078509c  83f8ff               cmp eax, -1
// 0078509f  7503                 jne 0x7850a4
// 007850a1  8b4604               mov eax, dword ptr [esi + 4]
// 007850a4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007850a8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007850ac  51                   push ecx
// 007850ad  52                   push edx
// 007850ae  51                   push ecx
// 007850af  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007850b3  03cb                 add ecx, ebx
// 007850b5  51                   push ecx
// 007850b6  50                   push eax
// 007850b7  57                   push edi
// 007850b8  e823c1ffff           call 0x7811e0
// 007850bd  8b4620               mov eax, dword ptr [esi + 0x20]
// 007850c0  83c418               add esp, 0x18
// 007850c3  83f8ff               cmp eax, -1
// 007850c6  7503                 jne 0x7850cb
// 007850c8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007850cb  8b542420             mov edx, dword ptr [esp + 0x20]
// 007850cf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007850d3  52                   push edx
// 007850d4  8d1419               lea edx, [ecx + ebx]
// 007850d7  52                   push edx
// 007850d8  8b542420             mov edx, dword ptr [esp + 0x20]
// 007850dc  52                   push edx
// 007850dd  51                   push ecx
// 007850de  50                   push eax
// 007850df  57                   push edi
// 007850e0  e8fbc0ffff           call 0x7811e0
// 007850e5  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007850e8  83c418               add esp, 0x18
// 007850eb  396804               cmp dword ptr [eax + 4], ebp
// 007850ee  0f8528050000         jne 0x78561c
// 007850f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007850f8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007850fc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00785100  51                   push ecx
// 00785101  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00785105  2bd0                 sub edx, eax
// 00785107  03d3                 add edx, ebx
// 00785109  52                   push edx
// 0078510a  51                   push ecx
// 0078510b  50                   push eax
// 0078510c  57                   push edi
// 0078510d  e8febaffff           call 0x780c10
// 00785112  e902050000           jmp 0x785619
// 00785117  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078511b  48                   dec eax
// 0078511c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00785120  2b442414             sub eax, dword ptr [esp + 0x14]
// 00785124  99                   cdq 
// 00785125  2bc2                 sub eax, edx
// 00785127  8bd8                 mov ebx, eax
// 00785129  d1fb                 sar ebx, 1
// 0078512b  8bc3                 mov eax, ebx
// 0078512d  99                   cdq 
// 0078512e  2bc2                 sub eax, edx
// 00785130  d1f8                 sar eax, 1
// 00785132  f7d8                 neg eax
// 00785134  50                   push eax
// 00785135  6a00                 push 0
// 00785137  8d54241c             lea edx, [esp + 0x1c]
// 0078513b  52                   push edx
// 0078513c  ff15682d8000         call dword ptr [0x802d68]
// 00785142  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00785146  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078514a  89442424             mov dword ptr [esp + 0x24], eax
// 0078514e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785152  8bcb                 mov ecx, ebx
// 00785154  f7d9                 neg ecx
// 00785156  03c9                 add ecx, ecx
// 00785158  2bd3                 sub edx, ebx
// 0078515a  2bd0                 sub edx, eax
// 0078515c  89442428             mov dword ptr [esp + 0x28], eax
// 00785160  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00785164  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00785167  89542438             mov dword ptr [esp + 0x38], edx
// 0078516b  8b11                 mov edx, dword ptr [ecx]
// 0078516d  8d041b               lea eax, [ebx + ebx]
// 00785170  8944243c             mov dword ptr [esp + 0x3c], eax
// 00785174  8b4248               mov eax, dword ptr [edx + 0x48]
// 00785177  6a00                 push 0
// 00785179  895c2434             mov dword ptr [esp + 0x34], ebx
// 0078517d  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00785185  895c2444             mov dword ptr [esp + 0x44], ebx
// 00785189  ffd0                 call eax
// 0078518b  50                   push eax
// 0078518c  6a04                 push 4
// 0078518e  8d4c2430             lea ecx, [esp + 0x30]
// 00785192  51                   push ecx
// 00785193  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785197  55                   push ebp
// 00785198  57                   push edi
// 00785199  e8d2c4ffff           call 0x781670
// 0078519e  8944244c             mov dword ptr [esp + 0x4c], eax
// 007851a2  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007851a5  83f8ff               cmp eax, -1
// 007851a8  7503                 jne 0x7851ad
// 007851aa  8b4628               mov eax, dword ptr [esi + 0x28]
// 007851ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007851b1  8d540b01             lea edx, [ebx + ecx + 1]
// 007851b5  52                   push edx
// 007851b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007851ba  52                   push edx
// 007851bb  41                   inc ecx
// 007851bc  51                   push ecx
// 007851bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007851c1  49                   dec ecx
// 007851c2  51                   push ecx
// 007851c3  50                   push eax
// 007851c4  57                   push edi
// 007851c5  e816c0ffff           call 0x7811e0
// 007851ca  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007851cd  83c418               add esp, 0x18
// 007851d0  83f8ff               cmp eax, -1
// 007851d3  7505                 jne 0x7851da
// 007851d5  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007851d8  eb02                 jmp 0x7851dc
// 007851da  8bc8                 mov ecx, eax
// 007851dc  8b542420             mov edx, dword ptr [esp + 0x20]
// 007851e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 007851e4  52                   push edx
// 007851e5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007851e9  40                   inc eax
// 007851ea  50                   push eax
// 007851eb  03d3                 add edx, ebx
// 007851ed  52                   push edx
// 007851ee  50                   push eax
// 007851ef  51                   push ecx
// 007851f0  57                   push edi
// 007851f1  e8eabfffff           call 0x7811e0
// 007851f6  8b4638               mov eax, dword ptr [esi + 0x38]
// 007851f9  83c418               add esp, 0x18
// 007851fc  83f8ff               cmp eax, -1
// 007851ff  7503                 jne 0x785204
// 00785201  8b4634               mov eax, dword ptr [esi + 0x34]
// 00785204  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785208  8d540bff             lea edx, [ebx + ecx - 1]
// 0078520c  52                   push edx
// 0078520d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00785211  52                   push edx
// 00785212  49                   dec ecx
// 00785213  51                   push ecx
// 00785214  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785218  51                   push ecx
// 00785219  50                   push eax
// 0078521a  57                   push edi
// 0078521b  e8c0bfffff           call 0x7811e0
// 00785220  8b4608               mov eax, dword ptr [esi + 8]
// 00785223  83c418               add esp, 0x18
// 00785226  83f8ff               cmp eax, -1
// 00785229  7505                 jne 0x785230
// 0078522b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0078522e  eb02                 jmp 0x785232
// 00785230  8bc8                 mov ecx, eax
// 00785232  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785236  8d1403               lea edx, [ebx + eax]
// 00785239  52                   push edx
// 0078523a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078523e  52                   push edx
// 0078523f  50                   push eax
// 00785240  8b442428             mov eax, dword ptr [esp + 0x28]
// 00785244  48                   dec eax
// 00785245  50                   push eax
// 00785246  51                   push ecx
// 00785247  57                   push edi
// 00785248  e893bfffff           call 0x7811e0
// 0078524d  8b4608               mov eax, dword ptr [esi + 8]
// 00785250  83c418               add esp, 0x18
// 00785253  83f8ff               cmp eax, -1
// 00785256  7503                 jne 0x78525b
// 00785258  8b4604               mov eax, dword ptr [esi + 4]
// 0078525b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078525f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00785263  51                   push ecx
// 00785264  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00785268  51                   push ecx
// 00785269  03d3                 add edx, ebx
// 0078526b  52                   push edx
// 0078526c  51                   push ecx
// 0078526d  50                   push eax
// 0078526e  57                   push edi
// 0078526f  e86cbfffff           call 0x7811e0
// 00785274  8b4620               mov eax, dword ptr [esi + 0x20]
// 00785277  83c418               add esp, 0x18
// 0078527a  83f8ff               cmp eax, -1
// 0078527d  7503                 jne 0x785282
// 0078527f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00785282  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785286  8d140b               lea edx, [ebx + ecx]
// 00785289  52                   push edx
// 0078528a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078528e  52                   push edx
// 0078528f  51                   push ecx
// 00785290  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785294  51                   push ecx
// 00785295  50                   push eax
// 00785296  57                   push edi
// 00785297  e844bfffff           call 0x7811e0
// 0078529c  8b5560               mov edx, dword ptr [ebp + 0x60]
// 0078529f  83c418               add esp, 0x18
// 007852a2  396a04               cmp dword ptr [edx + 4], ebp
// 007852a5  0f8571030000         jne 0x78561c
// 007852ab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007852af  e94d030000           jmp 0x785601
// 007852b4  8b442420             mov eax, dword ptr [esp + 0x20]
// 007852b8  48                   dec eax
// 007852b9  89442420             mov dword ptr [esp + 0x20], eax
// 007852bd  2b442418             sub eax, dword ptr [esp + 0x18]
// 007852c1  6a00                 push 0
// 007852c3  99                   cdq 
// 007852c4  2bc2                 sub eax, edx
// 007852c6  8bd8                 mov ebx, eax
// 007852c8  d1fb                 sar ebx, 1
// 007852ca  8bc3                 mov eax, ebx
// 007852cc  99                   cdq 
// 007852cd  2bc2                 sub eax, edx
// 007852cf  d1f8                 sar eax, 1
// 007852d1  f7d8                 neg eax
// 007852d3  50                   push eax
// 007852d4  8d54241c             lea edx, [esp + 0x1c]
// 007852d8  52                   push edx
// 007852d9  ff15682d8000         call dword ptr [0x802d68]
// 007852df  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007852e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007852e7  41                   inc ecx
// 007852e8  894c2428             mov dword ptr [esp + 0x28], ecx
// 007852ec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007852f0  8d141b               lea edx, [ebx + ebx]
// 007852f3  89542430             mov dword ptr [esp + 0x30], edx
// 007852f7  2bcb                 sub ecx, ebx
// 007852f9  2bc8                 sub ecx, eax
// 007852fb  8bd3                 mov edx, ebx
// 007852fd  f7da                 neg edx
// 007852ff  894c2434             mov dword ptr [esp + 0x34], ecx
// 00785303  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00785306  03d2                 add edx, edx
// 00785308  89442424             mov dword ptr [esp + 0x24], eax
// 0078530c  8b01                 mov eax, dword ptr [ecx]
// 0078530e  89542440             mov dword ptr [esp + 0x40], edx
// 00785312  8b5048               mov edx, dword ptr [eax + 0x48]
// 00785315  6a00                 push 0
// 00785317  895c2430             mov dword ptr [esp + 0x30], ebx
// 0078531b  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00785323  895c2440             mov dword ptr [esp + 0x40], ebx
// 00785327  ffd2                 call edx
// 00785329  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078532d  50                   push eax
// 0078532e  6a04                 push 4
// 00785330  8d442430             lea eax, [esp + 0x30]
// 00785334  50                   push eax
// 00785335  55                   push ebp
// 00785336  57                   push edi
// 00785337  e834c3ffff           call 0x781670
// 0078533c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00785340  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00785343  83f8ff               cmp eax, -1
// 00785346  7503                 jne 0x78534b
// 00785348  8b4628               mov eax, dword ptr [esi + 0x28]
// 0078534b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078534f  51                   push ecx
// 00785350  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00785354  8d540b01             lea edx, [ebx + ecx + 1]
// 00785358  52                   push edx
// 00785359  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078535d  42                   inc edx
// 0078535e  52                   push edx
// 0078535f  41                   inc ecx
// 00785360  51                   push ecx
// 00785361  50                   push eax
// 00785362  57                   push edi
// 00785363  e878beffff           call 0x7811e0
// 00785368  8b4644               mov eax, dword ptr [esi + 0x44]
// 0078536b  83c418               add esp, 0x18
// 0078536e  83f8ff               cmp eax, -1
// 00785371  7505                 jne 0x785378
// 00785373  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00785376  eb02                 jmp 0x78537a
// 00785378  8bc8                 mov ecx, eax
// 0078537a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078537e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00785382  48                   dec eax
// 00785383  50                   push eax
// 00785384  52                   push edx
// 00785385  50                   push eax
// 00785386  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078538a  8d1403               lea edx, [ebx + eax]
// 0078538d  52                   push edx
// 0078538e  51                   push ecx
// 0078538f  57                   push edi
// 00785390  e84bbeffff           call 0x7811e0
// 00785395  8b4638               mov eax, dword ptr [esi + 0x38]
// 00785398  83c418               add esp, 0x18
// 0078539b  83f8ff               cmp eax, -1
// 0078539e  7503                 jne 0x7853a3
// 007853a0  8b4634               mov eax, dword ptr [esi + 0x34]
// 007853a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007853a7  51                   push ecx
// 007853a8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007853ac  8d540bff             lea edx, [ebx + ecx - 1]
// 007853b0  52                   push edx
// 007853b1  8b542428             mov edx, dword ptr [esp + 0x28]
// 007853b5  52                   push edx
// 007853b6  49                   dec ecx
// 007853b7  51                   push ecx
// 007853b8  50                   push eax
// 007853b9  57                   push edi
// 007853ba  e821beffff           call 0x7811e0
// 007853bf  8b4608               mov eax, dword ptr [esi + 8]
// 007853c2  83c418               add esp, 0x18
// 007853c5  83f8ff               cmp eax, -1
// 007853c8  7505                 jne 0x7853cf
// 007853ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 007853cd  eb02                 jmp 0x7853d1
// 007853cf  8bc8                 mov ecx, eax
// 007853d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 007853d5  50                   push eax
// 007853d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007853da  8d1403               lea edx, [ebx + eax]
// 007853dd  52                   push edx
// 007853de  8b542420             mov edx, dword ptr [esp + 0x20]
// 007853e2  42                   inc edx
// 007853e3  52                   push edx
// 007853e4  50                   push eax
// 007853e5  51                   push ecx
// 007853e6  57                   push edi
// 007853e7  e8f4bdffff           call 0x7811e0
// 007853ec  8b4614               mov eax, dword ptr [esi + 0x14]
// 007853ef  83c418               add esp, 0x18
// 007853f2  83f8ff               cmp eax, -1
// 007853f5  7503                 jne 0x7853fa
// 007853f7  8b4610               mov eax, dword ptr [esi + 0x10]
// 007853fa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007853fe  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00785402  51                   push ecx
// 00785403  52                   push edx
// 00785404  51                   push ecx
// 00785405  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785409  8d140b               lea edx, [ebx + ecx]
// 0078540c  52                   push edx
// 0078540d  50                   push eax
// 0078540e  57                   push edi
// 0078540f  e8ccbdffff           call 0x7811e0
// 00785414  8b4620               mov eax, dword ptr [esi + 0x20]
// 00785417  83c418               add esp, 0x18
// 0078541a  83f8ff               cmp eax, -1
// 0078541d  7503                 jne 0x785422
// 0078541f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00785422  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00785426  51                   push ecx
// 00785427  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078542b  8d140b               lea edx, [ebx + ecx]
// 0078542e  52                   push edx
// 0078542f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00785433  52                   push edx
// 00785434  51                   push ecx
// 00785435  50                   push eax
// 00785436  57                   push edi
// 00785437  e8a4bdffff           call 0x7811e0
// 0078543c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0078543f  83c418               add esp, 0x18
// 00785442  396804               cmp dword ptr [eax + 4], ebp
// 00785445  0f85d1010000         jne 0x78561c
// 0078544b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078544f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00785453  8b542418             mov edx, dword ptr [esp + 0x18]
// 00785457  51                   push ecx
// 00785458  2bd8                 sub ebx, eax
// 0078545a  035c2420             add ebx, dword ptr [esp + 0x20]
// 0078545e  53                   push ebx
// 0078545f  52                   push edx
// 00785460  50                   push eax
// 00785461  57                   push edi
// 00785462  e8a9b7ffff           call 0x780c10
// 00785467  e9ad010000           jmp 0x785619
// 0078546c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00785470  48                   dec eax
// 00785471  8944241c             mov dword ptr [esp + 0x1c], eax
// 00785475  2b442414             sub eax, dword ptr [esp + 0x14]
// 00785479  99                   cdq 
// 0078547a  2bc2                 sub eax, edx
// 0078547c  8bd8                 mov ebx, eax
// 0078547e  d1fb                 sar ebx, 1
// 00785480  8bc3                 mov eax, ebx
// 00785482  99                   cdq 
// 00785483  2bc2                 sub eax, edx
// 00785485  d1f8                 sar eax, 1
// 00785487  f7d8                 neg eax
// 00785489  50                   push eax
// 0078548a  6a00                 push 0
// 0078548c  8d44241c             lea eax, [esp + 0x1c]
// 00785490  50                   push eax
// 00785491  ff15682d8000         call dword ptr [0x802d68]
// 00785497  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078549b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078549f  41                   inc ecx
// 007854a0  894c2424             mov dword ptr [esp + 0x24], ecx
// 007854a4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007854a8  8d141b               lea edx, [ebx + ebx]
// 007854ab  8954242c             mov dword ptr [esp + 0x2c], edx
// 007854af  2bcb                 sub ecx, ebx
// 007854b1  2bc8                 sub ecx, eax
// 007854b3  8bd3                 mov edx, ebx
// 007854b5  f7da                 neg edx
// 007854b7  894c2438             mov dword ptr [esp + 0x38], ecx
// 007854bb  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 007854be  03d2                 add edx, edx
// 007854c0  89442428             mov dword ptr [esp + 0x28], eax
// 007854c4  8b01                 mov eax, dword ptr [ecx]
// 007854c6  8954243c             mov dword ptr [esp + 0x3c], edx
// 007854ca  8b5048               mov edx, dword ptr [eax + 0x48]
// 007854cd  6a00                 push 0
// 007854cf  895c2434             mov dword ptr [esp + 0x34], ebx
// 007854d3  c744243800000000     mov dword ptr [esp + 0x38], 0
// 007854db  895c2444             mov dword ptr [esp + 0x44], ebx
// 007854df  ffd2                 call edx
// 007854e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007854e5  50                   push eax
// 007854e6  6a04                 push 4
// 007854e8  8d442430             lea eax, [esp + 0x30]
// 007854ec  50                   push eax
// 007854ed  55                   push ebp
// 007854ee  57                   push edi
// 007854ef  e87cc1ffff           call 0x781670
// 007854f4  8944244c             mov dword ptr [esp + 0x4c], eax
// 007854f8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007854fb  83f8ff               cmp eax, -1
// 007854fe  7503                 jne 0x785503
// 00785500  8b4628               mov eax, dword ptr [esi + 0x28]
// 00785503  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00785507  8d540b01             lea edx, [ebx + ecx + 1]
// 0078550b  52                   push edx
// 0078550c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00785510  52                   push edx
// 00785511  41                   inc ecx
// 00785512  51                   push ecx
// 00785513  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00785517  41                   inc ecx
// 00785518  51                   push ecx
// 00785519  50                   push eax
// 0078551a  57                   push edi
// 0078551b  e8c0bcffff           call 0x7811e0
// 00785520  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00785523  83c418               add esp, 0x18
// 00785526  83f8ff               cmp eax, -1
// 00785529  7505                 jne 0x785530
// 0078552b  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0078552e  eb02                 jmp 0x785532
// 00785530  8bc8                 mov ecx, eax
// 00785532  8b542420             mov edx, dword ptr [esp + 0x20]
// 00785536  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078553a  52                   push edx
// 0078553b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078553f  48                   dec eax
// 00785540  50                   push eax
// 00785541  03d3                 add edx, ebx
// 00785543  52                   push edx
// 00785544  50                   push eax
// 00785545  51                   push ecx
// 00785546  57                   push edi
// 00785547  e894bcffff           call 0x7811e0
// 0078554c  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078554f  83c418               add esp, 0x18
// 00785552  83f8ff               cmp eax, -1
// 00785555  7503                 jne 0x78555a
// 00785557  8b4634               mov eax, dword ptr [esi + 0x34]
// 0078555a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078555e  8d540bff             lea edx, [ebx + ecx - 1]
// 00785562  52                   push edx
// 00785563  8b542418             mov edx, dword ptr [esp + 0x18]
// 00785567  52                   push edx
// 00785568  49                   dec ecx
// 00785569  51                   push ecx
// 0078556a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0078556e  51                   push ecx
// 0078556f  50                   push eax
// 00785570  57                   push edi
// 00785571  e86abcffff           call 0x7811e0
// 00785576  8b4608               mov eax, dword ptr [esi + 8]
// 00785579  83c418               add esp, 0x18
// 0078557c  83f8ff               cmp eax, -1
// 0078557f  7505                 jne 0x785586
// 00785581  8b4e04               mov ecx, dword ptr [esi + 4]
// 00785584  eb02                 jmp 0x785588
// 00785586  8bc8                 mov ecx, eax
// 00785588  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078558c  8d1403               lea edx, [ebx + eax]
// 0078558f  52                   push edx
// 00785590  8b542420             mov edx, dword ptr [esp + 0x20]
// 00785594  52                   push edx
// 00785595  50                   push eax
// 00785596  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078559a  40                   inc eax
// 0078559b  50                   push eax
// 0078559c  51                   push ecx
// 0078559d  57                   push edi
// 0078559e  e83dbcffff           call 0x7811e0
// 007855a3  8b4608               mov eax, dword ptr [esi + 8]
// 007855a6  83c418               add esp, 0x18
// 007855a9  83f8ff               cmp eax, -1
// 007855ac  7503                 jne 0x7855b1
// 007855ae  8b4604               mov eax, dword ptr [esi + 4]
// 007855b1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007855b5  8b542418             mov edx, dword ptr [esp + 0x18]
// 007855b9  51                   push ecx
// 007855ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007855be  51                   push ecx
// 007855bf  03d3                 add edx, ebx
// 007855c1  52                   push edx
// 007855c2  51                   push ecx
// 007855c3  50                   push eax
// 007855c4  57                   push edi
// 007855c5  e816bcffff           call 0x7811e0
// 007855ca  8b4620               mov eax, dword ptr [esi + 0x20]
// 007855cd  83c418               add esp, 0x18
// 007855d0  83f8ff               cmp eax, -1
// 007855d3  7503                 jne 0x7855d8
// 007855d5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007855d8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007855dc  8d140b               lea edx, [ebx + ecx]
// 007855df  52                   push edx
// 007855e0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007855e4  52                   push edx
// 007855e5  51                   push ecx
// 007855e6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007855ea  51                   push ecx
// 007855eb  50                   push eax
// 007855ec  57                   push edi
// 007855ed  e8eebbffff           call 0x7811e0
// 007855f2  8b5560               mov edx, dword ptr [ebp + 0x60]
// 007855f5  83c418               add esp, 0x18
// 007855f8  396a04               cmp dword ptr [edx + 4], ebp
// 007855fb  751f                 jne 0x78561c
// 007855fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00785601  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00785605  50                   push eax
// 00785606  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078560a  2bd8                 sub ebx, eax
// 0078560c  035c2424             add ebx, dword ptr [esp + 0x24]
// 00785610  53                   push ebx
// 00785611  50                   push eax
// 00785612  51                   push ecx
// 00785613  57                   push edi
// 00785614  e8c7b5ffff           call 0x780be0
// 00785619  83c414               add esp, 0x14
// 0078561c  8b7544               mov esi, dword ptr [ebp + 0x44]
// 0078561f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00785623  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00785626  8b11                 mov edx, dword ptr [ecx]
// 00785628  6a01                 push 1
// 0078562a  83ec10               sub esp, 0x10
// 0078562d  8bc4                 mov eax, esp
// 0078562f  8930                 mov dword ptr [eax], esi
// 00785631  8b7548               mov esi, dword ptr [ebp + 0x48]
// 00785634  897004               mov dword ptr [eax + 4], esi
// 00785637  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 0078563a  897008               mov dword ptr [eax + 8], esi
// 0078563d  8b7550               mov esi, dword ptr [ebp + 0x50]
// 00785640  55                   push ebp
// 00785641  89700c               mov dword ptr [eax + 0xc], esi
// 00785644  8b4268               mov eax, dword ptr [edx + 0x68]
// 00785647  57                   push edi
// 00785648  ffd0                 call eax
// 0078564a  5f                   pop edi
// 0078564b  5e                   pop esi
// 0078564c  5d                   pop ebp
// 0078564d  5b                   pop ebx
// 0078564e  83c434               add esp, 0x34
// 00785651  c20800               ret 8
// 00785654  60                   pushal 
// 00785655  4f                   dec edi
// 00785656  7800                 js 0x785658
// 00785658  17                   pop ss
// 00785659  51                   push ecx
// 0078565a  7800                 js 0x78565c
// 0078565c  b452                 mov ah, 0x52
// 0078565e  7800                 js 0x785660
// 00785660  6c                   insb byte ptr es:[edi], dx
// 00785661  54                   push esp
// 00785662  7800                 js 0x785664
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetExcel@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
