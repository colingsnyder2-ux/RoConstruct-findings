// roc 2009-06 0061ecf0  unit: RBX::ChangeHistoryService  size: 1327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061ecf0
//
// 0061ecf0  83ec1c               sub esp, 0x1c
// 0061ecf3  53                   push ebx
// 0061ecf4  55                   push ebp
// 0061ecf5  56                   push esi
// 0061ecf6  57                   push edi
// 0061ecf7  33ff                 xor edi, edi
// 0061ecf9  33ed                 xor ebp, ebp
// 0061ecfb  eb03                 jmp 0x61ed00
// 0061ecfd  8d4900               lea ecx, [ecx]
// 0061ed00  8a442438             mov al, byte ptr [esp + 0x38]
// 0061ed04  84c0                 test al, al
// 0061ed06  7523                 jne 0x61ed2b
// 0061ed08  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ed0c  3bcf                 cmp ecx, edi
// 0061ed0e  7411                 je 0x61ed21
// 0061ed10  ff1558e68900         call dword ptr [0x89e658]
// 0061ed16  83f8ff               cmp eax, -1
// 0061ed19  7406                 je 0x61ed21
// 0061ed1b  88442439             mov byte ptr [esp + 0x39], al
// 0061ed1f  eb04                 jmp 0x61ed25
// 0061ed21  897c2434             mov dword ptr [esp + 0x34], edi
// 0061ed25  b001                 mov al, 1
// 0061ed27  88442438             mov byte ptr [esp + 0x38], al
// 0061ed2b  807c244000           cmp byte ptr [esp + 0x40], 0
// 0061ed30  7526                 jne 0x61ed58
// 0061ed32  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0061ed36  3bcf                 cmp ecx, edi
// 0061ed38  7411                 je 0x61ed4b
// 0061ed3a  ff1558e68900         call dword ptr [0x89e658]
// 0061ed40  83f8ff               cmp eax, -1
// 0061ed43  7406                 je 0x61ed4b
// 0061ed45  88442441             mov byte ptr [esp + 0x41], al
// 0061ed49  eb04                 jmp 0x61ed4f
// 0061ed4b  897c243c             mov dword ptr [esp + 0x3c], edi
// 0061ed4f  8a442438             mov al, byte ptr [esp + 0x38]
// 0061ed53  c644244001           mov byte ptr [esp + 0x40], 1
// 0061ed58  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ed5c  3bcf                 cmp ecx, edi
// 0061ed5e  750c                 jne 0x61ed6c
// 0061ed60  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0061ed64  0f84f5020000         je 0x61f05f
// 0061ed6a  eb0a                 jmp 0x61ed76
// 0061ed6c  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0061ed70  0f85e9020000         jne 0x61f05f
// 0061ed76  84c0                 test al, al
// 0061ed78  7523                 jne 0x61ed9d
// 0061ed7a  3bcf                 cmp ecx, edi
// 0061ed7c  7411                 je 0x61ed8f
// 0061ed7e  ff1558e68900         call dword ptr [0x89e658]
// 0061ed84  83f8ff               cmp eax, -1
// 0061ed87  7406                 je 0x61ed8f
// 0061ed89  88442439             mov byte ptr [esp + 0x39], al
// 0061ed8d  eb04                 jmp 0x61ed93
// 0061ed8f  897c2434             mov dword ptr [esp + 0x34], edi
// 0061ed93  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ed97  b001                 mov al, 1
// 0061ed99  88442438             mov byte ptr [esp + 0x38], al
// 0061ed9d  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0061eda1  885c2410             mov byte ptr [esp + 0x10], bl
// 0061eda5  84c0                 test al, al
// 0061eda7  7522                 jne 0x61edcb
// 0061eda9  3bcf                 cmp ecx, edi
// 0061edab  7411                 je 0x61edbe
// 0061edad  ff1558e68900         call dword ptr [0x89e658]
// 0061edb3  83f8ff               cmp eax, -1
// 0061edb6  7406                 je 0x61edbe
// 0061edb8  88442439             mov byte ptr [esp + 0x39], al
// 0061edbc  eb04                 jmp 0x61edc2
// 0061edbe  897c2434             mov dword ptr [esp + 0x34], edi
// 0061edc2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061edc6  c644243801           mov byte ptr [esp + 0x38], 1
// 0061edcb  3bcf                 cmp ecx, edi
// 0061edcd  7429                 je 0x61edf8
// 0061edcf  ff1554e68900         call dword ptr [0x89e654]
// 0061edd5  83f8ff               cmp eax, -1
// 0061edd8  741e                 je 0x61edf8
// 0061edda  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061edde  c644243800           mov byte ptr [esp + 0x38], 0
// 0061ede3  3bcf                 cmp ecx, edi
// 0061ede5  7419                 je 0x61ee00
// 0061ede7  ff1558e68900         call dword ptr [0x89e658]
// 0061eded  83f8ff               cmp eax, -1
// 0061edf0  740e                 je 0x61ee00
// 0061edf2  88442439             mov byte ptr [esp + 0x39], al
// 0061edf6  eb0c                 jmp 0x61ee04
// 0061edf8  33c9                 xor ecx, ecx
// 0061edfa  894c2434             mov dword ptr [esp + 0x34], ecx
// 0061edfe  eb08                 jmp 0x61ee08
// 0061ee00  897c2434             mov dword ptr [esp + 0x34], edi
// 0061ee04  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ee08  807c244000           cmp byte ptr [esp + 0x40], 0
// 0061ee0d  b001                 mov al, 1
// 0061ee0f  88442438             mov byte ptr [esp + 0x38], al
// 0061ee13  752a                 jne 0x61ee3f
// 0061ee15  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0061ee19  3bcf                 cmp ecx, edi
// 0061ee1b  7411                 je 0x61ee2e
// 0061ee1d  ff1558e68900         call dword ptr [0x89e658]
// 0061ee23  83f8ff               cmp eax, -1
// 0061ee26  7406                 je 0x61ee2e
// 0061ee28  88442441             mov byte ptr [esp + 0x41], al
// 0061ee2c  eb04                 jmp 0x61ee32
// 0061ee2e  897c243c             mov dword ptr [esp + 0x3c], edi
// 0061ee32  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ee36  8a442438             mov al, byte ptr [esp + 0x38]
// 0061ee3a  c644244001           mov byte ptr [esp + 0x40], 1
// 0061ee3f  3bcf                 cmp ecx, edi
// 0061ee41  0f858c000000         jne 0x61eed3
// 0061ee47  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0061ee4b  0f858c000000         jne 0x61eedd
// 0061ee51  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061ee55  0fb6f3               movzx esi, bl
// 0061ee58  8bd6                 mov edx, esi
// 0061ee5a  c1ea02               shr edx, 2
// 0061ee5d  8a0495e89ea000       mov al, byte ptr [edx*4 + 0xa09ee8]
// 0061ee64  88442420             mov byte ptr [esp + 0x20], al
// 0061ee68  3bcf                 cmp ecx, edi
// 0061ee6a  7410                 je 0x61ee7c
// 0061ee6c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061ee70  52                   push edx
// 0061ee71  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061ee77  83f8ff               cmp eax, -1
// 0061ee7a  7505                 jne 0x61ee81
// 0061ee7c  c644244401           mov byte ptr [esp + 0x44], 1
// 0061ee81  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061ee85  83e603               and esi, 3
// 0061ee88  c1e606               shl esi, 6
// 0061ee8b  8a86e89ea000         mov al, byte ptr [esi + 0xa09ee8]
// 0061ee91  88442420             mov byte ptr [esp + 0x20], al
// 0061ee95  3bcf                 cmp ecx, edi
// 0061ee97  7410                 je 0x61eea9
// 0061ee99  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061ee9d  52                   push edx
// 0061ee9e  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061eea4  83f8ff               cmp eax, -1
// 0061eea7  7505                 jne 0x61eeae
// 0061eea9  c644244401           mov byte ptr [esp + 0x44], 1
// 0061eeae  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061eeb2  3bcf                 cmp ecx, edi
// 0061eeb4  740d                 je 0x61eec3
// 0061eeb6  6a3d                 push 0x3d
// 0061eeb8  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061eebe  83f8ff               cmp eax, -1
// 0061eec1  7505                 jne 0x61eec8
// 0061eec3  c644244401           mov byte ptr [esp + 0x44], 1
// 0061eec8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061eecc  3bcf                 cmp ecx, edi
// 0061eece  e982010000           jmp 0x61f055
// 0061eed3  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0061eed7  0f8574ffffff         jne 0x61ee51
// 0061eedd  84c0                 test al, al
// 0061eedf  7523                 jne 0x61ef04
// 0061eee1  3bcf                 cmp ecx, edi
// 0061eee3  7411                 je 0x61eef6
// 0061eee5  ff1558e68900         call dword ptr [0x89e658]
// 0061eeeb  83f8ff               cmp eax, -1
// 0061eeee  7406                 je 0x61eef6
// 0061eef0  88442439             mov byte ptr [esp + 0x39], al
// 0061eef4  eb04                 jmp 0x61eefa
// 0061eef6  897c2434             mov dword ptr [esp + 0x34], edi
// 0061eefa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061eefe  b001                 mov al, 1
// 0061ef00  88442438             mov byte ptr [esp + 0x38], al
// 0061ef04  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0061ef08  885c2411             mov byte ptr [esp + 0x11], bl
// 0061ef0c  84c0                 test al, al
// 0061ef0e  7522                 jne 0x61ef32
// 0061ef10  3bcf                 cmp ecx, edi
// 0061ef12  7411                 je 0x61ef25
// 0061ef14  ff1558e68900         call dword ptr [0x89e658]
// 0061ef1a  83f8ff               cmp eax, -1
// 0061ef1d  7406                 je 0x61ef25
// 0061ef1f  88442439             mov byte ptr [esp + 0x39], al
// 0061ef23  eb04                 jmp 0x61ef29
// 0061ef25  897c2434             mov dword ptr [esp + 0x34], edi
// 0061ef29  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ef2d  c644243801           mov byte ptr [esp + 0x38], 1
// 0061ef32  3bcf                 cmp ecx, edi
// 0061ef34  7429                 je 0x61ef5f
// 0061ef36  ff1554e68900         call dword ptr [0x89e654]
// 0061ef3c  83f8ff               cmp eax, -1
// 0061ef3f  741e                 je 0x61ef5f
// 0061ef41  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ef45  c644243800           mov byte ptr [esp + 0x38], 0
// 0061ef4a  3bcf                 cmp ecx, edi
// 0061ef4c  7419                 je 0x61ef67
// 0061ef4e  ff1558e68900         call dword ptr [0x89e658]
// 0061ef54  83f8ff               cmp eax, -1
// 0061ef57  740e                 je 0x61ef67
// 0061ef59  88442439             mov byte ptr [esp + 0x39], al
// 0061ef5d  eb0c                 jmp 0x61ef6b
// 0061ef5f  33c9                 xor ecx, ecx
// 0061ef61  894c2434             mov dword ptr [esp + 0x34], ecx
// 0061ef65  eb08                 jmp 0x61ef6f
// 0061ef67  897c2434             mov dword ptr [esp + 0x34], edi
// 0061ef6b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ef6f  807c244000           cmp byte ptr [esp + 0x40], 0
// 0061ef74  b001                 mov al, 1
// 0061ef76  88442438             mov byte ptr [esp + 0x38], al
// 0061ef7a  752a                 jne 0x61efa6
// 0061ef7c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0061ef80  3bcf                 cmp ecx, edi
// 0061ef82  7411                 je 0x61ef95
// 0061ef84  ff1558e68900         call dword ptr [0x89e658]
// 0061ef8a  83f8ff               cmp eax, -1
// 0061ef8d  7406                 je 0x61ef95
// 0061ef8f  88442441             mov byte ptr [esp + 0x41], al
// 0061ef93  eb04                 jmp 0x61ef99
// 0061ef95  897c243c             mov dword ptr [esp + 0x3c], edi
// 0061ef99  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061ef9d  8a442438             mov al, byte ptr [esp + 0x38]
// 0061efa1  c644244001           mov byte ptr [esp + 0x40], 1
// 0061efa6  3bcf                 cmp ecx, edi
// 0061efa8  0f85cc000000         jne 0x61f07a
// 0061efae  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0061efb2  0f85cc000000         jne 0x61f084
// 0061efb8  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 0061efbd  8bc6                 mov eax, esi
// 0061efbf  c1e802               shr eax, 2
// 0061efc2  8a0c85e89ea000       mov cl, byte ptr [eax*4 + 0xa09ee8]
// 0061efc9  884c2420             mov byte ptr [esp + 0x20], cl
// 0061efcd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061efd1  3bcf                 cmp ecx, edi
// 0061efd3  7410                 je 0x61efe5
// 0061efd5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061efd9  52                   push edx
// 0061efda  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061efe0  83f8ff               cmp eax, -1
// 0061efe3  7505                 jne 0x61efea
// 0061efe5  c644244401           mov byte ptr [esp + 0x44], 1
// 0061efea  0fb6fb               movzx edi, bl
// 0061efed  83e603               and esi, 3
// 0061eff0  8bc7                 mov eax, edi
// 0061eff2  c1e604               shl esi, 4
// 0061eff5  c1e804               shr eax, 4
// 0061eff8  03f0                 add esi, eax
// 0061effa  8a0cb5e89ea000       mov cl, byte ptr [esi*4 + 0xa09ee8]
// 0061f001  884c2420             mov byte ptr [esp + 0x20], cl
// 0061f005  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f009  85c9                 test ecx, ecx
// 0061f00b  7410                 je 0x61f01d
// 0061f00d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061f011  52                   push edx
// 0061f012  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f018  83f8ff               cmp eax, -1
// 0061f01b  7505                 jne 0x61f022
// 0061f01d  c644244401           mov byte ptr [esp + 0x44], 1
// 0061f022  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f026  83e70f               and edi, 0xf
// 0061f029  c1e704               shl edi, 4
// 0061f02c  8a87e89ea000         mov al, byte ptr [edi + 0xa09ee8]
// 0061f032  88442420             mov byte ptr [esp + 0x20], al
// 0061f036  85c9                 test ecx, ecx
// 0061f038  7410                 je 0x61f04a
// 0061f03a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061f03e  52                   push edx
// 0061f03f  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f045  83f8ff               cmp eax, -1
// 0061f048  7505                 jne 0x61f04f
// 0061f04a  c644244401           mov byte ptr [esp + 0x44], 1
// 0061f04f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f053  85c9                 test ecx, ecx
// 0061f055  7408                 je 0x61f05f
// 0061f057  6a3d                 push 0x3d
// 0061f059  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f05f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061f063  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061f067  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061f06b  5f                   pop edi
// 0061f06c  5e                   pop esi
// 0061f06d  5d                   pop ebp
// 0061f06e  8908                 mov dword ptr [eax], ecx
// 0061f070  895004               mov dword ptr [eax + 4], edx
// 0061f073  5b                   pop ebx
// 0061f074  83c41c               add esp, 0x1c
// 0061f077  c22400               ret 0x24
// 0061f07a  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0061f07e  0f8534ffffff         jne 0x61efb8
// 0061f084  84c0                 test al, al
// 0061f086  7523                 jne 0x61f0ab
// 0061f088  3bcf                 cmp ecx, edi
// 0061f08a  7411                 je 0x61f09d
// 0061f08c  ff1558e68900         call dword ptr [0x89e658]
// 0061f092  83f8ff               cmp eax, -1
// 0061f095  7406                 je 0x61f09d
// 0061f097  88442439             mov byte ptr [esp + 0x39], al
// 0061f09b  eb04                 jmp 0x61f0a1
// 0061f09d  897c2434             mov dword ptr [esp + 0x34], edi
// 0061f0a1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061f0a5  b001                 mov al, 1
// 0061f0a7  88442438             mov byte ptr [esp + 0x38], al
// 0061f0ab  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0061f0af  84c0                 test al, al
// 0061f0b1  7522                 jne 0x61f0d5
// 0061f0b3  3bcf                 cmp ecx, edi
// 0061f0b5  7411                 je 0x61f0c8
// 0061f0b7  ff1558e68900         call dword ptr [0x89e658]
// 0061f0bd  83f8ff               cmp eax, -1
// 0061f0c0  7406                 je 0x61f0c8
// 0061f0c2  88442439             mov byte ptr [esp + 0x39], al
// 0061f0c6  eb04                 jmp 0x61f0cc
// 0061f0c8  897c2434             mov dword ptr [esp + 0x34], edi
// 0061f0cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061f0d0  c644243801           mov byte ptr [esp + 0x38], 1
// 0061f0d5  3bcf                 cmp ecx, edi
// 0061f0d7  7412                 je 0x61f0eb
// 0061f0d9  ff1554e68900         call dword ptr [0x89e654]
// 0061f0df  83f8ff               cmp eax, -1
// 0061f0e2  7407                 je 0x61f0eb
// 0061f0e4  c644243800           mov byte ptr [esp + 0x38], 0
// 0061f0e9  eb09                 jmp 0x61f0f4
// 0061f0eb  897c2434             mov dword ptr [esp + 0x34], edi
// 0061f0ef  c644243801           mov byte ptr [esp + 0x38], 1
// 0061f0f4  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 0061f0f9  8bc6                 mov eax, esi
// 0061f0fb  c1e802               shr eax, 2
// 0061f0fe  8a0c85e89ea000       mov cl, byte ptr [eax*4 + 0xa09ee8]
// 0061f105  884c2414             mov byte ptr [esp + 0x14], cl
// 0061f109  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f10d  3bcf                 cmp ecx, edi
// 0061f10f  7410                 je 0x61f121
// 0061f111  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061f115  52                   push edx
// 0061f116  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f11c  83f8ff               cmp eax, -1
// 0061f11f  7505                 jne 0x61f126
// 0061f121  c644244401           mov byte ptr [esp + 0x44], 1
// 0061f126  0fb67c2411           movzx edi, byte ptr [esp + 0x11]
// 0061f12b  83e603               and esi, 3
// 0061f12e  8bc7                 mov eax, edi
// 0061f130  c1e604               shl esi, 4
// 0061f133  c1e804               shr eax, 4
// 0061f136  03f0                 add esi, eax
// 0061f138  8a0cb5e89ea000       mov cl, byte ptr [esi*4 + 0xa09ee8]
// 0061f13f  884c2418             mov byte ptr [esp + 0x18], cl
// 0061f143  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f147  85c9                 test ecx, ecx
// 0061f149  7410                 je 0x61f15b
// 0061f14b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061f14f  52                   push edx
// 0061f150  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f156  83f8ff               cmp eax, -1
// 0061f159  7505                 jne 0x61f160
// 0061f15b  c644244401           mov byte ptr [esp + 0x44], 1
// 0061f160  0fb6f3               movzx esi, bl
// 0061f163  8bc6                 mov eax, esi
// 0061f165  c1e806               shr eax, 6
// 0061f168  83e70f               and edi, 0xf
// 0061f16b  8d0cb8               lea ecx, [eax + edi*4]
// 0061f16e  8a148de89ea000       mov dl, byte ptr [ecx*4 + 0xa09ee8]
// 0061f175  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f179  8854241c             mov byte ptr [esp + 0x1c], dl
// 0061f17d  85c9                 test ecx, ecx
// 0061f17f  7410                 je 0x61f191
// 0061f181  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061f185  50                   push eax
// 0061f186  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f18c  83f8ff               cmp eax, -1
// 0061f18f  7505                 jne 0x61f196
// 0061f191  c644244401           mov byte ptr [esp + 0x44], 1
// 0061f196  83e63f               and esi, 0x3f
// 0061f199  8a0cb5e89ea000       mov cl, byte ptr [esi*4 + 0xa09ee8]
// 0061f1a0  884c2420             mov byte ptr [esp + 0x20], cl
// 0061f1a4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f1a8  85c9                 test ecx, ecx
// 0061f1aa  7410                 je 0x61f1bc
// 0061f1ac  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061f1b0  52                   push edx
// 0061f1b1  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f1b7  83f8ff               cmp eax, -1
// 0061f1ba  7505                 jne 0x61f1c1
// 0061f1bc  c644244401           mov byte ptr [esp + 0x44], 1
// 0061f1c1  83fd11               cmp ebp, 0x11
// 0061f1c4  7551                 jne 0x61f217
// 0061f1c6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061f1ca  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061f1ce  89442424             mov dword ptr [esp + 0x24], eax
// 0061f1d2  8bf1                 mov esi, ecx
// 0061f1d4  85c9                 test ecx, ecx
// 0061f1d6  740d                 je 0x61f1e5
// 0061f1d8  6a0d                 push 0xd
// 0061f1da  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f1e0  83f8ff               cmp eax, -1
// 0061f1e3  7505                 jne 0x61f1ea
// 0061f1e5  c644242401           mov byte ptr [esp + 0x24], 1
// 0061f1ea  85f6                 test esi, esi
// 0061f1ec  740f                 je 0x61f1fd
// 0061f1ee  6a0a                 push 0xa
// 0061f1f0  8bce                 mov ecx, esi
// 0061f1f2  ff15f0e38900         call dword ptr [0x89e3f0]
// 0061f1f8  83f8ff               cmp eax, -1
// 0061f1fb  7505                 jne 0x61f202
// 0061f1fd  c644242401           mov byte ptr [esp + 0x24], 1
// 0061f202  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061f206  33ed                 xor ebp, ebp
// 0061f208  894c2444             mov dword ptr [esp + 0x44], ecx
// 0061f20c  89742448             mov dword ptr [esp + 0x48], esi
// 0061f210  33ff                 xor edi, edi
// 0061f212  e9e9faffff           jmp 0x61ed00
// 0061f217  45                   inc ebp
// 0061f218  33ff                 xor edi, edi
// 0061f21a  e9e1faffff           jmp 0x61ed00
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??$put@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@HUcrlf@?$base64@DU?$char_traits@D@std@@@@@?$base64@DU?$char_traits@D@std@@@@QBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V12@0V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@AAHUcrlf@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
