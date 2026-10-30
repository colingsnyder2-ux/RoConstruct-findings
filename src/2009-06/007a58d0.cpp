// roc 2009-06 007a58d0  unit: CXTPOffice2007Theme  size: 3422 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a58d0
//
// 007a58d0  6aff                 push -1
// 007a58d2  68c8c58700           push 0x87c5c8
// 007a58d7  64a100000000         mov eax, dword ptr fs:[0]
// 007a58dd  50                   push eax
// 007a58de  81ec38010000         sub esp, 0x138
// 007a58e4  53                   push ebx
// 007a58e5  55                   push ebp
// 007a58e6  56                   push esi
// 007a58e7  57                   push edi
// 007a58e8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a58ed  33c4                 xor eax, esp
// 007a58ef  50                   push eax
// 007a58f0  8d84244c010000       lea eax, [esp + 0x14c]
// 007a58f7  64a300000000         mov dword ptr fs:[0], eax
// 007a58fd  8bf9                 mov edi, ecx
// 007a58ff  8bb42460010000       mov esi, dword ptr [esp + 0x160]
// 007a5906  8b4608               mov eax, dword ptr [esi + 8]
// 007a5909  50                   push eax
// 007a590a  e8f333f7ff           call 0x718d02
// 007a590f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007a5912  8bd8                 mov ebx, eax
// 007a5914  894c2418             mov dword ptr [esp + 0x18], ecx
// 007a5918  53                   push ebx
// 007a5919  8d8c2410010000       lea ecx, [esp + 0x110]
// 007a5920  895c2440             mov dword ptr [esp + 0x40], ebx
// 007a5924  e8a7abfcff           call 0x7704d0
// 007a5929  8d94240c010000       lea edx, [esp + 0x10c]
// 007a5930  52                   push edx
// 007a5931  8bcb                 mov ecx, ebx
// 007a5933  e89a36f7ff           call 0x718fd2
// 007a5938  53                   push ebx
// 007a5939  8d4c2420             lea ecx, [esp + 0x20]
// 007a593d  e82eabfcff           call 0x770470
// 007a5942  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a5946  2b8c2418010000       sub ecx, dword ptr [esp + 0x118]
// 007a594d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a5951  8bac240c010000       mov ebp, dword ptr [esp + 0x10c]
// 007a5958  894c2454             mov dword ptr [esp + 0x54], ecx
// 007a595c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a5960  2be8                 sub ebp, eax
// 007a5962  f7d9                 neg ecx
// 007a5964  f7d8                 neg eax
// 007a5966  51                   push ecx
// 007a5967  50                   push eax
// 007a5968  8d442424             lea eax, [esp + 0x24]
// 007a596c  50                   push eax
// 007a596d  ff15f8ed8900         call dword ptr [0x89edf8]
// 007a5973  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a5977  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a597b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a597f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007a5983  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 007a598a  8bce                 mov ecx, esi
// 007a598c  899424ac000000       mov dword ptr [esp + 0xac], edx
// 007a5993  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 007a599a  e871b20600           call 0x810c10
// 007a599f  8d4c2458             lea ecx, [esp + 0x58]
// 007a59a3  51                   push ecx
// 007a59a4  8bce                 mov ecx, esi
// 007a59a6  89442444             mov dword ptr [esp + 0x44], eax
// 007a59aa  03d8                 add ebx, eax
// 007a59ac  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 007a59b4  e817b40600           call 0x810dd0
// 007a59b9  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 007a59c0  85c0                 test eax, eax
// 007a59c2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007a59c9  7409                 je 0x7a59d4
// 007a59cb  2b442458             sub eax, dword ptr [esp + 0x58]
// 007a59cf  2bc3                 sub eax, ebx
// 007a59d1  48                   dec eax
// 007a59d2  eb02                 jmp 0x7a59d6
// 007a59d4  2bc3                 sub eax, ebx
// 007a59d6  89442414             mov dword ptr [esp + 0x14], eax
// 007a59da  85ed                 test ebp, ebp
// 007a59dc  7e3c                 jle 0x7a5a1a
// 007a59de  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a59e3  7408                 je 0x7a59ed
// 007a59e5  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 007a59eb  eb06                 jmp 0x7a59f3
// 007a59ed  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 007a59f3  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 007a59fa  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 007a5a01  50                   push eax
// 007a5a02  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a5a06  2bd3                 sub edx, ebx
// 007a5a08  52                   push edx
// 007a5a09  6a01                 push 1
// 007a5a0b  53                   push ebx
// 007a5a0c  50                   push eax
// 007a5a0d  8bce                 mov ecx, esi
// 007a5a0f  e81c650a00           call 0x84bf30
// 007a5a14  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5a18  eb07                 jmp 0x7a5a21
// 007a5a1a  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 007a5a21  83fd01               cmp ebp, 1
// 007a5a24  7e2b                 jle 0x7a5a51
// 007a5a26  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5a2b  7408                 je 0x7a5a35
// 007a5a2d  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 007a5a33  eb06                 jmp 0x7a5a3b
// 007a5a35  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 007a5a3b  51                   push ecx
// 007a5a3c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a5a40  50                   push eax
// 007a5a41  6a01                 push 1
// 007a5a43  41                   inc ecx
// 007a5a44  53                   push ebx
// 007a5a45  51                   push ecx
// 007a5a46  8bce                 mov ecx, esi
// 007a5a48  e8e3640a00           call 0x84bf30
// 007a5a4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5a51  83fd02               cmp ebp, 2
// 007a5a54  7e2d                 jle 0x7a5a83
// 007a5a56  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5a5b  7408                 je 0x7a5a65
// 007a5a5d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 007a5a63  eb06                 jmp 0x7a5a6b
// 007a5a65  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 007a5a6b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a5a6f  51                   push ecx
// 007a5a70  50                   push eax
// 007a5a71  6a01                 push 1
// 007a5a73  53                   push ebx
// 007a5a74  83c202               add edx, 2
// 007a5a77  52                   push edx
// 007a5a78  8bce                 mov ecx, esi
// 007a5a7a  e8b1640a00           call 0x84bf30
// 007a5a7f  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5a83  83fd03               cmp ebp, 3
// 007a5a86  7e2f                 jle 0x7a5ab7
// 007a5a88  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5a8d  7408                 je 0x7a5a97
// 007a5a8f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 007a5a95  eb06                 jmp 0x7a5a9d
// 007a5a97  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 007a5a9d  51                   push ecx
// 007a5a9e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a5aa2  50                   push eax
// 007a5aa3  8d45fd               lea eax, [ebp - 3]
// 007a5aa6  50                   push eax
// 007a5aa7  83c103               add ecx, 3
// 007a5aaa  53                   push ebx
// 007a5aab  51                   push ecx
// 007a5aac  8bce                 mov ecx, esi
// 007a5aae  e87d640a00           call 0x84bf30
// 007a5ab3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5ab7  85ed                 test ebp, ebp
// 007a5ab9  7e34                 jle 0x7a5aef
// 007a5abb  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5ac0  7408                 je 0x7a5aca
// 007a5ac2  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 007a5ac8  eb06                 jmp 0x7a5ad0
// 007a5aca  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 007a5ad0  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a5ad4  50                   push eax
// 007a5ad5  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 007a5adc  2bc3                 sub eax, ebx
// 007a5ade  50                   push eax
// 007a5adf  6a01                 push 1
// 007a5ae1  53                   push ebx
// 007a5ae2  4a                   dec edx
// 007a5ae3  52                   push edx
// 007a5ae4  8bce                 mov ecx, esi
// 007a5ae6  e845640a00           call 0x84bf30
// 007a5aeb  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5aef  83fd01               cmp ebp, 1
// 007a5af2  7e2d                 jle 0x7a5b21
// 007a5af4  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5af9  7408                 je 0x7a5b03
// 007a5afb  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 007a5b01  eb06                 jmp 0x7a5b09
// 007a5b03  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 007a5b09  51                   push ecx
// 007a5b0a  50                   push eax
// 007a5b0b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a5b0f  6a01                 push 1
// 007a5b11  53                   push ebx
// 007a5b12  83c0fe               add eax, -2
// 007a5b15  50                   push eax
// 007a5b16  8bce                 mov ecx, esi
// 007a5b18  e813640a00           call 0x84bf30
// 007a5b1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5b21  83fd02               cmp ebp, 2
// 007a5b24  7e2d                 jle 0x7a5b53
// 007a5b26  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5b2b  7408                 je 0x7a5b35
// 007a5b2d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 007a5b33  eb06                 jmp 0x7a5b3b
// 007a5b35  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 007a5b3b  51                   push ecx
// 007a5b3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a5b40  50                   push eax
// 007a5b41  6a01                 push 1
// 007a5b43  83c1fd               add ecx, -3
// 007a5b46  53                   push ebx
// 007a5b47  51                   push ecx
// 007a5b48  8bce                 mov ecx, esi
// 007a5b4a  e8e1630a00           call 0x84bf30
// 007a5b4f  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a5b53  83fd03               cmp ebp, 3
// 007a5b56  7e2a                 jle 0x7a5b82
// 007a5b58  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a5b5d  7408                 je 0x7a5b67
// 007a5b5f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 007a5b65  eb06                 jmp 0x7a5b6d
// 007a5b67  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 007a5b6d  51                   push ecx
// 007a5b6e  50                   push eax
// 007a5b6f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a5b73  8d55fd               lea edx, [ebp - 3]
// 007a5b76  52                   push edx
// 007a5b77  53                   push ebx
// 007a5b78  2bc5                 sub eax, ebp
// 007a5b7a  50                   push eax
// 007a5b7b  8bce                 mov ecx, esi
// 007a5b7d  e8ae630a00           call 0x84bf30
// 007a5b82  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007a5b86  85db                 test ebx, ebx
// 007a5b88  7420                 je 0x7a5baa
// 007a5b8a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a5b8e  e849630a00           call 0x84bedc
// 007a5b93  a900000001           test eax, 0x1000000
// 007a5b98  7408                 je 0x7a5ba2
// 007a5b9a  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 007a5ba0  eb0e                 jmp 0x7a5bb0
// 007a5ba2  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 007a5ba8  eb06                 jmp 0x7a5bb0
// 007a5baa  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 007a5bb0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a5bb4  8b542428             mov edx, dword ptr [esp + 0x28]
// 007a5bb8  50                   push eax
// 007a5bb9  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a5bbd  6a01                 push 1
// 007a5bbf  2bc8                 sub ecx, eax
// 007a5bc1  51                   push ecx
// 007a5bc2  4a                   dec edx
// 007a5bc3  52                   push edx
// 007a5bc4  50                   push eax
// 007a5bc5  8bce                 mov ecx, esi
// 007a5bc7  e864630a00           call 0x84bf30
// 007a5bcc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007a5bd0  83f901               cmp ecx, 1
// 007a5bd3  7e35                 jle 0x7a5c0a
// 007a5bd5  85db                 test ebx, ebx
// 007a5bd7  7408                 je 0x7a5be1
// 007a5bd9  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 007a5bdf  eb06                 jmp 0x7a5be7
// 007a5be1  8b87e8050000         mov eax, dword ptr [edi + 0x5e8]
// 007a5be7  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a5beb  50                   push eax
// 007a5bec  8d41ff               lea eax, [ecx - 1]
// 007a5bef  50                   push eax
// 007a5bf0  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a5bf4  2bd0                 sub edx, eax
// 007a5bf6  83ea02               sub edx, 2
// 007a5bf9  52                   push edx
// 007a5bfa  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a5bfe  2bd1                 sub edx, ecx
// 007a5c00  52                   push edx
// 007a5c01  40                   inc eax
// 007a5c02  50                   push eax
// 007a5c03  8bce                 mov ecx, esi
// 007a5c05  e826630a00           call 0x84bf30
// 007a5c0a  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a5c0e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a5c12  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a5c16  03c8                 add ecx, eax
// 007a5c18  89442470             mov dword ptr [esp + 0x70], eax
// 007a5c1c  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a5c20  894c2478             mov dword ptr [esp + 0x78], ecx
// 007a5c24  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 007a5c2b  8954246c             mov dword ptr [esp + 0x6c], edx
// 007a5c2f  89442474             mov dword ptr [esp + 0x74], eax
// 007a5c33  e858af0600           call 0x810b90
// 007a5c38  85c0                 test eax, eax
// 007a5c3a  0f8481050000         je 0x7a61c1
// 007a5c40  85f6                 test esi, esi
// 007a5c42  7403                 je 0x7a5c47
// 007a5c44  8b7604               mov esi, dword ptr [esi + 4]
// 007a5c47  8d4c246c             lea ecx, [esp + 0x6c]
// 007a5c4b  51                   push ecx
// 007a5c4c  56                   push esi
// 007a5c4d  8d8c2424010000       lea ecx, [esp + 0x124]
// 007a5c54  e8d7a8fcff           call 0x770530
// 007a5c59  68b00a9000           push 0x900ab0
// 007a5c5e  8bcf                 mov ecx, edi
// 007a5c60  c784245801000000000000 mov dword ptr [esp + 0x158], 0
// 007a5c6b  e850e1ffff           call 0x7a3dc0
// 007a5c70  33db                 xor ebx, ebx
// 007a5c72  395c2418             cmp dword ptr [esp + 0x18], ebx
// 007a5c76  6a02                 push 2
// 007a5c78  0f94c3               sete bl
// 007a5c7b  8bf0                 mov esi, eax
// 007a5c7d  8d9424b8000000       lea edx, [esp + 0xb8]
// 007a5c84  8bce                 mov ecx, esi
// 007a5c86  53                   push ebx
// 007a5c87  52                   push edx
// 007a5c88  e833010600           call 0x805dc0
// 007a5c8d  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 007a5c94  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a5c98  8bc1                 mov eax, ecx
// 007a5c9a  2b8424b4000000       sub eax, dword ptr [esp + 0xb4]
// 007a5ca1  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 007a5ca8  03c2                 add eax, edx
// 007a5caa  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a5cae  899424d0000000       mov dword ptr [esp + 0xd0], edx
// 007a5cb5  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 007a5cbc  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a5cc0  33d2                 xor edx, edx
// 007a5cc2  83ec10               sub esp, 0x10
// 007a5cc5  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 007a5ccc  8bc4                 mov eax, esp
// 007a5cce  8910                 mov dword ptr [eax], edx
// 007a5cd0  89942498000000       mov dword ptr [esp + 0x98], edx
// 007a5cd7  ba05000000           mov edx, 5
// 007a5cdc  895004               mov dword ptr [eax + 4], edx
// 007a5cdf  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007a5ce6  895008               mov dword ptr [eax + 8], edx
// 007a5ce9  83ec10               sub esp, 0x10
// 007a5cec  ba03000000           mov edx, 3
// 007a5cf1  89500c               mov dword ptr [eax + 0xc], edx
// 007a5cf4  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 007a5cfb  8bc4                 mov eax, esp
// 007a5cfd  8910                 mov dword ptr [eax], edx
// 007a5cff  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 007a5d06  895004               mov dword ptr [eax + 4], edx
// 007a5d09  894808               mov dword ptr [eax + 8], ecx
// 007a5d0c  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 007a5d13  89480c               mov dword ptr [eax + 0xc], ecx
// 007a5d16  8d9424ec000000       lea edx, [esp + 0xec]
// 007a5d1d  52                   push edx
// 007a5d1e  8d842440010000       lea eax, [esp + 0x140]
// 007a5d25  50                   push eax
// 007a5d26  8bce                 mov ecx, esi
// 007a5d28  e863f90500           call 0x805690
// 007a5d2d  68a00a9000           push 0x900aa0
// 007a5d32  8bcf                 mov ecx, edi
// 007a5d34  e887e0ffff           call 0x7a3dc0
// 007a5d39  6a02                 push 2
// 007a5d3b  53                   push ebx
// 007a5d3c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 007a5d43  8bf0                 mov esi, eax
// 007a5d45  51                   push ecx
// 007a5d46  8bce                 mov ecx, esi
// 007a5d48  e873000600           call 0x805dc0
// 007a5d4d  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007a5d54  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a5d58  8bd1                 mov edx, ecx
// 007a5d5a  2b9424ac000000       sub edx, dword ptr [esp + 0xac]
// 007a5d61  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 007a5d68  03d0                 add edx, eax
// 007a5d6a  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a5d6e  89942494000000       mov dword ptr [esp + 0x94], edx
// 007a5d75  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a5d79  89942498000000       mov dword ptr [esp + 0x98], edx
// 007a5d80  33d2                 xor edx, edx
// 007a5d82  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 007a5d89  89942488000000       mov dword ptr [esp + 0x88], edx
// 007a5d90  83ec10               sub esp, 0x10
// 007a5d93  8bc4                 mov eax, esp
// 007a5d95  8910                 mov dword ptr [eax], edx
// 007a5d97  ba05000000           mov edx, 5
// 007a5d9c  895004               mov dword ptr [eax + 4], edx
// 007a5d9f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007a5da6  895008               mov dword ptr [eax + 8], edx
// 007a5da9  83ec10               sub esp, 0x10
// 007a5dac  ba03000000           mov edx, 3
// 007a5db1  89500c               mov dword ptr [eax + 0xc], edx
// 007a5db4  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 007a5dbb  8bc4                 mov eax, esp
// 007a5dbd  8908                 mov dword ptr [eax], ecx
// 007a5dbf  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 007a5dc6  894804               mov dword ptr [eax + 4], ecx
// 007a5dc9  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 007a5dd0  895008               mov dword ptr [eax + 8], edx
// 007a5dd3  89480c               mov dword ptr [eax + 0xc], ecx
// 007a5dd6  8d9424b4000000       lea edx, [esp + 0xb4]
// 007a5ddd  52                   push edx
// 007a5dde  8d842440010000       lea eax, [esp + 0x140]
// 007a5de5  50                   push eax
// 007a5de6  8bce                 mov ecx, esi
// 007a5de8  e8a3f80500           call 0x805690
// 007a5ded  68740a9000           push 0x900a74
// 007a5df2  8bcf                 mov ecx, edi
// 007a5df4  e8c7dfffff           call 0x7a3dc0
// 007a5df9  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 007a5e00  2b8c24cc000000       sub ecx, dword ptr [esp + 0xcc]
// 007a5e07  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a5e0b  034c241c             add ecx, dword ptr [esp + 0x1c]
// 007a5e0f  8bf0                 mov esi, eax
// 007a5e11  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007a5e18  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 007a5e1f  6a02                 push 2
// 007a5e21  03442428             add eax, dword ptr [esp + 0x28]
// 007a5e25  894c2460             mov dword ptr [esp + 0x60], ecx
// 007a5e29  53                   push ebx
// 007a5e2a  8d8c2488000000       lea ecx, [esp + 0x88]
// 007a5e31  8944246c             mov dword ptr [esp + 0x6c], eax
// 007a5e35  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007a5e3c  51                   push ecx
// 007a5e3d  8bce                 mov ecx, esi
// 007a5e3f  8954246c             mov dword ptr [esp + 0x6c], edx
// 007a5e43  89442474             mov dword ptr [esp + 0x74], eax
// 007a5e47  e874ff0500           call 0x805dc0
// 007a5e4c  33d2                 xor edx, edx
// 007a5e4e  83ec10               sub esp, 0x10
// 007a5e51  8bcc                 mov ecx, esp
// 007a5e53  8911                 mov dword ptr [ecx], edx
// 007a5e55  ba05000000           mov edx, 5
// 007a5e5a  895104               mov dword ptr [ecx + 4], edx
// 007a5e5d  33d2                 xor edx, edx
// 007a5e5f  895108               mov dword ptr [ecx + 8], edx
// 007a5e62  83ec10               sub esp, 0x10
// 007a5e65  ba03000000           mov edx, 3
// 007a5e6a  89510c               mov dword ptr [ecx + 0xc], edx
// 007a5e6d  8b10                 mov edx, dword ptr [eax]
// 007a5e6f  8bcc                 mov ecx, esp
// 007a5e71  8911                 mov dword ptr [ecx], edx
// 007a5e73  8b5004               mov edx, dword ptr [eax + 4]
// 007a5e76  895104               mov dword ptr [ecx + 4], edx
// 007a5e79  8b5008               mov edx, dword ptr [eax + 8]
// 007a5e7c  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a5e7f  895108               mov dword ptr [ecx + 8], edx
// 007a5e82  89410c               mov dword ptr [ecx + 0xc], eax
// 007a5e85  8d4c247c             lea ecx, [esp + 0x7c]
// 007a5e89  51                   push ecx
// 007a5e8a  8d942440010000       lea edx, [esp + 0x140]
// 007a5e91  52                   push edx
// 007a5e92  8bce                 mov ecx, esi
// 007a5e94  e8f7f70500           call 0x805690
// 007a5e99  8b742470             mov esi, dword ptr [esp + 0x70]
// 007a5e9d  8b942460010000       mov edx, dword ptr [esp + 0x160]
// 007a5ea4  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007a5ea8  037240               add esi, dword ptr [edx + 0x40]
// 007a5eab  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007a5eaf  89442444             mov dword ptr [esp + 0x44], eax
// 007a5eb3  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a5eb7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007a5ebb  c744244407000000     mov dword ptr [esp + 0x44], 7
// 007a5ec3  89742448             mov dword ptr [esp + 0x48], esi
// 007a5ec7  83e803               sub eax, 3
// 007a5eca  89442450             mov dword ptr [esp + 0x50], eax
// 007a5ece  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007a5ed2  50                   push eax
// 007a5ed3  8bcf                 mov ecx, edi
// 007a5ed5  e806f9ffff           call 0x7a57e0
// 007a5eda  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 007a5ee1  85c0                 test eax, eax
// 007a5ee3  0f84dc000000         je 0x7a5fc5
// 007a5ee9  6a32                 push 0x32
// 007a5eeb  ff15dced8900         call dword ptr [0x89eddc]
// 007a5ef1  6a31                 push 0x31
// 007a5ef3  89442418             mov dword ptr [esp + 0x18], eax
// 007a5ef7  ff15dced8900         call dword ptr [0x89eddc]
// 007a5efd  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 007a5f04  8944242c             mov dword ptr [esp + 0x2c], eax
// 007a5f08  8b4140               mov eax, dword ptr [ecx + 0x40]
// 007a5f0b  8d48ff               lea ecx, [eax - 1]
// 007a5f0e  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a5f12  2b442470             sub eax, dword ptr [esp + 0x70]
// 007a5f16  2bc1                 sub eax, ecx
// 007a5f18  2b442414             sub eax, dword ptr [esp + 0x14]
// 007a5f1c  99                   cdq 
// 007a5f1d  2bc2                 sub eax, edx
// 007a5f1f  d1f8                 sar eax, 1
// 007a5f21  03c1                 add eax, ecx
// 007a5f23  89842490000000       mov dword ptr [esp + 0x90], eax
// 007a5f2a  e841c6fcff           call 0x772570
// 007a5f2f  8d94241c010000       lea edx, [esp + 0x11c]
// 007a5f36  52                   push edx
// 007a5f37  e8d4b3fcff           call 0x771310
// 007a5f3c  83c404               add esp, 4
// 007a5f3f  89442440             mov dword ptr [esp + 0x40], eax
// 007a5f43  83e001               and eax, 1
// 007a5f46  8944247c             mov dword ptr [esp + 0x7c], eax
// 007a5f4a  741d                 je 0x7a5f69
// 007a5f4c  e81fc6fcff           call 0x772570
// 007a5f51  8b442440             mov eax, dword ptr [esp + 0x40]
// 007a5f55  83c808               or eax, 8
// 007a5f58  50                   push eax
// 007a5f59  8d8c2420010000       lea ecx, [esp + 0x120]
// 007a5f60  51                   push ecx
// 007a5f61  e8dab3fcff           call 0x771340
// 007a5f66  83c408               add esp, 8
// 007a5f69  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a5f6d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a5f71  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 007a5f78  6a03                 push 3
// 007a5f7a  6a00                 push 0
// 007a5f7c  6a00                 push 0
// 007a5f7e  52                   push edx
// 007a5f7f  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007a5f86  50                   push eax
// 007a5f87  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 007a5f8e  51                   push ecx
// 007a5f8f  52                   push edx
// 007a5f90  6a07                 push 7
// 007a5f92  50                   push eax
// 007a5f93  ff1528ef8900         call dword ptr [0x89ef28]
// 007a5f99  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 007a5f9e  741a                 je 0x7a5fba
// 007a5fa0  e8cbc5fcff           call 0x772570
// 007a5fa5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a5fa9  51                   push ecx
// 007a5faa  8d942420010000       lea edx, [esp + 0x120]
// 007a5fb1  52                   push edx
// 007a5fb2  e889b3fcff           call 0x771340
// 007a5fb7  83c408               add esp, 8
// 007a5fba  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a5fbe  83c00c               add eax, 0xc
// 007a5fc1  89442444             mov dword ptr [esp + 0x44], eax
// 007a5fc5  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 007a5fcc  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007a5fcf  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007a5fd2  33c9                 xor ecx, ecx
// 007a5fd4  89542440             mov dword ptr [esp + 0x40], edx
// 007a5fd8  894c2414             mov dword ptr [esp + 0x14], ecx
// 007a5fdc  85c0                 test eax, eax
// 007a5fde  7f69                 jg 0x7a6049
// 007a5fe0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a5fe4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a5fe8  296c244c             sub dword ptr [esp + 0x4c], ebp
// 007a5fec  8b17                 mov edx, dword ptr [edi]
// 007a5fee  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 007a5ff4  50                   push eax
// 007a5ff5  51                   push ecx
// 007a5ff6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007a5ffa  83ec10               sub esp, 0x10
// 007a5ffd  8bc4                 mov eax, esp
// 007a5fff  8908                 mov dword ptr [eax], ecx
// 007a6001  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007a6005  897004               mov dword ptr [eax + 4], esi
// 007a6008  894808               mov dword ptr [eax + 8], ecx
// 007a600b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007a600f  89480c               mov dword ptr [eax + 0xc], ecx
// 007a6012  8d842434010000       lea eax, [esp + 0x134]
// 007a6019  50                   push eax
// 007a601a  8bcf                 mov ecx, edi
// 007a601c  ffd2                 call edx
// 007a601e  8d8c241c010000       lea ecx, [esp + 0x11c]
// 007a6025  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 007a6030  e80ba7fcff           call 0x770740
// 007a6035  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 007a603c  e9ec020000           jmp 0x7a632d
// 007a6041  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a6045  8b542440             mov edx, dword ptr [esp + 0x40]
// 007a6049  85c9                 test ecx, ecx
// 007a604b  7c18                 jl 0x7a6065
// 007a604d  3bc8                 cmp ecx, eax
// 007a604f  7d14                 jge 0x7a6065
// 007a6051  3b4a2c               cmp ecx, dword ptr [edx + 0x2c]
// 007a6054  0f8d62010000         jge 0x7a61bc
// 007a605a  8b5228               mov edx, dword ptr [edx + 0x28]
// 007a605d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 007a6060  8d048a               lea eax, [edx + ecx*4]
// 007a6063  eb02                 jmp 0x7a6067
// 007a6065  33f6                 xor esi, esi
// 007a6067  8b06                 mov eax, dword ptr [esi]
// 007a6069  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 007a606f  6a00                 push 0
// 007a6071  8bce                 mov ecx, esi
// 007a6073  ffd2                 call edx
// 007a6075  85c0                 test eax, eax
// 007a6077  0f841e010000         je 0x7a619b
// 007a607d  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007a6083  83f8ff               cmp eax, -1
// 007a6086  750f                 jne 0x7a6097
// 007a6088  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007a608e  85c9                 test ecx, ecx
// 007a6090  7405                 je 0x7a6097
// 007a6092  e8099ef7ff           call 0x71fea0
// 007a6097  85c0                 test eax, eax
// 007a6099  740e                 je 0x7a60a9
// 007a609b  837c241800           cmp dword ptr [esp + 0x18], 0
// 007a60a0  7407                 je 0x7a60a9
// 007a60a2  b901000000           mov ecx, 1
// 007a60a7  eb02                 jmp 0x7a60ab
// 007a60a9  33c9                 xor ecx, ecx
// 007a60ab  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 007a60b1  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 007a60b7  8944247c             mov dword ptr [esp + 0x7c], eax
// 007a60bb  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 007a60c1  89442430             mov dword ptr [esp + 0x30], eax
// 007a60c5  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007a60cb  89442438             mov dword ptr [esp + 0x38], eax
// 007a60cf  8b07                 mov eax, dword ptr [edi]
// 007a60d1  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a60d5  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007a60db  0530010000           add eax, 0x130
// 007a60e0  89542434             mov dword ptr [esp + 0x34], edx
// 007a60e4  8b16                 mov edx, dword ptr [esi]
// 007a60e6  89842490000000       mov dword ptr [esp + 0x90], eax
// 007a60ed  8b4278               mov eax, dword ptr [edx + 0x78]
// 007a60f0  51                   push ecx
// 007a60f1  8bce                 mov ecx, esi
// 007a60f3  ffd0                 call eax
// 007a60f5  8b16                 mov edx, dword ptr [esi]
// 007a60f7  50                   push eax
// 007a60f8  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007a60fb  8bce                 mov ecx, esi
// 007a60fd  ffd0                 call eax
// 007a60ff  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007a6106  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a610a  50                   push eax
// 007a610b  51                   push ecx
// 007a610c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a6110  83ec10               sub esp, 0x10
// 007a6113  8bc4                 mov eax, esp
// 007a6115  8910                 mov dword ptr [eax], edx
// 007a6117  8b542454             mov edx, dword ptr [esp + 0x54]
// 007a611b  894804               mov dword ptr [eax + 4], ecx
// 007a611e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007a6122  895008               mov dword ptr [eax + 8], edx
// 007a6125  89480c               mov dword ptr [eax + 0xc], ecx
// 007a6128  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007a612f  8d94243c010000       lea edx, [esp + 0x13c]
// 007a6136  52                   push edx
// 007a6137  8b10                 mov edx, dword ptr [eax]
// 007a6139  8bcf                 mov ecx, edi
// 007a613b  ffd2                 call edx
// 007a613d  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 007a6143  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007a6149  3944244c             cmp dword ptr [esp + 0x4c], eax
// 007a614d  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007a6153  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 007a615a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007a6160  89942488000000       mov dword ptr [esp + 0x88], edx
// 007a6167  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 007a616e  7c2b                 jl 0x7a619b
// 007a6170  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007a6176  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007a617c  89942484000000       mov dword ptr [esp + 0x84], edx
// 007a6183  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 007a6189  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 007a6190  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 007a6197  8944244c             mov dword ptr [esp + 0x4c], eax
// 007a619b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a619f  8b442440             mov eax, dword ptr [esp + 0x40]
// 007a61a3  8b402c               mov eax, dword ptr [eax + 0x2c]
// 007a61a6  41                   inc ecx
// 007a61a7  3bc8                 cmp ecx, eax
// 007a61a9  894c2414             mov dword ptr [esp + 0x14], ecx
// 007a61ad  0f8c8efeffff         jl 0x7a6041
// 007a61b3  8b742448             mov esi, dword ptr [esp + 0x48]
// 007a61b7  e924feffff           jmp 0x7a5fe0
// 007a61bc  e8232bf7ff           call 0x718ce4
// 007a61c1  68b00a9000           push 0x900ab0
// 007a61c6  8bcf                 mov ecx, edi
// 007a61c8  e8f3dbffff           call 0x7a3dc0
// 007a61cd  33c9                 xor ecx, ecx
// 007a61cf  85db                 test ebx, ebx
// 007a61d1  0f94c1               sete cl
// 007a61d4  6a02                 push 2
// 007a61d6  8d542448             lea edx, [esp + 0x48]
// 007a61da  89442440             mov dword ptr [esp + 0x40], eax
// 007a61de  8bd9                 mov ebx, ecx
// 007a61e0  53                   push ebx
// 007a61e1  52                   push edx
// 007a61e2  8bc8                 mov ecx, eax
// 007a61e4  e8d7fb0500           call 0x805dc0
// 007a61e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a61ed  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007a61f1  8d1428               lea edx, [eax + ebp]
// 007a61f4  8944245c             mov dword ptr [esp + 0x5c], eax
// 007a61f8  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a61fc  894c2460             mov dword ptr [esp + 0x60], ecx
// 007a6200  33c9                 xor ecx, ecx
// 007a6202  83ec10               sub esp, 0x10
// 007a6205  89442478             mov dword ptr [esp + 0x78], eax
// 007a6209  8bc4                 mov eax, esp
// 007a620b  8908                 mov dword ptr [eax], ecx
// 007a620d  898c24cc000000       mov dword ptr [esp + 0xcc], ecx
// 007a6214  b905000000           mov ecx, 5
// 007a6219  894804               mov dword ptr [eax + 4], ecx
// 007a621c  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 007a6223  894808               mov dword ptr [eax + 8], ecx
// 007a6226  83ec10               sub esp, 0x10
// 007a6229  b903000000           mov ecx, 3
// 007a622e  89480c               mov dword ptr [eax + 0xc], ecx
// 007a6231  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007a6235  8bc4                 mov eax, esp
// 007a6237  89942484000000       mov dword ptr [esp + 0x84], edx
// 007a623e  8b542464             mov edx, dword ptr [esp + 0x64]
// 007a6242  8910                 mov dword ptr [eax], edx
// 007a6244  8b542470             mov edx, dword ptr [esp + 0x70]
// 007a6248  894804               mov dword ptr [eax + 4], ecx
// 007a624b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007a624f  896808               mov dword ptr [eax + 8], ebp
// 007a6252  89500c               mov dword ptr [eax + 0xc], edx
// 007a6255  8d44247c             lea eax, [esp + 0x7c]
// 007a6259  50                   push eax
// 007a625a  56                   push esi
// 007a625b  896c2474             mov dword ptr [esp + 0x74], ebp
// 007a625f  e82cf40500           call 0x805690
// 007a6264  68a00a9000           push 0x900aa0
// 007a6269  8bcf                 mov ecx, edi
// 007a626b  e850dbffff           call 0x7a3dc0
// 007a6270  6a02                 push 2
// 007a6272  53                   push ebx
// 007a6273  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 007a627a  51                   push ecx
// 007a627b  8bc8                 mov ecx, eax
// 007a627d  89442448             mov dword ptr [esp + 0x48], eax
// 007a6281  e83afb0500           call 0x805dc0
// 007a6286  8b10                 mov edx, dword ptr [eax]
// 007a6288  89542444             mov dword ptr [esp + 0x44], edx
// 007a628c  8b4804               mov ecx, dword ptr [eax + 4]
// 007a628f  894c2448             mov dword ptr [esp + 0x48], ecx
// 007a6293  8b4808               mov ecx, dword ptr [eax + 8]
// 007a6296  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007a629a  8b500c               mov edx, dword ptr [eax + 0xc]
// 007a629d  8bc1                 mov eax, ecx
// 007a629f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a62a3  89542450             mov dword ptr [esp + 0x50], edx
// 007a62a7  8bd1                 mov edx, ecx
// 007a62a9  2bd5                 sub edx, ebp
// 007a62ab  89942494000000       mov dword ptr [esp + 0x94], edx
// 007a62b2  8b542470             mov edx, dword ptr [esp + 0x70]
// 007a62b6  2bc5                 sub eax, ebp
// 007a62b8  89942498000000       mov dword ptr [esp + 0x98], edx
// 007a62bf  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 007a62c6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007a62ca  33d2                 xor edx, edx
// 007a62cc  89442444             mov dword ptr [esp + 0x44], eax
// 007a62d0  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 007a62d7  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 007a62de  83ec10               sub esp, 0x10
// 007a62e1  8bcc                 mov ecx, esp
// 007a62e3  8911                 mov dword ptr [ecx], edx
// 007a62e5  ba05000000           mov edx, 5
// 007a62ea  895104               mov dword ptr [ecx + 4], edx
// 007a62ed  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 007a62f4  895108               mov dword ptr [ecx + 8], edx
// 007a62f7  83ec10               sub esp, 0x10
// 007a62fa  ba03000000           mov edx, 3
// 007a62ff  89510c               mov dword ptr [ecx + 0xc], edx
// 007a6302  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007a6306  8bcc                 mov ecx, esp
// 007a6308  8901                 mov dword ptr [ecx], eax
// 007a630a  8b442468             mov eax, dword ptr [esp + 0x68]
// 007a630e  894104               mov dword ptr [ecx + 4], eax
// 007a6311  8b442470             mov eax, dword ptr [esp + 0x70]
// 007a6315  895108               mov dword ptr [ecx + 8], edx
// 007a6318  89410c               mov dword ptr [ecx + 0xc], eax
// 007a631b  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 007a6322  51                   push ecx
// 007a6323  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007a6327  56                   push esi
// 007a6328  e863f30500           call 0x805690
// 007a632d  83bc24c400000000     cmp dword ptr [esp + 0xc4], 0
// 007a6335  0f84d7020000         je 0x7a6612
// 007a633b  68a80b9000           push 0x900ba8
// 007a6340  8bcf                 mov ecx, edi
// 007a6342  e879daffff           call 0x7a3dc0
// 007a6347  8bc8                 mov ecx, eax
// 007a6349  89442414             mov dword ptr [esp + 0x14], eax
// 007a634d  e8eefa0500           call 0x805e40
// 007a6352  89442438             mov dword ptr [esp + 0x38], eax
// 007a6356  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a635a  40                   inc eax
// 007a635b  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 007a6362  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a6366  8d55ff               lea edx, [ebp - 1]
// 007a6369  89542434             mov dword ptr [esp + 0x34], edx
// 007a636d  8bd0                 mov edx, eax
// 007a636f  2b542458             sub edx, dword ptr [esp + 0x58]
// 007a6373  2b442454             sub eax, dword ptr [esp + 0x54]
// 007a6377  2b542454             sub edx, dword ptr [esp + 0x54]
// 007a637b  83ec10               sub esp, 0x10
// 007a637e  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 007a6385  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007a6389  03d5                 add edx, ebp
// 007a638b  899424f4000000       mov dword ptr [esp + 0xf4], edx
// 007a6392  33d2                 xor edx, edx
// 007a6394  898424f8000000       mov dword ptr [esp + 0xf8], eax
// 007a639b  8bc4                 mov eax, esp
// 007a639d  8910                 mov dword ptr [eax], edx
// 007a639f  895004               mov dword ptr [eax + 4], edx
// 007a63a2  895008               mov dword ptr [eax + 8], edx
// 007a63a5  89500c               mov dword ptr [eax + 0xc], edx
// 007a63a8  33c9                 xor ecx, ecx
// 007a63aa  83ec10               sub esp, 0x10
// 007a63ad  8bc4                 mov eax, esp
// 007a63af  8908                 mov dword ptr [eax], ecx
// 007a63b1  89942488000000       mov dword ptr [esp + 0x88], edx
// 007a63b8  8b542454             mov edx, dword ptr [esp + 0x54]
// 007a63bc  894804               mov dword ptr [eax + 4], ecx
// 007a63bf  895008               mov dword ptr [eax + 8], edx
// 007a63c2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007a63c6  894c2450             mov dword ptr [esp + 0x50], ecx
// 007a63ca  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007a63ce  8d9424fc000000       lea edx, [esp + 0xfc]
// 007a63d5  52                   push edx
// 007a63d6  89480c               mov dword ptr [eax + 0xc], ecx
// 007a63d9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a63dd  56                   push esi
// 007a63de  e8adf20500           call 0x805690
// 007a63e3  68840b9000           push 0x900b84
// 007a63e8  8bcf                 mov ecx, edi
// 007a63ea  e8d1d9ffff           call 0x7a3dc0
// 007a63ef  8bc8                 mov ecx, eax
// 007a63f1  89442414             mov dword ptr [esp + 0x14], eax
// 007a63f5  e846fa0500           call 0x805e40
// 007a63fa  50                   push eax
// 007a63fb  8d45ff               lea eax, [ebp - 1]
// 007a63fe  50                   push eax
// 007a63ff  6a00                 push 0
// 007a6401  6a00                 push 0
// 007a6403  8d4c243c             lea ecx, [esp + 0x3c]
// 007a6407  51                   push ecx
// 007a6408  ff15a4ed8900         call dword ptr [0x89eda4]
// 007a640e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a6412  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a6416  8bd1                 mov edx, ecx
// 007a6418  2bd5                 sub edx, ebp
// 007a641a  899424ec000000       mov dword ptr [esp + 0xec], edx
// 007a6421  8bd0                 mov edx, eax
// 007a6423  2b542458             sub edx, dword ptr [esp + 0x58]
// 007a6427  2b442454             sub eax, dword ptr [esp + 0x54]
// 007a642b  2b542454             sub edx, dword ptr [esp + 0x54]
// 007a642f  49                   dec ecx
// 007a6430  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 007a6437  898c24f4000000       mov dword ptr [esp + 0xf4], ecx
// 007a643e  33c9                 xor ecx, ecx
// 007a6440  33d2                 xor edx, edx
// 007a6442  83ec10               sub esp, 0x10
// 007a6445  89842408010000       mov dword ptr [esp + 0x108], eax
// 007a644c  8bc4                 mov eax, esp
// 007a644e  8908                 mov dword ptr [eax], ecx
// 007a6450  895004               mov dword ptr [eax + 4], edx
// 007a6453  894808               mov dword ptr [eax + 8], ecx
// 007a6456  89480c               mov dword ptr [eax + 0xc], ecx
// 007a6459  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a645d  8b542440             mov edx, dword ptr [esp + 0x40]
// 007a6461  83ec10               sub esp, 0x10
// 007a6464  8bc4                 mov eax, esp
// 007a6466  8908                 mov dword ptr [eax], ecx
// 007a6468  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007a646c  895004               mov dword ptr [eax + 4], edx
// 007a646f  8b542458             mov edx, dword ptr [esp + 0x58]
// 007a6473  894808               mov dword ptr [eax + 8], ecx
// 007a6476  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007a647a  89500c               mov dword ptr [eax + 0xc], edx
// 007a647d  8d84240c010000       lea eax, [esp + 0x10c]
// 007a6484  50                   push eax
// 007a6485  56                   push esi
// 007a6486  e805f20500           call 0x805690
// 007a648b  83fd03               cmp ebp, 3
// 007a648e  0f8e7e010000         jle 0x7a6612
// 007a6494  680c219000           push 0x90210c
// 007a6499  8bcf                 mov ecx, edi
// 007a649b  e820d9ffff           call 0x7a3dc0
// 007a64a0  6a02                 push 2
// 007a64a2  53                   push ebx
// 007a64a3  8d4c2464             lea ecx, [esp + 0x64]
// 007a64a7  51                   push ecx
// 007a64a8  8bc8                 mov ecx, eax
// 007a64aa  89442420             mov dword ptr [esp + 0x20], eax
// 007a64ae  e80df90500           call 0x805dc0
// 007a64b3  8b10                 mov edx, dword ptr [eax]
// 007a64b5  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a64b9  8b4804               mov ecx, dword ptr [eax + 4]
// 007a64bc  894c2430             mov dword ptr [esp + 0x30], ecx
// 007a64c0  8b4808               mov ecx, dword ptr [eax + 8]
// 007a64c3  894c2434             mov dword ptr [esp + 0x34], ecx
// 007a64c7  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a64ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a64ce  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 007a64d5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a64d9  2bc8                 sub ecx, eax
// 007a64db  034c2428             add ecx, dword ptr [esp + 0x28]
// 007a64df  89442438             mov dword ptr [esp + 0x38], eax
// 007a64e3  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a64e7  2bc2                 sub eax, edx
// 007a64e9  0344241c             add eax, dword ptr [esp + 0x1c]
// 007a64ed  68ff00ff00           push 0xff00ff
// 007a64f2  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 007a64f9  33c0                 xor eax, eax
// 007a64fb  89442460             mov dword ptr [esp + 0x60], eax
// 007a64ff  89442464             mov dword ptr [esp + 0x64], eax
// 007a6503  89442468             mov dword ptr [esp + 0x68], eax
// 007a6507  8944246c             mov dword ptr [esp + 0x6c], eax
// 007a650b  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 007a6512  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a6516  8d442460             lea eax, [esp + 0x60]
// 007a651a  50                   push eax
// 007a651b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007a651f  83ec10               sub esp, 0x10
// 007a6522  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 007a6529  8bcc                 mov ecx, esp
// 007a652b  8911                 mov dword ptr [ecx], edx
// 007a652d  8b542448             mov edx, dword ptr [esp + 0x48]
// 007a6531  895104               mov dword ptr [ecx + 4], edx
// 007a6534  8b542450             mov edx, dword ptr [esp + 0x50]
// 007a6538  894108               mov dword ptr [ecx + 8], eax
// 007a653b  8d8424ac000000       lea eax, [esp + 0xac]
// 007a6542  50                   push eax
// 007a6543  89510c               mov dword ptr [ecx + 0xc], edx
// 007a6546  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a654a  56                   push esi
// 007a654b  e8b0fd0500           call 0x806300
// 007a6550  83fd03               cmp ebp, 3
// 007a6553  0f8eb9000000         jle 0x7a6612
// 007a6559  68f8209000           push 0x9020f8
// 007a655e  8bcf                 mov ecx, edi
// 007a6560  e85bd8ffff           call 0x7a3dc0
// 007a6565  6a02                 push 2
// 007a6567  53                   push ebx
// 007a6568  8d4c2464             lea ecx, [esp + 0x64]
// 007a656c  8bf8                 mov edi, eax
// 007a656e  51                   push ecx
// 007a656f  8bcf                 mov ecx, edi
// 007a6571  e84af80500           call 0x805dc0
// 007a6576  8b10                 mov edx, dword ptr [eax]
// 007a6578  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a657c  8b5804               mov ebx, dword ptr [eax + 4]
// 007a657f  895c2430             mov dword ptr [esp + 0x30], ebx
// 007a6583  8b6808               mov ebp, dword ptr [eax + 8]
// 007a6586  8bca                 mov ecx, edx
// 007a6588  2bcd                 sub ecx, ebp
// 007a658a  034c2424             add ecx, dword ptr [esp + 0x24]
// 007a658e  896c2434             mov dword ptr [esp + 0x34], ebp
// 007a6592  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a6595  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 007a659c  89442438             mov dword ptr [esp + 0x38], eax
// 007a65a0  8bcb                 mov ecx, ebx
// 007a65a2  2bc8                 sub ecx, eax
// 007a65a4  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a65a8  03c8                 add ecx, eax
// 007a65aa  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 007a65b1  33c0                 xor eax, eax
// 007a65b3  68ff00ff00           push 0xff00ff
// 007a65b8  89842400010000       mov dword ptr [esp + 0x100], eax
// 007a65bf  89842404010000       mov dword ptr [esp + 0x104], eax
// 007a65c6  89842408010000       mov dword ptr [esp + 0x108], eax
// 007a65cd  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 007a65d4  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 007a65db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a65df  8d842400010000       lea eax, [esp + 0x100]
// 007a65e6  50                   push eax
// 007a65e7  83ec10               sub esp, 0x10
// 007a65ea  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 007a65f1  8bcc                 mov ecx, esp
// 007a65f3  8911                 mov dword ptr [ecx], edx
// 007a65f5  8b542450             mov edx, dword ptr [esp + 0x50]
// 007a65f9  895904               mov dword ptr [ecx + 4], ebx
// 007a65fc  8d842498000000       lea eax, [esp + 0x98]
// 007a6603  896908               mov dword ptr [ecx + 8], ebp
// 007a6606  50                   push eax
// 007a6607  89510c               mov dword ptr [ecx + 0xc], edx
// 007a660a  56                   push esi
// 007a660b  8bcf                 mov ecx, edi
// 007a660d  e8eefc0500           call 0x806300
// 007a6612  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 007a6619  64890d00000000       mov dword ptr fs:[0], ecx
// 007a6620  59                   pop ecx
// 007a6621  5f                   pop edi
// 007a6622  5e                   pop esi
// 007a6623  5d                   pop ebp
// 007a6624  5b                   pop ebx
// 007a6625  81c444010000         add esp, 0x144
// 007a662b  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonFrame@CXTPOffice2007Theme@@UAEXPAVCDC@@PAVCXTPOffice2007FrameHook@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp