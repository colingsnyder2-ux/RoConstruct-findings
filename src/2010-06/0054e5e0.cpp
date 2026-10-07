// roc 2010-06 0054e5e0  unit: G3D::Shader  size: 2731 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e5e0
//
// 0054e5e0  6aff                 push -1
// 0054e5e2  68280c9900           push 0x990c28
// 0054e5e7  64a100000000         mov eax, dword ptr fs:[0]
// 0054e5ed  50                   push eax
// 0054e5ee  64892500000000       mov dword ptr fs:[0], esp
// 0054e5f5  81ec50010000         sub esp, 0x150
// 0054e5fb  53                   push ebx
// 0054e5fc  56                   push esi
// 0054e5fd  57                   push edi
// 0054e5fe  68fe08a000           push 0xa008fe
// 0054e603  8d4c2410             lea ecx, [esp + 0x10]
// 0054e607  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e60d  68fe08a000           push 0xa008fe
// 0054e612  8d4c2464             lea ecx, [esp + 0x64]
// 0054e616  c784246801000000000000 mov dword ptr [esp + 0x168], 0
// 0054e621  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e627  68fe08a000           push 0xa008fe
// 0054e62c  8d4c242c             lea ecx, [esp + 0x2c]
// 0054e630  c684246801000001     mov byte ptr [esp + 0x168], 1
// 0054e638  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e63e  68fe08a000           push 0xa008fe
// 0054e643  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054e64a  c684246801000002     mov byte ptr [esp + 0x168], 2
// 0054e652  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e658  689c68a100           push 0xa1689c
// 0054e65d  8d4c2448             lea ecx, [esp + 0x48]
// 0054e661  c684246801000003     mov byte ptr [esp + 0x168], 3
// 0054e669  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e66f  b304                 mov bl, 4
// 0054e671  6880fba100           push 0xa1fb80
// 0054e676  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0054e67d  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0054e684  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e68a  8bb4246c010000       mov esi, dword ptr [esp + 0x16c]
// 0054e691  8d44240c             lea eax, [esp + 0xc]
// 0054e695  50                   push eax
// 0054e696  8d4c2464             lea ecx, [esp + 0x64]
// 0054e69a  51                   push ecx
// 0054e69b  8d542430             lea edx, [esp + 0x30]
// 0054e69f  52                   push edx
// 0054e6a0  8d842488000000       lea eax, [esp + 0x88]
// 0054e6a7  50                   push eax
// 0054e6a8  8d4c2454             lea ecx, [esp + 0x54]
// 0054e6ac  51                   push ecx
// 0054e6ad  8d9424ac000000       lea edx, [esp + 0xac]
// 0054e6b4  52                   push edx
// 0054e6b5  8bce                 mov ecx, esi
// 0054e6b7  c684247c01000005     mov byte ptr [esp + 0x17c], 5
// 0054e6bf  e87c9c0000           call 0x558340
// 0054e6c4  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054e6cb  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0054e6d2  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e6d8  8d4c2444             lea ecx, [esp + 0x44]
// 0054e6dc  c684246401000003     mov byte ptr [esp + 0x164], 3
// 0054e6e4  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e6ea  8d4c247c             lea ecx, [esp + 0x7c]
// 0054e6ee  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0054e6f6  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e6fc  8d4c2428             lea ecx, [esp + 0x28]
// 0054e700  c684246401000001     mov byte ptr [esp + 0x164], 1
// 0054e708  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e70e  8d4c2460             lea ecx, [esp + 0x60]
// 0054e712  c684246401000000     mov byte ptr [esp + 0x164], 0
// 0054e71a  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e720  83cfff               or edi, 0xffffffff
// 0054e723  8d4c240c             lea ecx, [esp + 0xc]
// 0054e727  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054e72e  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e734  8bce                 mov ecx, esi
// 0054e736  e815970000           call 0x557e50
// 0054e73b  8bce                 mov ecx, esi
// 0054e73d  e85e900000           call 0x5577a0
// 0054e742  68a039a000           push 0xa039a0
// 0054e747  8d4c2410             lea ecx, [esp + 0x10]
// 0054e74b  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e751  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 0054e75c  e89ffcffff           call 0x54e400
// 0054e761  50                   push eax
// 0054e762  8d442410             lea eax, [esp + 0x10]
// 0054e766  50                   push eax
// 0054e767  e874f2ffff           call 0x54d9e0
// 0054e76c  83c408               add esp, 8
// 0054e76f  8d4c240c             lea ecx, [esp + 0xc]
// 0054e773  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054e77a  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e780  8bce                 mov ecx, esi
// 0054e782  e849900000           call 0x5577d0
// 0054e787  68fe08a000           push 0xa008fe
// 0054e78c  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0054e793  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e799  68fe08a000           push 0xa008fe
// 0054e79e  8d4c2448             lea ecx, [esp + 0x48]
// 0054e7a2  c784246801000007000000 mov dword ptr [esp + 0x168], 7
// 0054e7ad  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e7b3  68fe08a000           push 0xa008fe
// 0054e7b8  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054e7bf  c684246801000008     mov byte ptr [esp + 0x168], 8
// 0054e7c7  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e7cd  68fe08a000           push 0xa008fe
// 0054e7d2  8d4c242c             lea ecx, [esp + 0x2c]
// 0054e7d6  c684246801000009     mov byte ptr [esp + 0x168], 9
// 0054e7de  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e7e4  68fe08a000           push 0xa008fe
// 0054e7e9  8d4c2464             lea ecx, [esp + 0x64]
// 0054e7ed  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 0054e7f5  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e7fb  b30b                 mov bl, 0xb
// 0054e7fd  689068a100           push 0xa16890
// 0054e802  8d4c2410             lea ecx, [esp + 0x10]
// 0054e806  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0054e80d  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e813  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054e81a  51                   push ecx
// 0054e81b  8d542448             lea edx, [esp + 0x48]
// 0054e81f  52                   push edx
// 0054e820  8d842484000000       lea eax, [esp + 0x84]
// 0054e827  50                   push eax
// 0054e828  8d4c2434             lea ecx, [esp + 0x34]
// 0054e82c  51                   push ecx
// 0054e82d  8d542470             lea edx, [esp + 0x70]
// 0054e831  52                   push edx
// 0054e832  8d442420             lea eax, [esp + 0x20]
// 0054e836  50                   push eax
// 0054e837  8bce                 mov ecx, esi
// 0054e839  c684247c0100000c     mov byte ptr [esp + 0x17c], 0xc
// 0054e841  e8fa9a0000           call 0x558340
// 0054e846  8d4c240c             lea ecx, [esp + 0xc]
// 0054e84a  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0054e851  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e857  8d4c2460             lea ecx, [esp + 0x60]
// 0054e85b  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 0054e863  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e869  8d4c2428             lea ecx, [esp + 0x28]
// 0054e86d  c684246401000009     mov byte ptr [esp + 0x164], 9
// 0054e875  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e87b  8d4c247c             lea ecx, [esp + 0x7c]
// 0054e87f  c684246401000008     mov byte ptr [esp + 0x164], 8
// 0054e887  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e88d  8d4c2444             lea ecx, [esp + 0x44]
// 0054e891  c684246401000007     mov byte ptr [esp + 0x164], 7
// 0054e899  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e89f  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054e8a6  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054e8ad  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e8b3  8bce                 mov ecx, esi
// 0054e8b5  e896950000           call 0x557e50
// 0054e8ba  8bce                 mov ecx, esi
// 0054e8bc  e88f950000           call 0x557e50
// 0054e8c1  68fe08a000           push 0xa008fe
// 0054e8c6  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0054e8cd  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e8d3  c78424640100000d000000 mov dword ptr [esp + 0x164], 0xd
// 0054e8de  68fe08a000           push 0xa008fe
// 0054e8e3  8d4c2448             lea ecx, [esp + 0x48]
// 0054e8e7  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e8ed  68fe08a000           push 0xa008fe
// 0054e8f2  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054e8f9  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 0054e901  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e907  68fe08a000           push 0xa008fe
// 0054e90c  8d4c242c             lea ecx, [esp + 0x2c]
// 0054e910  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 0054e918  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e91e  689c68a100           push 0xa1689c
// 0054e923  8d4c2464             lea ecx, [esp + 0x64]
// 0054e927  c684246801000010     mov byte ptr [esp + 0x168], 0x10
// 0054e92f  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e935  b311                 mov bl, 0x11
// 0054e937  687cfba100           push 0xa1fb7c
// 0054e93c  8d4c2410             lea ecx, [esp + 0x10]
// 0054e940  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0054e947  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e94d  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054e954  51                   push ecx
// 0054e955  8d542448             lea edx, [esp + 0x48]
// 0054e959  52                   push edx
// 0054e95a  8d842484000000       lea eax, [esp + 0x84]
// 0054e961  50                   push eax
// 0054e962  8d4c2434             lea ecx, [esp + 0x34]
// 0054e966  51                   push ecx
// 0054e967  8d542470             lea edx, [esp + 0x70]
// 0054e96b  52                   push edx
// 0054e96c  8d442420             lea eax, [esp + 0x20]
// 0054e970  50                   push eax
// 0054e971  8bce                 mov ecx, esi
// 0054e973  c684247c01000012     mov byte ptr [esp + 0x17c], 0x12
// 0054e97b  e8c0990000           call 0x558340
// 0054e980  8d4c240c             lea ecx, [esp + 0xc]
// 0054e984  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0054e98b  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e991  8d4c2460             lea ecx, [esp + 0x60]
// 0054e995  c684246401000010     mov byte ptr [esp + 0x164], 0x10
// 0054e99d  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e9a3  8d4c2428             lea ecx, [esp + 0x28]
// 0054e9a7  c68424640100000f     mov byte ptr [esp + 0x164], 0xf
// 0054e9af  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e9b5  8d4c247c             lea ecx, [esp + 0x7c]
// 0054e9b9  c68424640100000e     mov byte ptr [esp + 0x164], 0xe
// 0054e9c1  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e9c7  8d4c2444             lea ecx, [esp + 0x44]
// 0054e9cb  c68424640100000d     mov byte ptr [esp + 0x164], 0xd
// 0054e9d3  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e9d9  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054e9e0  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054e9e7  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e9ed  8bce                 mov ecx, esi
// 0054e9ef  e85c940000           call 0x557e50
// 0054e9f4  8bce                 mov ecx, esi
// 0054e9f6  e8a58d0000           call 0x5577a0
// 0054e9fb  689468a100           push 0xa16894
// 0054ea00  8d4c2410             lea ecx, [esp + 0x10]
// 0054ea04  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ea0a  c784246401000013000000 mov dword ptr [esp + 0x164], 0x13
// 0054ea15  e866f9ffff           call 0x54e380
// 0054ea1a  50                   push eax
// 0054ea1b  8d4c2410             lea ecx, [esp + 0x10]
// 0054ea1f  51                   push ecx
// 0054ea20  e8bbefffff           call 0x54d9e0
// 0054ea25  83c408               add esp, 8
// 0054ea28  8d4c240c             lea ecx, [esp + 0xc]
// 0054ea2c  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ea33  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ea39  686cfba100           push 0xa1fb6c
// 0054ea3e  8d4c2410             lea ecx, [esp + 0x10]
// 0054ea42  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ea48  c784246401000014000000 mov dword ptr [esp + 0x164], 0x14
// 0054ea53  e818faffff           call 0x54e470
// 0054ea58  50                   push eax
// 0054ea59  8d542410             lea edx, [esp + 0x10]
// 0054ea5d  52                   push edx
// 0054ea5e  e87defffff           call 0x54d9e0
// 0054ea63  83c408               add esp, 8
// 0054ea66  8d4c240c             lea ecx, [esp + 0xc]
// 0054ea6a  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ea71  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ea77  6860fba100           push 0xa1fb60
// 0054ea7c  8d4c2410             lea ecx, [esp + 0x10]
// 0054ea80  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ea86  c784246401000015000000 mov dword ptr [esp + 0x164], 0x15
// 0054ea91  e80af4ffff           call 0x54dea0
// 0054ea96  0fb6054d9ec000       movzx eax, byte ptr [0xc09e4d]
// 0054ea9d  50                   push eax
// 0054ea9e  8d4c2410             lea ecx, [esp + 0x10]
// 0054eaa2  51                   push ecx
// 0054eaa3  e878f0ffff           call 0x54db20
// 0054eaa8  83c408               add esp, 8
// 0054eaab  8d4c240c             lea ecx, [esp + 0xc]
// 0054eaaf  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054eab6  ff1500a49e00         call dword ptr [0x9ea400]
// 0054eabc  6858fba100           push 0xa1fb58
// 0054eac1  8d4c2410             lea ecx, [esp + 0x10]
// 0054eac5  ff1510a49e00         call dword ptr [0x9ea410]
// 0054eacb  c784246401000016000000 mov dword ptr [esp + 0x164], 0x16
// 0054ead6  e8c5f3ffff           call 0x54dea0
// 0054eadb  0fb615499ec000       movzx edx, byte ptr [0xc09e49]
// 0054eae2  52                   push edx
// 0054eae3  8d442410             lea eax, [esp + 0x10]
// 0054eae7  50                   push eax
// 0054eae8  e833f0ffff           call 0x54db20
// 0054eaed  83c408               add esp, 8
// 0054eaf0  8d4c240c             lea ecx, [esp + 0xc]
// 0054eaf4  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054eafb  ff1500a49e00         call dword ptr [0x9ea400]
// 0054eb01  6850fba100           push 0xa1fb50
// 0054eb06  8d4c2410             lea ecx, [esp + 0x10]
// 0054eb0a  ff1510a49e00         call dword ptr [0x9ea410]
// 0054eb10  c784246401000017000000 mov dword ptr [esp + 0x164], 0x17
// 0054eb1b  e880f3ffff           call 0x54dea0
// 0054eb20  0fb60d4a9ec000       movzx ecx, byte ptr [0xc09e4a]
// 0054eb27  51                   push ecx
// 0054eb28  8d542410             lea edx, [esp + 0x10]
// 0054eb2c  52                   push edx
// 0054eb2d  e8eeefffff           call 0x54db20
// 0054eb32  83c408               add esp, 8
// 0054eb35  8d4c240c             lea ecx, [esp + 0xc]
// 0054eb39  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054eb40  ff1500a49e00         call dword ptr [0x9ea400]
// 0054eb46  6848fba100           push 0xa1fb48
// 0054eb4b  8d4c2410             lea ecx, [esp + 0x10]
// 0054eb4f  ff1510a49e00         call dword ptr [0x9ea410]
// 0054eb55  c784246401000018000000 mov dword ptr [esp + 0x164], 0x18
// 0054eb60  e83bf3ffff           call 0x54dea0
// 0054eb65  0fb6054b9ec000       movzx eax, byte ptr [0xc09e4b]
// 0054eb6c  50                   push eax
// 0054eb6d  8d4c2410             lea ecx, [esp + 0x10]
// 0054eb71  51                   push ecx
// 0054eb72  e8a9efffff           call 0x54db20
// 0054eb77  83c408               add esp, 8
// 0054eb7a  8d4c240c             lea ecx, [esp + 0xc]
// 0054eb7e  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054eb85  ff1500a49e00         call dword ptr [0x9ea400]
// 0054eb8b  683cfba100           push 0xa1fb3c
// 0054eb90  8d4c2410             lea ecx, [esp + 0x10]
// 0054eb94  ff1510a49e00         call dword ptr [0x9ea410]
// 0054eb9a  c784246401000019000000 mov dword ptr [esp + 0x164], 0x19
// 0054eba5  e8f6f2ffff           call 0x54dea0
// 0054ebaa  0fb6154c9ec000       movzx edx, byte ptr [0xc09e4c]
// 0054ebb1  52                   push edx
// 0054ebb2  8d442410             lea eax, [esp + 0x10]
// 0054ebb6  50                   push eax
// 0054ebb7  e864efffff           call 0x54db20
// 0054ebbc  83c408               add esp, 8
// 0054ebbf  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ebc6  8d4c240c             lea ecx, [esp + 0xc]
// 0054ebca  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ebd0  6830fba100           push 0xa1fb30
// 0054ebd5  8d4c2410             lea ecx, [esp + 0x10]
// 0054ebd9  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ebdf  c78424640100001a000000 mov dword ptr [esp + 0x164], 0x1a
// 0054ebea  e8b1f2ffff           call 0x54dea0
// 0054ebef  0fb60d489ec000       movzx ecx, byte ptr [0xc09e48]
// 0054ebf6  51                   push ecx
// 0054ebf7  8d542410             lea edx, [esp + 0x10]
// 0054ebfb  52                   push edx
// 0054ebfc  e81fefffff           call 0x54db20
// 0054ec01  83c408               add esp, 8
// 0054ec04  8d4c240c             lea ecx, [esp + 0xc]
// 0054ec08  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ec0f  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ec15  8bce                 mov ecx, esi
// 0054ec17  e8b48b0000           call 0x5577d0
// 0054ec1c  68fe08a000           push 0xa008fe
// 0054ec21  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0054ec28  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ec2e  68fe08a000           push 0xa008fe
// 0054ec33  8d4c2448             lea ecx, [esp + 0x48]
// 0054ec37  c78424680100001b000000 mov dword ptr [esp + 0x168], 0x1b
// 0054ec42  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ec48  68fe08a000           push 0xa008fe
// 0054ec4d  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054ec54  c68424680100001c     mov byte ptr [esp + 0x168], 0x1c
// 0054ec5c  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ec62  68fe08a000           push 0xa008fe
// 0054ec67  8d4c242c             lea ecx, [esp + 0x2c]
// 0054ec6b  c68424680100001d     mov byte ptr [esp + 0x168], 0x1d
// 0054ec73  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ec79  68fe08a000           push 0xa008fe
// 0054ec7e  8d4c2464             lea ecx, [esp + 0x64]
// 0054ec82  c68424680100001e     mov byte ptr [esp + 0x168], 0x1e
// 0054ec8a  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ec90  b31f                 mov bl, 0x1f
// 0054ec92  689068a100           push 0xa16890
// 0054ec97  8d4c2410             lea ecx, [esp + 0x10]
// 0054ec9b  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0054eca2  ff1510a49e00         call dword ptr [0x9ea410]
// 0054eca8  8d842498000000       lea eax, [esp + 0x98]
// 0054ecaf  50                   push eax
// 0054ecb0  8d4c2448             lea ecx, [esp + 0x48]
// 0054ecb4  51                   push ecx
// 0054ecb5  8d942484000000       lea edx, [esp + 0x84]
// 0054ecbc  52                   push edx
// 0054ecbd  8d442434             lea eax, [esp + 0x34]
// 0054ecc1  50                   push eax
// 0054ecc2  8d4c2470             lea ecx, [esp + 0x70]
// 0054ecc6  51                   push ecx
// 0054ecc7  8d542420             lea edx, [esp + 0x20]
// 0054eccb  52                   push edx
// 0054eccc  8bce                 mov ecx, esi
// 0054ecce  c684247c01000020     mov byte ptr [esp + 0x17c], 0x20
// 0054ecd6  e865960000           call 0x558340
// 0054ecdb  8d4c240c             lea ecx, [esp + 0xc]
// 0054ecdf  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0054ece6  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ecec  8d4c2460             lea ecx, [esp + 0x60]
// 0054ecf0  c68424640100001e     mov byte ptr [esp + 0x164], 0x1e
// 0054ecf8  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ecfe  8d4c2428             lea ecx, [esp + 0x28]
// 0054ed02  c68424640100001d     mov byte ptr [esp + 0x164], 0x1d
// 0054ed0a  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ed10  8d4c247c             lea ecx, [esp + 0x7c]
// 0054ed14  c68424640100001c     mov byte ptr [esp + 0x164], 0x1c
// 0054ed1c  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ed22  8d4c2444             lea ecx, [esp + 0x44]
// 0054ed26  c68424640100001b     mov byte ptr [esp + 0x164], 0x1b
// 0054ed2e  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ed34  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054ed3b  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ed42  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ed48  8bce                 mov ecx, esi
// 0054ed4a  e801910000           call 0x557e50
// 0054ed4f  8bce                 mov ecx, esi
// 0054ed51  e8fa900000           call 0x557e50
// 0054ed56  68fe08a000           push 0xa008fe
// 0054ed5b  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0054ed62  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ed68  68fe08a000           push 0xa008fe
// 0054ed6d  8d4c2448             lea ecx, [esp + 0x48]
// 0054ed71  c784246801000021000000 mov dword ptr [esp + 0x168], 0x21
// 0054ed7c  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ed82  68fe08a000           push 0xa008fe
// 0054ed87  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054ed8e  c684246801000022     mov byte ptr [esp + 0x168], 0x22
// 0054ed96  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ed9c  68fe08a000           push 0xa008fe
// 0054eda1  8d4c242c             lea ecx, [esp + 0x2c]
// 0054eda5  c684246801000023     mov byte ptr [esp + 0x168], 0x23
// 0054edad  ff1510a49e00         call dword ptr [0x9ea410]
// 0054edb3  689c68a100           push 0xa1689c
// 0054edb8  8d4c2464             lea ecx, [esp + 0x64]
// 0054edbc  c684246801000024     mov byte ptr [esp + 0x168], 0x24
// 0054edc4  ff1510a49e00         call dword ptr [0x9ea410]
// 0054edca  b325                 mov bl, 0x25
// 0054edcc  68383aa100           push 0xa13a38
// 0054edd1  8d4c2410             lea ecx, [esp + 0x10]
// 0054edd5  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0054eddc  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ede2  8d842498000000       lea eax, [esp + 0x98]
// 0054ede9  50                   push eax
// 0054edea  8d4c2448             lea ecx, [esp + 0x48]
// 0054edee  51                   push ecx
// 0054edef  8d942484000000       lea edx, [esp + 0x84]
// 0054edf6  52                   push edx
// 0054edf7  8d442434             lea eax, [esp + 0x34]
// 0054edfb  50                   push eax
// 0054edfc  8d4c2470             lea ecx, [esp + 0x70]
// 0054ee00  51                   push ecx
// 0054ee01  8d542420             lea edx, [esp + 0x20]
// 0054ee05  52                   push edx
// 0054ee06  8bce                 mov ecx, esi
// 0054ee08  c684247c01000026     mov byte ptr [esp + 0x17c], 0x26
// 0054ee10  e82b950000           call 0x558340
// 0054ee15  8d4c240c             lea ecx, [esp + 0xc]
// 0054ee19  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0054ee20  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ee26  8d4c2460             lea ecx, [esp + 0x60]
// 0054ee2a  c684246401000024     mov byte ptr [esp + 0x164], 0x24
// 0054ee32  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ee38  8d4c2428             lea ecx, [esp + 0x28]
// 0054ee3c  c684246401000023     mov byte ptr [esp + 0x164], 0x23
// 0054ee44  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ee4a  8d4c247c             lea ecx, [esp + 0x7c]
// 0054ee4e  c684246401000022     mov byte ptr [esp + 0x164], 0x22
// 0054ee56  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ee5c  8d4c2444             lea ecx, [esp + 0x44]
// 0054ee60  c684246401000021     mov byte ptr [esp + 0x164], 0x21
// 0054ee68  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ee6e  8d8c2498000000       lea ecx, [esp + 0x98]
// 0054ee75  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ee7c  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ee82  8bce                 mov ecx, esi
// 0054ee84  e8c78f0000           call 0x557e50
// 0054ee89  8bce                 mov ecx, esi
// 0054ee8b  e810890000           call 0x5577a0
// 0054ee90  6820fba100           push 0xa1fb20
// 0054ee95  8d4c2410             lea ecx, [esp + 0x10]
// 0054ee99  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ee9f  8d44240c             lea eax, [esp + 0xc]
// 0054eea3  68e4ed0000           push 0xede4
// 0054eea8  50                   push eax
// 0054eea9  c784246c01000027000000 mov dword ptr [esp + 0x16c], 0x27
// 0054eeb4  e8b7edffff           call 0x54dc70
// 0054eeb9  83c408               add esp, 8
// 0054eebc  8d4c240c             lea ecx, [esp + 0xc]
// 0054eec0  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054eec7  ff1500a49e00         call dword ptr [0x9ea400]
// 0054eecd  6810fba100           push 0xa1fb10
// 0054eed2  8d4c2410             lea ecx, [esp + 0x10]
// 0054eed6  ff1510a49e00         call dword ptr [0x9ea410]
// 0054eedc  c784246401000028000000 mov dword ptr [esp + 0x164], 0x28
// 0054eee7  e8f4f5ffff           call 0x54e4e0
// 0054eeec  50                   push eax
// 0054eeed  8d4c2410             lea ecx, [esp + 0x10]
// 0054eef1  51                   push ecx
// 0054eef2  e8e9eaffff           call 0x54d9e0
// 0054eef7  83c408               add esp, 8
// 0054eefa  8d4c240c             lea ecx, [esp + 0xc]
// 0054eefe  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054ef05  ff1500a49e00         call dword ptr [0x9ea400]
// 0054ef0b  8bce                 mov ecx, esi
// 0054ef0d  e8be880000           call 0x5577d0
// 0054ef12  68fe08a000           push 0xa008fe
// 0054ef17  8d8c2444010000       lea ecx, [esp + 0x144]
// 0054ef1e  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ef24  68fe08a000           push 0xa008fe
// 0054ef29  8d8c240c010000       lea ecx, [esp + 0x10c]
// 0054ef30  c784246801000029000000 mov dword ptr [esp + 0x168], 0x29
// 0054ef3b  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ef41  68fe08a000           push 0xa008fe
// 0054ef46  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0054ef4d  c68424680100002a     mov byte ptr [esp + 0x168], 0x2a
// 0054ef55  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ef5b  68fe08a000           push 0xa008fe
// 0054ef60  8d8c2428010000       lea ecx, [esp + 0x128]
// 0054ef67  c68424680100002b     mov byte ptr [esp + 0x168], 0x2b
// 0054ef6f  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ef75  68fe08a000           push 0xa008fe
// 0054ef7a  8d8c24f0000000       lea ecx, [esp + 0xf0]
// 0054ef81  c68424680100002c     mov byte ptr [esp + 0x168], 0x2c
// 0054ef89  ff1510a49e00         call dword ptr [0x9ea410]
// 0054ef8f  b32d                 mov bl, 0x2d
// 0054ef91  689068a100           push 0xa16890
// 0054ef96  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0054ef9d  889c2468010000       mov byte ptr [esp + 0x168], bl
// 0054efa4  ff1510a49e00         call dword ptr [0x9ea410]
// 0054efaa  8d942440010000       lea edx, [esp + 0x140]
// 0054efb1  52                   push edx
// 0054efb2  8d84240c010000       lea eax, [esp + 0x10c]
// 0054efb9  50                   push eax
// 0054efba  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0054efc1  51                   push ecx
// 0054efc2  8d942430010000       lea edx, [esp + 0x130]
// 0054efc9  52                   push edx
// 0054efca  8d8424fc000000       lea eax, [esp + 0xfc]
// 0054efd1  50                   push eax
// 0054efd2  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 0054efd9  51                   push ecx
// 0054efda  8bce                 mov ecx, esi
// 0054efdc  c684247c0100002e     mov byte ptr [esp + 0x17c], 0x2e
// 0054efe4  e857930000           call 0x558340
// 0054efe9  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0054eff0  889c2464010000       mov byte ptr [esp + 0x164], bl
// 0054eff7  ff1500a49e00         call dword ptr [0x9ea400]
// 0054effd  8d8c24ec000000       lea ecx, [esp + 0xec]
// 0054f004  c68424640100002c     mov byte ptr [esp + 0x164], 0x2c
// 0054f00c  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f012  8d8c2424010000       lea ecx, [esp + 0x124]
// 0054f019  c68424640100002b     mov byte ptr [esp + 0x164], 0x2b
// 0054f021  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f027  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 0054f02e  c68424640100002a     mov byte ptr [esp + 0x164], 0x2a
// 0054f036  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f03c  8d8c2408010000       lea ecx, [esp + 0x108]
// 0054f043  c684246401000029     mov byte ptr [esp + 0x164], 0x29
// 0054f04b  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f051  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0054f058  8d8c2440010000       lea ecx, [esp + 0x140]
// 0054f05f  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f065  8bce                 mov ecx, esi
// 0054f067  e8e48d0000           call 0x557e50
// 0054f06c  8bce                 mov ecx, esi
// 0054f06e  e8dd8d0000           call 0x557e50
// 0054f073  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0054f07a  5f                   pop edi
// 0054f07b  5e                   pop esi
// 0054f07c  5b                   pop ebx
// 0054f07d  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f084  81c45c010000         add esp, 0x15c
// 0054f08a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAVTextOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
