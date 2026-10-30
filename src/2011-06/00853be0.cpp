// roc 2011-06 00853be0  unit: CXTPPopupBar  size: 1063 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853be0
//
// 00853be0  6aff                 push -1
// 00853be2  68965fa000           push 0xa05f96
// 00853be7  64a100000000         mov eax, dword ptr fs:[0]
// 00853bed  50                   push eax
// 00853bee  81ec9c000000         sub esp, 0x9c
// 00853bf4  53                   push ebx
// 00853bf5  55                   push ebp
// 00853bf6  56                   push esi
// 00853bf7  57                   push edi
// 00853bf8  a12058c900           mov eax, dword ptr [0xc95820]
// 00853bfd  33c4                 xor eax, esp
// 00853bff  50                   push eax
// 00853c00  8d8424b0000000       lea eax, [esp + 0xb0]
// 00853c07  64a300000000         mov dword ptr fs:[0], eax
// 00853c0d  8bf1                 mov esi, ecx
// 00853c0f  33db                 xor ebx, ebx
// 00853c11  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 00853c17  0f85d0030000         jne 0x853fed
// 00853c1d  395e20               cmp dword ptr [esi + 0x20], ebx
// 00853c20  0f84c7030000         je 0x853fed
// 00853c26  399ee0000000         cmp dword ptr [esi + 0xe0], ebx
// 00853c2c  0f84bb030000         je 0x853fed
// 00853c32  8b06                 mov eax, dword ptr [esi]
// 00853c34  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 00853c3a  ffd2                 call edx
// 00853c3c  8b06                 mov eax, dword ptr [esi]
// 00853c3e  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 00853c44  8bce                 mov ecx, esi
// 00853c46  ffd2                 call edx
// 00853c48  8b3e                 mov edi, dword ptr [esi]
// 00853c4a  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 00853c50  53                   push ebx
// 00853c51  53                   push ebx
// 00853c52  8d44245c             lea eax, [esp + 0x5c]
// 00853c56  50                   push eax
// 00853c57  8bce                 mov ecx, esi
// 00853c59  ffd2                 call edx
// 00853c5b  8b4804               mov ecx, dword ptr [eax + 4]
// 00853c5e  8b10                 mov edx, dword ptr [eax]
// 00853c60  51                   push ecx
// 00853c61  52                   push edx
// 00853c62  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 00853c68  8d44241c             lea eax, [esp + 0x1c]
// 00853c6c  50                   push eax
// 00853c6d  8bce                 mov ecx, esi
// 00853c6f  ffd2                 call edx
// 00853c71  56                   push esi
// 00853c72  8d4c2474             lea ecx, [esp + 0x74]
// 00853c76  e8b5900000           call 0x85cd30
// 00853c7b  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 00853c81  7528                 jne 0x853cab
// 00853c83  8d442470             lea eax, [esp + 0x70]
// 00853c87  50                   push eax
// 00853c88  8d4c2418             lea ecx, [esp + 0x18]
// 00853c8c  51                   push ecx
// 00853c8d  ff15001ca400         call dword ptr [0xa41c00]
// 00853c93  85c0                 test eax, eax
// 00853c95  7414                 je 0x853cab
// 00853c97  8b16                 mov edx, dword ptr [esi]
// 00853c99  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00853c9f  6a01                 push 1
// 00853ca1  53                   push ebx
// 00853ca2  8bce                 mov ecx, esi
// 00853ca4  ffd0                 call eax
// 00853ca6  e942030000           jmp 0x853fed
// 00853cab  8bce                 mov ecx, esi
// 00853cad  e8de6dfcff           call 0x81aa90
// 00853cb2  8bce                 mov ecx, esi
// 00853cb4  8be8                 mov ebp, eax
// 00853cb6  e81562fdff           call 0x829ed0
// 00853cbb  8bf8                 mov edi, eax
// 00853cbd  897c2454             mov dword ptr [esp + 0x54], edi
// 00853cc1  3bfb                 cmp edi, ebx
// 00853cc3  740b                 je 0x853cd0
// 00853cc5  3beb                 cmp ebp, ebx
// 00853cc7  7407                 je 0x853cd0
// 00853cc9  8bcd                 mov ecx, ebp
// 00853ccb  e88079fdff           call 0x82b650
// 00853cd0  56                   push esi
// 00853cd1  e85adf0700           call 0x8d1c30
// 00853cd6  8bc8                 mov ecx, eax
// 00853cd8  e803df0700           call 0x8d1be0
// 00853cdd  33ed                 xor ebp, ebp
// 00853cdf  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 00853ce5  0f8462020000         je 0x853f4d
// 00853ceb  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00853cef  33c9                 xor ecx, ecx
// 00853cf1  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00853cf5  0f9cc1               setl cl
// 00853cf8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00853cfc  8bce                 mov ecx, esi
// 00853cfe  e8bdfcffff           call 0x8539c0
// 00853d03  50                   push eax
// 00853d04  e807f5ffff           call 0x853210
// 00853d09  83c404               add esp, 4
// 00853d0c  85c0                 test eax, eax
// 00853d0e  0f8427020000         je 0x853f3b
// 00853d14  8b2de819a400         mov ebp, dword ptr [0xa419e8]
// 00853d1a  ffd5                 call ebp
// 00853d1c  50                   push eax
// 00853d1d  e80666fbff           call 0x80a328
// 00853d22  8bc8                 mov ecx, eax
// 00853d24  e8f79bfdff           call 0x82d920
// 00853d29  8bf8                 mov edi, eax
// 00853d2b  895c2428             mov dword ptr [esp + 0x28], ebx
// 00853d2f  c744242490e7a500     mov dword ptr [esp + 0x24], 0xa5e790
// 00853d37  8b442420             mov eax, dword ptr [esp + 0x20]
// 00853d3b  2b442418             sub eax, dword ptr [esp + 0x18]
// 00853d3f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00853d43  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00853d47  50                   push eax
// 00853d48  51                   push ecx
// 00853d49  57                   push edi
// 00853d4a  8d4c2430             lea ecx, [esp + 0x30]
// 00853d4e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00853d55  e876e8c0ff           call 0x4625d0
// 00853d5a  8d542424             lea edx, [esp + 0x24]
// 00853d5e  52                   push edx
// 00853d5f  57                   push edi
// 00853d60  8d4c2464             lea ecx, [esp + 0x64]
// 00853d64  e8d7950000           call 0x85d340
// 00853d69  8b442418             mov eax, dword ptr [esp + 0x18]
// 00853d6d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00853d71  8b542420             mov edx, dword ptr [esp + 0x20]
// 00853d75  682000cc00           push 0xcc0020
// 00853d7a  50                   push eax
// 00853d7b  51                   push ecx
// 00853d7c  57                   push edi
// 00853d7d  2bd0                 sub edx, eax
// 00853d7f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00853d83  52                   push edx
// 00853d84  2bc1                 sub eax, ecx
// 00853d86  50                   push eax
// 00853d87  53                   push ebx
// 00853d88  53                   push ebx
// 00853d89  8d4c247c             lea ecx, [esp + 0x7c]
// 00853d8d  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 00853d95  e8b6e8c0ff           call 0x462650
// 00853d9a  57                   push edi
// 00853d9b  ffd5                 call ebp
// 00853d9d  50                   push eax
// 00853d9e  e88565fbff           call 0x80a328
// 00853da3  8bc8                 mov ecx, eax
// 00853da5  e8968efbff           call 0x80cc40
// 00853daa  53                   push ebx
// 00853dab  8bce                 mov ecx, esi
// 00853dad  e89465fbff           call 0x80a346
// 00853db2  8bce                 mov ecx, esi
// 00853db4  e8b798fcff           call 0x81d670
// 00853db9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00853dbc  51                   push ecx
// 00853dbd  ff152c1ba400         call dword ptr [0xa41b2c]
// 00853dc3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00853dc7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00853dcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00853dcf  685c020000           push 0x25c
// 00853dd4  2bd0                 sub edx, eax
// 00853dd6  52                   push edx
// 00853dd7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00853ddb  2bd1                 sub edx, ecx
// 00853ddd  52                   push edx
// 00853dde  50                   push eax
// 00853ddf  51                   push ecx
// 00853de0  53                   push ebx
// 00853de1  8bce                 mov ecx, esi
// 00853de3  e84266fbff           call 0x80a42a
// 00853de8  8bce                 mov ecx, esi
// 00853dea  e8616dfcff           call 0x81ab50
// 00853def  8b10                 mov edx, dword ptr [eax]
// 00853df1  8bc8                 mov ecx, eax
// 00853df3  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00853df9  56                   push esi
// 00853dfa  ffd0                 call eax
// 00853dfc  bd01000000           mov ebp, 1
// 00853e01  56                   push esi
// 00853e02  8d4c2434             lea ecx, [esp + 0x34]
// 00853e06  e8d7871700           call 0x9cc5e2
// 00853e0b  56                   push esi
// 00853e0c  8d4c2448             lea ecx, [esp + 0x48]
// 00853e10  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 00853e18  e8738f0000           call 0x85cd90
// 00853e1d  8d4c2430             lea ecx, [esp + 0x30]
// 00853e21  51                   push ecx
// 00853e22  e8a99d0000           call 0x85dbd0
// 00853e27  8d542434             lea edx, [esp + 0x34]
// 00853e2b  53                   push ebx
// 00853e2c  52                   push edx
// 00853e2d  8bf8                 mov edi, eax
// 00853e2f  e8cc9d0000           call 0x85dc00
// 00853e34  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00853e38  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 00853e3c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00853e40  2b542420             sub edx, dword ptr [esp + 0x20]
// 00853e44  83c40c               add esp, 0xc
// 00853e47  682000cc00           push 0xcc0020
// 00853e4c  53                   push ebx
// 00853e4d  53                   push ebx
// 00853e4e  8d442468             lea eax, [esp + 0x68]
// 00853e52  50                   push eax
// 00853e53  51                   push ecx
// 00853e54  52                   push edx
// 00853e55  53                   push ebx
// 00853e56  53                   push ebx
// 00853e57  8d4c2450             lea ecx, [esp + 0x50]
// 00853e5b  e8f0e7c0ff           call 0x462650
// 00853e60  8d442430             lea eax, [esp + 0x30]
// 00853e64  57                   push edi
// 00853e65  50                   push eax
// 00853e66  e8959d0000           call 0x85dc00
// 00853e6b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00853e6f  83c408               add esp, 8
// 00853e72  8d4c2444             lea ecx, [esp + 0x44]
// 00853e76  51                   push ecx
// 00853e77  52                   push edx
// 00853e78  8d8c2488000000       lea ecx, [esp + 0x88]
// 00853e7f  e86c8f0000           call 0x85cdf0
// 00853e84  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00853e88  8b16                 mov edx, dword ptr [esi]
// 00853e8a  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 00853e90  83ec10               sub esp, 0x10
// 00853e93  8bc4                 mov eax, esp
// 00853e95  8908                 mov dword ptr [eax], ecx
// 00853e97  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00853e9b  894804               mov dword ptr [eax + 4], ecx
// 00853e9e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00853ea2  894808               mov dword ptr [eax + 8], ecx
// 00853ea5  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00853ea9  89480c               mov dword ptr [eax + 0xc], ecx
// 00853eac  8d842490000000       lea eax, [esp + 0x90]
// 00853eb3  50                   push eax
// 00853eb4  8bce                 mov ecx, esi
// 00853eb6  c68424cc00000003     mov byte ptr [esp + 0xcc], 3
// 00853ebe  ffd2                 call edx
// 00853ec0  8bce                 mov ecx, esi
// 00853ec2  e8896cfcff           call 0x81ab50
// 00853ec7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00853ecb  8b10                 mov edx, dword ptr [eax]
// 00853ecd  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00853ed3  51                   push ecx
// 00853ed4  8d8c2484000000       lea ecx, [esp + 0x84]
// 00853edb  51                   push ecx
// 00853edc  8d4c2438             lea ecx, [esp + 0x38]
// 00853ee0  51                   push ecx
// 00853ee1  56                   push esi
// 00853ee2  8bc8                 mov ecx, eax
// 00853ee4  ffd2                 call edx
// 00853ee6  8d8c2480000000       lea ecx, [esp + 0x80]
// 00853eed  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 00853ef5  e806910000           call 0x85d000
// 00853efa  8d4c2430             lea ecx, [esp + 0x30]
// 00853efe  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00853f06  e8d1861700           call 0x9cc5dc
// 00853f0b  8d4c245c             lea ecx, [esp + 0x5c]
// 00853f0f  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 00853f16  e835950000           call 0x85d450
// 00853f1b  8d4c2424             lea ecx, [esp + 0x24]
// 00853f1f  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 00853f2a  c744242490e7a500     mov dword ptr [esp + 0x24], 0xa5e790
// 00853f32  e8f9f9bbff           call 0x413930
// 00853f37  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00853f3b  6a02                 push 2
// 00853f3d  e81ed50200           call 0x881460
// 00853f42  8bc8                 mov ecx, eax
// 00853f44  e807d60200           call 0x881550
// 00853f49  3beb                 cmp ebp, ebx
// 00853f4b  7539                 jne 0x853f86
// 00853f4d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00853f51  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00853f55  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00853f59  6854020000           push 0x254
// 00853f5e  2bc8                 sub ecx, eax
// 00853f60  51                   push ecx
// 00853f61  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00853f65  2bd1                 sub edx, ecx
// 00853f67  52                   push edx
// 00853f68  50                   push eax
// 00853f69  51                   push ecx
// 00853f6a  53                   push ebx
// 00853f6b  8bce                 mov ecx, esi
// 00853f6d  e8b864fbff           call 0x80a42a
// 00853f72  8bce                 mov ecx, esi
// 00853f74  e8d76bfcff           call 0x81ab50
// 00853f79  8b10                 mov edx, dword ptr [eax]
// 00853f7b  8bc8                 mov ecx, eax
// 00853f7d  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00853f83  56                   push esi
// 00853f84  ffd0                 call eax
// 00853f86  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 00853f8d  751c                 jne 0x853fab
// 00853f8f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 00853f95  7414                 je 0x853fab
// 00853f97  8d8e8c010000         lea ecx, [esi + 0x18c]
// 00853f9d  51                   push ecx
// 00853f9e  56                   push esi
// 00853f9f  e88cdc0700           call 0x8d1c30
// 00853fa4  8bc8                 mov ecx, eax
// 00853fa6  e885e60700           call 0x8d2630
// 00853fab  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00853fb1  3bcb                 cmp ecx, ebx
// 00853fb3  740a                 je 0x853fbf
// 00853fb5  8b11                 mov edx, dword ptr [ecx]
// 00853fb7  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00853fbd  ffd0                 call eax
// 00853fbf  8b16                 mov edx, dword ptr [esi]
// 00853fc1  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00853fc7  6a01                 push 1
// 00853fc9  53                   push ebx
// 00853fca  8bce                 mov ecx, esi
// 00853fcc  ffd0                 call eax
// 00853fce  3bfb                 cmp edi, ebx
// 00853fd0  7415                 je 0x853fe7
// 00853fd2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00853fd5  53                   push ebx
// 00853fd6  68cacc0000           push 0xccca
// 00853fdb  6813010000           push 0x113
// 00853fe0  51                   push ecx
// 00853fe1  ff15b419a400         call dword ptr [0xa419b4]
// 00853fe7  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 00853fed  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00853ff4  64890d00000000       mov dword ptr fs:[0], ecx
// 00853ffb  59                   pop ecx
// 00853ffc  5f                   pop edi
// 00853ffd  5e                   pop esi
// 00853ffe  5d                   pop ebp
// 00853fff  5b                   pop ebx
// 00854000  81c4a8000000         add esp, 0xa8
// 00854006  c3                   ret 
// copied from an identical function in another client (function ?OnRecalcLayout@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp