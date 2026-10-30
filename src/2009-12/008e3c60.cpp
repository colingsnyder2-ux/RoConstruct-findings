// roc 2009-12 008e3c60  unit: PAVCXTShadowWnd::?$CList  size: 1309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3c60
//
// 008e3c60  55                   push ebp
// 008e3c61  8bec                 mov ebp, esp
// 008e3c63  83e4c0               and esp, 0xffffffc0
// 008e3c66  6aff                 push -1
// 008e3c68  68333e9600           push 0x963e33
// 008e3c6d  64a100000000         mov eax, dword ptr fs:[0]
// 008e3c73  50                   push eax
// 008e3c74  81ece8000000         sub esp, 0xe8
// 008e3c7a  53                   push ebx
// 008e3c7b  56                   push esi
// 008e3c7c  57                   push edi
// 008e3c7d  a10052b600           mov eax, dword ptr [0xb65200]
// 008e3c82  33c4                 xor eax, esp
// 008e3c84  50                   push eax
// 008e3c85  8d8424f8000000       lea eax, [esp + 0xf8]
// 008e3c8c  64a300000000         mov dword ptr fs:[0], eax
// 008e3c92  8bd9                 mov ebx, ecx
// 008e3c94  895c2448             mov dword ptr [esp + 0x48], ebx
// 008e3c98  e89301f1ff           call 0x7f3e30
// 008e3c9d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008e3ca0  85f6                 test esi, esi
// 008e3ca2  0f84bd040000         je 0x8e4165
// 008e3ca8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 008e3cab  85ff                 test edi, edi
// 008e3cad  0f84b2040000         je 0x8e4165
// 008e3cb3  837b6000             cmp dword ptr [ebx + 0x60], 0
// 008e3cb7  0f84a8040000         je 0x8e4165
// 008e3cbd  e80efcffff           call 0x8e38d0
// 008e3cc2  8bc8                 mov ecx, eax
// 008e3cc4  33c0                 xor eax, eax
// 008e3cc6  394138               cmp dword ptr [ecx + 0x38], eax
// 008e3cc9  0f8496040000         je 0x8e4165
// 008e3ccf  53                   push ebx
// 008e3cd0  8d8c2488000000       lea ecx, [esp + 0x88]
// 008e3cd7  88442460             mov byte ptr [esp + 0x60], al
// 008e3cdb  88442461             mov byte ptr [esp + 0x61], al
// 008e3cdf  c6442462ff           mov byte ptr [esp + 0x62], 0xff
// 008e3ce4  c644246301           mov byte ptr [esp + 0x63], 1
// 008e3ce9  89442478             mov dword ptr [esp + 0x78], eax
// 008e3ced  8944247c             mov dword ptr [esp + 0x7c], eax
// 008e3cf1  e8e009f1ff           call 0x7f46d6
// 008e3cf6  8d4c2464             lea ecx, [esp + 0x64]
// 008e3cfa  c784240001000000000000 mov dword ptr [esp + 0x100], 0
// 008e3d05  e8a4270400           call 0x9264ae
// 008e3d0a  8d942484000000       lea edx, [esp + 0x84]
// 008e3d11  52                   push edx
// 008e3d12  8d4c2468             lea ecx, [esp + 0x68]
// 008e3d16  c684240401000001     mov byte ptr [esp + 0x104], 1
// 008e3d1e  e8fda3f1ff           call 0x7fe120
// 008e3d23  6a2c                 push 0x2c
// 008e3d25  8d84249c000000       lea eax, [esp + 0x9c]
// 008e3d2c  6a00                 push 0
// 008e3d2e  50                   push eax
// 008e3d2f  e8700df1ff           call 0x7f4aa4
// 008e3d34  8bc6                 mov eax, esi
// 008e3d36  0fafc7               imul eax, edi
// 008e3d39  83c40c               add esp, 0xc
// 008e3d3c  6a00                 push 0
// 008e3d3e  b901000000           mov ecx, 1
// 008e3d43  6a00                 push 0
// 008e3d45  66898c24ac000000     mov word ptr [esp + 0xac], cx
// 008e3d4d  03c0                 add eax, eax
// 008e3d4f  8d4c244c             lea ecx, [esp + 0x4c]
// 008e3d53  51                   push ecx
// 008e3d54  ba20000000           mov edx, 0x20
// 008e3d59  03c0                 add eax, eax
// 008e3d5b  66899424b2000000     mov word ptr [esp + 0xb2], dx
// 008e3d63  6a00                 push 0
// 008e3d65  8d9424a8000000       lea edx, [esp + 0xa8]
// 008e3d6c  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 008e3d73  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008e3d7a  52                   push edx
// 008e3d7b  50                   push eax
// 008e3d7c  c78424b000000028000000 mov dword ptr [esp + 0xb0], 0x28
// 008e3d87  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 008e3d8e  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 008e3d95  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 008e3da0  ff1560b19800         call dword ptr [0x98b160]
// 008e3da6  837c244400           cmp dword ptr [esp + 0x44], 0
// 008e3dab  89442460             mov dword ptr [esp + 0x60], eax
// 008e3daf  0f8488030000         je 0x8e413d
// 008e3db5  e8c667f7ff           call 0x85a580
// 008e3dba  8b4020               mov eax, dword ptr [eax + 0x20]
// 008e3dbd  83f802               cmp eax, 2
// 008e3dc0  7510                 jne 0x8e3dd2
// 008e3dc2  e809bcf4ff           call 0x82f9d0
// 008e3dc7  6a3b                 push 0x3b
// 008e3dc9  8bc8                 mov ecx, eax
// 008e3dcb  e860b5f4ff           call 0x82f330
// 008e3dd0  eb0e                 jmp 0x8e3de0
// 008e3dd2  e8f9bbf4ff           call 0x82f9d0
// 008e3dd7  6a3b                 push 0x3b
// 008e3dd9  8bc8                 mov ecx, eax
// 008e3ddb  e820b3f4ff           call 0x82f100
// 008e3de0  0fb6c8               movzx ecx, al
// 008e3de3  8bd0                 mov edx, eax
// 008e3de5  c1ea08               shr edx, 8
// 008e3de8  c1e810               shr eax, 0x10
// 008e3deb  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008e3def  894c2454             mov dword ptr [esp + 0x54], ecx
// 008e3df3  0fb6ca               movzx ecx, dl
// 008e3df6  0fb6d0               movzx edx, al
// 008e3df9  894c2450             mov dword ptr [esp + 0x50], ecx
// 008e3dfd  89542458             mov dword ptr [esp + 0x58], edx
// 008e3e01  bb01000000           mov ebx, 1
// 008e3e06  0f8516010000         jne 0x8e3f22
// 008e3e0c  8bc6                 mov eax, esi
// 008e3e0e  f7d8                 neg eax
// 008e3e10  03c0                 add eax, eax
// 008e3e12  03c0                 add eax, eax
// 008e3e14  4f                   dec edi
// 008e3e15  0faffe               imul edi, esi
// 008e3e18  8944244c             mov dword ptr [esp + 0x4c], eax
// 008e3e1c  8d04bd0c000000       lea eax, [edi*4 + 0xc]
// 008e3e23  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 008e3e2b  89442430             mov dword ptr [esp + 0x30], eax
// 008e3e2f  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008e3e37  8b742434             mov esi, dword ptr [esp + 0x34]
// 008e3e3b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008e3e3f  895c2438             mov dword ptr [esp + 0x38], ebx
// 008e3e43  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 008e3e4b  db442438             fild dword ptr [esp + 0x38]
// 008e3e4f  83ec08               sub esp, 8
// 008e3e52  8d4c2460             lea ecx, [esp + 0x60]
// 008e3e56  8d542458             lea edx, [esp + 0x58]
// 008e3e5a  dc3598979e00         fdiv qword ptr [0x9e9798]
// 008e3e60  8d44245c             lea eax, [esp + 0x5c]
// 008e3e64  dd1c24               fstp qword ptr [esp]
// 008e3e67  51                   push ecx
// 008e3e68  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e3e6c  52                   push edx
// 008e3e6d  50                   push eax
// 008e3e6e  e8bdf0ffff           call 0x8e2f30
// 008e3e73  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e3e77  015c2438             add dword ptr [esp + 0x38], ebx
// 008e3e7b  03c6                 add eax, esi
// 008e3e7d  03742434             add esi, dword ptr [esp + 0x34]
// 008e3e81  89040f               mov dword ptr [edi + ecx], eax
// 008e3e84  037c244c             add edi, dword ptr [esp + 0x4c]
// 008e3e88  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008e3e8d  75bc                 jne 0x8e3e4b
// 008e3e8f  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008e3e97  836c243004           sub dword ptr [esp + 0x30], 4
// 008e3e9c  43                   inc ebx
// 008e3e9d  836c244001           sub dword ptr [esp + 0x40], 1
// 008e3ea2  7593                 jne 0x8e3e37
// 008e3ea4  bf03000000           mov edi, 3
// 008e3ea9  c744243001000000     mov dword ptr [esp + 0x30], 1
// 008e3eb1  db442430             fild dword ptr [esp + 0x30]
// 008e3eb5  83ec08               sub esp, 8
// 008e3eb8  8d542460             lea edx, [esp + 0x60]
// 008e3ebc  8d442458             lea eax, [esp + 0x58]
// 008e3ec0  dc0d30e39b00         fmul qword ptr [0x9be330]
// 008e3ec6  8d4c245c             lea ecx, [esp + 0x5c]
// 008e3eca  dd1c24               fstp qword ptr [esp]
// 008e3ecd  52                   push edx
// 008e3ece  50                   push eax
// 008e3ecf  51                   push ecx
// 008e3ed0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e3ed4  e857f0ffff           call 0x8e2f30
// 008e3ed9  ba04000000           mov edx, 4
// 008e3ede  2bd7                 sub edx, edi
// 008e3ee0  69d20000000f         imul edx, edx, 0xf000000
// 008e3ee6  03c2                 add eax, edx
// 008e3ee8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008e3eeb  83c2fc               add edx, -4
// 008e3eee  85d2                 test edx, edx
// 008e3ef0  7e1c                 jle 0x8e3f0e
// 008e3ef2  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008e3ef5  03f6                 add esi, esi
// 008e3ef7  03f6                 add esi, esi
// 008e3ef9  8d0cbd00000000       lea ecx, [edi*4]
// 008e3f00  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008e3f04  890419               mov dword ptr [ecx + ebx], eax
// 008e3f07  03ce                 add ecx, esi
// 008e3f09  83ea01               sub edx, 1
// 008e3f0c  75f2                 jne 0x8e3f00
// 008e3f0e  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e3f12  40                   inc eax
// 008e3f13  4f                   dec edi
// 008e3f14  83f804               cmp eax, 4
// 008e3f17  89442430             mov dword ptr [esp + 0x30], eax
// 008e3f1b  7e94                 jle 0x8e3eb1
// 008e3f1d  e99e010000           jmp 0x8e40c0
// 008e3f22  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008e3f2a  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 008e3f32  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 008e3f3a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008e3f3e  8b742434             mov esi, dword ptr [esp + 0x34]
// 008e3f42  895c2430             mov dword ptr [esp + 0x30], ebx
// 008e3f46  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008e3f4e  db442430             fild dword ptr [esp + 0x30]
// 008e3f52  83ec08               sub esp, 8
// 008e3f55  8d442460             lea eax, [esp + 0x60]
// 008e3f59  8d4c2458             lea ecx, [esp + 0x58]
// 008e3f5d  dc3598979e00         fdiv qword ptr [0x9e9798]
// 008e3f63  8d54245c             lea edx, [esp + 0x5c]
// 008e3f67  dd1c24               fstp qword ptr [esp]
// 008e3f6a  50                   push eax
// 008e3f6b  51                   push ecx
// 008e3f6c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008e3f70  52                   push edx
// 008e3f71  e8baefffff           call 0x8e2f30
// 008e3f76  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e3f7a  015c2430             add dword ptr [esp + 0x30], ebx
// 008e3f7e  03c6                 add eax, esi
// 008e3f80  03742434             add esi, dword ptr [esp + 0x34]
// 008e3f84  89040f               mov dword ptr [edi + ecx], eax
// 008e3f87  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008e3f8a  03c0                 add eax, eax
// 008e3f8c  03c0                 add eax, eax
// 008e3f8e  03f8                 add edi, eax
// 008e3f90  836c244001           sub dword ptr [esp + 0x40], 1
// 008e3f95  75b7                 jne 0x8e3f4e
// 008e3f97  8344243804           add dword ptr [esp + 0x38], 4
// 008e3f9c  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008e3fa4  43                   inc ebx
// 008e3fa5  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008e3faa  758e                 jne 0x8e3f3a
// 008e3fac  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008e3faf  33c0                 xor eax, eax
// 008e3fb1  be0000000f           mov esi, 0xf000000
// 008e3fb6  c744243010000000     mov dword ptr [esp + 0x30], 0x10
// 008e3fbe  8d5801               lea ebx, [eax + 1]
// 008e3fc1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008e3fc5  db44244c             fild dword ptr [esp + 0x4c]
// 008e3fc9  83ec08               sub esp, 8
// 008e3fcc  8d542460             lea edx, [esp + 0x60]
// 008e3fd0  8d442458             lea eax, [esp + 0x58]
// 008e3fd4  dc0d30e39b00         fmul qword ptr [0x9be330]
// 008e3fda  8d4c245c             lea ecx, [esp + 0x5c]
// 008e3fde  dd1c24               fstp qword ptr [esp]
// 008e3fe1  52                   push edx
// 008e3fe2  50                   push eax
// 008e3fe3  51                   push ecx
// 008e3fe4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e3fe8  e843efffff           call 0x8e2f30
// 008e3fed  8d57fc               lea edx, [edi - 4]
// 008e3ff0  03c6                 add eax, esi
// 008e3ff2  83fa04               cmp edx, 4
// 008e3ff5  7e1b                 jle 0x8e4012
// 008e3ff7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e3ffb  83c2fc               add edx, -4
// 008e3ffe  8bff                 mov edi, edi
// 008e4000  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008e4004  890439               mov dword ptr [ecx + edi], eax
// 008e4007  83c104               add ecx, 4
// 008e400a  83ea01               sub edx, 1
// 008e400d  75f1                 jne 0x8e4000
// 008e400f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008e4012  8d0cbd00000000       lea ecx, [edi*4]
// 008e4019  014c2430             add dword ptr [esp + 0x30], ecx
// 008e401d  81c60000000f         add esi, 0xf000000
// 008e4023  81fe0000004b         cmp esi, 0x4b000000
// 008e4029  8bc3                 mov eax, ebx
// 008e402b  7c91                 jl 0x8e3fbe
// 008e402d  8d04bd00000000       lea eax, [edi*4]
// 008e4034  bb01000000           mov ebx, 1
// 008e4039  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 008e4041  89442438             mov dword ptr [esp + 0x38], eax
// 008e4045  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 008e404d  8b742434             mov esi, dword ptr [esp + 0x34]
// 008e4051  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008e4055  895c2430             mov dword ptr [esp + 0x30], ebx
// 008e4059  c744244004000000     mov dword ptr [esp + 0x40], 4
// 008e4061  db442430             fild dword ptr [esp + 0x30]
// 008e4065  83ec08               sub esp, 8
// 008e4068  8d542460             lea edx, [esp + 0x60]
// 008e406c  8d442458             lea eax, [esp + 0x58]
// 008e4070  dc3598979e00         fdiv qword ptr [0x9e9798]
// 008e4076  8d4c245c             lea ecx, [esp + 0x5c]
// 008e407a  dd1c24               fstp qword ptr [esp]
// 008e407d  52                   push edx
// 008e407e  50                   push eax
// 008e407f  51                   push ecx
// 008e4080  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e4084  e8a7eeffff           call 0x8e2f30
// 008e4089  8b542444             mov edx, dword ptr [esp + 0x44]
// 008e408d  015c2430             add dword ptr [esp + 0x30], ebx
// 008e4091  03c6                 add eax, esi
// 008e4093  03742434             add esi, dword ptr [esp + 0x34]
// 008e4097  894417fc             mov dword ptr [edi + edx - 4], eax
// 008e409b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008e409e  03c0                 add eax, eax
// 008e40a0  03c0                 add eax, eax
// 008e40a2  03f8                 add edi, eax
// 008e40a4  836c244001           sub dword ptr [esp + 0x40], 1
// 008e40a9  75b6                 jne 0x8e4061
// 008e40ab  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 008e40b3  836c243804           sub dword ptr [esp + 0x38], 4
// 008e40b8  43                   inc ebx
// 008e40b9  836c243c01           sub dword ptr [esp + 0x3c], 1
// 008e40be  758d                 jne 0x8e404d
// 008e40c0  8b442460             mov eax, dword ptr [esp + 0x60]
// 008e40c4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008e40c8  8b354cb19800         mov esi, dword ptr [0x98b14c]
// 008e40ce  50                   push eax
// 008e40cf  51                   push ecx
// 008e40d0  ffd6                 call esi
// 008e40d2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008e40d5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008e40d9  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008e40dd  8bf8                 mov edi, eax
// 008e40df  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008e40e2  8954247c             mov dword ptr [esp + 0x7c], edx
// 008e40e6  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008e40e9  89842480000000       mov dword ptr [esp + 0x80], eax
// 008e40f0  8954244c             mov dword ptr [esp + 0x4c], edx
// 008e40f4  e8d7f7ffff           call 0x8e38d0
// 008e40f9  8b4038               mov eax, dword ptr [eax + 0x38]
// 008e40fc  6a02                 push 2
// 008e40fe  8d4c2460             lea ecx, [esp + 0x60]
// 008e4102  51                   push ecx
// 008e4103  6a00                 push 0
// 008e4105  8d942480000000       lea edx, [esp + 0x80]
// 008e410c  52                   push edx
// 008e410d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008e4111  53                   push ebx
// 008e4112  8d8c2490000000       lea ecx, [esp + 0x90]
// 008e4119  51                   push ecx
// 008e411a  6a00                 push 0
// 008e411c  6a00                 push 0
// 008e411e  52                   push edx
// 008e411f  ffd0                 call eax
// 008e4121  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008e4125  57                   push edi
// 008e4126  51                   push ecx
// 008e4127  ffd6                 call esi
// 008e4129  8b542460             mov edx, dword ptr [esp + 0x60]
// 008e412d  52                   push edx
// 008e412e  ff153cb19800         call dword ptr [0x98b13c]
// 008e4134  8d4c2464             lea ecx, [esp + 0x64]
// 008e4138  e839280400           call 0x926976
// 008e413d  8d4c2464             lea ecx, [esp + 0x64]
// 008e4141  c684240001000000     mov byte ptr [esp + 0x100], 0
// 008e4149  e85a230400           call 0x9264a8
// 008e414e  8d8c2484000000       lea ecx, [esp + 0x84]
// 008e4155  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 008e4160  e86b05f1ff           call 0x7f46d0
// 008e4165  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008e416c  64890d00000000       mov dword ptr fs:[0], ecx
// 008e4173  59                   pop ecx
// 008e4174  5f                   pop edi
// 008e4175  5e                   pop esi
// 008e4176  5b                   pop ebx
// 008e4177  8be5                 mov esp, ebp
// 008e4179  5d                   pop ebp
// 008e417a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTShadowWnd@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp