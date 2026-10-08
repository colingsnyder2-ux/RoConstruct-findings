// roc 2010-06 007f8cf0  unit: CXTPPopupBar  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f8cf0
//
// 007f8cf0  56                   push esi
// 007f8cf1  8bf1                 mov esi, ecx
// 007f8cf3  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 007f8cfa  57                   push edi
// 007f8cfb  0f8485000000         je 0x7f8d86
// 007f8d01  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f8d05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f8d09  50                   push eax
// 007f8d0a  51                   push ecx
// 007f8d0b  8d96b4010000         lea edx, [esi + 0x1b4]
// 007f8d11  52                   push edx
// 007f8d12  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007f8d18  85c0                 test eax, eax
// 007f8d1a  746a                 je 0x7f8d86
// 007f8d1c  8bce                 mov ecx, esi
// 007f8d1e  e8ddf8fbff           call 0x7b8600
// 007f8d23  85c0                 test eax, eax
// 007f8d25  755f                 jne 0x7f8d86
// 007f8d27  e832effaff           call 0x7a7c5e
// 007f8d2c  68867f0000           push 0x7f86
// 007f8d31  6a00                 push 0
// 007f8d33  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 007f8d39  50                   push eax
// 007f8d3a  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 007f8d40  68e0a57a00           push 0x7aa5e0
// 007f8d45  b90062c200           mov ecx, 0xc26200
// 007f8d4a  e829401800           call 0x97cd78
// 007f8d4f  8bf8                 mov edi, eax
// 007f8d51  85ff                 test edi, edi
// 007f8d53  7505                 jne 0x7f8d5a
// 007f8d55  e8f2eefaff           call 0x7a7c4c
// 007f8d5a  b801000000           mov eax, 1
// 007f8d5f  014704               add dword ptr [edi + 4], eax
// 007f8d62  8bce                 mov ecx, esi
// 007f8d64  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 007f8d6a  e8d1edffff           call 0x7f7b40
// 007f8d6f  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 007f8d79  ff4f04               dec dword ptr [edi + 4]
// 007f8d7c  e8bfa00200           call 0x822e40
// 007f8d81  5f                   pop edi
// 007f8d82  5e                   pop esi
// 007f8d83  c20c00               ret 0xc
// 007f8d86  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 007f8d8d  7441                 je 0x7f8dd0
// 007f8d8f  8d442410             lea eax, [esp + 0x10]
// 007f8d93  50                   push eax
// 007f8d94  8bce                 mov ecx, esi
// 007f8d96  e8b5efffff           call 0x7f7d50
// 007f8d9b  85c0                 test eax, eax
// 007f8d9d  7431                 je 0x7f8dd0
// 007f8d9f  68e0a57a00           push 0x7aa5e0
// 007f8da4  b90062c200           mov ecx, 0xc26200
// 007f8da9  e8ca3f1800           call 0x97cd78
// 007f8dae  8bf8                 mov edi, eax
// 007f8db0  85ff                 test edi, edi
// 007f8db2  7505                 jne 0x7f8db9
// 007f8db4  e893eefaff           call 0x7a7c4c
// 007f8db9  ff4704               inc dword ptr [edi + 4]
// 007f8dbc  8bce                 mov ecx, esi
// 007f8dbe  e8edeaffff           call 0x7f78b0
// 007f8dc3  ff4f04               dec dword ptr [edi + 4]
// 007f8dc6  e875a00200           call 0x822e40
// 007f8dcb  5f                   pop edi
// 007f8dcc  5e                   pop esi
// 007f8dcd  c20c00               ret 0xc
// 007f8dd0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f8dd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f8dd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f8ddc  51                   push ecx
// 007f8ddd  52                   push edx
// 007f8dde  50                   push eax
// 007f8ddf  8bce                 mov ecx, esi
// 007f8de1  e87a29fcff           call 0x7bb760
// 007f8de6  5f                   pop edi
// 007f8de7  5e                   pop esi
// 007f8de8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnLButtonDown@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
