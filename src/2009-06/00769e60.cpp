// roc 2009-06 00769e60  unit: CXTPPopupBar  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00769e60
//
// 00769e60  56                   push esi
// 00769e61  8bf1                 mov esi, ecx
// 00769e63  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 00769e6a  57                   push edi
// 00769e6b  0f8485000000         je 0x769ef6
// 00769e71  8b442414             mov eax, dword ptr [esp + 0x14]
// 00769e75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00769e79  50                   push eax
// 00769e7a  51                   push ecx
// 00769e7b  8d96b4010000         lea edx, [esi + 0x1b4]
// 00769e81  52                   push edx
// 00769e82  ff15c0ed8900         call dword ptr [0x89edc0]
// 00769e88  85c0                 test eax, eax
// 00769e8a  746a                 je 0x769ef6
// 00769e8c  8bce                 mov ecx, esi
// 00769e8e  e82d35fcff           call 0x72d3c0
// 00769e93  85c0                 test eax, eax
// 00769e95  755f                 jne 0x769ef6
// 00769e97  e85aeefaff           call 0x718cf6
// 00769e9c  68867f0000           push 0x7f86
// 00769ea1  6a00                 push 0
// 00769ea3  ff15b0ed8900         call dword ptr [0x89edb0]
// 00769ea9  50                   push eax
// 00769eaa  ff1590ed8900         call dword ptr [0x89ed90]
// 00769eb0  68f0b87100           push 0x71b8f0
// 00769eb5  b99426a500           mov ecx, 0xa52694
// 00769eba  e841200e00           call 0x84bf00
// 00769ebf  8bf8                 mov edi, eax
// 00769ec1  85ff                 test edi, edi
// 00769ec3  7505                 jne 0x769eca
// 00769ec5  e81aeefaff           call 0x718ce4
// 00769eca  b801000000           mov eax, 1
// 00769ecf  014704               add dword ptr [edi + 4], eax
// 00769ed2  8bce                 mov ecx, esi
// 00769ed4  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 00769eda  e8d1edffff           call 0x768cb0
// 00769edf  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 00769ee9  ff4f04               dec dword ptr [edi + 4]
// 00769eec  e8df9d0200           call 0x793cd0
// 00769ef1  5f                   pop edi
// 00769ef2  5e                   pop esi
// 00769ef3  c20c00               ret 0xc
// 00769ef6  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 00769efd  7441                 je 0x769f40
// 00769eff  8d442410             lea eax, [esp + 0x10]
// 00769f03  50                   push eax
// 00769f04  8bce                 mov ecx, esi
// 00769f06  e8b5efffff           call 0x768ec0
// 00769f0b  85c0                 test eax, eax
// 00769f0d  7431                 je 0x769f40
// 00769f0f  68f0b87100           push 0x71b8f0
// 00769f14  b99426a500           mov ecx, 0xa52694
// 00769f19  e8e21f0e00           call 0x84bf00
// 00769f1e  8bf8                 mov edi, eax
// 00769f20  85ff                 test edi, edi
// 00769f22  7505                 jne 0x769f29
// 00769f24  e8bbedfaff           call 0x718ce4
// 00769f29  ff4704               inc dword ptr [edi + 4]
// 00769f2c  8bce                 mov ecx, esi
// 00769f2e  e8edeaffff           call 0x768a20
// 00769f33  ff4f04               dec dword ptr [edi + 4]
// 00769f36  e8959d0200           call 0x793cd0
// 00769f3b  5f                   pop edi
// 00769f3c  5e                   pop esi
// 00769f3d  c20c00               ret 0xc
// 00769f40  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00769f44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00769f48  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00769f4c  51                   push ecx
// 00769f4d  52                   push edx
// 00769f4e  50                   push eax
// 00769f4f  8bce                 mov ecx, esi
// 00769f51  e80a65fcff           call 0x730460
// 00769f56  5f                   pop edi
// 00769f57  5e                   pop esi
// 00769f58  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnLButtonDown@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
