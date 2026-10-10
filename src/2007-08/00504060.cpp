// from server: 100% by tester
// roc 2007-03 004f8a50  unit: seg_004f0000  size: 1061 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f8a50
//
// 004f8a50  6aff                 push -1
// 004f8a52  689a047500           push 0x75049a
// 004f8a57  64a100000000         mov eax, dword ptr fs:[0]
// 004f8a5d  50                   push eax
// 004f8a5e  81ec94000000         sub esp, 0x94
// 004f8a64  53                   push ebx
// 004f8a65  56                   push esi
// 004f8a66  57                   push edi
// 004f8a67  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f8a6c  33c4                 xor eax, esp
// 004f8a6e  50                   push eax
// 004f8a6f  8d8424a4000000       lea eax, [esp + 0xa4]
// 004f8a76  64a300000000         mov dword ptr fs:[0], eax
// 004f8a7c  8bf1                 mov esi, ecx
// 004f8a7e  6820724f00           push 0x4f7220
// 004f8a83  68a0714f00           push 0x4f71a0
// 004f8a88  6a00                 push 0
// 004f8a8a  6868f97900           push 0x79f968
// 004f8a8f  e8cc540100           call 0x50df60
// 004f8a94  83c410               add esp, 0x10
// 004f8a97  85c0                 test eax, eax
// 004f8a99  89442410             mov dword ptr [esp + 0x10], eax
// 004f8a9d  7551                 jne 0x4f8af0
// 004f8a9f  6810fb7900           push 0x79fb10
// 004f8aa4  8d4c2434             lea ecx, [esp + 0x34]
// 004f8aa8  ff1578e77700         call dword ptr [0x77e778]
// 004f8aae  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 004f8ab5  8d442450             lea eax, [esp + 0x50]
// 004f8ab9  50                   push eax
// 004f8aba  c78424b000000000000000 mov dword ptr [esp + 0xb0], 0
// 004f8ac5  e816daffff           call 0x4f64e0
// 004f8aca  50                   push eax
// 004f8acb  8d4c2434             lea ecx, [esp + 0x34]
// 004f8acf  51                   push ecx
// 004f8ad0  8d4c2474             lea ecx, [esp + 0x74]
// 004f8ad4  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 004f8adc  e80f6af7ff           call 0x46f4f0
// 004f8ae1  6824b18400           push 0x84b124
// 004f8ae6  8d542470             lea edx, [esp + 0x70]
// 004f8aea  52                   push edx
// 004f8aeb  e83e651200           call 0x61f02e
// 004f8af0  50                   push eax
// 004f8af1  e8aa210100           call 0x50aca0
// 004f8af6  83c404               add esp, 4
// 004f8af9  85c0                 test eax, eax
// 004f8afb  89442414             mov dword ptr [esp + 0x14], eax
// 004f8aff  7560                 jne 0x4f8b61
// 004f8b01  50                   push eax
// 004f8b02  50                   push eax
// 004f8b03  8d442418             lea eax, [esp + 0x18]
// 004f8b07  50                   push eax
// 004f8b08  e883540100           call 0x50df90
// 004f8b0d  83c40c               add esp, 0xc
// 004f8b10  6810fb7900           push 0x79fb10
// 004f8b15  8d4c2434             lea ecx, [esp + 0x34]
// 004f8b19  ff1578e77700         call dword ptr [0x77e778]
// 004f8b1f  8d4c2450             lea ecx, [esp + 0x50]
// 004f8b23  51                   push ecx
// 004f8b24  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 004f8b2b  c78424b000000002000000 mov dword ptr [esp + 0xb0], 2
// 004f8b36  e8a5d9ffff           call 0x4f64e0
// 004f8b3b  50                   push eax
// 004f8b3c  8d542434             lea edx, [esp + 0x34]
// 004f8b40  52                   push edx
// 004f8b41  8d4c2474             lea ecx, [esp + 0x74]
// 004f8b45  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 004f8b4d  e89e69f7ff           call 0x46f4f0
// 004f8b52  6824b18400           push 0x84b124
// 004f8b57  8d442470             lea eax, [esp + 0x70]
// 004f8b5b  50                   push eax
// 004f8b5c  e8cd641200           call 0x61f02e
// 004f8b61  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f8b65  51                   push ecx
// 004f8b66  e835210100           call 0x50aca0
// 004f8b6b  83c404               add esp, 4
// 004f8b6e  85c0                 test eax, eax
// 004f8b70  89442420             mov dword ptr [esp + 0x20], eax
// 004f8b74  7564                 jne 0x4f8bda
// 004f8b76  50                   push eax
// 004f8b77  8d542418             lea edx, [esp + 0x18]
// 004f8b7b  52                   push edx
// 004f8b7c  8d442418             lea eax, [esp + 0x18]
// 004f8b80  50                   push eax
// 004f8b81  e80a540100           call 0x50df90
// 004f8b86  83c40c               add esp, 0xc
// 004f8b89  6810fb7900           push 0x79fb10
// 004f8b8e  8d4c2434             lea ecx, [esp + 0x34]
// 004f8b92  ff1578e77700         call dword ptr [0x77e778]
// 004f8b98  8d4c2450             lea ecx, [esp + 0x50]
// 004f8b9c  51                   push ecx
// 004f8b9d  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 004f8ba4  c78424b000000004000000 mov dword ptr [esp + 0xb0], 4
// 004f8baf  e82cd9ffff           call 0x4f64e0
// 004f8bb4  50                   push eax
// 004f8bb5  8d542434             lea edx, [esp + 0x34]
// 004f8bb9  52                   push edx
// 004f8bba  8d4c2474             lea ecx, [esp + 0x74]
// 004f8bbe  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 004f8bc6  e82569f7ff           call 0x46f4f0
// 004f8bcb  6824b18400           push 0x84b124
// 004f8bd0  8d442470             lea eax, [esp + 0x70]
// 004f8bd4  50                   push eax
// 004f8bd5  e854641200           call 0x61f02e
// 004f8bda  8bbc24b4000000       mov edi, dword ptr [esp + 0xb4]
// 004f8be1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f8be5  68308a4f00           push 0x4f8a30
// 004f8bea  57                   push edi
// 004f8beb  51                   push ecx
// 004f8bec  e80fa40100           call 0x513000
// 004f8bf1  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f8bf5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f8bf9  52                   push edx
// 004f8bfa  50                   push eax
// 004f8bfb  e8702c0100           call 0x50b870
// 004f8c00  6a00                 push 0
// 004f8c02  6a00                 push 0
// 004f8c04  8d4c2468             lea ecx, [esp + 0x68]
// 004f8c08  51                   push ecx
// 004f8c09  8d542438             lea edx, [esp + 0x38]
// 004f8c0d  52                   push edx
// 004f8c0e  8d442440             lea eax, [esp + 0x40]
// 004f8c12  50                   push eax
// 004f8c13  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004f8c17  8d4c2454             lea ecx, [esp + 0x54]
// 004f8c1b  51                   push ecx
// 004f8c1c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004f8c20  8d542450             lea edx, [esp + 0x50]
// 004f8c24  52                   push edx
// 004f8c25  50                   push eax
// 004f8c26  51                   push ecx
// 004f8c27  e854a20100           call 0x512e80
// 004f8c2c  83c438               add esp, 0x38
// 004f8c2f  837c241804           cmp dword ptr [esp + 0x18], 4
// 004f8c34  7563                 jne 0x4f8c99
// 004f8c36  8d542420             lea edx, [esp + 0x20]
// 004f8c3a  52                   push edx
// 004f8c3b  8d442418             lea eax, [esp + 0x18]
// 004f8c3f  50                   push eax
// 004f8c40  8d4c2418             lea ecx, [esp + 0x18]
// 004f8c44  51                   push ecx
// 004f8c45  e846530100           call 0x50df90
// 004f8c4a  83c40c               add esp, 0xc
// 004f8c4d  68d8fa7900           push 0x79fad8
// 004f8c52  8d4c2434             lea ecx, [esp + 0x34]
// 004f8c56  ff1578e77700         call dword ptr [0x77e778]
// 004f8c5c  8d542450             lea edx, [esp + 0x50]
// 004f8c60  52                   push edx
// 004f8c61  8bcf                 mov ecx, edi
// 004f8c63  c78424b000000006000000 mov dword ptr [esp + 0xb0], 6
// 004f8c6e  e86dd8ffff           call 0x4f64e0
// 004f8c73  50                   push eax
// 004f8c74  8d442434             lea eax, [esp + 0x34]
// 004f8c78  50                   push eax
// 004f8c79  8d4c2474             lea ecx, [esp + 0x74]
// 004f8c7d  c68424b400000007     mov byte ptr [esp + 0xb4], 7
// 004f8c85  e86668f7ff           call 0x46f4f0
// 004f8c8a  6824b18400           push 0x84b124
// 004f8c8f  8d4c2470             lea ecx, [esp + 0x70]
// 004f8c93  51                   push ecx
// 004f8c94  e895631200           call 0x61f02e
// 004f8c99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f8c9d  8b542424             mov edx, dword ptr [esp + 0x24]
// 004f8ca1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f8ca5  51                   push ecx
// 004f8ca6  895608               mov dword ptr [esi + 8], edx
// 004f8ca9  89460c               mov dword ptr [esi + 0xc], eax
// 004f8cac  e89f530100           call 0x50e050
// 004f8cb1  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f8cb5  52                   push edx
// 004f8cb6  e845590100           call 0x50e600
// 004f8cbb  83c408               add esp, 8
// 004f8cbe  837c241803           cmp dword ptr [esp + 0x18], 3
// 004f8cc3  750d                 jne 0x4f8cd2
// 004f8cc5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f8cc9  50                   push eax
// 004f8cca  e891590100           call 0x50e660
// 004f8ccf  83c404               add esp, 4
// 004f8cd2  837c241800           cmp dword ptr [esp + 0x18], 0
// 004f8cd7  bb08000000           mov ebx, 8
// 004f8cdc  7513                 jne 0x4f8cf1
// 004f8cde  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 004f8ce2  7d0d                 jge 0x4f8cf1
// 004f8ce4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f8ce8  51                   push ecx
// 004f8ce9  e872590100           call 0x50e660
// 004f8cee  83c404               add esp, 4
// 004f8cf1  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f8cf5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f8cf9  6a10                 push 0x10
// 004f8cfb  52                   push edx
// 004f8cfc  50                   push eax
// 004f8cfd  e8bea00100           call 0x512dc0
// 004f8d02  83c40c               add esp, 0xc
// 004f8d05  85c0                 test eax, eax
// 004f8d07  740d                 je 0x4f8d16
// 004f8d09  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f8d0d  51                   push ecx
// 004f8d0e  e84d590100           call 0x50e660
// 004f8d13  83c404               add esp, 4
// 004f8d16  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 004f8d1a  7d0d                 jge 0x4f8d29
// 004f8d1c  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8d20  52                   push edx
// 004f8d21  e84a530100           call 0x50e070
// 004f8d26  83c404               add esp, 4
// 004f8d29  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f8d2d  83f806               cmp eax, 6
// 004f8d30  7515                 jne 0x4f8d47
// 004f8d32  8b460c               mov eax, dword ptr [esi + 0xc]
// 004f8d35  0faf4608             imul eax, dword ptr [esi + 8]
// 004f8d39  03c0                 add eax, eax
// 004f8d3b  03c0                 add eax, eax
// 004f8d3d  c7461004000000       mov dword ptr [esi + 0x10], 4
// 004f8d44  50                   push eax
// 004f8d45  eb79                 jmp 0x4f8dc0
// 004f8d47  83f802               cmp eax, 2
// 004f8d4a  7462                 je 0x4f8dae
// 004f8d4c  83f803               cmp eax, 3
// 004f8d4f  745d                 je 0x4f8dae
// 004f8d51  85c0                 test eax, eax
// 004f8d53  7511                 jne 0x4f8d66
// 004f8d55  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004f8d58  0faf4e08             imul ecx, dword ptr [esi + 8]
// 004f8d5c  c7461001000000       mov dword ptr [esi + 0x10], 1
// 004f8d63  51                   push ecx
// 004f8d64  eb5a                 jmp 0x4f8dc0
// 004f8d66  68b4fa7900           push 0x79fab4
// 004f8d6b  8d4c2434             lea ecx, [esp + 0x34]
// 004f8d6f  ff1578e77700         call dword ptr [0x77e778]
// 004f8d75  8d542450             lea edx, [esp + 0x50]
// 004f8d79  52                   push edx
// 004f8d7a  8bcf                 mov ecx, edi
// 004f8d7c  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 004f8d83  e858d7ffff           call 0x4f64e0
// 004f8d88  50                   push eax
// 004f8d89  8d442434             lea eax, [esp + 0x34]
// 004f8d8d  50                   push eax
// 004f8d8e  8d4c2474             lea ecx, [esp + 0x74]
// 004f8d92  c68424b400000009     mov byte ptr [esp + 0xb4], 9
// 004f8d9a  e85167f7ff           call 0x46f4f0
// 004f8d9f  6824b18400           push 0x84b124
// 004f8da4  8d4c2470             lea ecx, [esp + 0x70]
// 004f8da8  51                   push ecx
// 004f8da9  e880621200           call 0x61f02e
// 004f8dae  8b460c               mov eax, dword ptr [esi + 0xc]
// 004f8db1  0faf4608             imul eax, dword ptr [esi + 8]
// 004f8db5  8d1440               lea edx, [eax + eax*2]
// 004f8db8  c7461003000000       mov dword ptr [esi + 0x10], 3
// 004f8dbf  52                   push edx
// 004f8dc0  e8bbadffff           call 0x4f3b80
// 004f8dc5  894604               mov dword ptr [esi + 4], eax
// 004f8dc8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f8dcc  83c404               add esp, 4
// 004f8dcf  50                   push eax
// 004f8dd0  e8bb520100           call 0x50e090
// 004f8dd5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f8dd9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f8ddd  51                   push ecx
// 004f8dde  52                   push edx
// 004f8ddf  8bf8                 mov edi, eax
// 004f8de1  e82a3a0100           call 0x50c810
// 004f8de6  83c40c               add esp, 0xc
// 004f8de9  85ff                 test edi, edi
// 004f8deb  7647                 jbe 0x4f8e34
// 004f8ded  8bdf                 mov ebx, edi
// 004f8def  90                   nop 
// 004f8df0  33ff                 xor edi, edi
// 004f8df2  397e0c               cmp dword ptr [esi + 0xc], edi
// 004f8df5  7638                 jbe 0x4f8e2f
// 004f8df7  eb07                 jmp 0x4f8e00
// 004f8df9  8da42400000000       lea esp, [esp]
// 004f8e00  8b4610               mov eax, dword ptr [esi + 0x10]
// 004f8e03  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8e07  0fafc7               imul eax, edi
// 004f8e0a  0faf4608             imul eax, dword ptr [esi + 8]
// 004f8e0e  034604               add eax, dword ptr [esi + 4]
// 004f8e11  6a01                 push 1
// 004f8e13  6a00                 push 0
// 004f8e15  8d4c2430             lea ecx, [esp + 0x30]
// 004f8e19  51                   push ecx
// 004f8e1a  52                   push edx
// 004f8e1b  89442438             mov dword ptr [esp + 0x38], eax
// 004f8e1f  e83c3f0100           call 0x50cd60
// 004f8e24  83c701               add edi, 1
// 004f8e27  83c410               add esp, 0x10
// 004f8e2a  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 004f8e2d  72d1                 jb 0x4f8e00
// 004f8e2f  83eb01               sub ebx, 1
// 004f8e32  75bc                 jne 0x4f8df0
// 004f8e34  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f8e38  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f8e3c  50                   push eax
// 004f8e3d  51                   push ecx
// 004f8e3e  e81d400100           call 0x50ce60
// 004f8e43  8d542428             lea edx, [esp + 0x28]
// 004f8e47  52                   push edx
// 004f8e48  8d442420             lea eax, [esp + 0x20]
// 004f8e4c  50                   push eax
// 004f8e4d  8d4c2420             lea ecx, [esp + 0x20]
// 004f8e51  51                   push ecx
// 004f8e52  e839510100           call 0x50df90
// 004f8e57  83c414               add esp, 0x14
// 004f8e5a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 004f8e61  64890d00000000       mov dword ptr fs:[0], ecx
// 004f8e68  59                   pop ecx
// 004f8e69  5f                   pop edi
// 004f8e6a  5e                   pop esi
// 004f8e6b  5b                   pop ebx
// 004f8e6c  81c4a0000000         add esp, 0xa0
// 004f8e72  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?decodePNG@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
