// roc 2010-06 007e7930  unit: CRobloxTreeCtrl  size: 1231 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e7930
//
// 007e7930  6aff                 push -1
// 007e7932  68801c9b00           push 0x9b1c80
// 007e7937  64a100000000         mov eax, dword ptr fs:[0]
// 007e793d  50                   push eax
// 007e793e  81ec90000000         sub esp, 0x90
// 007e7944  53                   push ebx
// 007e7945  55                   push ebp
// 007e7946  56                   push esi
// 007e7947  57                   push edi
// 007e7948  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e794d  33c4                 xor eax, esp
// 007e794f  50                   push eax
// 007e7950  8d8424a4000000       lea eax, [esp + 0xa4]
// 007e7957  64a300000000         mov dword ptr fs:[0], eax
// 007e795d  8bf1                 mov esi, ecx
// 007e795f  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7962  8b7820               mov edi, dword ptr [eax + 0x20]
// 007e7965  ff1580ba9e00         call dword ptr [0x9eba80]
// 007e796b  3bc7                 cmp eax, edi
// 007e796d  7407                 je 0x7e7976
// 007e796f  57                   push edi
// 007e7970  ff1558ba9e00         call dword ptr [0x9eba58]
// 007e7976  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7979  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007e797c  52                   push edx
// 007e797d  ff1580bc9e00         call dword ptr [0x9ebc80]
// 007e7983  6a0a                 push 0xa
// 007e7985  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007e798c  e8c3561900           call 0x97d054
// 007e7991  c784248800000060a8a500 mov dword ptr [esp + 0x88], 0xa5a860
// 007e799c  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 007e79a3  33ed                 xor ebp, ebp
// 007e79a5  83e00c               and eax, 0xc
// 007e79a8  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 007e79af  89442434             mov dword ptr [esp + 0x34], eax
// 007e79b3  740f                 je 0x7e79c4
// 007e79b5  8d842488000000       lea eax, [esp + 0x88]
// 007e79bc  50                   push eax
// 007e79bd  8bce                 mov ecx, esi
// 007e79bf  e81cf5ffff           call 0x7e6ee0
// 007e79c4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e79c7  51                   push ecx
// 007e79c8  8d4c2470             lea ecx, [esp + 0x70]
// 007e79cc  e8630efcff           call 0x7a8834
// 007e79d1  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e79d4  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e79d7  8d542440             lea edx, [esp + 0x40]
// 007e79db  52                   push edx
// 007e79dc  bb01000000           mov ebx, 1
// 007e79e1  50                   push eax
// 007e79e2  889c24b4000000       mov byte ptr [esp + 0xb4], bl
// 007e79e9  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 007e79ef  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 007e79f5  6a45                 push 0x45
// 007e79f7  ffd7                 call edi
// 007e79f9  6a44                 push 0x44
// 007e79fb  8944243c             mov dword ptr [esp + 0x3c], eax
// 007e79ff  ffd7                 call edi
// 007e7a01  55                   push ebp
// 007e7a02  89842484000000       mov dword ptr [esp + 0x84], eax
// 007e7a09  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7a0c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e7a0f  6a4b                 push 0x4b
// 007e7a11  53                   push ebx
// 007e7a12  51                   push ecx
// 007e7a13  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007e7a17  ff1554bc9e00         call dword ptr [0x9ebc54]
// 007e7a1d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7a20  53                   push ebx
// 007e7a21  89442440             mov dword ptr [esp + 0x40], eax
// 007e7a25  e85a561900           call 0x97d084
// 007e7a2a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7a2d  55                   push ebp
// 007e7a2e  8bf8                 mov edi, eax
// 007e7a30  e84f561900           call 0x97d084
// 007e7a35  33c9                 xor ecx, ecx
// 007e7a37  51                   push ecx
// 007e7a38  8be8                 mov ebp, eax
// 007e7a3a  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7a3d  51                   push ecx
// 007e7a3e  894c2424             mov dword ptr [esp + 0x24], ecx
// 007e7a42  894c2428             mov dword ptr [esp + 0x28], ecx
// 007e7a46  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007e7a4a  894c2430             mov dword ptr [esp + 0x30], ecx
// 007e7a4e  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e7a51  680a110000           push 0x110a
// 007e7a56  52                   push edx
// 007e7a57  894c2440             mov dword ptr [esp + 0x40], ecx
// 007e7a5b  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e7a61  85c0                 test eax, eax
// 007e7a63  741f                 je 0x7e7a84
// 007e7a65  6a00                 push 0
// 007e7a67  8d4c2420             lea ecx, [esp + 0x20]
// 007e7a6b  51                   push ecx
// 007e7a6c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7a6f  50                   push eax
// 007e7a70  e8c108fcff           call 0x7a8336
// 007e7a75  8b442428             mov eax, dword ptr [esp + 0x28]
// 007e7a79  2b442420             sub eax, dword ptr [esp + 0x20]
// 007e7a7d  89442430             mov dword ptr [esp + 0x30], eax
// 007e7a81  0faff8               imul edi, eax
// 007e7a84  01ac24b8000000       add dword ptr [esp + 0xb8], ebp
// 007e7a8b  01bc24bc000000       add dword ptr [esp + 0xbc], edi
// 007e7a92  6a00                 push 0
// 007e7a94  6a00                 push 0
// 007e7a96  6a00                 push 0
// 007e7a98  8d54245c             lea edx, [esp + 0x5c]
// 007e7a9c  52                   push edx
// 007e7a9d  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 007e7aa3  85c0                 test eax, eax
// 007e7aa5  0f84b2000000         je 0x7e7b5d
// 007e7aab  8b7e34               mov edi, dword ptr [esi + 0x34]
// 007e7aae  ff1584bc9e00         call dword ptr [0x9ebc84]
// 007e7ab4  3b4720               cmp eax, dword ptr [edi + 0x20]
// 007e7ab7  0f85a0000000         jne 0x7e7b5d
// 007e7abd  8b442454             mov eax, dword ptr [esp + 0x54]
// 007e7ac1  3d00020000           cmp eax, 0x200
// 007e7ac6  0f87b9020000         ja 0x7e7d85
// 007e7acc  0f84d0000000         je 0x7e7ba2
// 007e7ad2  2d00010000           sub eax, 0x100
// 007e7ad7  746d                 je 0x7e7b46
// 007e7ad9  83e813               sub eax, 0x13
// 007e7adc  0f85b7020000         jne 0x7e7d99
// 007e7ae2  837c24584b           cmp dword ptr [esp + 0x58], 0x4b
// 007e7ae7  75a9                 jne 0x7e7a92
// 007e7ae9  8b442464             mov eax, dword ptr [esp + 0x64]
// 007e7aed  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007e7af1  8d542414             lea edx, [esp + 0x14]
// 007e7af5  89442414             mov dword ptr [esp + 0x14], eax
// 007e7af9  894c2418             mov dword ptr [esp + 0x18], ecx
// 007e7afd  8b4720               mov eax, dword ptr [edi + 0x20]
// 007e7b00  52                   push edx
// 007e7b01  50                   push eax
// 007e7b02  ff1578bc9e00         call dword ptr [0x9ebc78]
// 007e7b08  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e7b0c  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e7b10  51                   push ecx
// 007e7b11  52                   push edx
// 007e7b12  8d442448             lea eax, [esp + 0x48]
// 007e7b16  50                   push eax
// 007e7b17  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007e7b1d  85c0                 test eax, eax
// 007e7b1f  7410                 je 0x7e7b31
// 007e7b21  8d4c2450             lea ecx, [esp + 0x50]
// 007e7b25  51                   push ecx
// 007e7b26  ff1508bc9e00         call dword ptr [0x9ebc08]
// 007e7b2c  e961ffffff           jmp 0x7e7a92
// 007e7b31  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 007e7b36  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 007e7b3b  c1e010               shl eax, 0x10
// 007e7b3e  0bc2                 or eax, edx
// 007e7b40  8944245c             mov dword ptr [esp + 0x5c], eax
// 007e7b44  eb60                 jmp 0x7e7ba6
// 007e7b46  66837c24581b         cmp word ptr [esp + 0x58], 0x1b
// 007e7b4c  0f8547020000         jne 0x7e7d99
// 007e7b52  6a00                 push 0
// 007e7b54  6a00                 push 0
// 007e7b56  8bce                 mov ecx, esi
// 007e7b58  e873ecffff           call 0x7e67d0
// 007e7b5d  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7b60  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007e7b64  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e7b67  52                   push edx
// 007e7b68  50                   push eax
// 007e7b69  ff1560ba9e00         call dword ptr [0x9eba60]
// 007e7b6f  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 007e7b75  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007e7b7a  0f8429020000         je 0x7e7da9
// 007e7b80  6a00                 push 0
// 007e7b82  6a00                 push 0
// 007e7b84  8bc3                 mov eax, ebx
// 007e7b86  50                   push eax
// 007e7b87  53                   push ebx
// 007e7b88  6a00                 push 0
// 007e7b8a  50                   push eax
// 007e7b8b  53                   push ebx
// 007e7b8c  8d4c2438             lea ecx, [esp + 0x38]
// 007e7b90  51                   push ecx
// 007e7b91  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007e7b98  e8e1541900           call 0x97d07e
// 007e7b9d  e919020000           jmp 0x7e7dbb
// 007e7ba2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007e7ba6  0fbfc8               movsx ecx, ax
// 007e7ba9  c1e810               shr eax, 0x10
// 007e7bac  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007e7bb1  0fbff8               movsx edi, ax
// 007e7bb4  894c2414             mov dword ptr [esp + 0x14], ecx
// 007e7bb8  897c2418             mov dword ptr [esp + 0x18], edi
// 007e7bbc  0f858c000000         jne 0x7e7c4e
// 007e7bc2  2b8c24b8000000       sub ecx, dword ptr [esp + 0xb8]
// 007e7bc9  8bc1                 mov eax, ecx
// 007e7bcb  99                   cdq 
// 007e7bcc  33c2                 xor eax, edx
// 007e7bce  2bc2                 sub eax, edx
// 007e7bd0  3b842480000000       cmp eax, dword ptr [esp + 0x80]
// 007e7bd7  7f18                 jg 0x7e7bf1
// 007e7bd9  2bbc24bc000000       sub edi, dword ptr [esp + 0xbc]
// 007e7be0  8bc7                 mov eax, edi
// 007e7be2  99                   cdq 
// 007e7be3  33c2                 xor eax, edx
// 007e7be5  2bc2                 sub eax, edx
// 007e7be7  3b442438             cmp eax, dword ptr [esp + 0x38]
// 007e7beb  0f8ea1feffff         jle 0x7e7a92
// 007e7bf1  837c243400           cmp dword ptr [esp + 0x34], 0
// 007e7bf6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 007e7bfa  750b                 jne 0x7e7c07
// 007e7bfc  6a00                 push 0
// 007e7bfe  6a00                 push 0
// 007e7c00  8bce                 mov ecx, esi
// 007e7c02  e8c9ebffff           call 0x7e67d0
// 007e7c07  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7c0a  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e7c0d  50                   push eax
// 007e7c0e  ff15d8ba9e00         call dword ptr [0x9ebad8]
// 007e7c14  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 007e7c1b  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007e7c22  50                   push eax
// 007e7c23  51                   push ecx
// 007e7c24  50                   push eax
// 007e7c25  51                   push ecx
// 007e7c26  8d4c242c             lea ecx, [esp + 0x2c]
// 007e7c2a  51                   push ecx
// 007e7c2b  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007e7c31  6a00                 push 0
// 007e7c33  6a00                 push 0
// 007e7c35  8bc3                 mov eax, ebx
// 007e7c37  50                   push eax
// 007e7c38  53                   push ebx
// 007e7c39  6a00                 push 0
// 007e7c3b  50                   push eax
// 007e7c3c  53                   push ebx
// 007e7c3d  8d542438             lea edx, [esp + 0x38]
// 007e7c41  52                   push edx
// 007e7c42  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007e7c49  e830541900           call 0x97d07e
// 007e7c4e  6a00                 push 0
// 007e7c50  6a00                 push 0
// 007e7c52  8bc3                 mov eax, ebx
// 007e7c54  50                   push eax
// 007e7c55  53                   push ebx
// 007e7c56  6a00                 push 0
// 007e7c58  50                   push eax
// 007e7c59  53                   push ebx
// 007e7c5a  8d442438             lea eax, [esp + 0x38]
// 007e7c5e  50                   push eax
// 007e7c5f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007e7c66  e813541900           call 0x97d07e
// 007e7c6b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e7c6f  3b442444             cmp eax, dword ptr [esp + 0x44]
// 007e7c73  7d12                 jge 0x7e7c87
// 007e7c75  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7c78  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007e7c7b  6a00                 push 0
// 007e7c7d  6a00                 push 0
// 007e7c7f  6815010000           push 0x115
// 007e7c84  52                   push edx
// 007e7c85  eb16                 jmp 0x7e7c9d
// 007e7c87  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 007e7c8b  7c16                 jl 0x7e7ca3
// 007e7c8d  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7c90  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e7c93  6a00                 push 0
// 007e7c95  6a01                 push 1
// 007e7c97  6815010000           push 0x115
// 007e7c9c  51                   push ecx
// 007e7c9d  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e7ca3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007e7ca7  3b442440             cmp eax, dword ptr [esp + 0x40]
// 007e7cab  7d12                 jge 0x7e7cbf
// 007e7cad  8b5634               mov edx, dword ptr [esi + 0x34]
// 007e7cb0  8b4220               mov eax, dword ptr [edx + 0x20]
// 007e7cb3  6a00                 push 0
// 007e7cb5  6a00                 push 0
// 007e7cb7  6814010000           push 0x114
// 007e7cbc  50                   push eax
// 007e7cbd  eb16                 jmp 0x7e7cd5
// 007e7cbf  3b442448             cmp eax, dword ptr [esp + 0x48]
// 007e7cc3  7c16                 jl 0x7e7cdb
// 007e7cc5  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7cc8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007e7ccb  6a00                 push 0
// 007e7ccd  6a01                 push 1
// 007e7ccf  6814010000           push 0x114
// 007e7cd4  52                   push edx
// 007e7cd5  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e7cdb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7cde  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 007e7ce5  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 007e7cec  6a00                 push 0
// 007e7cee  e891531900           call 0x97d084
// 007e7cf3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7cf6  6a01                 push 1
// 007e7cf8  2bf8                 sub edi, eax
// 007e7cfa  e885531900           call 0x97d084
// 007e7cff  0faf442430           imul eax, dword ptr [esp + 0x30]
// 007e7d04  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e7d08  2be8                 sub ebp, eax
// 007e7d0a  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e7d0e  50                   push eax
// 007e7d0f  51                   push ecx
// 007e7d10  55                   push ebp
// 007e7d11  57                   push edi
// 007e7d12  8d54242c             lea edx, [esp + 0x2c]
// 007e7d16  52                   push edx
// 007e7d17  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007e7d1d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007e7d21  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e7d25  3bc1                 cmp eax, ecx
// 007e7d27  7e08                 jle 0x7e7d31
// 007e7d29  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007e7d2d  89442424             mov dword ptr [esp + 0x24], eax
// 007e7d31  8b442420             mov eax, dword ptr [esp + 0x20]
// 007e7d35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007e7d39  3bc1                 cmp eax, ecx
// 007e7d3b  7e08                 jle 0x7e7d45
// 007e7d3d  894c2420             mov dword ptr [esp + 0x20], ecx
// 007e7d41  89442428             mov dword ptr [esp + 0x28], eax
// 007e7d45  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 007e7d4c  8b06                 mov eax, dword ptr [esi]
// 007e7d4e  8d8c2488000000       lea ecx, [esp + 0x88]
// 007e7d55  51                   push ecx
// 007e7d56  52                   push edx
// 007e7d57  8b5064               mov edx, dword ptr [eax + 0x64]
// 007e7d5a  8d4c2424             lea ecx, [esp + 0x24]
// 007e7d5e  51                   push ecx
// 007e7d5f  8bce                 mov ecx, esi
// 007e7d61  ffd2                 call edx
// 007e7d63  6a00                 push 0
// 007e7d65  6a00                 push 0
// 007e7d67  8bc3                 mov eax, ebx
// 007e7d69  50                   push eax
// 007e7d6a  53                   push ebx
// 007e7d6b  6a00                 push 0
// 007e7d6d  50                   push eax
// 007e7d6e  53                   push ebx
// 007e7d6f  8d442438             lea eax, [esp + 0x38]
// 007e7d73  50                   push eax
// 007e7d74  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007e7d7b  e8fe521900           call 0x97d07e
// 007e7d80  e90dfdffff           jmp 0x7e7a92
// 007e7d85  2d02020000           sub eax, 0x202
// 007e7d8a  0f84cdfdffff         je 0x7e7b5d
// 007e7d90  83e803               sub eax, 3
// 007e7d93  0f84c4fdffff         je 0x7e7b5d
// 007e7d99  8d4c2450             lea ecx, [esp + 0x50]
// 007e7d9d  51                   push ecx
// 007e7d9e  ff1508bc9e00         call dword ptr [0x9ebc08]
// 007e7da4  e9e9fcffff           jmp 0x7e7a92
// 007e7da9  837c243400           cmp dword ptr [esp + 0x34], 0
// 007e7dae  750b                 jne 0x7e7dbb
// 007e7db0  6a00                 push 0
// 007e7db2  6a00                 push 0
// 007e7db4  8bce                 mov ecx, esi
// 007e7db6  e815eaffff           call 0x7e67d0
// 007e7dbb  8d4c246c             lea ecx, [esp + 0x6c]
// 007e7dbf  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 007e7dc7  e8620afcff           call 0x7a882e
// 007e7dcc  8d8c2488000000       lea ecx, [esp + 0x88]
// 007e7dd3  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 007e7dde  e865521900           call 0x97d048
// 007e7de3  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007e7dea  64890d00000000       mov dword ptr fs:[0], ecx
// 007e7df1  59                   pop ecx
// 007e7df2  5f                   pop edi
// 007e7df3  5e                   pop esi
// 007e7df4  5d                   pop ebp
// 007e7df5  5b                   pop ebx
// 007e7df6  81c49c000000         add esp, 0x9c
// 007e7dfc  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoBanding@CXTTreeBase@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp