// roc 2009-12 008c07e0  unit: CXTPShadowsManager::CShadowWnd  size: 1344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c07e0
//
// 008c07e0  55                   push ebp
// 008c07e1  8bec                 mov ebp, esp
// 008c07e3  83e4c0               and esp, 0xffffffc0
// 008c07e6  6aff                 push -1
// 008c07e8  68333e9600           push 0x963e33
// 008c07ed  64a100000000         mov eax, dword ptr fs:[0]
// 008c07f3  50                   push eax
// 008c07f4  81ece8000000         sub esp, 0xe8
// 008c07fa  53                   push ebx
// 008c07fb  56                   push esi
// 008c07fc  57                   push edi
// 008c07fd  a10052b600           mov eax, dword ptr [0xb65200]
// 008c0802  33c4                 xor eax, esp
// 008c0804  50                   push eax
// 008c0805  8d8424f8000000       lea eax, [esp + 0xf8]
// 008c080c  64a300000000         mov dword ptr fs:[0], eax
// 008c0812  8bd9                 mov ebx, ecx
// 008c0814  895c2440             mov dword ptr [esp + 0x40], ebx
// 008c0818  e81336f3ff           call 0x7f3e30
// 008c081d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008c0820  85f6                 test esi, esi
// 008c0822  0f84e0040000         je 0x8c0d08
// 008c0828  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 008c082b  85ff                 test edi, edi
// 008c082d  0f84d5040000         je 0x8c0d08
// 008c0833  e878fcffff           call 0x8c04b0
// 008c0838  83782000             cmp dword ptr [eax + 0x20], 0
// 008c083c  0f84c6040000         je 0x8c0d08
// 008c0842  e869fcffff           call 0x8c04b0
// 008c0847  33c9                 xor ecx, ecx
// 008c0849  3908                 cmp dword ptr [eax], ecx
// 008c084b  0f84b7040000         je 0x8c0d08
// 008c0851  394b68               cmp dword ptr [ebx + 0x68], ecx
// 008c0854  0f84ae040000         je 0x8c0d08
// 008c085a  884c2458             mov byte ptr [esp + 0x58], cl
// 008c085e  884c2459             mov byte ptr [esp + 0x59], cl
// 008c0862  894c2474             mov dword ptr [esp + 0x74], ecx
// 008c0866  894c2478             mov dword ptr [esp + 0x78], ecx
// 008c086a  53                   push ebx
// 008c086b  8d8c2488000000       lea ecx, [esp + 0x88]
// 008c0872  c644245eff           mov byte ptr [esp + 0x5e], 0xff
// 008c0877  c644245f01           mov byte ptr [esp + 0x5f], 1
// 008c087c  e8553ef3ff           call 0x7f46d6
// 008c0881  8d4c2464             lea ecx, [esp + 0x64]
// 008c0885  c784240001000000000000 mov dword ptr [esp + 0x100], 0
// 008c0890  e8195c0600           call 0x9264ae
// 008c0895  8d842484000000       lea eax, [esp + 0x84]
// 008c089c  50                   push eax
// 008c089d  8d4c2468             lea ecx, [esp + 0x68]
// 008c08a1  c684240401000001     mov byte ptr [esp + 0x104], 1
// 008c08a9  e872d8f3ff           call 0x7fe120
// 008c08ae  6a2c                 push 0x2c
// 008c08b0  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008c08b7  6a00                 push 0
// 008c08b9  51                   push ecx
// 008c08ba  e8e541f3ff           call 0x7f4aa4
// 008c08bf  8bce                 mov ecx, esi
// 008c08c1  0fafcf               imul ecx, edi
// 008c08c4  83c40c               add esp, 0xc
// 008c08c7  b820000000           mov eax, 0x20
// 008c08cc  66898424a6000000     mov word ptr [esp + 0xa6], ax
// 008c08d4  33c0                 xor eax, eax
// 008c08d6  50                   push eax
// 008c08d7  50                   push eax
// 008c08d8  ba01000000           mov edx, 1
// 008c08dd  66899424ac000000     mov word ptr [esp + 0xac], dx
// 008c08e5  8d542444             lea edx, [esp + 0x44]
// 008c08e9  52                   push edx
// 008c08ea  03c9                 add ecx, ecx
// 008c08ec  50                   push eax
// 008c08ed  03c9                 add ecx, ecx
// 008c08ef  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 008c08f6  8944244c             mov dword ptr [esp + 0x4c], eax
// 008c08fa  8d8424a8000000       lea eax, [esp + 0xa8]
// 008c0901  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 008c0908  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008c090f  50                   push eax
// 008c0910  51                   push ecx
// 008c0911  c78424b000000028000000 mov dword ptr [esp + 0xb0], 0x28
// 008c091c  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 008c0923  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 008c092a  ff1560b19800         call dword ptr [0x98b160]
// 008c0930  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008c0935  89442460             mov dword ptr [esp + 0x60], eax
// 008c0939  0f84a1030000         je 0x8c0ce0
// 008c093f  85c0                 test eax, eax
// 008c0941  0f8499030000         je 0x8c0ce0
// 008c0947  8b4b68               mov ecx, dword ptr [ebx + 0x68]
// 008c094a  e8413cf4ff           call 0x804590
// 008c094f  8b4020               mov eax, dword ptr [eax + 0x20]
// 008c0952  0fb6d0               movzx edx, al
// 008c0955  8bc8                 mov ecx, eax
// 008c0957  c1e810               shr eax, 0x10
// 008c095a  c1e908               shr ecx, 8
// 008c095d  0fb6c0               movzx eax, al
// 008c0960  89542450             mov dword ptr [esp + 0x50], edx
// 008c0964  0fb6d1               movzx edx, cl
// 008c0967  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 008c096a  8944244c             mov dword ptr [esp + 0x4c], eax
// 008c096e  80e101               and cl, 1
// 008c0971  0fbec1               movsx eax, cl
// 008c0974  f7d8                 neg eax
// 008c0976  1bc0                 sbb eax, eax
// 008c0978  83c002               add eax, 2
// 008c097b  89442438             mov dword ptr [esp + 0x38], eax
// 008c097f  69c000000003         imul eax, eax, 0x3000000
// 008c0985  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008c0989  89542454             mov dword ptr [esp + 0x54], edx
// 008c098d  89442448             mov dword ptr [esp + 0x48], eax
// 008c0991  8bd8                 mov ebx, eax
// 008c0993  0f851c010000         jne 0x8c0ab5
// 008c0999  8bce                 mov ecx, esi
// 008c099b  f7d9                 neg ecx
// 008c099d  03c9                 add ecx, ecx
// 008c099f  03c9                 add ecx, ecx
// 008c09a1  4f                   dec edi
// 008c09a2  0faffe               imul edi, esi
// 008c09a5  8d14bd0c000000       lea edx, [edi*4 + 0xc]
// 008c09ac  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008c09b0  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008c09b8  89542428             mov dword ptr [esp + 0x28], edx
// 008c09bc  c744243404000000     mov dword ptr [esp + 0x34], 4
// 008c09c4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008c09c8  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008c09cc  89442430             mov dword ptr [esp + 0x30], eax
// 008c09d0  8bf3                 mov esi, ebx
// 008c09d2  c744244404000000     mov dword ptr [esp + 0x44], 4
// 008c09da  db442430             fild dword ptr [esp + 0x30]
// 008c09de  83ec08               sub esp, 8
// 008c09e1  8d4c2454             lea ecx, [esp + 0x54]
// 008c09e5  8d54245c             lea edx, [esp + 0x5c]
// 008c09e9  dc3598979e00         fdiv qword ptr [0x9e9798]
// 008c09ef  8d442458             lea eax, [esp + 0x58]
// 008c09f3  dd1c24               fstp qword ptr [esp]
// 008c09f6  51                   push ecx
// 008c09f7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008c09fb  52                   push edx
// 008c09fc  50                   push eax
// 008c09fd  e82e250200           call 0x8e2f30
// 008c0a02  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c0a06  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008c0a0a  01542430             add dword ptr [esp + 0x30], edx
// 008c0a0e  03c6                 add eax, esi
// 008c0a10  89040f               mov dword ptr [edi + ecx], eax
// 008c0a13  037c245c             add edi, dword ptr [esp + 0x5c]
// 008c0a17  03f3                 add esi, ebx
// 008c0a19  836c244401           sub dword ptr [esp + 0x44], 1
// 008c0a1e  75ba                 jne 0x8c09da
// 008c0a20  035c2448             add ebx, dword ptr [esp + 0x48]
// 008c0a24  836c242804           sub dword ptr [esp + 0x28], 4
// 008c0a29  b801000000           mov eax, 1
// 008c0a2e  0144242c             add dword ptr [esp + 0x2c], eax
// 008c0a32  29442434             sub dword ptr [esp + 0x34], eax
// 008c0a36  758c                 jne 0x8c09c4
// 008c0a38  8d7802               lea edi, [eax + 2]
// 008c0a3b  89442428             mov dword ptr [esp + 0x28], eax
// 008c0a3f  db442428             fild dword ptr [esp + 0x28]
// 008c0a43  83ec08               sub esp, 8
// 008c0a46  8d442454             lea eax, [esp + 0x54]
// 008c0a4a  8d4c245c             lea ecx, [esp + 0x5c]
// 008c0a4e  dc0d30e39b00         fmul qword ptr [0x9be330]
// 008c0a54  8d542458             lea edx, [esp + 0x58]
// 008c0a58  dd1c24               fstp qword ptr [esp]
// 008c0a5b  50                   push eax
// 008c0a5c  51                   push ecx
// 008c0a5d  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008c0a61  52                   push edx
// 008c0a62  e8c9240200           call 0x8e2f30
// 008c0a67  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008c0a6a  b904000000           mov ecx, 4
// 008c0a6f  2bcf                 sub ecx, edi
// 008c0a71  0faf4c2438           imul ecx, dword ptr [esp + 0x38]
// 008c0a76  69c90000000f         imul ecx, ecx, 0xf000000
// 008c0a7c  83c2fc               add edx, -4
// 008c0a7f  03c1                 add eax, ecx
// 008c0a81  85d2                 test edx, edx
// 008c0a83  7e1c                 jle 0x8c0aa1
// 008c0a85  8b750c               mov esi, dword ptr [ebp + 0xc]
// 008c0a88  03f6                 add esi, esi
// 008c0a8a  03f6                 add esi, esi
// 008c0a8c  8d0cbd00000000       lea ecx, [edi*4]
// 008c0a93  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008c0a97  890419               mov dword ptr [ecx + ebx], eax
// 008c0a9a  03ce                 add ecx, esi
// 008c0a9c  83ea01               sub edx, 1
// 008c0a9f  75f2                 jne 0x8c0a93
// 008c0aa1  8b442428             mov eax, dword ptr [esp + 0x28]
// 008c0aa5  40                   inc eax
// 008c0aa6  4f                   dec edi
// 008c0aa7  83f804               cmp eax, 4
// 008c0aaa  89442428             mov dword ptr [esp + 0x28], eax
// 008c0aae  7e8f                 jle 0x8c0a3f
// 008c0ab0  e9af010000           jmp 0x8c0c64
// 008c0ab5  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008c0abd  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008c0ac5  c744244404000000     mov dword ptr [esp + 0x44], 4
// 008c0acd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008c0ad1  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008c0ad5  89542428             mov dword ptr [esp + 0x28], edx
// 008c0ad9  8bf3                 mov esi, ebx
// 008c0adb  c744243404000000     mov dword ptr [esp + 0x34], 4
// 008c0ae3  db442428             fild dword ptr [esp + 0x28]
// 008c0ae7  83ec08               sub esp, 8
// 008c0aea  8d442454             lea eax, [esp + 0x54]
// 008c0aee  8d4c245c             lea ecx, [esp + 0x5c]
// 008c0af2  dc3598979e00         fdiv qword ptr [0x9e9798]
// 008c0af8  8d542458             lea edx, [esp + 0x58]
// 008c0afc  dd1c24               fstp qword ptr [esp]
// 008c0aff  50                   push eax
// 008c0b00  51                   push ecx
// 008c0b01  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008c0b05  52                   push edx
// 008c0b06  e825240200           call 0x8e2f30
// 008c0b0b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c0b0f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008c0b13  01542428             add dword ptr [esp + 0x28], edx
// 008c0b17  03c6                 add eax, esi
// 008c0b19  89040f               mov dword ptr [edi + ecx], eax
// 008c0b1c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008c0b1f  03c0                 add eax, eax
// 008c0b21  03c0                 add eax, eax
// 008c0b23  03f3                 add esi, ebx
// 008c0b25  03f8                 add edi, eax
// 008c0b27  836c243401           sub dword ptr [esp + 0x34], 1
// 008c0b2c  75b5                 jne 0x8c0ae3
// 008c0b2e  035c2448             add ebx, dword ptr [esp + 0x48]
// 008c0b32  8344243004           add dword ptr [esp + 0x30], 4
// 008c0b37  b801000000           mov eax, 1
// 008c0b3c  0144242c             add dword ptr [esp + 0x2c], eax
// 008c0b40  29442444             sub dword ptr [esp + 0x44], eax
// 008c0b44  7587                 jne 0x8c0acd
// 008c0b46  8b742438             mov esi, dword ptr [esp + 0x38]
// 008c0b4a  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008c0b4d  33c0                 xor eax, eax
// 008c0b4f  69f60000000f         imul esi, esi, 0xf000000
// 008c0b55  c744242810000000     mov dword ptr [esp + 0x28], 0x10
// 008c0b5d  8bde                 mov ebx, esi
// 008c0b5f  40                   inc eax
// 008c0b60  89442438             mov dword ptr [esp + 0x38], eax
// 008c0b64  db442438             fild dword ptr [esp + 0x38]
// 008c0b68  83ec08               sub esp, 8
// 008c0b6b  8d442454             lea eax, [esp + 0x54]
// 008c0b6f  8d4c245c             lea ecx, [esp + 0x5c]
// 008c0b73  dc0d30e39b00         fmul qword ptr [0x9be330]
// 008c0b79  8d542458             lea edx, [esp + 0x58]
// 008c0b7d  dd1c24               fstp qword ptr [esp]
// 008c0b80  50                   push eax
// 008c0b81  51                   push ecx
// 008c0b82  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008c0b86  52                   push edx
// 008c0b87  e8a4230200           call 0x8e2f30
// 008c0b8c  8d57fc               lea edx, [edi - 4]
// 008c0b8f  03c3                 add eax, ebx
// 008c0b91  83fa04               cmp edx, 4
// 008c0b94  7e1c                 jle 0x8c0bb2
// 008c0b96  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c0b9a  83c2fc               add edx, -4
// 008c0b9d  8d4900               lea ecx, [ecx]
// 008c0ba0  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008c0ba4  890439               mov dword ptr [ecx + edi], eax
// 008c0ba7  83c104               add ecx, 4
// 008c0baa  83ea01               sub edx, 1
// 008c0bad  75f1                 jne 0x8c0ba0
// 008c0baf  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008c0bb2  8b442438             mov eax, dword ptr [esp + 0x38]
// 008c0bb6  8d0cbd00000000       lea ecx, [edi*4]
// 008c0bbd  014c2428             add dword ptr [esp + 0x28], ecx
// 008c0bc1  03de                 add ebx, esi
// 008c0bc3  83f804               cmp eax, 4
// 008c0bc6  7c97                 jl 0x8c0b5f
// 008c0bc8  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008c0bcc  8d04bd00000000       lea eax, [edi*4]
// 008c0bd3  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008c0bdb  89442430             mov dword ptr [esp + 0x30], eax
// 008c0bdf  c744243404000000     mov dword ptr [esp + 0x34], 4
// 008c0be7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008c0beb  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008c0bef  89442428             mov dword ptr [esp + 0x28], eax
// 008c0bf3  8bf3                 mov esi, ebx
// 008c0bf5  c744243804000000     mov dword ptr [esp + 0x38], 4
// 008c0bfd  8d4900               lea ecx, [ecx]
// 008c0c00  db442428             fild dword ptr [esp + 0x28]
// 008c0c04  83ec08               sub esp, 8
// 008c0c07  8d4c2454             lea ecx, [esp + 0x54]
// 008c0c0b  8d54245c             lea edx, [esp + 0x5c]
// 008c0c0f  dc3598979e00         fdiv qword ptr [0x9e9798]
// 008c0c15  8d442458             lea eax, [esp + 0x58]
// 008c0c19  dd1c24               fstp qword ptr [esp]
// 008c0c1c  51                   push ecx
// 008c0c1d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008c0c21  52                   push edx
// 008c0c22  50                   push eax
// 008c0c23  e808230200           call 0x8e2f30
// 008c0c28  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c0c2c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008c0c30  01542428             add dword ptr [esp + 0x28], edx
// 008c0c34  03c6                 add eax, esi
// 008c0c36  89440ffc             mov dword ptr [edi + ecx - 4], eax
// 008c0c3a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008c0c3d  03c0                 add eax, eax
// 008c0c3f  03c0                 add eax, eax
// 008c0c41  03f3                 add esi, ebx
// 008c0c43  03f8                 add edi, eax
// 008c0c45  836c243801           sub dword ptr [esp + 0x38], 1
// 008c0c4a  75b4                 jne 0x8c0c00
// 008c0c4c  035c2448             add ebx, dword ptr [esp + 0x48]
// 008c0c50  836c243004           sub dword ptr [esp + 0x30], 4
// 008c0c55  b801000000           mov eax, 1
// 008c0c5a  0144242c             add dword ptr [esp + 0x2c], eax
// 008c0c5e  29442434             sub dword ptr [esp + 0x34], eax
// 008c0c62  7583                 jne 0x8c0be7
// 008c0c64  8b442460             mov eax, dword ptr [esp + 0x60]
// 008c0c68  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008c0c6c  8b354cb19800         mov esi, dword ptr [0x98b14c]
// 008c0c72  50                   push eax
// 008c0c73  51                   push ecx
// 008c0c74  ffd6                 call esi
// 008c0c76  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008c0c79  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008c0c7d  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008c0c81  8bf8                 mov edi, eax
// 008c0c83  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008c0c86  8954247c             mov dword ptr [esp + 0x7c], edx
// 008c0c8a  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008c0c8d  89842480000000       mov dword ptr [esp + 0x80], eax
// 008c0c94  8954245c             mov dword ptr [esp + 0x5c], edx
// 008c0c98  e813f8ffff           call 0x8c04b0
// 008c0c9d  8b00                 mov eax, dword ptr [eax]
// 008c0c9f  6a02                 push 2
// 008c0ca1  8d4c245c             lea ecx, [esp + 0x5c]
// 008c0ca5  51                   push ecx
// 008c0ca6  6a00                 push 0
// 008c0ca8  8d942480000000       lea edx, [esp + 0x80]
// 008c0caf  52                   push edx
// 008c0cb0  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008c0cb4  53                   push ebx
// 008c0cb5  8d8c2490000000       lea ecx, [esp + 0x90]
// 008c0cbc  51                   push ecx
// 008c0cbd  6a00                 push 0
// 008c0cbf  6a00                 push 0
// 008c0cc1  52                   push edx
// 008c0cc2  ffd0                 call eax
// 008c0cc4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008c0cc8  57                   push edi
// 008c0cc9  51                   push ecx
// 008c0cca  ffd6                 call esi
// 008c0ccc  8b542460             mov edx, dword ptr [esp + 0x60]
// 008c0cd0  52                   push edx
// 008c0cd1  ff153cb19800         call dword ptr [0x98b13c]
// 008c0cd7  8d4c2464             lea ecx, [esp + 0x64]
// 008c0cdb  e8965c0600           call 0x926976
// 008c0ce0  8d4c2464             lea ecx, [esp + 0x64]
// 008c0ce4  c684240001000000     mov byte ptr [esp + 0x100], 0
// 008c0cec  e8b7570600           call 0x9264a8
// 008c0cf1  8d8c2484000000       lea ecx, [esp + 0x84]
// 008c0cf8  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 008c0d03  e8c839f3ff           call 0x7f46d0
// 008c0d08  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 008c0d0f  64890d00000000       mov dword ptr fs:[0], ecx
// 008c0d16  59                   pop ecx
// 008c0d17  5f                   pop edi
// 008c0d18  5e                   pop esi
// 008c0d19  5b                   pop ebx
// 008c0d1a  8be5                 mov esp, ebp
// 008c0d1c  5d                   pop ebp
// 008c0d1d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CShadowWnd@CXTPShadowsManager@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp