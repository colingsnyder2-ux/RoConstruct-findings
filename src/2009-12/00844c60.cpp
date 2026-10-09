// roc 2009-12 00844c60  unit: CXTPPopupBar  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844c60
//
// 00844c60  56                   push esi
// 00844c61  8bf1                 mov esi, ecx
// 00844c63  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 00844c6a  57                   push edi
// 00844c6b  0f8485000000         je 0x844cf6
// 00844c71  8b442414             mov eax, dword ptr [esp + 0x14]
// 00844c75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00844c79  50                   push eax
// 00844c7a  51                   push ecx
// 00844c7b  8d96b4010000         lea edx, [esi + 0x1b4]
// 00844c81  52                   push edx
// 00844c82  ff155cca9800         call dword ptr [0x98ca5c]
// 00844c88  85c0                 test eax, eax
// 00844c8a  746a                 je 0x844cf6
// 00844c8c  8bce                 mov ecx, esi
// 00844c8e  e86df8fbff           call 0x804500
// 00844c93  85c0                 test eax, eax
// 00844c95  755f                 jne 0x844cf6
// 00844c97  e882eefaff           call 0x7f3b1e
// 00844c9c  68867f0000           push 0x7f86
// 00844ca1  6a00                 push 0
// 00844ca3  ff1548ca9800         call dword ptr [0x98ca48]
// 00844ca9  50                   push eax
// 00844caa  ff1520ca9800         call dword ptr [0x98ca20]
// 00844cb0  68b0647f00           push 0x7f64b0
// 00844cb5  b9d0bab900           mov ecx, 0xb9bad0
// 00844cba  e87d170e00           call 0x92643c
// 00844cbf  8bf8                 mov edi, eax
// 00844cc1  85ff                 test edi, edi
// 00844cc3  7505                 jne 0x844cca
// 00844cc5  e842eefaff           call 0x7f3b0c
// 00844cca  b801000000           mov eax, 1
// 00844ccf  014704               add dword ptr [edi + 4], eax
// 00844cd2  8bce                 mov ecx, esi
// 00844cd4  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 00844cda  e8b1edffff           call 0x843a90
// 00844cdf  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 00844ce9  ff4f04               dec dword ptr [edi + 4]
// 00844cec  e83fa10200           call 0x86ee30
// 00844cf1  5f                   pop edi
// 00844cf2  5e                   pop esi
// 00844cf3  c20c00               ret 0xc
// 00844cf6  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 00844cfd  7441                 je 0x844d40
// 00844cff  8d442410             lea eax, [esp + 0x10]
// 00844d03  50                   push eax
// 00844d04  8bce                 mov ecx, esi
// 00844d06  e895efffff           call 0x843ca0
// 00844d0b  85c0                 test eax, eax
// 00844d0d  7431                 je 0x844d40
// 00844d0f  68b0647f00           push 0x7f64b0
// 00844d14  b9d0bab900           mov ecx, 0xb9bad0
// 00844d19  e81e170e00           call 0x92643c
// 00844d1e  8bf8                 mov edi, eax
// 00844d20  85ff                 test edi, edi
// 00844d22  7505                 jne 0x844d29
// 00844d24  e8e3edfaff           call 0x7f3b0c
// 00844d29  ff4704               inc dword ptr [edi + 4]
// 00844d2c  8bce                 mov ecx, esi
// 00844d2e  e8cdeaffff           call 0x843800
// 00844d33  ff4f04               dec dword ptr [edi + 4]
// 00844d36  e8f5a00200           call 0x86ee30
// 00844d3b  5f                   pop edi
// 00844d3c  5e                   pop esi
// 00844d3d  c20c00               ret 0xc
// 00844d40  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00844d44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00844d48  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00844d4c  51                   push ecx
// 00844d4d  52                   push edx
// 00844d4e  50                   push eax
// 00844d4f  8bce                 mov ecx, esi
// 00844d51  e86a28fcff           call 0x8075c0
// 00844d56  5f                   pop edi
// 00844d57  5e                   pop esi
// 00844d58  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnLButtonDown@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
