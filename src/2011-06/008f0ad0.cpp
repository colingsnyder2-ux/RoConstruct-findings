// roc 2011-06 008f0ad0  unit: PAVCXTShadowWnd::?$CList  size: 1309 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0ad0
//
// 008f0ad0  55                   push ebp
// 008f0ad1  8bec                 mov ebp, esp
// 008f0ad3  83e4c0               and esp, 0xffffffc0
// 008f0ad6  6aff                 push -1
// 008f0ad8  6863e9a000           push 0xa0e963
// 008f0add  64a100000000         mov eax, dword ptr fs:[0]
// 008f0ae3  50                   push eax
// 008f0ae4  81ece8000000         sub esp, 0xe8
// 008f0aea  53                   push ebx
// 008f0aeb  56                   push esi
// 008f0aec  57                   push edi
// 008f0aed  a12058c900           mov eax, dword ptr [0xc95820]
// 008f0af2  33c4                 xor eax, esp
// 008f0af4  50                   push eax
// 008f0af5  8d8424f8000000       lea eax, [esp + 0xf8]
// 008f0afc  64a300000000         mov dword ptr fs:[0], eax
// 008f0b02  8bd9                 mov ebx, ecx
// 008f0b04  895c2448             mov dword ptr [esp + 0x48], ebx
// 008f0b08  e8219bf1ff           call 0x80a62e
// 008f0b0d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008f0b10  85f6                 test esi, esi
// 008f0b12  0f84bd040000         je 0x8f0fd5
// 008f0b18  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 008f0b1b  85ff                 test edi, edi
// 008f0b1d  0f84b2040000         je 0x8f0fd5
// 008f0b23  837b6000             cmp dword ptr [ebx + 0x60], 0
// 008f0b27  0f84a8040000         je 0x8f0fd5
// 008f0b2d  e80efcffff           call 0x8f0740
// 008f0b32  8bc8                 mov ecx, eax
// 008f0b34  33c0                 xor eax, eax
// 008f0b36  394138               cmp dword ptr [ecx + 0x38], eax
// 008f0b39  0f8496040000         je 0x8f0fd5
// 008f0b3f  53                   push ebx
// 008f0b40  8d8c2488000000       lea ecx, [esp + 0x88]
// 008f0b47  88442460             mov byte ptr [esp + 0x60], al
// 008f0b4b  88442461             mov byte ptr [esp + 0x61], al
// 008f0b4f  c6442462ff           mov byte ptr [esp + 0x62], 0xff
// 008f0b54  c644246301           mov byte ptr [esp + 0x63], 1
// 008f0b59  89442478             mov dword ptr [esp + 0x78], eax
// 008f0b5d  8944247c             mov dword ptr [esp + 0x7c], eax
// 008f0b61  e8c2a3f1ff           call 0x80af28
// 008f0b66  8d4c2464             lea ecx, [esp + 0x64]
// 008f0b6a  c784240001000000000000 mov dword ptr [esp + 0x100], 0
// 008f0b75  e89aa2f1ff           call 0x80ae14
// 008f0b7a  8d942484000000       lea edx, [esp + 0x84]
// 008f0b81  52                   push edx
// 008f0b82  8d4c2468             lea ecx, [esp + 0x68]
// 008f0b86  c684240401000001     mov byte ptr [esp + 0x104], 1
// 008f0b8e  e87d1ab7ff           call 0x462610
// 008f0b93  6a2c                 push 0x2c
// 008f0b95  8d84249c000000       lea eax, [esp + 0x9c]
// 008f0b9c  6a00                 push 0
// 008f0b9e  50                   push eax
// 008f0b9f  e840a7f1ff           call 0x80b2e4
// 008f0ba4  8bc6                 mov eax, esi
// 008f0ba6  0fafc7               imul eax, edi
// 008f0ba9  83c40c               add esp, 0xc
// 008f0bac  6a00                 push 0
// 008f0bae  b901000000           mov ecx, 1
// 008f0bb3  6a00                 push 0
// 008f0bb5  66898c24ac000000     mov word ptr [esp + 0xac], cx
// 008f0bbd  03c0                 add eax, eax
// 008f0bbf  8d4c244c             lea ecx, [esp + 0x4c]
// 008f0bc3  51                   push ecx
// 008f0bc4  ba20000000           mov edx, 0x20
// 008f0bc9  03c0                 add eax, eax
// 008f0bcb  66899424b2000000     mov word ptr [esp + 0xb2], dx
// 008f0bd3  6a00                 push 0
// 008f0bd5  8d9424a8000000       lea edx, [esp + 0xa8]
// 008f0bdc  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 008f0be3  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008f0bea  52                   push edx
// 008f0beb  50                   push eax
// 008f0bec  c78424b000000028000000 mov dword ptr [esp + 0xb0], 0x28
// 008f0bf7  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 008f0bfe  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 008f0c05  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 008f0c10  ff157801a400         call dword ptr [0xa40178]
// 008f0c16  837c244400           cmp dword ptr [esp + 0x44], 0
// 008f0c1b  89442460             mov dword ptr [esp + 0x60], eax
// 008f0c1f  0f8488030000         je 0x8f0fad
// 008f0c25  e886b0f7ff           call 0x86bcb0
// 008f0c2a  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f0c2d  83f802               cmp eax, 2
// 008f0c30  7510                 jne 0x8f0c42
// 008f0c32  e8a947f5ff           call 0x8453e0
// 008f0c37  6a3b                 push 0x3b
// 008f0c39  8bc8                 mov ecx, eax
// 008f0c3b  e8a041f5ff           call 0x844de0
// 008f0c40  eb0e                 jmp 0x8f0c50
// 008f0c42  e89947f5ff           call 0x8453e0
// 008f0c47  6a3b                 push 0x3b
// 008f0c49  8bc8                 mov ecx, eax
// 008f0c4b  e8603ff5ff           call 0x844bb0
// 008f0c50  0fb6c8               movzx ecx, al
// 008f0c53  8bd0                 mov edx, eax
// 008f0c55  c1ea08               shr edx, 8
// 008f0c58  c1e810               shr eax, 0x10
// 008f0c5b  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008f0c5f  894c2454             mov dword ptr [esp + 0x54], ecx
// 008f0c63  0fb6ca               movzx ecx, dl
// 008f0c66  0fb6d0               movzx edx, al
// 008f0c69  894c2450             mov dword ptr [esp + 0x50], ecx
// 008f0c6d  89542458             mov dword ptr [esp + 0x58], edx
// 008f0c71  bb01000000           mov ebx, 1
// 008f0c76  0f8516010000         jne 0x8f0d92
// 008f0c7c  8bc6                 mov eax, esi
// 008f0c7e  f7d8                 neg eax
// 008f0c80  03c0                 add eax, eax
// 008f0c82  03c0                 add eax, eax
// 008f0c84  4f                   dec edi
// 008f0c85  0faffe               imul edi, esi
// 008f0c88  8944244c             mov dword ptr [esp + 0x4c], eax
// 008f0c8c  8d04bd0c000000       lea eax, [edi*4 + 0xc]
// 008f0c93  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 008f0c9b  89442430             mov dword ptr [esp + 0x30], eax
// 008f0c9f  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008f0ca7  8b742434             mov esi, dword ptr [esp + 0x34]
// 008f0cab  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008f0caf  895c2438             mov dword ptr [esp + 0x38], ebx
// 008f0cb3  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 008f0cbb  db442438             fild dword ptr [esp + 0x38]
// 008f0cbf  83ec08               sub esp, 8
// 008f0cc2  8d4c2460             lea ecx, [esp + 0x60]
// 008f0cc6  8d542458             lea edx, [esp + 0x58]
// 008f0cca  dc35f886a800         fdiv qword ptr [0xa886f8]
// 008f0cd0  8d44245c             lea eax, [esp + 0x5c]
// 008f0cd4  dd1c24               fstp qword ptr [esp]
// 008f0cd7  51                   push ecx
// 008f0cd8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f0cdc  52                   push edx
// 008f0cdd  50                   push eax
// 008f0cde  e85d0afeff           call 0x8d1740
// 008f0ce3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008f0ce7  015c2438             add dword ptr [esp + 0x38], ebx
// 008f0ceb  03c6                 add eax, esi
// 008f0ced  03742434             add esi, dword ptr [esp + 0x34]
// 008f0cf1  89040f               mov dword ptr [edi + ecx], eax
// 008f0cf4  037c244c             add edi, dword ptr [esp + 0x4c]
// 008f0cf8  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008f0cfd  75bc                 jne 0x8f0cbb
// 008f0cff  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008f0d07  836c243004           sub dword ptr [esp + 0x30], 4
// 008f0d0c  43                   inc ebx
// 008f0d0d  836c244001           sub dword ptr [esp + 0x40], 1
// 008f0d12  7593                 jne 0x8f0ca7
// 008f0d14  bf03000000           mov edi, 3
// 008f0d19  c744243001000000     mov dword ptr [esp + 0x30], 1
// 008f0d21  db442430             fild dword ptr [esp + 0x30]
// 008f0d25  83ec08               sub esp, 8
// 008f0d28  8d542460             lea edx, [esp + 0x60]
// 008f0d2c  8d442458             lea eax, [esp + 0x58]
// 008f0d30  dc0d18c6a700         fmul qword ptr [0xa7c618]
// 008f0d36  8d4c245c             lea ecx, [esp + 0x5c]
// 008f0d3a  dd1c24               fstp qword ptr [esp]
// 008f0d3d  52                   push edx
// 008f0d3e  50                   push eax
// 008f0d3f  51                   push ecx
// 008f0d40  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008f0d44  e8f709feff           call 0x8d1740
// 008f0d49  ba04000000           mov edx, 4
// 008f0d4e  2bd7                 sub edx, edi
// 008f0d50  69d20000000f         imul edx, edx, 0xf000000
// 008f0d56  03c2                 add eax, edx
// 008f0d58  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008f0d5b  83c2fc               add edx, -4
// 008f0d5e  85d2                 test edx, edx
// 008f0d60  7e1c                 jle 0x8f0d7e
// 008f0d62  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008f0d65  03f6                 add esi, esi
// 008f0d67  03f6                 add esi, esi
// 008f0d69  8d0cbd00000000       lea ecx, [edi*4]
// 008f0d70  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008f0d74  890419               mov dword ptr [ecx + ebx], eax
// 008f0d77  03ce                 add ecx, esi
// 008f0d79  83ea01               sub edx, 1
// 008f0d7c  75f2                 jne 0x8f0d70
// 008f0d7e  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f0d82  40                   inc eax
// 008f0d83  4f                   dec edi
// 008f0d84  83f804               cmp eax, 4
// 008f0d87  89442430             mov dword ptr [esp + 0x30], eax
// 008f0d8b  7e94                 jle 0x8f0d21
// 008f0d8d  e99e010000           jmp 0x8f0f30
// 008f0d92  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008f0d9a  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 008f0da2  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 008f0daa  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008f0dae  8b742434             mov esi, dword ptr [esp + 0x34]
// 008f0db2  895c2430             mov dword ptr [esp + 0x30], ebx
// 008f0db6  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008f0dbe  db442430             fild dword ptr [esp + 0x30]
// 008f0dc2  83ec08               sub esp, 8
// 008f0dc5  8d442460             lea eax, [esp + 0x60]
// 008f0dc9  8d4c2458             lea ecx, [esp + 0x58]
// 008f0dcd  dc35f886a800         fdiv qword ptr [0xa886f8]
// 008f0dd3  8d54245c             lea edx, [esp + 0x5c]
// 008f0dd7  dd1c24               fstp qword ptr [esp]
// 008f0dda  50                   push eax
// 008f0ddb  51                   push ecx
// 008f0ddc  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008f0de0  52                   push edx
// 008f0de1  e85a09feff           call 0x8d1740
// 008f0de6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008f0dea  015c2430             add dword ptr [esp + 0x30], ebx
// 008f0dee  03c6                 add eax, esi
// 008f0df0  03742434             add esi, dword ptr [esp + 0x34]
// 008f0df4  89040f               mov dword ptr [edi + ecx], eax
// 008f0df7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008f0dfa  03c0                 add eax, eax
// 008f0dfc  03c0                 add eax, eax
// 008f0dfe  03f8                 add edi, eax
// 008f0e00  836c244001           sub dword ptr [esp + 0x40], 1
// 008f0e05  75b7                 jne 0x8f0dbe
// 008f0e07  8344243804           add dword ptr [esp + 0x38], 4
// 008f0e0c  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008f0e14  43                   inc ebx
// 008f0e15  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008f0e1a  758e                 jne 0x8f0daa
// 008f0e1c  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008f0e1f  33c0                 xor eax, eax
// 008f0e21  be0000000f           mov esi, 0xf000000
// 008f0e26  c744243010000000     mov dword ptr [esp + 0x30], 0x10
// 008f0e2e  8d5801               lea ebx, [eax + 1]
// 008f0e31  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008f0e35  db44244c             fild dword ptr [esp + 0x4c]
// 008f0e39  83ec08               sub esp, 8
// 008f0e3c  8d542460             lea edx, [esp + 0x60]
// 008f0e40  8d442458             lea eax, [esp + 0x58]
// 008f0e44  dc0d18c6a700         fmul qword ptr [0xa7c618]
// 008f0e4a  8d4c245c             lea ecx, [esp + 0x5c]
// 008f0e4e  dd1c24               fstp qword ptr [esp]
// 008f0e51  52                   push edx
// 008f0e52  50                   push eax
// 008f0e53  51                   push ecx
// 008f0e54  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008f0e58  e8e308feff           call 0x8d1740
// 008f0e5d  8d57fc               lea edx, [edi - 4]
// 008f0e60  03c6                 add eax, esi
// 008f0e62  83fa04               cmp edx, 4
// 008f0e65  7e1b                 jle 0x8f0e82
// 008f0e67  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f0e6b  83c2fc               add edx, -4
// 008f0e6e  8bff                 mov edi, edi
// 008f0e70  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008f0e74  890439               mov dword ptr [ecx + edi], eax
// 008f0e77  83c104               add ecx, 4
// 008f0e7a  83ea01               sub edx, 1
// 008f0e7d  75f1                 jne 0x8f0e70
// 008f0e7f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008f0e82  8d0cbd00000000       lea ecx, [edi*4]
// 008f0e89  014c2430             add dword ptr [esp + 0x30], ecx
// 008f0e8d  81c60000000f         add esi, 0xf000000
// 008f0e93  81fe0000004b         cmp esi, 0x4b000000
// 008f0e99  8bc3                 mov eax, ebx
// 008f0e9b  7c91                 jl 0x8f0e2e
// 008f0e9d  8d04bd00000000       lea eax, [edi*4]
// 008f0ea4  bb01000000           mov ebx, 1
// 008f0ea9  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 008f0eb1  89442438             mov dword ptr [esp + 0x38], eax
// 008f0eb5  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 008f0ebd  8b742434             mov esi, dword ptr [esp + 0x34]
// 008f0ec1  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008f0ec5  895c2430             mov dword ptr [esp + 0x30], ebx
// 008f0ec9  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008f0ed1  db442430             fild dword ptr [esp + 0x30]
// 008f0ed5  83ec08               sub esp, 8
// 008f0ed8  8d542460             lea edx, [esp + 0x60]
// 008f0edc  8d442458             lea eax, [esp + 0x58]
// 008f0ee0  dc35f886a800         fdiv qword ptr [0xa886f8]
// 008f0ee6  8d4c245c             lea ecx, [esp + 0x5c]
// 008f0eea  dd1c24               fstp qword ptr [esp]
// 008f0eed  52                   push edx
// 008f0eee  50                   push eax
// 008f0eef  51                   push ecx
// 008f0ef0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008f0ef4  e84708feff           call 0x8d1740
// 008f0ef9  8b542444             mov edx, dword ptr [esp + 0x44]
// 008f0efd  015c2430             add dword ptr [esp + 0x30], ebx
// 008f0f01  03c6                 add eax, esi
// 008f0f03  03742434             add esi, dword ptr [esp + 0x34]
// 008f0f07  894417fc             mov dword ptr [edi + edx - 4], eax
// 008f0f0b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008f0f0e  03c0                 add eax, eax
// 008f0f10  03c0                 add eax, eax
// 008f0f12  03f8                 add edi, eax
// 008f0f14  836c244001           sub dword ptr [esp + 0x40], 1
// 008f0f19  75b6                 jne 0x8f0ed1
// 008f0f1b  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008f0f23  836c243804           sub dword ptr [esp + 0x38], 4
// 008f0f28  43                   inc ebx
// 008f0f29  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008f0f2e  758d                 jne 0x8f0ebd
// 008f0f30  8b442460             mov eax, dword ptr [esp + 0x60]
// 008f0f34  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008f0f38  8b358c01a400         mov esi, dword ptr [0xa4018c]
// 008f0f3e  50                   push eax
// 008f0f3f  51                   push ecx
// 008f0f40  ffd6                 call esi
// 008f0f42  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008f0f45  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008f0f49  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008f0f4d  8bf8                 mov edi, eax
// 008f0f4f  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008f0f52  8954247c             mov dword ptr [esp + 0x7c], edx
// 008f0f56  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008f0f59  89842480000000       mov dword ptr [esp + 0x80], eax
// 008f0f60  8954244c             mov dword ptr [esp + 0x4c], edx
// 008f0f64  e8d7f7ffff           call 0x8f0740
// 008f0f69  8b4038               mov eax, dword ptr [eax + 0x38]
// 008f0f6c  6a02                 push 2
// 008f0f6e  8d4c2460             lea ecx, [esp + 0x60]
// 008f0f72  51                   push ecx
// 008f0f73  6a00                 push 0
// 008f0f75  8d942480000000       lea edx, [esp + 0x80]
// 008f0f7c  52                   push edx
// 008f0f7d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008f0f81  53                   push ebx
// 008f0f82  8d8c2490000000       lea ecx, [esp + 0x90]
// 008f0f89  51                   push ecx
// 008f0f8a  6a00                 push 0
// 008f0f8c  6a00                 push 0
// 008f0f8e  52                   push edx
// 008f0f8f  ffd0                 call eax
// 008f0f91  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008f0f95  57                   push edi
// 008f0f96  51                   push ecx
// 008f0f97  ffd6                 call esi
// 008f0f99  8b542460             mov edx, dword ptr [esp + 0x60]
// 008f0f9d  52                   push edx
// 008f0f9e  ff159c01a400         call dword ptr [0xa4019c]
// 008f0fa4  8d4c2464             lea ecx, [esp + 0x64]
// 008f0fa8  e8a7b90d00           call 0x9cc954
// 008f0fad  8d4c2464             lea ecx, [esp + 0x64]
// 008f0fb1  c684240001000000     mov byte ptr [esp + 0x100], 0
// 008f0fb9  e8449ef1ff           call 0x80ae02
// 008f0fbe  8d8c2484000000       lea ecx, [esp + 0x84]
// 008f0fc5  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 008f0fd0  e84d9ff1ff           call 0x80af22
// 008f0fd5  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008f0fdc  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0fe3  59                   pop ecx
// 008f0fe4  5f                   pop edi
// 008f0fe5  5e                   pop esi
// 008f0fe6  5b                   pop ebx
// 008f0fe7  8be5                 mov esp, ebp
// 008f0fe9  5d                   pop ebp
// 008f0fea  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTShadowWnd@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp