// roc 2009-06 0072b3c0  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072b3c0
//
// 0072b3c0  83ec18               sub esp, 0x18
// 0072b3c3  53                   push ebx
// 0072b3c4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0072b3c8  817b0404010000       cmp dword ptr [ebx + 4], 0x104
// 0072b3cf  56                   push esi
// 0072b3d0  8bf1                 mov esi, ecx
// 0072b3d2  0f8597000000         jne 0x72b46f
// 0072b3d8  b800200000           mov eax, 0x2000
// 0072b3dd  6685430e             test word ptr [ebx + 0xe], ax
// 0072b3e1  0f8488000000         je 0x72b46f
// 0072b3e7  e8d4faffff           call 0x72aec0
// 0072b3ec  83780400             cmp dword ptr [eax + 4], 0
// 0072b3f0  7f7d                 jg 0x72b46f
// 0072b3f2  6a00                 push 0
// 0072b3f4  8bce                 mov ecx, esi
// 0072b3f6  e8c5faffff           call 0x72aec0
// 0072b3fb  8bc8                 mov ecx, eax
// 0072b3fd  e83e8a0600           call 0x793e40
// 0072b402  85c0                 test eax, eax
// 0072b404  7569                 jne 0x72b46f
// 0072b406  8bce                 mov ecx, esi
// 0072b408  e8b3faffff           call 0x72aec0
// 0072b40d  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0072b413  85c0                 test eax, eax
// 0072b415  7403                 je 0x72b41a
// 0072b417  8b4020               mov eax, dword ptr [eax + 0x20]
// 0072b41a  50                   push eax
// 0072b41b  e8a0880600           call 0x793cc0
// 0072b420  83c404               add esp, 4
// 0072b423  85c0                 test eax, eax
// 0072b425  7448                 je 0x72b46f
// 0072b427  837b0812             cmp dword ptr [ebx + 8], 0x12
// 0072b42b  7513                 jne 0x72b440
// 0072b42d  6a01                 push 1
// 0072b42f  8bce                 mov ecx, esi
// 0072b431  e85afaffff           call 0x72ae90
// 0072b436  5e                   pop esi
// 0072b437  33c0                 xor eax, eax
// 0072b439  5b                   pop ebx
// 0072b43a  83c418               add esp, 0x18
// 0072b43d  c20400               ret 4
// 0072b440  837e2400             cmp dword ptr [esi + 0x24], 0
// 0072b444  7412                 je 0x72b458
// 0072b446  6a10                 push 0x10
// 0072b448  ff1534ee8900         call dword ptr [0x89ee34]
// 0072b44e  b900800000           mov ecx, 0x8000
// 0072b453  6685c1               test cx, ax
// 0072b456  7517                 jne 0x72b46f
// 0072b458  8b4308               mov eax, dword ptr [ebx + 8]
// 0072b45b  85c0                 test eax, eax
// 0072b45d  7410                 je 0x72b46f
// 0072b45f  50                   push eax
// 0072b460  8bce                 mov ecx, esi
// 0072b462  e8f9fdffff           call 0x72b260
// 0072b467  85c0                 test eax, eax
// 0072b469  0f858b000000         jne 0x72b4fa
// 0072b46f  8b4304               mov eax, dword ptr [ebx + 4]
// 0072b472  3d05010000           cmp eax, 0x105
// 0072b477  7407                 je 0x72b480
// 0072b479  3d01010000           cmp eax, 0x101
// 0072b47e  752e                 jne 0x72b4ae
// 0072b480  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 0072b487  7425                 je 0x72b4ae
// 0072b489  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0072b490  741c                 je 0x72b4ae
// 0072b492  6a00                 push 0
// 0072b494  8bce                 mov ecx, esi
// 0072b496  e825faffff           call 0x72aec0
// 0072b49b  8bc8                 mov ecx, eax
// 0072b49d  e89e890600           call 0x793e40
// 0072b4a2  85c0                 test eax, eax
// 0072b4a4  7508                 jne 0x72b4ae
// 0072b4a6  50                   push eax
// 0072b4a7  8bce                 mov ecx, esi
// 0072b4a9  e8e2f9ffff           call 0x72ae90
// 0072b4ae  8b4304               mov eax, dword ptr [ebx + 4]
// 0072b4b1  83f87b               cmp eax, 0x7b
// 0072b4b4  7407                 je 0x72b4bd
// 0072b4b6  3d05010000           cmp eax, 0x105
// 0072b4bb  754a                 jne 0x72b507
// 0072b4bd  6a00                 push 0
// 0072b4bf  8bce                 mov ecx, esi
// 0072b4c1  e8faf9ffff           call 0x72aec0
// 0072b4c6  8bc8                 mov ecx, eax
// 0072b4c8  e873890600           call 0x793e40
// 0072b4cd  85c0                 test eax, eax
// 0072b4cf  7436                 je 0x72b507
// 0072b4d1  6880b87100           push 0x71b880
// 0072b4d6  b99026a500           mov ecx, 0xa52690
// 0072b4db  e8200a1200           call 0x84bf00
// 0072b4e0  85c0                 test eax, eax
// 0072b4e2  7505                 jne 0x72b4e9
// 0072b4e4  e8fbd7feff           call 0x718ce4
// 0072b4e9  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0072b4ec  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0072b4ef  52                   push edx
// 0072b4f0  51                   push ecx
// 0072b4f1  6a7b                 push 0x7b
// 0072b4f3  8bc8                 mov ecx, eax
// 0072b4f5  e8267d0600           call 0x793220
// 0072b4fa  5e                   pop esi
// 0072b4fb  b801000000           mov eax, 1
// 0072b500  5b                   pop ebx
// 0072b501  83c418               add esp, 0x18
// 0072b504  c20400               ret 4
// 0072b507  817b040a020000       cmp dword ptr [ebx + 4], 0x20a
// 0072b50e  57                   push edi
// 0072b50f  0f85be000000         jne 0x72b5d3
// 0072b515  6880b87100           push 0x71b880
// 0072b51a  b99026a500           mov ecx, 0xa52690
// 0072b51f  e8dc091200           call 0x84bf00
// 0072b524  85c0                 test eax, eax
// 0072b526  7505                 jne 0x72b52d
// 0072b528  e8b7d7feff           call 0x718ce4
// 0072b52d  83782000             cmp dword ptr [eax + 0x20], 0
// 0072b531  7e35                 jle 0x72b568
// 0072b533  6880b87100           push 0x71b880
// 0072b538  b99026a500           mov ecx, 0xa52690
// 0072b53d  e8be091200           call 0x84bf00
// 0072b542  85c0                 test eax, eax
// 0072b544  7505                 jne 0x72b54b
// 0072b546  e899d7feff           call 0x718ce4
// 0072b54b  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0072b54e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0072b551  52                   push edx
// 0072b552  51                   push ecx
// 0072b553  680a020000           push 0x20a
// 0072b558  8bc8                 mov ecx, eax
// 0072b55a  e8c17c0600           call 0x793220
// 0072b55f  5f                   pop edi
// 0072b560  5e                   pop esi
// 0072b561  5b                   pop ebx
// 0072b562  83c418               add esp, 0x18
// 0072b565  c20400               ret 4
// 0072b568  8b16                 mov edx, dword ptr [esi]
// 0072b56a  8b4258               mov eax, dword ptr [edx + 0x58]
// 0072b56d  8bce                 mov ecx, esi
// 0072b56f  ffd0                 call eax
// 0072b571  8d4c240c             lea ecx, [esp + 0xc]
// 0072b575  51                   push ecx
// 0072b576  8bf8                 mov edi, eax
// 0072b578  ff152cee8900         call dword ptr [0x89ee2c]
// 0072b57e  85ff                 test edi, edi
// 0072b580  7451                 je 0x72b5d3
// 0072b582  83bff800000003       cmp dword ptr [edi + 0xf8], 3
// 0072b589  7548                 jne 0x72b5d3
// 0072b58b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0072b58f  55                   push ebp
// 0072b590  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0072b594  57                   push edi
// 0072b595  8d4c241c             lea ecx, [esp + 0x1c]
// 0072b599  e8d24e0400           call 0x770470
// 0072b59e  55                   push ebp
// 0072b59f  53                   push ebx
// 0072b5a0  50                   push eax
// 0072b5a1  ff15c0ed8900         call dword ptr [0x89edc0]
// 0072b5a7  5d                   pop ebp
// 0072b5a8  85c0                 test eax, eax
// 0072b5aa  7423                 je 0x72b5cf
// 0072b5ac  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072b5b0  33d2                 xor edx, edx
// 0072b5b2  6639500a             cmp word ptr [eax + 0xa], dx
// 0072b5b6  8bcf                 mov ecx, edi
// 0072b5b8  0f9ec2               setle dl
// 0072b5bb  52                   push edx
// 0072b5bc  e8efcc0800           call 0x7b82b0
// 0072b5c1  5f                   pop edi
// 0072b5c2  5e                   pop esi
// 0072b5c3  b801000000           mov eax, 1
// 0072b5c8  5b                   pop ebx
// 0072b5c9  83c418               add esp, 0x18
// 0072b5cc  c20400               ret 4
// 0072b5cf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0072b5d3  8b4304               mov eax, dword ptr [ebx + 4]
// 0072b5d6  3d00010000           cmp eax, 0x100
// 0072b5db  7228                 jb 0x72b605
// 0072b5dd  3d08010000           cmp eax, 0x108
// 0072b5e2  7721                 ja 0x72b605
// 0072b5e4  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0072b5ea  85c0                 test eax, eax
// 0072b5ec  7403                 je 0x72b5f1
// 0072b5ee  8b4020               mov eax, dword ptr [eax + 0x20]
// 0072b5f1  53                   push ebx
// 0072b5f2  50                   push eax
// 0072b5f3  8bce                 mov ecx, esi
// 0072b5f5  e8b630f5ff           call 0x67e6b0
// 0072b5fa  8bc8                 mov ecx, eax
// 0072b5fc  e8ef8b0800           call 0x7b41f0
// 0072b601  85c0                 test eax, eax
// 0072b603  75bc                 jne 0x72b5c1
// 0072b605  5f                   pop edi
// 0072b606  5e                   pop esi
// 0072b607  33c0                 xor eax, eax
// 0072b609  5b                   pop ebx
// 0072b60a  83c418               add esp, 0x18
// 0072b60d  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateFrameMessage@CXTPCommandBars@@QAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp