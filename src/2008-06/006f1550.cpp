// roc 2008-06 006f1550  unit: CXTPPopupBar  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1550
//
// 006f1550  56                   push esi
// 006f1551  8bf1                 mov esi, ecx
// 006f1553  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 006f155a  57                   push edi
// 006f155b  0f8485000000         je 0x6f15e6
// 006f1561  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f1565  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f1569  50                   push eax
// 006f156a  51                   push ecx
// 006f156b  8d96b4010000         lea edx, [esi + 0x1b4]
// 006f1571  52                   push edx
// 006f1572  ff152c2d8000         call dword ptr [0x802d2c]
// 006f1578  85c0                 test eax, eax
// 006f157a  746a                 je 0x6f15e6
// 006f157c  8bce                 mov ecx, esi
// 006f157e  e8bd38fcff           call 0x6b4e40
// 006f1583  85c0                 test eax, eax
// 006f1585  755f                 jne 0x6f15e6
// 006f1587  e89af3faff           call 0x6a0926
// 006f158c  68867f0000           push 0x7f86
// 006f1591  6a00                 push 0
// 006f1593  ff15d02d8000         call dword ptr [0x802dd0]
// 006f1599  50                   push eax
// 006f159a  ff15042d8000         call dword ptr [0x802d04]
// 006f15a0  6810306a00           push 0x6a3010
// 006f15a5  b99ced9700           mov ecx, 0x97ed9c
// 006f15aa  e82baa0c00           call 0x7bbfda
// 006f15af  8bf8                 mov edi, eax
// 006f15b1  85ff                 test edi, edi
// 006f15b3  7505                 jne 0x6f15ba
// 006f15b5  e88af3faff           call 0x6a0944
// 006f15ba  b801000000           mov eax, 1
// 006f15bf  014704               add dword ptr [edi + 4], eax
// 006f15c2  8bce                 mov ecx, esi
// 006f15c4  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 006f15ca  e821edffff           call 0x6f02f0
// 006f15cf  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 006f15d9  ff4f04               dec dword ptr [edi + 4]
// 006f15dc  e8bfb80200           call 0x71cea0
// 006f15e1  5f                   pop edi
// 006f15e2  5e                   pop esi
// 006f15e3  c20c00               ret 0xc
// 006f15e6  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 006f15ed  7441                 je 0x6f1630
// 006f15ef  8d442410             lea eax, [esp + 0x10]
// 006f15f3  50                   push eax
// 006f15f4  8bce                 mov ecx, esi
// 006f15f6  e805efffff           call 0x6f0500
// 006f15fb  85c0                 test eax, eax
// 006f15fd  7431                 je 0x6f1630
// 006f15ff  6810306a00           push 0x6a3010
// 006f1604  b99ced9700           mov ecx, 0x97ed9c
// 006f1609  e8cca90c00           call 0x7bbfda
// 006f160e  8bf8                 mov edi, eax
// 006f1610  85ff                 test edi, edi
// 006f1612  7505                 jne 0x6f1619
// 006f1614  e82bf3faff           call 0x6a0944
// 006f1619  ff4704               inc dword ptr [edi + 4]
// 006f161c  8bce                 mov ecx, esi
// 006f161e  e83deaffff           call 0x6f0060
// 006f1623  ff4f04               dec dword ptr [edi + 4]
// 006f1626  e875b80200           call 0x71cea0
// 006f162b  5f                   pop edi
// 006f162c  5e                   pop esi
// 006f162d  c20c00               ret 0xc
// 006f1630  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f1634  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f1638  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f163c  51                   push ecx
// 006f163d  52                   push edx
// 006f163e  50                   push eax
// 006f163f  8bce                 mov ecx, esi
// 006f1641  e8aa68fcff           call 0x6b7ef0
// 006f1646  5f                   pop edi
// 006f1647  5e                   pop esi
// 006f1648  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnLButtonDown@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
