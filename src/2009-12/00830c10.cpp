// roc 2009-12 00830c10  unit: CXTPColorManager  size: 2441 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00830c10
//
// 00830c10  6aff                 push -1
// 00830c12  6888be9500           push 0x95be88
// 00830c17  64a100000000         mov eax, dword ptr fs:[0]
// 00830c1d  50                   push eax
// 00830c1e  81ec08010000         sub esp, 0x108
// 00830c24  53                   push ebx
// 00830c25  55                   push ebp
// 00830c26  56                   push esi
// 00830c27  57                   push edi
// 00830c28  a10052b600           mov eax, dword ptr [0xb65200]
// 00830c2d  33c4                 xor eax, esp
// 00830c2f  50                   push eax
// 00830c30  8d84241c010000       lea eax, [esp + 0x11c]
// 00830c37  64a300000000         mov dword ptr fs:[0], eax
// 00830c3d  8bf1                 mov esi, ecx
// 00830c3f  e8bce7ffff           call 0x82f400
// 00830c44  6a00                 push 0
// 00830c46  8bce                 mov ecx, esi
// 00830c48  898668040000         mov dword ptr [esi + 0x468], eax
// 00830c4e  e86de6ffff           call 0x82f2c0
// 00830c53  8bce                 mov ecx, esi
// 00830c55  8bf8                 mov edi, eax
// 00830c57  e8d4e4ffff           call 0x82f130
// 00830c5c  8bce                 mov ecx, esi
// 00830c5e  e81de5ffff           call 0x82f180
// 00830c63  e8d8edffff           call 0x82fa40
// 00830c68  85ff                 test edi, edi
// 00830c6a  740c                 je 0x830c78
// 00830c6c  8bce                 mov ecx, esi
// 00830c6e  e8adfaffff           call 0x830720
// 00830c73  e907090000           jmp 0x83157f
// 00830c78  b805000000           mov eax, 5
// 00830c7d  bf46000000           mov edi, 0x46
// 00830c82  b90d000000           mov ecx, 0xd
// 00830c87  ba0f000000           mov edx, 0xf
// 00830c8c  897c247c             mov dword ptr [esp + 0x7c], edi
// 00830c90  89bc249c000000       mov dword ptr [esp + 0x9c], edi
// 00830c97  bf2e000000           mov edi, 0x2e
// 00830c9c  bd1e000000           mov ebp, 0x1e
// 00830ca1  89442434             mov dword ptr [esp + 0x34], eax
// 00830ca5  894c2444             mov dword ptr [esp + 0x44], ecx
// 00830ca9  89442448             mov dword ptr [esp + 0x48], eax
// 00830cad  894c2454             mov dword ptr [esp + 0x54], ecx
// 00830cb1  b910000000           mov ecx, 0x10
// 00830cb6  89442458             mov dword ptr [esp + 0x58], eax
// 00830cba  89442468             mov dword ptr [esp + 0x68], eax
// 00830cbe  89442478             mov dword ptr [esp + 0x78], eax
// 00830cc2  89842488000000       mov dword ptr [esp + 0x88], eax
// 00830cc9  89842498000000       mov dword ptr [esp + 0x98], eax
// 00830cd0  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 00830cd7  b85a000000           mov eax, 0x5a
// 00830cdc  bb21000000           mov ebx, 0x21
// 00830ce1  89bc24a4000000       mov dword ptr [esp + 0xa4], edi
// 00830ce8  89bc24b4000000       mov dword ptr [esp + 0xb4], edi
// 00830cef  896c2430             mov dword ptr [esp + 0x30], ebp
// 00830cf3  89542438             mov dword ptr [esp + 0x38], edx
// 00830cf7  c744243ca5000000     mov dword ptr [esp + 0x3c], 0xa5
// 00830cff  c74424401f000000     mov dword ptr [esp + 0x40], 0x1f
// 00830d07  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00830d0b  895c2450             mov dword ptr [esp + 0x50], ebx
// 00830d0f  c744245c32000000     mov dword ptr [esp + 0x5c], 0x32
// 00830d17  c744246029000000     mov dword ptr [esp + 0x60], 0x29
// 00830d1f  89542464             mov dword ptr [esp + 0x64], edx
// 00830d23  c744246c8f000000     mov dword ptr [esp + 0x6c], 0x8f
// 00830d2b  c744247023000000     mov dword ptr [esp + 0x70], 0x23
// 00830d33  c744247411000000     mov dword ptr [esp + 0x74], 0x11
// 00830d3b  c784248000000026000000 mov dword ptr [esp + 0x80], 0x26
// 00830d46  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00830d4d  c784248c0000004b000000 mov dword ptr [esp + 0x8c], 0x4b
// 00830d58  c784249000000027000000 mov dword ptr [esp + 0x90], 0x27
// 00830d63  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00830d6a  c78424a00000002b000000 mov dword ptr [esp + 0xa0], 0x2b
// 00830d75  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 00830d7c  c78424ac00000014000000 mov dword ptr [esp + 0xac], 0x14
// 00830d87  c78424b00000003d000000 mov dword ptr [esp + 0xb0], 0x3d
// 00830d92  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 00830d99  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 00830da0  c78424c000000028000000 mov dword ptr [esp + 0xc0], 0x28
// 00830dab  898c24c4000000       mov dword ptr [esp + 0xc4], ecx
// 00830db2  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 00830db9  c78424d00000002a000000 mov dword ptr [esp + 0xd0], 0x2a
// 00830dc4  899424d4000000       mov dword ptr [esp + 0xd4], edx
// 00830dcb  898c24d8000000       mov dword ptr [esp + 0xd8], ecx
// 00830dd2  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00830dd9  8d7c2438             lea edi, [esp + 0x38]
// 00830ddd  c74424140b000000     mov dword ptr [esp + 0x14], 0xb
// 00830de5  8b4704               mov eax, dword ptr [edi + 4]
// 00830de8  8b0f                 mov ecx, dword ptr [edi]
// 00830dea  50                   push eax
// 00830deb  51                   push ecx
// 00830dec  8bce                 mov ecx, esi
// 00830dee  e80de3ffff           call 0x82f100
// 00830df3  8b57fc               mov edx, dword ptr [edi - 4]
// 00830df6  50                   push eax
// 00830df7  52                   push edx
// 00830df8  e803e3ffff           call 0x82f100
// 00830dfd  50                   push eax
// 00830dfe  e84de2ffff           call 0x82f050
// 00830e03  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00830e06  83c710               add edi, 0x10
// 00830e09  836c241401           sub dword ptr [esp + 0x14], 1
// 00830e0e  89848e6c010000       mov dword ptr [esi + ecx*4 + 0x16c], eax
// 00830e15  75ce                 jne 0x830de5
// 00830e17  d90570659f00         fld dword ptr [0x9f6570]
// 00830e1d  bf23000000           mov edi, 0x23
// 00830e22  897c2460             mov dword ptr [esp + 0x60], edi
// 00830e26  897c2468             mov dword ptr [esp + 0x68], edi
// 00830e2a  b91f000000           mov ecx, 0x1f
// 00830e2f  bf25000000           mov edi, 0x25
// 00830e34  b864000000           mov eax, 0x64
// 00830e39  897c2470             mov dword ptr [esp + 0x70], edi
// 00830e3d  897c2478             mov dword ptr [esp + 0x78], edi
// 00830e41  894c2430             mov dword ptr [esp + 0x30], ecx
// 00830e45  894c2438             mov dword ptr [esp + 0x38], ecx
// 00830e49  898c24e4000000       mov dword ptr [esp + 0xe4], ecx
// 00830e50  bf26000000           mov edi, 0x26
// 00830e55  b92e000000           mov ecx, 0x2e
// 00830e5a  8944244c             mov dword ptr [esp + 0x4c], eax
// 00830e5e  8944247c             mov dword ptr [esp + 0x7c], eax
// 00830e62  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00830e69  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00830e70  89bc2480000000       mov dword ptr [esp + 0x80], edi
// 00830e77  89bc2488000000       mov dword ptr [esp + 0x88], edi
// 00830e7e  bf27000000           mov edi, 0x27
// 00830e83  b828000000           mov eax, 0x28
// 00830e88  898c24f0000000       mov dword ptr [esp + 0xf0], ecx
// 00830e8f  898c24f8000000       mov dword ptr [esp + 0xf8], ecx
// 00830e96  b92f000000           mov ecx, 0x2f
// 00830e9b  51                   push ecx
// 00830e9c  ba29000000           mov edx, 0x29
// 00830ea1  d91c24               fstp dword ptr [esp]
// 00830ea4  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 00830eab  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 00830eb2  89bc2494000000       mov dword ptr [esp + 0x94], edi
// 00830eb9  89bc249c000000       mov dword ptr [esp + 0x9c], edi
// 00830ec0  bf2b000000           mov edi, 0x2b
// 00830ec5  b82c000000           mov eax, 0x2c
// 00830eca  89542468             mov dword ptr [esp + 0x68], edx
// 00830ece  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 00830ed5  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 00830edc  899424d8000000       mov dword ptr [esp + 0xd8], edx
// 00830ee3  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00830eea  b8b4000000           mov eax, 0xb4
// 00830eef  ba2d000000           mov edx, 0x2d
// 00830ef4  6a01                 push 1
// 00830ef6  89bc24a8000000       mov dword ptr [esp + 0xa8], edi
// 00830efd  89bc24b0000000       mov dword ptr [esp + 0xb0], edi
// 00830f04  bf3d000000           mov edi, 0x3d
// 00830f09  898c2408010000       mov dword ptr [esp + 0x108], ecx
// 00830f10  898c2410010000       mov dword ptr [esp + 0x110], ecx
// 00830f17  55                   push ebp
// 00830f18  8bce                 mov ecx, esi
// 00830f1a  896c2440             mov dword ptr [esp + 0x40], ebp
// 00830f1e  c744244832000000     mov dword ptr [esp + 0x48], 0x32
// 00830f26  c744244c20000000     mov dword ptr [esp + 0x4c], 0x20
// 00830f2e  896c2450             mov dword ptr [esp + 0x50], ebp
// 00830f32  c74424540d000000     mov dword ptr [esp + 0x54], 0xd
// 00830f3a  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00830f3e  896c2460             mov dword ptr [esp + 0x60], ebp
// 00830f42  895c2464             mov dword ptr [esp + 0x64], ebx
// 00830f46  896c2468             mov dword ptr [esp + 0x68], ebp
// 00830f4a  c744247850000000     mov dword ptr [esp + 0x78], 0x50
// 00830f52  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 00830f59  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 00830f60  c784249800000055000000 mov dword ptr [esp + 0x98], 0x55
// 00830f6b  89ac24a0000000       mov dword ptr [esp + 0xa0], ebp
// 00830f72  c78424a800000032000000 mov dword ptr [esp + 0xa8], 0x32
// 00830f7d  89bc24bc000000       mov dword ptr [esp + 0xbc], edi
// 00830f84  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 00830f8b  89bc24c4000000       mov dword ptr [esp + 0xc4], edi
// 00830f92  89ac24d0000000       mov dword ptr [esp + 0xd0], ebp
// 00830f99  c78424d800000050000000 mov dword ptr [esp + 0xd8], 0x50
// 00830fa4  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 00830fab  899424ec000000       mov dword ptr [esp + 0xec], edx
// 00830fb2  899424f4000000       mov dword ptr [esp + 0xf4], edx
// 00830fb9  898424f8000000       mov dword ptr [esp + 0xf8], eax
// 00830fc0  89ac2400010000       mov dword ptr [esp + 0x100], ebp
// 00830fc7  89842408010000       mov dword ptr [esp + 0x108], eax
// 00830fce  899c2410010000       mov dword ptr [esp + 0x110], ebx
// 00830fd5  89842418010000       mov dword ptr [esp + 0x118], eax
// 00830fdc  e81fe1ffff           call 0x82f100
// 00830fe1  50                   push eax
// 00830fe2  6a0f                 push 0xf
// 00830fe4  e817e1ffff           call 0x82f100
// 00830fe9  50                   push eax
// 00830fea  e831eeffff           call 0x82fe20
// 00830fef  85c0                 test eax, eax
// 00830ff1  7426                 je 0x831019
// 00830ff3  d90570659f00         fld dword ptr [0x9f6570]
// 00830ff9  51                   push ecx
// 00830ffa  d91c24               fstp dword ptr [esp]
// 00830ffd  55                   push ebp
// 00830ffe  8bce                 mov ecx, esi
// 00831000  e8fbe0ffff           call 0x82f100
// 00831005  50                   push eax
// 00831006  6a0f                 push 0xf
// 00831008  e8f3e0ffff           call 0x82f100
// 0083100d  50                   push eax
// 0083100e  e8cdf4ffff           call 0x8304e0
// 00831013  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 00831019  8d5c2438             lea ebx, [esp + 0x38]
// 0083101d  c744241c0e000000     mov dword ptr [esp + 0x1c], 0xe
// 00831025  db4304               fild dword ptr [ebx + 4]
// 00831028  8b3b                 mov edi, dword ptr [ebx]
// 0083102a  51                   push ecx
// 0083102b  8bce                 mov ecx, esi
// 0083102d  d95c2418             fstp dword ptr [esp + 0x18]
// 00831031  d9442418             fld dword ptr [esp + 0x18]
// 00831035  d91c24               fstp dword ptr [esp]
// 00831038  6a01                 push 1
// 0083103a  57                   push edi
// 0083103b  e8c0e0ffff           call 0x82f100
// 00831040  50                   push eax
// 00831041  8b43fc               mov eax, dword ptr [ebx - 4]
// 00831044  50                   push eax
// 00831045  e8b6e0ffff           call 0x82f100
// 0083104a  50                   push eax
// 0083104b  e8d0edffff           call 0x82fe20
// 00831050  85c0                 test eax, eax
// 00831052  752a                 jne 0x83107e
// 00831054  d9442414             fld dword ptr [esp + 0x14]
// 00831058  51                   push ecx
// 00831059  d91c24               fstp dword ptr [esp]
// 0083105c  57                   push edi
// 0083105d  8bce                 mov ecx, esi
// 0083105f  e89ce0ffff           call 0x82f100
// 00831064  50                   push eax
// 00831065  8b43fc               mov eax, dword ptr [ebx - 4]
// 00831068  50                   push eax
// 00831069  e892e0ffff           call 0x82f100
// 0083106e  50                   push eax
// 0083106f  e84ceeffff           call 0x82fec0
// 00831074  8b53f8               mov edx, dword ptr [ebx - 8]
// 00831077  8984966c010000       mov dword ptr [esi + edx*4 + 0x16c], eax
// 0083107e  83c310               add ebx, 0x10
// 00831081  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00831086  759d                 jne 0x831025
// 00831088  d9056c659f00         fld dword ptr [0x9f656c]
// 0083108e  51                   push ecx
// 0083108f  d91c24               fstp dword ptr [esp]
// 00831092  6a01                 push 1
// 00831094  6a23                 push 0x23
// 00831096  8bce                 mov ecx, esi
// 00831098  e863e0ffff           call 0x82f100
// 0083109d  50                   push eax
// 0083109e  6a29                 push 0x29
// 008310a0  e85be0ffff           call 0x82f100
// 008310a5  50                   push eax
// 008310a6  e875edffff           call 0x82fe20
// 008310ab  85c0                 test eax, eax
// 008310ad  7427                 je 0x8310d6
// 008310af  d9056c659f00         fld dword ptr [0x9f656c]
// 008310b5  51                   push ecx
// 008310b6  d91c24               fstp dword ptr [esp]
// 008310b9  6a23                 push 0x23
// 008310bb  8bce                 mov ecx, esi
// 008310bd  e83ee0ffff           call 0x82f100
// 008310c2  50                   push eax
// 008310c3  6a29                 push 0x29
// 008310c5  e836e0ffff           call 0x82f100
// 008310ca  50                   push eax
// 008310cb  e810f4ffff           call 0x8304e0
// 008310d0  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 008310d6  55                   push ebp
// 008310d7  8bce                 mov ecx, esi
// 008310d9  e822e0ffff           call 0x82f100
// 008310de  c1e810               shr eax, 0x10
// 008310e1  0fb6c8               movzx ecx, al
// 008310e4  6bc932               imul ecx, ecx, 0x32
// 008310e7  b81f85eb51           mov eax, 0x51eb851f
// 008310ec  f7e9                 imul ecx
// 008310ee  c1fa05               sar edx, 5
// 008310f1  8bc2                 mov eax, edx
// 008310f3  c1e81f               shr eax, 0x1f
// 008310f6  03c2                 add eax, edx
// 008310f8  6a05                 push 5
// 008310fa  8bce                 mov ecx, esi
// 008310fc  8bd8                 mov ebx, eax
// 008310fe  e8fddfffff           call 0x82f100
// 00831103  c1e810               shr eax, 0x10
// 00831106  0fb6c0               movzx eax, al
// 00831109  8d3c80               lea edi, [eax + eax*4]
// 0083110c  03ff                 add edi, edi
// 0083110e  03ff                 add edi, edi
// 00831110  03ff                 add edi, edi
// 00831112  b81f85eb51           mov eax, 0x51eb851f
// 00831117  f7ef                 imul edi
// 00831119  c1fa05               sar edx, 5
// 0083111c  8bca                 mov ecx, edx
// 0083111e  c1e91f               shr ecx, 0x1f
// 00831121  03ca                 add ecx, edx
// 00831123  02d9                 add bl, cl
// 00831125  6a0d                 push 0xd
// 00831127  8bce                 mov ecx, esi
// 00831129  e8d2dfffff           call 0x82f100
// 0083112e  c1e810               shr eax, 0x10
// 00831131  0fb6c0               movzx eax, al
// 00831134  8d3c80               lea edi, [eax + eax*4]
// 00831137  03ff                 add edi, edi
// 00831139  b81f85eb51           mov eax, 0x51eb851f
// 0083113e  f7ef                 imul edi
// 00831140  c1fa05               sar edx, 5
// 00831143  8bc2                 mov eax, edx
// 00831145  c1e81f               shr eax, 0x1f
// 00831148  03c2                 add eax, edx
// 0083114a  02d8                 add bl, al
// 0083114c  0fb6db               movzx ebx, bl
// 0083114f  55                   push ebp
// 00831150  c1e308               shl ebx, 8
// 00831153  e8a8dfffff           call 0x82f100
// 00831158  c1e808               shr eax, 8
// 0083115b  0fb6c8               movzx ecx, al
// 0083115e  6bc932               imul ecx, ecx, 0x32
// 00831161  b81f85eb51           mov eax, 0x51eb851f
// 00831166  f7e9                 imul ecx
// 00831168  c1fa05               sar edx, 5
// 0083116b  8bca                 mov ecx, edx
// 0083116d  c1e91f               shr ecx, 0x1f
// 00831170  03ca                 add ecx, edx
// 00831172  8bc1                 mov eax, ecx
// 00831174  6a05                 push 5
// 00831176  8bce                 mov ecx, esi
// 00831178  89442420             mov dword ptr [esp + 0x20], eax
// 0083117c  e87fdfffff           call 0x82f100
// 00831181  c1e808               shr eax, 8
// 00831184  0fb6c0               movzx eax, al
// 00831187  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083118b  8d3c80               lea edi, [eax + eax*4]
// 0083118e  03ff                 add edi, edi
// 00831190  03ff                 add edi, edi
// 00831192  03ff                 add edi, edi
// 00831194  b81f85eb51           mov eax, 0x51eb851f
// 00831199  f7ef                 imul edi
// 0083119b  c1fa05               sar edx, 5
// 0083119e  8bc2                 mov eax, edx
// 008311a0  c1e81f               shr eax, 0x1f
// 008311a3  03c2                 add eax, edx
// 008311a5  02c8                 add cl, al
// 008311a7  884c2414             mov byte ptr [esp + 0x14], cl
// 008311ab  6a0d                 push 0xd
// 008311ad  8bce                 mov ecx, esi
// 008311af  e84cdfffff           call 0x82f100
// 008311b4  c1e808               shr eax, 8
// 008311b7  0fb6c0               movzx eax, al
// 008311ba  8d3c80               lea edi, [eax + eax*4]
// 008311bd  03ff                 add edi, edi
// 008311bf  b81f85eb51           mov eax, 0x51eb851f
// 008311c4  f7ef                 imul edi
// 008311c6  8a442414             mov al, byte ptr [esp + 0x14]
// 008311ca  c1fa05               sar edx, 5
// 008311cd  8bca                 mov ecx, edx
// 008311cf  c1e91f               shr ecx, 0x1f
// 008311d2  03ca                 add ecx, edx
// 008311d4  02c1                 add al, cl
// 008311d6  0fb6d0               movzx edx, al
// 008311d9  0bda                 or ebx, edx
// 008311db  55                   push ebp
// 008311dc  8bce                 mov ecx, esi
// 008311de  c1e308               shl ebx, 8
// 008311e1  e81adfffff           call 0x82f100
// 008311e6  0fb6c8               movzx ecx, al
// 008311e9  6bc932               imul ecx, ecx, 0x32
// 008311ec  b81f85eb51           mov eax, 0x51eb851f
// 008311f1  f7e9                 imul ecx
// 008311f3  c1fa05               sar edx, 5
// 008311f6  8bc2                 mov eax, edx
// 008311f8  c1e81f               shr eax, 0x1f
// 008311fb  03c2                 add eax, edx
// 008311fd  6a05                 push 5
// 008311ff  8bce                 mov ecx, esi
// 00831201  89442420             mov dword ptr [esp + 0x20], eax
// 00831205  e8f6deffff           call 0x82f100
// 0083120a  0fb6c0               movzx eax, al
// 0083120d  8d3c80               lea edi, [eax + eax*4]
// 00831210  03ff                 add edi, edi
// 00831212  03ff                 add edi, edi
// 00831214  03ff                 add edi, edi
// 00831216  b81f85eb51           mov eax, 0x51eb851f
// 0083121b  f7ef                 imul edi
// 0083121d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00831221  c1fa05               sar edx, 5
// 00831224  8bca                 mov ecx, edx
// 00831226  c1e91f               shr ecx, 0x1f
// 00831229  03ca                 add ecx, edx
// 0083122b  02c1                 add al, cl
// 0083122d  6a0d                 push 0xd
// 0083122f  8bce                 mov ecx, esi
// 00831231  88442418             mov byte ptr [esp + 0x18], al
// 00831235  e8c6deffff           call 0x82f100
// 0083123a  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0083123e  0fb6c0               movzx eax, al
// 00831241  8d3c80               lea edi, [eax + eax*4]
// 00831244  03ff                 add edi, edi
// 00831246  b81f85eb51           mov eax, 0x51eb851f
// 0083124b  f7ef                 imul edi
// 0083124d  c1fa05               sar edx, 5
// 00831250  8bc2                 mov eax, edx
// 00831252  c1e81f               shr eax, 0x1f
// 00831255  03c2                 add eax, edx
// 00831257  02c8                 add cl, al
// 00831259  0fb6c9               movzx ecx, cl
// 0083125c  0bd9                 or ebx, ecx
// 0083125e  6a0f                 push 0xf
// 00831260  8bce                 mov ecx, esi
// 00831262  899efc010000         mov dword ptr [esi + 0x1fc], ebx
// 00831268  e893deffff           call 0x82f100
// 0083126d  8bd8                 mov ebx, eax
// 0083126f  8bd3                 mov edx, ebx
// 00831271  c1ea08               shr edx, 8
// 00831274  c1e810               shr eax, 0x10
// 00831277  0fb6ca               movzx ecx, dl
// 0083127a  0fb6fb               movzx edi, bl
// 0083127d  3bf9                 cmp edi, ecx
// 0083127f  0fb6d0               movzx edx, al
// 00831282  894c2424             mov dword ptr [esp + 0x24], ecx
// 00831286  89542428             mov dword ptr [esp + 0x28], edx
// 0083128a  8bc7                 mov eax, edi
// 0083128c  7f02                 jg 0x831290
// 0083128e  8bc1                 mov eax, ecx
// 00831290  3bc2                 cmp eax, edx
// 00831292  7e12                 jle 0x8312a6
// 00831294  3bf9                 cmp edi, ecx
// 00831296  7e08                 jle 0x8312a0
// 00831298  8bc7                 mov eax, edi
// 0083129a  89442414             mov dword ptr [esp + 0x14], eax
// 0083129e  eb0e                 jmp 0x8312ae
// 008312a0  894c2414             mov dword ptr [esp + 0x14], ecx
// 008312a4  eb04                 jmp 0x8312aa
// 008312a6  89542414             mov dword ptr [esp + 0x14], edx
// 008312aa  8b442414             mov eax, dword ptr [esp + 0x14]
// 008312ae  85c0                 test eax, eax
// 008312b0  750c                 jne 0x8312be
// 008312b2  c7862c02000023232300 mov dword ptr [esi + 0x22c], 0x232323
// 008312bc  eb63                 jmp 0x831321
// 008312be  bdff000000           mov ebp, 0xff
// 008312c3  2be8                 sub ebp, eax
// 008312c5  83fd23               cmp ebp, 0x23
// 008312c8  7e05                 jle 0x8312cf
// 008312ca  bd23000000           mov ebp, 0x23
// 008312cf  03e8                 add ebp, eax
// 008312d1  8bc5                 mov eax, ebp
// 008312d3  0fafc2               imul eax, edx
// 008312d6  99                   cdq 
// 008312d7  f77c2414             idiv dword ptr [esp + 0x14]
// 008312db  896c2420             mov dword ptr [esp + 0x20], ebp
// 008312df  0fb6c0               movzx eax, al
// 008312e2  c1e008               shl eax, 8
// 008312e5  8944241c             mov dword ptr [esp + 0x1c], eax
// 008312e9  8bc5                 mov eax, ebp
// 008312eb  0fafc1               imul eax, ecx
// 008312ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008312f2  99                   cdq 
// 008312f3  f7f9                 idiv ecx
// 008312f5  0fb6d0               movzx edx, al
// 008312f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008312fc  0bc2                 or eax, edx
// 008312fe  c1e008               shl eax, 8
// 00831301  8944241c             mov dword ptr [esp + 0x1c], eax
// 00831305  8bc5                 mov eax, ebp
// 00831307  0fafc7               imul eax, edi
// 0083130a  99                   cdq 
// 0083130b  f7f9                 idiv ecx
// 0083130d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00831311  bd1e000000           mov ebp, 0x1e
// 00831316  0fb6c0               movzx eax, al
// 00831319  0bc8                 or ecx, eax
// 0083131b  898e2c020000         mov dword ptr [esi + 0x22c], ecx
// 00831321  6a10                 push 0x10
// 00831323  8bce                 mov ecx, esi
// 00831325  e8d6ddffff           call 0x82f100
// 0083132a  0fb6c8               movzx ecx, al
// 0083132d  8bd0                 mov edx, eax
// 0083132f  c1e810               shr eax, 0x10
// 00831332  c1ea08               shr edx, 8
// 00831335  0fb6d2               movzx edx, dl
// 00831338  3bca                 cmp ecx, edx
// 0083133a  0fb6c0               movzx eax, al
// 0083133d  89442414             mov dword ptr [esp + 0x14], eax
// 00831341  894c2418             mov dword ptr [esp + 0x18], ecx
// 00831345  89542420             mov dword ptr [esp + 0x20], edx
// 00831349  8bc1                 mov eax, ecx
// 0083134b  7f02                 jg 0x83134f
// 0083134d  8bc2                 mov eax, edx
// 0083134f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00831353  7e08                 jle 0x83135d
// 00831355  3bca                 cmp ecx, edx
// 00831357  7f08                 jg 0x831361
// 00831359  8bca                 mov ecx, edx
// 0083135b  eb04                 jmp 0x831361
// 0083135d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00831361  85db                 test ebx, ebx
// 00831363  750c                 jne 0x831371
// 00831365  c786300200007f7f7f00 mov dword ptr [esi + 0x230], 0x7f7f7f
// 0083136f  eb64                 jmp 0x8313d5
// 00831371  85c9                 test ecx, ecx
// 00831373  7508                 jne 0x83137d
// 00831375  898e30020000         mov dword ptr [esi + 0x230], ecx
// 0083137b  eb58                 jmp 0x8313d5
// 0083137d  8d41d5               lea eax, [ecx - 0x2b]
// 00831380  33db                 xor ebx, ebx
// 00831382  85c0                 test eax, eax
// 00831384  0f9cc3               setl bl
// 00831387  4b                   dec ebx
// 00831388  23d8                 and ebx, eax
// 0083138a  8bc3                 mov eax, ebx
// 0083138c  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00831391  99                   cdq 
// 00831392  f7f9                 idiv ecx
// 00831394  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00831398  0fb6c0               movzx eax, al
// 0083139b  c1e008               shl eax, 8
// 0083139e  8944241c             mov dword ptr [esp + 0x1c], eax
// 008313a2  8bc3                 mov eax, ebx
// 008313a4  0faf442420           imul eax, dword ptr [esp + 0x20]
// 008313a9  99                   cdq 
// 008313aa  f7f9                 idiv ecx
// 008313ac  0fb6d0               movzx edx, al
// 008313af  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008313b3  0bc2                 or eax, edx
// 008313b5  c1e008               shl eax, 8
// 008313b8  89442420             mov dword ptr [esp + 0x20], eax
// 008313bc  8bc3                 mov eax, ebx
// 008313be  0faf442418           imul eax, dword ptr [esp + 0x18]
// 008313c3  99                   cdq 
// 008313c4  f7f9                 idiv ecx
// 008313c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008313ca  0fb6c0               movzx eax, al
// 008313cd  0bc8                 or ecx, eax
// 008313cf  898e30020000         mov dword ptr [esi + 0x230], ecx
// 008313d5  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 008313db  d97c2414             fnstcw word ptr [esp + 0x14]
// 008313df  8bd1                 mov edx, ecx
// 008313e1  c1ea10               shr edx, 0x10
// 008313e4  0fb6c2               movzx eax, dl
// 008313e7  89442418             mov dword ptr [esp + 0x18], eax
// 008313eb  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 008313f0  db442418             fild dword ptr [esp + 0x18]
// 008313f4  dd0578329f00         fld qword ptr [0x9f3278]
// 008313fa  0d000c0000           or eax, 0xc00
// 008313ff  89442418             mov dword ptr [esp + 0x18], eax
// 00831403  dcc9                 fmul st(1), st(0)
// 00831405  8bc1                 mov eax, ecx
// 00831407  d9c9                 fxch st(1)
// 00831409  c1e808               shr eax, 8
// 0083140c  d96c2418             fldcw word ptr [esp + 0x18]
// 00831410  0fb6c0               movzx eax, al
// 00831413  0fb6c9               movzx ecx, cl
// 00831416  db5c2418             fistp dword ptr [esp + 0x18]
// 0083141a  8a542418             mov dl, byte ptr [esp + 0x18]
// 0083141e  89442418             mov dword ptr [esp + 0x18], eax
// 00831422  0fb6d2               movzx edx, dl
// 00831425  d96c2414             fldcw word ptr [esp + 0x14]
// 00831429  c1e208               shl edx, 8
// 0083142c  83c70f               add edi, 0xf
// 0083142f  db442418             fild dword ptr [esp + 0x18]
// 00831433  d97c2414             fnstcw word ptr [esp + 0x14]
// 00831437  d8c9                 fmul st(1)
// 00831439  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0083143e  0d000c0000           or eax, 0xc00
// 00831443  89442418             mov dword ptr [esp + 0x18], eax
// 00831447  d96c2418             fldcw word ptr [esp + 0x18]
// 0083144b  db5c2418             fistp dword ptr [esp + 0x18]
// 0083144f  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 00831454  0bd0                 or edx, eax
// 00831456  894c2418             mov dword ptr [esp + 0x18], ecx
// 0083145a  d96c2414             fldcw word ptr [esp + 0x14]
// 0083145e  c1e208               shl edx, 8
// 00831461  db442418             fild dword ptr [esp + 0x18]
// 00831465  d97c2414             fnstcw word ptr [esp + 0x14]
// 00831469  dec9                 fmulp st(1)
// 0083146b  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00831470  0d000c0000           or eax, 0xc00
// 00831475  89442418             mov dword ptr [esp + 0x18], eax
// 00831479  d96c2418             fldcw word ptr [esp + 0x18]
// 0083147d  db5c2418             fistp dword ptr [esp + 0x18]
// 00831481  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 00831486  0fb6c8               movzx ecx, al
// 00831489  d96c2414             fldcw word ptr [esp + 0x14]
// 0083148d  0bd1                 or edx, ecx
// 0083148f  81ffff000000         cmp edi, 0xff
// 00831495  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 0083149b  8bd7                 mov edx, edi
// 0083149d  7c05                 jl 0x8314a4
// 0083149f  baff000000           mov edx, 0xff
// 008314a4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008314a8  83c10f               add ecx, 0xf
// 008314ab  81f9ff000000         cmp ecx, 0xff
// 008314b1  7c05                 jl 0x8314b8
// 008314b3  b9ff000000           mov ecx, 0xff
// 008314b8  8b442428             mov eax, dword ptr [esp + 0x28]
// 008314bc  83c00f               add eax, 0xf
// 008314bf  3dff000000           cmp eax, 0xff
// 008314c4  7c05                 jl 0x8314cb
// 008314c6  b8ff000000           mov eax, 0xff
// 008314cb  0fb6c0               movzx eax, al
// 008314ce  c1e008               shl eax, 8
// 008314d1  0fb6c9               movzx ecx, cl
// 008314d4  0bc1                 or eax, ecx
// 008314d6  0fb6d2               movzx edx, dl
// 008314d9  c1e008               shl eax, 8
// 008314dc  0bc2                 or eax, edx
// 008314de  55                   push ebp
// 008314df  8bce                 mov ecx, esi
// 008314e1  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008314e7  e814dcffff           call 0x82f100
// 008314ec  6a28                 push 0x28
// 008314ee  898640020000         mov dword ptr [esi + 0x240], eax
// 008314f4  e807dcffff           call 0x82f100
// 008314f9  898654020000         mov dword ptr [esi + 0x254], eax
// 008314ff  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 00831505  89865c020000         mov dword ptr [esi + 0x25c], eax
// 0083150b  e810f2ffff           call 0x830720
// 00831510  6a01                 push 1
// 00831512  8d8c2414010000       lea ecx, [esp + 0x114]
// 00831519  e822a20300           call 0x86b740
// 0083151e  6858659f00           push 0x9f6558
// 00831523  6a00                 push 0
// 00831525  8d8c2418010000       lea ecx, [esp + 0x118]
// 0083152c  c784242c01000000000000 mov dword ptr [esp + 0x12c], 0
// 00831537  e8c4a70300           call 0x86bd00
// 0083153c  8d8c2410010000       lea ecx, [esp + 0x110]
// 00831543  e878a60300           call 0x86bbc0
// 00831548  85c0                 test eax, eax
// 0083154a  741c                 je 0x831568
// 0083154c  81c650020000         add esi, 0x250
// 00831552  56                   push esi
// 00831553  68d90e0000           push 0xed9
// 00831558  6a00                 push 0
// 0083155a  6a00                 push 0
// 0083155c  8d8c2420010000       lea ecx, [esp + 0x120]
// 00831563  e848a40300           call 0x86b9b0
// 00831568  8d8c2410010000       lea ecx, [esp + 0x110]
// 0083156f  c7842424010000ffffffff mov dword ptr [esp + 0x124], 0xffffffff
// 0083157a  e891ab0300           call 0x86c110
// 0083157f  8b8c241c010000       mov ecx, dword ptr [esp + 0x11c]
// 00831586  64890d00000000       mov dword ptr fs:[0], ecx
// 0083158d  59                   pop ecx
// 0083158e  5f                   pop edi
// 0083158f  5e                   pop esi
// 00831590  5d                   pop ebp
// 00831591  5b                   pop ebx
// 00831592  81c414010000         add esp, 0x114
// 00831598  c3                   ret 
// copied from an identical function in another client (function ?RefreshColors@CXTPColorManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp