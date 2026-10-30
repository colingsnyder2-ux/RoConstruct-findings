// roc 2009-12 0080ebe0  unit: IIHH::?$CMap  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ebe0
//
// 0080ebe0  6aff                 push -1
// 0080ebe2  68cb9d9500           push 0x959dcb
// 0080ebe7  64a100000000         mov eax, dword ptr fs:[0]
// 0080ebed  50                   push eax
// 0080ebee  83ec7c               sub esp, 0x7c
// 0080ebf1  55                   push ebp
// 0080ebf2  56                   push esi
// 0080ebf3  57                   push edi
// 0080ebf4  a10052b600           mov eax, dword ptr [0xb65200]
// 0080ebf9  33c4                 xor eax, esp
// 0080ebfb  50                   push eax
// 0080ebfc  8d84248c000000       lea eax, [esp + 0x8c]
// 0080ec03  64a300000000         mov dword ptr fs:[0], eax
// 0080ec09  8be9                 mov ebp, ecx
// 0080ec0b  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 0080ec12  8b4618               mov eax, dword ptr [esi + 0x18]
// 0080ec15  f7d0                 not eax
// 0080ec17  a801                 test al, 1
// 0080ec19  0f84cb000000         je 0x80ecea
// 0080ec1f  8d4c2444             lea ecx, [esp + 0x44]
// 0080ec23  e808bcffff           call 0x80a830
// 0080ec28  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0080ec2f  51                   push ecx
// 0080ec30  8d4c2448             lea ecx, [esp + 0x48]
// 0080ec34  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0080ec3f  e87cefffff           call 0x80dbc0
// 0080ec44  8d4c2444             lea ecx, [esp + 0x44]
// 0080ec48  e8f3e3ffff           call 0x80d040
// 0080ec4d  8d4c2444             lea ecx, [esp + 0x44]
// 0080ec51  e84abcffff           call 0x80a8a0
// 0080ec56  85c0                 test eax, eax
// 0080ec58  7575                 jne 0x80eccf
// 0080ec5a  e891a4ffff           call 0x8090f0
// 0080ec5f  85c0                 test eax, eax
// 0080ec61  7420                 je 0x80ec83
// 0080ec63  e86831c3ff           call 0x441dd0
// 0080ec68  50                   push eax
// 0080ec69  56                   push esi
// 0080ec6a  8bcd                 mov ecx, ebp
// 0080ec6c  e84fc4ffff           call 0x80b0c0
// 0080ec71  6a00                 push 0
// 0080ec73  8bce                 mov ecx, esi
// 0080ec75  e87a57feff           call 0x7f43f4
// 0080ec7a  8d4c2444             lea ecx, [esp + 0x44]
// 0080ec7e  e975010000           jmp 0x80edf8
// 0080ec83  8d542418             lea edx, [esp + 0x18]
// 0080ec87  52                   push edx
// 0080ec88  e8e309d2ff           call 0x52f670
// 0080ec8d  50                   push eax
// 0080ec8e  ff15ecc99800         call dword ptr [0x98c9ec]
// 0080ec94  85c0                 test eax, eax
// 0080ec96  7437                 je 0x80eccf
// 0080ec98  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080ec9c  50                   push eax
// 0080ec9d  56                   push esi
// 0080ec9e  8bcd                 mov ecx, ebp
// 0080eca0  e81bc4ffff           call 0x80b0c0
// 0080eca5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080eca9  51                   push ecx
// 0080ecaa  56                   push esi
// 0080ecab  8bcd                 mov ecx, ebp
// 0080ecad  e80ec4ffff           call 0x80b0c0
// 0080ecb2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080ecb6  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 0080ecbc  52                   push edx
// 0080ecbd  ffd6                 call esi
// 0080ecbf  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080ecc3  50                   push eax
// 0080ecc4  ffd6                 call esi
// 0080ecc6  8d4c2444             lea ecx, [esp + 0x44]
// 0080ecca  e929010000           jmp 0x80edf8
// 0080eccf  6a00                 push 0
// 0080ecd1  8bce                 mov ecx, esi
// 0080ecd3  e81c57feff           call 0x7f43f4
// 0080ecd8  6a00                 push 0
// 0080ecda  8bce                 mov ecx, esi
// 0080ecdc  e81357feff           call 0x7f43f4
// 0080ece1  8d4c2444             lea ecx, [esp + 0x44]
// 0080ece5  e90e010000           jmp 0x80edf8
// 0080ecea  8d4c2468             lea ecx, [esp + 0x68]
// 0080ecee  e83dbbffff           call 0x80a830
// 0080ecf3  8d4c2410             lea ecx, [esp + 0x10]
// 0080ecf7  51                   push ecx
// 0080ecf8  56                   push esi
// 0080ecf9  8bcd                 mov ecx, ebp
// 0080ecfb  c784249c00000001000000 mov dword ptr [esp + 0x9c], 1
// 0080ed06  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0080ed0e  e82dc2ffff           call 0x80af40
// 0080ed13  6a00                 push 0
// 0080ed15  56                   push esi
// 0080ed16  8bcd                 mov ecx, ebp
// 0080ed18  8bf8                 mov edi, eax
// 0080ed1a  e821c2ffff           call 0x80af40
// 0080ed1f  8bf0                 mov esi, eax
// 0080ed21  85ff                 test edi, edi
// 0080ed23  0f84ba000000         je 0x80ede3
// 0080ed29  85f6                 test esi, esi
// 0080ed2b  7525                 jne 0x80ed52
// 0080ed2d  57                   push edi
// 0080ed2e  8d4c246c             lea ecx, [esp + 0x6c]
// 0080ed32  e869e0ffff           call 0x80cda0
// 0080ed37  83bc24a400000018     cmp dword ptr [esp + 0xa4], 0x18
// 0080ed3f  0f8e9e000000         jle 0x80ede3
// 0080ed45  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080ed49  89542470             mov dword ptr [esp + 0x70], edx
// 0080ed4d  e991000000           jmp 0x80ede3
// 0080ed52  8d44242c             lea eax, [esp + 0x2c]
// 0080ed56  50                   push eax
// 0080ed57  6a18                 push 0x18
// 0080ed59  57                   push edi
// 0080ed5a  ff155cb19800         call dword ptr [0x98b15c]
// 0080ed60  8d4c2410             lea ecx, [esp + 0x10]
// 0080ed64  e8a752feff           call 0x7f4010
// 0080ed69  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080ed6d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080ed71  6a01                 push 1
// 0080ed73  6a00                 push 0
// 0080ed75  6a19                 push 0x19
// 0080ed77  51                   push ecx
// 0080ed78  52                   push edx
// 0080ed79  8d4c2424             lea ecx, [esp + 0x24]
// 0080ed7d  c68424a800000002     mov byte ptr [esp + 0xa8], 2
// 0080ed85  e88052feff           call 0x7f400a
// 0080ed8a  56                   push esi
// 0080ed8b  e8d455feff           call 0x7f4364
// 0080ed90  50                   push eax
// 0080ed91  57                   push edi
// 0080ed92  e8cd55feff           call 0x7f4364
// 0080ed97  50                   push eax
// 0080ed98  8d4c2418             lea ecx, [esp + 0x18]
// 0080ed9c  e85f44c0ff           call 0x413200
// 0080eda1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080eda5  6a00                 push 0
// 0080eda7  6a00                 push 0
// 0080eda9  50                   push eax
// 0080edaa  e86f4dfeff           call 0x7f3b1e
// 0080edaf  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 0080edb5  8b09                 mov ecx, dword ptr [ecx]
// 0080edb7  e844acffff           call 0x809a00
// 0080edbc  50                   push eax
// 0080edbd  8d4c246c             lea ecx, [esp + 0x6c]
// 0080edc1  e89adfffff           call 0x80cd60
// 0080edc6  8d4c2410             lea ecx, [esp + 0x10]
// 0080edca  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0080edd2  e81b52feff           call 0x7f3ff2
// 0080edd7  57                   push edi
// 0080edd8  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0080edde  ffd7                 call edi
// 0080ede0  56                   push esi
// 0080ede1  ffd7                 call edi
// 0080ede3  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0080edea  8d542468             lea edx, [esp + 0x68]
// 0080edee  52                   push edx
// 0080edef  e8ccedffff           call 0x80dbc0
// 0080edf4  8d4c2468             lea ecx, [esp + 0x68]
// 0080edf8  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0080ee03  e8d8dfffff           call 0x80cde0
// 0080ee08  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0080ee0f  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ee16  59                   pop ecx
// 0080ee17  5f                   pop edi
// 0080ee18  5e                   pop esi
// 0080ee19  5d                   pop ebp
// 0080ee1a  81c488000000         add esp, 0x88
// 0080ee20  c20c00               ret 0xc
// copied from an identical function in another client (function ?SerializeIcon@CXTPImageManagerIcon@@QAEXAAVCXTPImageManagerIconHandle@@AAVCArchive@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp