// roc 2008-06 0058df70  unit: RBX::ChangeHistoryService  size: 1327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058df70
//
// 0058df70  83ec1c               sub esp, 0x1c
// 0058df73  53                   push ebx
// 0058df74  55                   push ebp
// 0058df75  56                   push esi
// 0058df76  57                   push edi
// 0058df77  33ff                 xor edi, edi
// 0058df79  33ed                 xor ebp, ebp
// 0058df7b  eb03                 jmp 0x58df80
// 0058df7d  8d4900               lea ecx, [ecx]
// 0058df80  8a442438             mov al, byte ptr [esp + 0x38]
// 0058df84  84c0                 test al, al
// 0058df86  7523                 jne 0x58dfab
// 0058df88  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058df8c  3bcf                 cmp ecx, edi
// 0058df8e  7411                 je 0x58dfa1
// 0058df90  ff15fc248000         call dword ptr [0x8024fc]
// 0058df96  83f8ff               cmp eax, -1
// 0058df99  7406                 je 0x58dfa1
// 0058df9b  88442439             mov byte ptr [esp + 0x39], al
// 0058df9f  eb04                 jmp 0x58dfa5
// 0058dfa1  897c2434             mov dword ptr [esp + 0x34], edi
// 0058dfa5  b001                 mov al, 1
// 0058dfa7  88442438             mov byte ptr [esp + 0x38], al
// 0058dfab  807c244000           cmp byte ptr [esp + 0x40], 0
// 0058dfb0  7526                 jne 0x58dfd8
// 0058dfb2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0058dfb6  3bcf                 cmp ecx, edi
// 0058dfb8  7411                 je 0x58dfcb
// 0058dfba  ff15fc248000         call dword ptr [0x8024fc]
// 0058dfc0  83f8ff               cmp eax, -1
// 0058dfc3  7406                 je 0x58dfcb
// 0058dfc5  88442441             mov byte ptr [esp + 0x41], al
// 0058dfc9  eb04                 jmp 0x58dfcf
// 0058dfcb  897c243c             mov dword ptr [esp + 0x3c], edi
// 0058dfcf  8a442438             mov al, byte ptr [esp + 0x38]
// 0058dfd3  c644244001           mov byte ptr [esp + 0x40], 1
// 0058dfd8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058dfdc  3bcf                 cmp ecx, edi
// 0058dfde  750c                 jne 0x58dfec
// 0058dfe0  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0058dfe4  0f84f5020000         je 0x58e2df
// 0058dfea  eb0a                 jmp 0x58dff6
// 0058dfec  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0058dff0  0f85e9020000         jne 0x58e2df
// 0058dff6  84c0                 test al, al
// 0058dff8  7523                 jne 0x58e01d
// 0058dffa  3bcf                 cmp ecx, edi
// 0058dffc  7411                 je 0x58e00f
// 0058dffe  ff15fc248000         call dword ptr [0x8024fc]
// 0058e004  83f8ff               cmp eax, -1
// 0058e007  7406                 je 0x58e00f
// 0058e009  88442439             mov byte ptr [esp + 0x39], al
// 0058e00d  eb04                 jmp 0x58e013
// 0058e00f  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e013  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e017  b001                 mov al, 1
// 0058e019  88442438             mov byte ptr [esp + 0x38], al
// 0058e01d  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0058e021  885c2410             mov byte ptr [esp + 0x10], bl
// 0058e025  84c0                 test al, al
// 0058e027  7522                 jne 0x58e04b
// 0058e029  3bcf                 cmp ecx, edi
// 0058e02b  7411                 je 0x58e03e
// 0058e02d  ff15fc248000         call dword ptr [0x8024fc]
// 0058e033  83f8ff               cmp eax, -1
// 0058e036  7406                 je 0x58e03e
// 0058e038  88442439             mov byte ptr [esp + 0x39], al
// 0058e03c  eb04                 jmp 0x58e042
// 0058e03e  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e042  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e046  c644243801           mov byte ptr [esp + 0x38], 1
// 0058e04b  3bcf                 cmp ecx, edi
// 0058e04d  7429                 je 0x58e078
// 0058e04f  ff15f8248000         call dword ptr [0x8024f8]
// 0058e055  83f8ff               cmp eax, -1
// 0058e058  741e                 je 0x58e078
// 0058e05a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e05e  c644243800           mov byte ptr [esp + 0x38], 0
// 0058e063  3bcf                 cmp ecx, edi
// 0058e065  7419                 je 0x58e080
// 0058e067  ff15fc248000         call dword ptr [0x8024fc]
// 0058e06d  83f8ff               cmp eax, -1
// 0058e070  740e                 je 0x58e080
// 0058e072  88442439             mov byte ptr [esp + 0x39], al
// 0058e076  eb0c                 jmp 0x58e084
// 0058e078  33c9                 xor ecx, ecx
// 0058e07a  894c2434             mov dword ptr [esp + 0x34], ecx
// 0058e07e  eb08                 jmp 0x58e088
// 0058e080  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e084  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e088  807c244000           cmp byte ptr [esp + 0x40], 0
// 0058e08d  b001                 mov al, 1
// 0058e08f  88442438             mov byte ptr [esp + 0x38], al
// 0058e093  752a                 jne 0x58e0bf
// 0058e095  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0058e099  3bcf                 cmp ecx, edi
// 0058e09b  7411                 je 0x58e0ae
// 0058e09d  ff15fc248000         call dword ptr [0x8024fc]
// 0058e0a3  83f8ff               cmp eax, -1
// 0058e0a6  7406                 je 0x58e0ae
// 0058e0a8  88442441             mov byte ptr [esp + 0x41], al
// 0058e0ac  eb04                 jmp 0x58e0b2
// 0058e0ae  897c243c             mov dword ptr [esp + 0x3c], edi
// 0058e0b2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e0b6  8a442438             mov al, byte ptr [esp + 0x38]
// 0058e0ba  c644244001           mov byte ptr [esp + 0x40], 1
// 0058e0bf  3bcf                 cmp ecx, edi
// 0058e0c1  0f858c000000         jne 0x58e153
// 0058e0c7  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0058e0cb  0f858c000000         jne 0x58e15d
// 0058e0d1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e0d5  0fb6f3               movzx esi, bl
// 0058e0d8  8bd6                 mov edx, esi
// 0058e0da  c1ea02               shr edx, 2
// 0058e0dd  8a0495e0939400       mov al, byte ptr [edx*4 + 0x9493e0]
// 0058e0e4  88442420             mov byte ptr [esp + 0x20], al
// 0058e0e8  3bcf                 cmp ecx, edi
// 0058e0ea  7410                 je 0x58e0fc
// 0058e0ec  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058e0f0  52                   push edx
// 0058e0f1  ff1594238000         call dword ptr [0x802394]
// 0058e0f7  83f8ff               cmp eax, -1
// 0058e0fa  7505                 jne 0x58e101
// 0058e0fc  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e101  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e105  83e603               and esi, 3
// 0058e108  c1e606               shl esi, 6
// 0058e10b  8a86e0939400         mov al, byte ptr [esi + 0x9493e0]
// 0058e111  88442420             mov byte ptr [esp + 0x20], al
// 0058e115  3bcf                 cmp ecx, edi
// 0058e117  7410                 je 0x58e129
// 0058e119  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058e11d  52                   push edx
// 0058e11e  ff1594238000         call dword ptr [0x802394]
// 0058e124  83f8ff               cmp eax, -1
// 0058e127  7505                 jne 0x58e12e
// 0058e129  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e12e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e132  3bcf                 cmp ecx, edi
// 0058e134  740d                 je 0x58e143
// 0058e136  6a3d                 push 0x3d
// 0058e138  ff1594238000         call dword ptr [0x802394]
// 0058e13e  83f8ff               cmp eax, -1
// 0058e141  7505                 jne 0x58e148
// 0058e143  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e148  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e14c  3bcf                 cmp ecx, edi
// 0058e14e  e982010000           jmp 0x58e2d5
// 0058e153  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0058e157  0f8574ffffff         jne 0x58e0d1
// 0058e15d  84c0                 test al, al
// 0058e15f  7523                 jne 0x58e184
// 0058e161  3bcf                 cmp ecx, edi
// 0058e163  7411                 je 0x58e176
// 0058e165  ff15fc248000         call dword ptr [0x8024fc]
// 0058e16b  83f8ff               cmp eax, -1
// 0058e16e  7406                 je 0x58e176
// 0058e170  88442439             mov byte ptr [esp + 0x39], al
// 0058e174  eb04                 jmp 0x58e17a
// 0058e176  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e17a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e17e  b001                 mov al, 1
// 0058e180  88442438             mov byte ptr [esp + 0x38], al
// 0058e184  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0058e188  885c2411             mov byte ptr [esp + 0x11], bl
// 0058e18c  84c0                 test al, al
// 0058e18e  7522                 jne 0x58e1b2
// 0058e190  3bcf                 cmp ecx, edi
// 0058e192  7411                 je 0x58e1a5
// 0058e194  ff15fc248000         call dword ptr [0x8024fc]
// 0058e19a  83f8ff               cmp eax, -1
// 0058e19d  7406                 je 0x58e1a5
// 0058e19f  88442439             mov byte ptr [esp + 0x39], al
// 0058e1a3  eb04                 jmp 0x58e1a9
// 0058e1a5  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e1a9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e1ad  c644243801           mov byte ptr [esp + 0x38], 1
// 0058e1b2  3bcf                 cmp ecx, edi
// 0058e1b4  7429                 je 0x58e1df
// 0058e1b6  ff15f8248000         call dword ptr [0x8024f8]
// 0058e1bc  83f8ff               cmp eax, -1
// 0058e1bf  741e                 je 0x58e1df
// 0058e1c1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e1c5  c644243800           mov byte ptr [esp + 0x38], 0
// 0058e1ca  3bcf                 cmp ecx, edi
// 0058e1cc  7419                 je 0x58e1e7
// 0058e1ce  ff15fc248000         call dword ptr [0x8024fc]
// 0058e1d4  83f8ff               cmp eax, -1
// 0058e1d7  740e                 je 0x58e1e7
// 0058e1d9  88442439             mov byte ptr [esp + 0x39], al
// 0058e1dd  eb0c                 jmp 0x58e1eb
// 0058e1df  33c9                 xor ecx, ecx
// 0058e1e1  894c2434             mov dword ptr [esp + 0x34], ecx
// 0058e1e5  eb08                 jmp 0x58e1ef
// 0058e1e7  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e1eb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e1ef  807c244000           cmp byte ptr [esp + 0x40], 0
// 0058e1f4  b001                 mov al, 1
// 0058e1f6  88442438             mov byte ptr [esp + 0x38], al
// 0058e1fa  752a                 jne 0x58e226
// 0058e1fc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0058e200  3bcf                 cmp ecx, edi
// 0058e202  7411                 je 0x58e215
// 0058e204  ff15fc248000         call dword ptr [0x8024fc]
// 0058e20a  83f8ff               cmp eax, -1
// 0058e20d  7406                 je 0x58e215
// 0058e20f  88442441             mov byte ptr [esp + 0x41], al
// 0058e213  eb04                 jmp 0x58e219
// 0058e215  897c243c             mov dword ptr [esp + 0x3c], edi
// 0058e219  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e21d  8a442438             mov al, byte ptr [esp + 0x38]
// 0058e221  c644244001           mov byte ptr [esp + 0x40], 1
// 0058e226  3bcf                 cmp ecx, edi
// 0058e228  0f85cc000000         jne 0x58e2fa
// 0058e22e  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0058e232  0f85cc000000         jne 0x58e304
// 0058e238  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 0058e23d  8bc6                 mov eax, esi
// 0058e23f  c1e802               shr eax, 2
// 0058e242  8a0c85e0939400       mov cl, byte ptr [eax*4 + 0x9493e0]
// 0058e249  884c2420             mov byte ptr [esp + 0x20], cl
// 0058e24d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e251  3bcf                 cmp ecx, edi
// 0058e253  7410                 je 0x58e265
// 0058e255  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058e259  52                   push edx
// 0058e25a  ff1594238000         call dword ptr [0x802394]
// 0058e260  83f8ff               cmp eax, -1
// 0058e263  7505                 jne 0x58e26a
// 0058e265  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e26a  0fb6fb               movzx edi, bl
// 0058e26d  83e603               and esi, 3
// 0058e270  8bc7                 mov eax, edi
// 0058e272  c1e604               shl esi, 4
// 0058e275  c1e804               shr eax, 4
// 0058e278  03f0                 add esi, eax
// 0058e27a  8a0cb5e0939400       mov cl, byte ptr [esi*4 + 0x9493e0]
// 0058e281  884c2420             mov byte ptr [esp + 0x20], cl
// 0058e285  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e289  85c9                 test ecx, ecx
// 0058e28b  7410                 je 0x58e29d
// 0058e28d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058e291  52                   push edx
// 0058e292  ff1594238000         call dword ptr [0x802394]
// 0058e298  83f8ff               cmp eax, -1
// 0058e29b  7505                 jne 0x58e2a2
// 0058e29d  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e2a2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e2a6  83e70f               and edi, 0xf
// 0058e2a9  c1e704               shl edi, 4
// 0058e2ac  8a87e0939400         mov al, byte ptr [edi + 0x9493e0]
// 0058e2b2  88442420             mov byte ptr [esp + 0x20], al
// 0058e2b6  85c9                 test ecx, ecx
// 0058e2b8  7410                 je 0x58e2ca
// 0058e2ba  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058e2be  52                   push edx
// 0058e2bf  ff1594238000         call dword ptr [0x802394]
// 0058e2c5  83f8ff               cmp eax, -1
// 0058e2c8  7505                 jne 0x58e2cf
// 0058e2ca  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e2cf  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e2d3  85c9                 test ecx, ecx
// 0058e2d5  7408                 je 0x58e2df
// 0058e2d7  6a3d                 push 0x3d
// 0058e2d9  ff1594238000         call dword ptr [0x802394]
// 0058e2df  8b442430             mov eax, dword ptr [esp + 0x30]
// 0058e2e3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e2e7  8b542438             mov edx, dword ptr [esp + 0x38]
// 0058e2eb  5f                   pop edi
// 0058e2ec  5e                   pop esi
// 0058e2ed  5d                   pop ebp
// 0058e2ee  8908                 mov dword ptr [eax], ecx
// 0058e2f0  895004               mov dword ptr [eax + 4], edx
// 0058e2f3  5b                   pop ebx
// 0058e2f4  83c41c               add esp, 0x1c
// 0058e2f7  c22400               ret 0x24
// 0058e2fa  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0058e2fe  0f8534ffffff         jne 0x58e238
// 0058e304  84c0                 test al, al
// 0058e306  7523                 jne 0x58e32b
// 0058e308  3bcf                 cmp ecx, edi
// 0058e30a  7411                 je 0x58e31d
// 0058e30c  ff15fc248000         call dword ptr [0x8024fc]
// 0058e312  83f8ff               cmp eax, -1
// 0058e315  7406                 je 0x58e31d
// 0058e317  88442439             mov byte ptr [esp + 0x39], al
// 0058e31b  eb04                 jmp 0x58e321
// 0058e31d  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e321  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e325  b001                 mov al, 1
// 0058e327  88442438             mov byte ptr [esp + 0x38], al
// 0058e32b  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0058e32f  84c0                 test al, al
// 0058e331  7522                 jne 0x58e355
// 0058e333  3bcf                 cmp ecx, edi
// 0058e335  7411                 je 0x58e348
// 0058e337  ff15fc248000         call dword ptr [0x8024fc]
// 0058e33d  83f8ff               cmp eax, -1
// 0058e340  7406                 je 0x58e348
// 0058e342  88442439             mov byte ptr [esp + 0x39], al
// 0058e346  eb04                 jmp 0x58e34c
// 0058e348  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e34c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058e350  c644243801           mov byte ptr [esp + 0x38], 1
// 0058e355  3bcf                 cmp ecx, edi
// 0058e357  7412                 je 0x58e36b
// 0058e359  ff15f8248000         call dword ptr [0x8024f8]
// 0058e35f  83f8ff               cmp eax, -1
// 0058e362  7407                 je 0x58e36b
// 0058e364  c644243800           mov byte ptr [esp + 0x38], 0
// 0058e369  eb09                 jmp 0x58e374
// 0058e36b  897c2434             mov dword ptr [esp + 0x34], edi
// 0058e36f  c644243801           mov byte ptr [esp + 0x38], 1
// 0058e374  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 0058e379  8bc6                 mov eax, esi
// 0058e37b  c1e802               shr eax, 2
// 0058e37e  8a0c85e0939400       mov cl, byte ptr [eax*4 + 0x9493e0]
// 0058e385  884c2414             mov byte ptr [esp + 0x14], cl
// 0058e389  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e38d  3bcf                 cmp ecx, edi
// 0058e38f  7410                 je 0x58e3a1
// 0058e391  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058e395  52                   push edx
// 0058e396  ff1594238000         call dword ptr [0x802394]
// 0058e39c  83f8ff               cmp eax, -1
// 0058e39f  7505                 jne 0x58e3a6
// 0058e3a1  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e3a6  0fb67c2411           movzx edi, byte ptr [esp + 0x11]
// 0058e3ab  83e603               and esi, 3
// 0058e3ae  8bc7                 mov eax, edi
// 0058e3b0  c1e604               shl esi, 4
// 0058e3b3  c1e804               shr eax, 4
// 0058e3b6  03f0                 add esi, eax
// 0058e3b8  8a0cb5e0939400       mov cl, byte ptr [esi*4 + 0x9493e0]
// 0058e3bf  884c2418             mov byte ptr [esp + 0x18], cl
// 0058e3c3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e3c7  85c9                 test ecx, ecx
// 0058e3c9  7410                 je 0x58e3db
// 0058e3cb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058e3cf  52                   push edx
// 0058e3d0  ff1594238000         call dword ptr [0x802394]
// 0058e3d6  83f8ff               cmp eax, -1
// 0058e3d9  7505                 jne 0x58e3e0
// 0058e3db  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e3e0  0fb6f3               movzx esi, bl
// 0058e3e3  8bc6                 mov eax, esi
// 0058e3e5  c1e806               shr eax, 6
// 0058e3e8  83e70f               and edi, 0xf
// 0058e3eb  8d0cb8               lea ecx, [eax + edi*4]
// 0058e3ee  8a148de0939400       mov dl, byte ptr [ecx*4 + 0x9493e0]
// 0058e3f5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e3f9  8854241c             mov byte ptr [esp + 0x1c], dl
// 0058e3fd  85c9                 test ecx, ecx
// 0058e3ff  7410                 je 0x58e411
// 0058e401  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058e405  50                   push eax
// 0058e406  ff1594238000         call dword ptr [0x802394]
// 0058e40c  83f8ff               cmp eax, -1
// 0058e40f  7505                 jne 0x58e416
// 0058e411  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e416  83e63f               and esi, 0x3f
// 0058e419  8a0cb5e0939400       mov cl, byte ptr [esi*4 + 0x9493e0]
// 0058e420  884c2420             mov byte ptr [esp + 0x20], cl
// 0058e424  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e428  85c9                 test ecx, ecx
// 0058e42a  7410                 je 0x58e43c
// 0058e42c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058e430  52                   push edx
// 0058e431  ff1594238000         call dword ptr [0x802394]
// 0058e437  83f8ff               cmp eax, -1
// 0058e43a  7505                 jne 0x58e441
// 0058e43c  c644244401           mov byte ptr [esp + 0x44], 1
// 0058e441  83fd11               cmp ebp, 0x11
// 0058e444  7551                 jne 0x58e497
// 0058e446  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e44a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0058e44e  89442424             mov dword ptr [esp + 0x24], eax
// 0058e452  8bf1                 mov esi, ecx
// 0058e454  85c9                 test ecx, ecx
// 0058e456  740d                 je 0x58e465
// 0058e458  6a0d                 push 0xd
// 0058e45a  ff1594238000         call dword ptr [0x802394]
// 0058e460  83f8ff               cmp eax, -1
// 0058e463  7505                 jne 0x58e46a
// 0058e465  c644242401           mov byte ptr [esp + 0x24], 1
// 0058e46a  85f6                 test esi, esi
// 0058e46c  740f                 je 0x58e47d
// 0058e46e  6a0a                 push 0xa
// 0058e470  8bce                 mov ecx, esi
// 0058e472  ff1594238000         call dword ptr [0x802394]
// 0058e478  83f8ff               cmp eax, -1
// 0058e47b  7505                 jne 0x58e482
// 0058e47d  c644242401           mov byte ptr [esp + 0x24], 1
// 0058e482  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058e486  33ed                 xor ebp, ebp
// 0058e488  894c2444             mov dword ptr [esp + 0x44], ecx
// 0058e48c  89742448             mov dword ptr [esp + 0x48], esi
// 0058e490  33ff                 xor edi, edi
// 0058e492  e9e9faffff           jmp 0x58df80
// 0058e497  45                   inc ebp
// 0058e498  33ff                 xor edi, edi
// 0058e49a  e9e1faffff           jmp 0x58df80
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??$put@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@HUcrlf@?$base64@DU?$char_traits@D@std@@@@@?$base64@DU?$char_traits@D@std@@@@QBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V12@0V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@AAHUcrlf@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
