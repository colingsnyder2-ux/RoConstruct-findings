// roc 2007-08 00519ac0  unit: seg_00510000  size: 1780 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519ac0
//
// 00519ac0  83ec28               sub esp, 0x28
// 00519ac3  8b542430             mov edx, dword ptr [esp + 0x30]
// 00519ac7  8b0a                 mov ecx, dword ptr [edx]
// 00519ac9  8a5208               mov dl, byte ptr [edx + 8]
// 00519acc  33c0                 xor eax, eax
// 00519ace  f6c202               test dl, 2
// 00519ad1  894c2408             mov dword ptr [esp + 8], ecx
// 00519ad5  89442404             mov dword ptr [esp + 4], eax
// 00519ad9  0f84d1060000         je 0x51a1b0
// 00519adf  80fa02               cmp dl, 2
// 00519ae2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00519ae6  53                   push ebx
// 00519ae7  0fb7982e020000       movzx ebx, word ptr [eax + 0x22e]
// 00519aee  55                   push ebp
// 00519aef  56                   push esi
// 00519af0  0fb7b02c020000       movzx esi, word ptr [eax + 0x22c]
// 00519af7  57                   push edi
// 00519af8  0fb7b82a020000       movzx edi, word ptr [eax + 0x22a]
// 00519aff  897c2430             mov dword ptr [esp + 0x30], edi
// 00519b03  8974241c             mov dword ptr [esp + 0x1c], esi
// 00519b07  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00519b0b  0f851e030000         jne 0x519e2f
// 00519b11  8b542440             mov edx, dword ptr [esp + 0x40]
// 00519b15  807a0908             cmp byte ptr [edx + 9], 8
// 00519b19  0f854f010000         jne 0x519c6e
// 00519b1f  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00519b26  0f84bd000000         je 0x519be9
// 00519b2c  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 00519b33  0f84b0000000         je 0x519be9
// 00519b39  85c9                 test ecx, ecx
// 00519b3b  8b742444             mov esi, dword ptr [esp + 0x44]
// 00519b3f  89742420             mov dword ptr [esp + 0x20], esi
// 00519b43  0f86ea020000         jbe 0x519e33
// 00519b49  894c2424             mov dword ptr [esp + 0x24], ecx
// 00519b4d  8d4900               lea ecx, [ecx]
// 00519b50  0fb60e               movzx ecx, byte ptr [esi]
// 00519b53  8ba86c010000         mov ebp, dword ptr [eax + 0x16c]
// 00519b59  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00519b5d  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00519b61  8a0c29               mov cl, byte ptr [ecx + ebp]
// 00519b64  83c601               add esi, 1
// 00519b67  83c601               add esi, 1
// 00519b6a  88542412             mov byte ptr [esp + 0x12], dl
// 00519b6e  0fb616               movzx edx, byte ptr [esi]
// 00519b71  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00519b75  88542411             mov byte ptr [esp + 0x11], dl
// 00519b79  8a542412             mov dl, byte ptr [esp + 0x12]
// 00519b7d  83c601               add esi, 1
// 00519b80  3ad1                 cmp dl, cl
// 00519b82  884c2413             mov byte ptr [esp + 0x13], cl
// 00519b86  7516                 jne 0x519b9e
// 00519b88  3a542411             cmp dl, byte ptr [esp + 0x11]
// 00519b8c  750c                 jne 0x519b9a
// 00519b8e  8a4eff               mov cl, byte ptr [esi - 1]
// 00519b91  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00519b95  884d00               mov byte ptr [ebp], cl
// 00519b98  eb38                 jmp 0x519bd2
// 00519b9a  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00519b9e  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00519ba3  0fb6c9               movzx ecx, cl
// 00519ba6  0fafd3               imul edx, ebx
// 00519ba9  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00519bae  834c241401           or dword ptr [esp + 0x14], 1
// 00519bb3  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00519bb7  03d1                 add edx, ecx
// 00519bb9  0fb64c2412           movzx ecx, byte ptr [esp + 0x12]
// 00519bbe  0fafcf               imul ecx, edi
// 00519bc1  03d1                 add edx, ecx
// 00519bc3  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00519bc9  c1ea0f               shr edx, 0xf
// 00519bcc  8a140a               mov dl, byte ptr [edx + ecx]
// 00519bcf  885500               mov byte ptr [ebp], dl
// 00519bd2  83c501               add ebp, 1
// 00519bd5  836c242401           sub dword ptr [esp + 0x24], 1
// 00519bda  896c2420             mov dword ptr [esp + 0x20], ebp
// 00519bde  0f856cffffff         jne 0x519b50
// 00519be4  e942020000           jmp 0x519e2b
// 00519be9  85c9                 test ecx, ecx
// 00519beb  8b742444             mov esi, dword ptr [esp + 0x44]
// 00519bef  8bee                 mov ebp, esi
// 00519bf1  0f8638020000         jbe 0x519e2f
// 00519bf7  894c2424             mov dword ptr [esp + 0x24], ecx
// 00519bfb  eb03                 jmp 0x519c00
// 00519bfd  8d4900               lea ecx, [ecx]
// 00519c00  0fb60e               movzx ecx, byte ptr [esi]
// 00519c03  83c601               add esi, 1
// 00519c06  0fb65601             movzx edx, byte ptr [esi + 1]
// 00519c0a  884c2411             mov byte ptr [esp + 0x11], cl
// 00519c0e  8a0e                 mov cl, byte ptr [esi]
// 00519c10  83c601               add esi, 1
// 00519c13  88542412             mov byte ptr [esp + 0x12], dl
// 00519c17  8a542411             mov dl, byte ptr [esp + 0x11]
// 00519c1b  83c601               add esi, 1
// 00519c1e  3ad1                 cmp dl, cl
// 00519c20  884c2413             mov byte ptr [esp + 0x13], cl
// 00519c24  7512                 jne 0x519c38
// 00519c26  3a542412             cmp dl, byte ptr [esp + 0x12]
// 00519c2a  7508                 jne 0x519c34
// 00519c2c  8a4eff               mov cl, byte ptr [esi - 1]
// 00519c2f  884d00               mov byte ptr [ebp], cl
// 00519c32  eb2b                 jmp 0x519c5f
// 00519c34  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00519c38  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00519c3d  0fb6c9               movzx ecx, cl
// 00519c40  0fafd3               imul edx, ebx
// 00519c43  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00519c48  834c241401           or dword ptr [esp + 0x14], 1
// 00519c4d  03d1                 add edx, ecx
// 00519c4f  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00519c54  0fafcf               imul ecx, edi
// 00519c57  03d1                 add edx, ecx
// 00519c59  c1ea0f               shr edx, 0xf
// 00519c5c  885500               mov byte ptr [ebp], dl
// 00519c5f  83c501               add ebp, 1
// 00519c62  836c242401           sub dword ptr [esp + 0x24], 1
// 00519c67  7597                 jne 0x519c00
// 00519c69  e9bd010000           jmp 0x519e2b
// 00519c6e  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 00519c75  0f841f010000         je 0x519d9a
// 00519c7b  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 00519c82  0f8412010000         je 0x519d9a
// 00519c88  85c9                 test ecx, ecx
// 00519c8a  8b542444             mov edx, dword ptr [esp + 0x44]
// 00519c8e  89542420             mov dword ptr [esp + 0x20], edx
// 00519c92  0f8697010000         jbe 0x519e2f
// 00519c98  894c2428             mov dword ptr [esp + 0x28], ecx
// 00519c9c  8d642400             lea esp, [esp]
// 00519ca0  33c9                 xor ecx, ecx
// 00519ca2  8a2a                 mov ch, byte ptr [edx]
// 00519ca4  83c202               add edx, 2
// 00519ca7  83c202               add edx, 2
// 00519caa  83c202               add edx, 2
// 00519cad  89542434             mov dword ptr [esp + 0x34], edx
// 00519cb1  8a4afb               mov cl, byte ptr [edx - 5]
// 00519cb4  0fb7e9               movzx ebp, cx
// 00519cb7  33c9                 xor ecx, ecx
// 00519cb9  8a6afc               mov ch, byte ptr [edx - 4]
// 00519cbc  8a4afd               mov cl, byte ptr [edx - 3]
// 00519cbf  0fb7c9               movzx ecx, cx
// 00519cc2  894c2424             mov dword ptr [esp + 0x24], ecx
// 00519cc6  33c9                 xor ecx, ecx
// 00519cc8  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 00519ccd  8a6afe               mov ch, byte ptr [edx - 2]
// 00519cd0  8a4aff               mov cl, byte ptr [edx - 1]
// 00519cd3  0fb7f1               movzx esi, cx
// 00519cd6  750d                 jne 0x519ce5
// 00519cd8  663bee               cmp bp, si
// 00519cdb  7508                 jne 0x519ce5
// 00519cdd  0fb7cd               movzx ecx, bp
// 00519ce0  e98c000000           jmp 0x519d71
// 00519ce5  0fb75c2424           movzx ebx, word ptr [esp + 0x24]
// 00519cea  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 00519cf1  895c2424             mov dword ptr [esp + 0x24], ebx
// 00519cf5  0fb7dd               movzx ebx, bp
// 00519cf8  0fb6eb               movzx ebp, bl
// 00519cfb  d3ed                 shr ebp, cl
// 00519cfd  0fb7d6               movzx edx, si
// 00519d00  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 00519d06  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 00519d09  c1eb08               shr ebx, 8
// 00519d0c  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 00519d11  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00519d15  0fafef               imul ebp, edi
// 00519d18  0fb6fb               movzx edi, bl
// 00519d1b  d3ef                 shr edi, cl
// 00519d1d  c1eb08               shr ebx, 8
// 00519d20  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00519d23  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 00519d27  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 00519d2c  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00519d30  03ef                 add ebp, edi
// 00519d32  0fb6fa               movzx edi, dl
// 00519d35  d3ef                 shr edi, cl
// 00519d37  c1ea08               shr edx, 8
// 00519d3a  8b34be               mov esi, dword ptr [esi + edi*4]
// 00519d3d  0fb71456             movzx edx, word ptr [esi + edx*2]
// 00519d41  0fafd3               imul edx, ebx
// 00519d44  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00519d48  03ea                 add ebp, edx
// 00519d4a  c1ed0f               shr ebp, 0xf
// 00519d4d  0fb7d5               movzx edx, bp
// 00519d50  0fb7d2               movzx edx, dx
// 00519d53  0fb6f2               movzx esi, dl
// 00519d56  d3ee                 shr esi, cl
// 00519d58  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 00519d5e  c1ea08               shr edx, 8
// 00519d61  834c241401           or dword ptr [esp + 0x14], 1
// 00519d66  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00519d69  0fb70c51             movzx ecx, word ptr [ecx + edx*2]
// 00519d6d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00519d71  8b742420             mov esi, dword ptr [esp + 0x20]
// 00519d75  8344242001           add dword ptr [esp + 0x20], 1
// 00519d7a  882e                 mov byte ptr [esi], ch
// 00519d7c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00519d80  880e                 mov byte ptr [esi], cl
// 00519d82  b901000000           mov ecx, 1
// 00519d87  014c2420             add dword ptr [esp + 0x20], ecx
// 00519d8b  294c2428             sub dword ptr [esp + 0x28], ecx
// 00519d8f  0f850bffffff         jne 0x519ca0
// 00519d95  e991000000           jmp 0x519e2b
// 00519d9a  85c9                 test ecx, ecx
// 00519d9c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00519da0  8bf2                 mov esi, edx
// 00519da2  0f8687000000         jbe 0x519e2f
// 00519da8  894c2420             mov dword ptr [esp + 0x20], ecx
// 00519dac  8d642400             lea esp, [esp]
// 00519db0  33c9                 xor ecx, ecx
// 00519db2  8a2a                 mov ch, byte ptr [edx]
// 00519db4  83c202               add edx, 2
// 00519db7  83c202               add edx, 2
// 00519dba  83c202               add edx, 2
// 00519dbd  8a4afb               mov cl, byte ptr [edx - 5]
// 00519dc0  0fb7e9               movzx ebp, cx
// 00519dc3  33c9                 xor ecx, ecx
// 00519dc5  8a6afc               mov ch, byte ptr [edx - 4]
// 00519dc8  896c2434             mov dword ptr [esp + 0x34], ebp
// 00519dcc  8a4afd               mov cl, byte ptr [edx - 3]
// 00519dcf  0fb7c9               movzx ecx, cx
// 00519dd2  894c2424             mov dword ptr [esp + 0x24], ecx
// 00519dd6  33c9                 xor ecx, ecx
// 00519dd8  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 00519ddd  8a6afe               mov ch, byte ptr [edx - 2]
// 00519de0  8a4aff               mov cl, byte ptr [edx - 1]
// 00519de3  0fb7c9               movzx ecx, cx
// 00519de6  894c2428             mov dword ptr [esp + 0x28], ecx
// 00519dea  7505                 jne 0x519df1
// 00519dec  663be9               cmp bp, cx
// 00519def  7405                 je 0x519df6
// 00519df1  834c241401           or dword ptr [esp + 0x14], 1
// 00519df6  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 00519dfb  0fb76c2424           movzx ebp, word ptr [esp + 0x24]
// 00519e00  0fafcb               imul ecx, ebx
// 00519e03  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 00519e08  03cd                 add ecx, ebp
// 00519e0a  0fb76c2434           movzx ebp, word ptr [esp + 0x34]
// 00519e0f  0fafef               imul ebp, edi
// 00519e12  03cd                 add ecx, ebp
// 00519e14  c1e90f               shr ecx, 0xf
// 00519e17  0fb7c9               movzx ecx, cx
// 00519e1a  882e                 mov byte ptr [esi], ch
// 00519e1c  83c601               add esi, 1
// 00519e1f  880e                 mov byte ptr [esi], cl
// 00519e21  83c601               add esi, 1
// 00519e24  836c242001           sub dword ptr [esp + 0x20], 1
// 00519e29  7585                 jne 0x519db0
// 00519e2b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00519e2f  8b742444             mov esi, dword ptr [esp + 0x44]
// 00519e33  8b542440             mov edx, dword ptr [esp + 0x40]
// 00519e37  807a0806             cmp byte ptr [edx + 8], 6
// 00519e3b  0f8528030000         jne 0x51a169
// 00519e41  807a0908             cmp byte ptr [edx + 9], 8
// 00519e45  0f853e010000         jne 0x519f89
// 00519e4b  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00519e52  0f84b8000000         je 0x519f10
// 00519e58  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 00519e5f  0f84ab000000         je 0x519f10
// 00519e65  837c241800           cmp dword ptr [esp + 0x18], 0
// 00519e6a  8bee                 mov ebp, esi
// 00519e6c  0f86f3020000         jbe 0x51a165
// 00519e72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00519e76  89542428             mov dword ptr [esp + 0x28], edx
// 00519e7a  8d9b00000000         lea ebx, [ebx]
// 00519e80  0fb616               movzx edx, byte ptr [esi]
// 00519e83  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00519e89  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00519e8d  83c601               add esi, 1
// 00519e90  88542413             mov byte ptr [esp + 0x13], dl
// 00519e94  0fb616               movzx edx, byte ptr [esi]
// 00519e97  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00519e9b  83c601               add esi, 1
// 00519e9e  88542411             mov byte ptr [esp + 0x11], dl
// 00519ea2  0fb616               movzx edx, byte ptr [esi]
// 00519ea5  0fb60c0a             movzx ecx, byte ptr [edx + ecx]
// 00519ea9  884c2412             mov byte ptr [esp + 0x12], cl
// 00519ead  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00519eb1  83c601               add esi, 1
// 00519eb4  3a4c2411             cmp cl, byte ptr [esp + 0x11]
// 00519eb8  7506                 jne 0x519ec0
// 00519eba  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 00519ebe  7405                 je 0x519ec5
// 00519ec0  834c241401           or dword ptr [esp + 0x14], 1
// 00519ec5  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00519eca  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00519ecf  0fafd3               imul edx, ebx
// 00519ed2  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00519ed7  03d1                 add edx, ecx
// 00519ed9  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 00519ede  0fafcf               imul ecx, edi
// 00519ee1  03d1                 add edx, ecx
// 00519ee3  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00519ee9  c1ea0f               shr edx, 0xf
// 00519eec  8a140a               mov dl, byte ptr [edx + ecx]
// 00519eef  885500               mov byte ptr [ebp], dl
// 00519ef2  8a0e                 mov cl, byte ptr [esi]
// 00519ef4  83c501               add ebp, 1
// 00519ef7  884d00               mov byte ptr [ebp], cl
// 00519efa  83c501               add ebp, 1
// 00519efd  83c601               add esi, 1
// 00519f00  836c242801           sub dword ptr [esp + 0x28], 1
// 00519f05  0f8575ffffff         jne 0x519e80
// 00519f0b  e955020000           jmp 0x51a165
// 00519f10  85c9                 test ecx, ecx
// 00519f12  8bc6                 mov eax, esi
// 00519f14  0f864f020000         jbe 0x51a169
// 00519f1a  894c2428             mov dword ptr [esp + 0x28], ecx
// 00519f1e  8bff                 mov edi, edi
// 00519f20  8a08                 mov cl, byte ptr [eax]
// 00519f22  0fb65001             movzx edx, byte ptr [eax + 1]
// 00519f26  83c001               add eax, 1
// 00519f29  83c001               add eax, 1
// 00519f2c  88542412             mov byte ptr [esp + 0x12], dl
// 00519f30  0fb610               movzx edx, byte ptr [eax]
// 00519f33  83c001               add eax, 1
// 00519f36  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 00519f3a  884c2411             mov byte ptr [esp + 0x11], cl
// 00519f3e  88542413             mov byte ptr [esp + 0x13], dl
// 00519f42  7504                 jne 0x519f48
// 00519f44  3aca                 cmp cl, dl
// 00519f46  7405                 je 0x519f4d
// 00519f48  834c241401           or dword ptr [esp + 0x14], 1
// 00519f4d  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 00519f52  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00519f57  0fafcb               imul ecx, ebx
// 00519f5a  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 00519f5f  03ca                 add ecx, edx
// 00519f61  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00519f66  0fafd7               imul edx, edi
// 00519f69  03ca                 add ecx, edx
// 00519f6b  c1e90f               shr ecx, 0xf
// 00519f6e  880e                 mov byte ptr [esi], cl
// 00519f70  8a08                 mov cl, byte ptr [eax]
// 00519f72  83c601               add esi, 1
// 00519f75  880e                 mov byte ptr [esi], cl
// 00519f77  83c601               add esi, 1
// 00519f7a  83c001               add eax, 1
// 00519f7d  836c242801           sub dword ptr [esp + 0x28], 1
// 00519f82  759c                 jne 0x519f20
// 00519f84  e9dc010000           jmp 0x51a165
// 00519f89  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 00519f90  0f8430010000         je 0x51a0c6
// 00519f96  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 00519f9d  0f8423010000         je 0x51a0c6
// 00519fa3  837c241800           cmp dword ptr [esp + 0x18], 0
// 00519fa8  8bce                 mov ecx, esi
// 00519faa  89742428             mov dword ptr [esp + 0x28], esi
// 00519fae  0f86b1010000         jbe 0x51a165
// 00519fb4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00519fb8  89542424             mov dword ptr [esp + 0x24], edx
// 00519fbc  8d642400             lea esp, [esp]
// 00519fc0  33d2                 xor edx, edx
// 00519fc2  8a31                 mov dh, byte ptr [ecx]
// 00519fc4  83c102               add ecx, 2
// 00519fc7  83c102               add ecx, 2
// 00519fca  83c102               add ecx, 2
// 00519fcd  894c2420             mov dword ptr [esp + 0x20], ecx
// 00519fd1  8a51fb               mov dl, byte ptr [ecx - 5]
// 00519fd4  0fb7ea               movzx ebp, dx
// 00519fd7  33d2                 xor edx, edx
// 00519fd9  8a71fc               mov dh, byte ptr [ecx - 4]
// 00519fdc  8a51fd               mov dl, byte ptr [ecx - 3]
// 00519fdf  0fb7da               movzx ebx, dx
// 00519fe2  33d2                 xor edx, edx
// 00519fe4  663beb               cmp bp, bx
// 00519fe7  8a71fe               mov dh, byte ptr [ecx - 2]
// 00519fea  895c2434             mov dword ptr [esp + 0x34], ebx
// 00519fee  8a51ff               mov dl, byte ptr [ecx - 1]
// 00519ff1  0fb7d2               movzx edx, dx
// 00519ff4  750d                 jne 0x51a003
// 00519ff6  663bea               cmp bp, dx
// 00519ff9  7508                 jne 0x51a003
// 00519ffb  0fb7d5               movzx edx, bp
// 00519ffe  e98e000000           jmp 0x51a091
// 0051a003  0fb75c2434           movzx ebx, word ptr [esp + 0x34]
// 0051a008  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 0051a00f  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0051a015  895c2434             mov dword ptr [esp + 0x34], ebx
// 0051a019  0fb7dd               movzx ebx, bp
// 0051a01c  0fb6eb               movzx ebp, bl
// 0051a01f  d3ed                 shr ebp, cl
// 0051a021  c1eb08               shr ebx, 8
// 0051a024  0fb7d2               movzx edx, dx
// 0051a027  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0051a02a  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 0051a02f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0051a033  0fafef               imul ebp, edi
// 0051a036  0fb6fb               movzx edi, bl
// 0051a039  d3ef                 shr edi, cl
// 0051a03b  c1eb08               shr ebx, 8
// 0051a03e  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 0051a041  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0051a045  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 0051a04a  03ef                 add ebp, edi
// 0051a04c  0fb6fa               movzx edi, dl
// 0051a04f  d3ef                 shr edi, cl
// 0051a051  c1ea08               shr edx, 8
// 0051a054  8b34be               mov esi, dword ptr [esi + edi*4]
// 0051a057  0fb71456             movzx edx, word ptr [esi + edx*2]
// 0051a05b  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 0051a060  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0051a064  03ea                 add ebp, edx
// 0051a066  c1ed0f               shr ebp, 0xf
// 0051a069  0fb7d5               movzx edx, bp
// 0051a06c  0fb7d2               movzx edx, dx
// 0051a06f  0fb6f2               movzx esi, dl
// 0051a072  d3ee                 shr esi, cl
// 0051a074  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0051a07a  c1ea08               shr edx, 8
// 0051a07d  834c241401           or dword ptr [esp + 0x14], 1
// 0051a082  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0051a085  0fb71451             movzx edx, word ptr [ecx + edx*2]
// 0051a089  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051a08d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051a091  8836                 mov byte ptr [esi], dh
// 0051a093  83c601               add esi, 1
// 0051a096  8816                 mov byte ptr [esi], dl
// 0051a098  0fb611               movzx edx, byte ptr [ecx]
// 0051a09b  83c601               add esi, 1
// 0051a09e  8816                 mov byte ptr [esi], dl
// 0051a0a0  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0051a0a4  83c101               add ecx, 1
// 0051a0a7  83c601               add esi, 1
// 0051a0aa  8816                 mov byte ptr [esi], dl
// 0051a0ac  83c601               add esi, 1
// 0051a0af  83c101               add ecx, 1
// 0051a0b2  836c242401           sub dword ptr [esp + 0x24], 1
// 0051a0b7  89742428             mov dword ptr [esp + 0x28], esi
// 0051a0bb  0f85fffeffff         jne 0x519fc0
// 0051a0c1  e99f000000           jmp 0x51a165
// 0051a0c6  837c241800           cmp dword ptr [esp + 0x18], 0
// 0051a0cb  8bc6                 mov eax, esi
// 0051a0cd  8bce                 mov ecx, esi
// 0051a0cf  0f8690000000         jbe 0x51a165
// 0051a0d5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051a0d9  89542430             mov dword ptr [esp + 0x30], edx
// 0051a0dd  8d4900               lea ecx, [ecx]
// 0051a0e0  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051a0e4  8a30                 mov dh, byte ptr [eax]
// 0051a0e6  83c002               add eax, 2
// 0051a0e9  83c002               add eax, 2
// 0051a0ec  83c002               add eax, 2
// 0051a0ef  0fb7ea               movzx ebp, dx
// 0051a0f2  0fb650fd             movzx edx, byte ptr [eax - 3]
// 0051a0f6  8a70fc               mov dh, byte ptr [eax - 4]
// 0051a0f9  896c2434             mov dword ptr [esp + 0x34], ebp
// 0051a0fd  0fb7f2               movzx esi, dx
// 0051a100  663bee               cmp bp, si
// 0051a103  0fb650ff             movzx edx, byte ptr [eax - 1]
// 0051a107  8a70fe               mov dh, byte ptr [eax - 2]
// 0051a10a  0fb7d2               movzx edx, dx
// 0051a10d  7505                 jne 0x51a114
// 0051a10f  663bea               cmp bp, dx
// 0051a112  7405                 je 0x51a119
// 0051a114  834c241401           or dword ptr [esp + 0x14], 1
// 0051a119  0fb7d2               movzx edx, dx
// 0051a11c  0fafd3               imul edx, ebx
// 0051a11f  0fb7f6               movzx esi, si
// 0051a122  0faf74241c           imul esi, dword ptr [esp + 0x1c]
// 0051a127  03d6                 add edx, esi
// 0051a129  0fb7742434           movzx esi, word ptr [esp + 0x34]
// 0051a12e  0faff7               imul esi, edi
// 0051a131  03d6                 add edx, esi
// 0051a133  c1ea0f               shr edx, 0xf
// 0051a136  0fb7d2               movzx edx, dx
// 0051a139  8831                 mov byte ptr [ecx], dh
// 0051a13b  83c101               add ecx, 1
// 0051a13e  8811                 mov byte ptr [ecx], dl
// 0051a140  0fb610               movzx edx, byte ptr [eax]
// 0051a143  83c101               add ecx, 1
// 0051a146  8811                 mov byte ptr [ecx], dl
// 0051a148  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051a14c  83c001               add eax, 1
// 0051a14f  83c101               add ecx, 1
// 0051a152  8811                 mov byte ptr [ecx], dl
// 0051a154  83c101               add ecx, 1
// 0051a157  83c001               add eax, 1
// 0051a15a  836c243001           sub dword ptr [esp + 0x30], 1
// 0051a15f  0f857bffffff         jne 0x51a0e0
// 0051a165  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051a169  8b742440             mov esi, dword ptr [esp + 0x40]
// 0051a16d  80460afe             add byte ptr [esi + 0xa], 0xfe
// 0051a171  8a4609               mov al, byte ptr [esi + 9]
// 0051a174  8a560a               mov dl, byte ptr [esi + 0xa]
// 0051a177  806608fd             and byte ptr [esi + 8], 0xfd
// 0051a17b  f6ea                 imul dl
// 0051a17d  88460b               mov byte ptr [esi + 0xb], al
// 0051a180  3c08                 cmp al, 8
// 0051a182  0fb6c0               movzx eax, al
// 0051a185  7215                 jb 0x51a19c
// 0051a187  c1e803               shr eax, 3
// 0051a18a  0fafc1               imul eax, ecx
// 0051a18d  5f                   pop edi
// 0051a18e  894604               mov dword ptr [esi + 4], eax
// 0051a191  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051a195  5e                   pop esi
// 0051a196  5d                   pop ebp
// 0051a197  5b                   pop ebx
// 0051a198  83c428               add esp, 0x28
// 0051a19b  c3                   ret 
// 0051a19c  0fafc1               imul eax, ecx
// 0051a19f  83c007               add eax, 7
// 0051a1a2  c1e803               shr eax, 3
// 0051a1a5  5f                   pop edi
// 0051a1a6  894604               mov dword ptr [esi + 4], eax
// 0051a1a9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051a1ad  5e                   pop esi
// 0051a1ae  5d                   pop ebp
// 0051a1af  5b                   pop ebx
// 0051a1b0  83c428               add esp, 0x28
// 0051a1b3  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_rgb_to_gray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
