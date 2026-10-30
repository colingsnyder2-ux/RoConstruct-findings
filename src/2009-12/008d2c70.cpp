// roc 2009-12 008d2c70  unit: CXTPTabPaintManager  size: 1384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d2c70
//
// 008d2c70  83ec5c               sub esp, 0x5c
// 008d2c73  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008d2c77  53                   push ebx
// 008d2c78  55                   push ebp
// 008d2c79  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 008d2c7d  56                   push esi
// 008d2c7e  57                   push edi
// 008d2c7f  8bf9                 mov edi, ecx
// 008d2c81  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008d2c85  83ec10               sub esp, 0x10
// 008d2c88  8bc4                 mov eax, esp
// 008d2c8a  8908                 mov dword ptr [eax], ecx
// 008d2c8c  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d2c93  895004               mov dword ptr [eax + 4], edx
// 008d2c96  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d2c9d  894808               mov dword ptr [eax + 8], ecx
// 008d2ca0  89500c               mov dword ptr [eax + 0xc], edx
// 008d2ca3  55                   push ebp
// 008d2ca4  8d442470             lea eax, [esp + 0x70]
// 008d2ca8  50                   push eax
// 008d2ca9  8bcf                 mov ecx, edi
// 008d2cab  897c2454             mov dword ptr [esp + 0x54], edi
// 008d2caf  e83cfcffff           call 0x8d28f0
// 008d2cb4  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 008d2cb8  8b08                 mov ecx, dword ptr [eax]
// 008d2cba  894d24               mov dword ptr [ebp + 0x24], ecx
// 008d2cbd  8b5004               mov edx, dword ptr [eax + 4]
// 008d2cc0  895528               mov dword ptr [ebp + 0x28], edx
// 008d2cc3  8b4808               mov ecx, dword ptr [eax + 8]
// 008d2cc6  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 008d2cc9  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d2ccc  895530               mov dword ptr [ebp + 0x30], edx
// 008d2ccf  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 008d2cd6  0f84f2040000         je 0x8d31ce
// 008d2cdc  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d2ce2  8b01                 mov eax, dword ptr [ecx]
// 008d2ce4  8b4010               mov eax, dword ptr [eax + 0x10]
// 008d2ce7  8d54244c             lea edx, [esp + 0x4c]
// 008d2ceb  52                   push edx
// 008d2cec  ffd0                 call eax
// 008d2cee  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d2cf4  8b11                 mov edx, dword ptr [ecx]
// 008d2cf6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d2cf9  55                   push ebp
// 008d2cfa  ffd0                 call eax
// 008d2cfc  8b5500               mov edx, dword ptr [ebp]
// 008d2cff  8bf0                 mov esi, eax
// 008d2d01  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2d04  8bcd                 mov ecx, ebp
// 008d2d06  ffd0                 call eax
// 008d2d08  83f802               cmp eax, 2
// 008d2d0b  7412                 je 0x8d2d1f
// 008d2d0d  8b5500               mov edx, dword ptr [ebp]
// 008d2d10  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2d13  8bcd                 mov ecx, ebp
// 008d2d15  ffd0                 call eax
// 008d2d17  85c0                 test eax, eax
// 008d2d19  0f8536020000         jne 0x8d2f55
// 008d2d1f  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 008d2d22  2b5d24               sub ebx, dword ptr [ebp + 0x24]
// 008d2d25  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d2d29  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 008d2d2d  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 008d2d31  53                   push ebx
// 008d2d32  51                   push ecx
// 008d2d33  55                   push ebp
// 008d2d34  8bcf                 mov ecx, edi
// 008d2d36  895c2438             mov dword ptr [esp + 0x38], ebx
// 008d2d3a  e821feffff           call 0x8d2b60
// 008d2d3f  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 008d2d45  8b4204               mov eax, dword ptr [edx + 4]
// 008d2d48  8b5500               mov edx, dword ptr [ebp]
// 008d2d4b  89442410             mov dword ptr [esp + 0x10], eax
// 008d2d4f  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2d52  8bcd                 mov ecx, ebp
// 008d2d54  ffd0                 call eax
// 008d2d56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d2d5a  83f802               cmp eax, 2
// 008d2d5d  7523                 jne 0x8d2d82
// 008d2d5f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d2d65  8d41ff               lea eax, [ecx - 1]
// 008d2d68  0fafce               imul ecx, esi
// 008d2d6b  0faf4214             imul eax, dword ptr [edx + 0x14]
// 008d2d6f  8bd0                 mov edx, eax
// 008d2d71  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d2d78  2bc2                 sub eax, edx
// 008d2d7a  2bc1                 sub eax, ecx
// 008d2d7c  2b442450             sub eax, dword ptr [esp + 0x50]
// 008d2d80  eb17                 jmp 0x8d2d99
// 008d2d82  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008d2d88  8b4014               mov eax, dword ptr [eax + 0x14]
// 008d2d8b  03c6                 add eax, esi
// 008d2d8d  49                   dec ecx
// 008d2d8e  0fafc1               imul eax, ecx
// 008d2d91  0344247c             add eax, dword ptr [esp + 0x7c]
// 008d2d95  03442450             add eax, dword ptr [esp + 0x50]
// 008d2d99  8b5500               mov edx, dword ptr [ebp]
// 008d2d9c  89442474             mov dword ptr [esp + 0x74], eax
// 008d2da0  03c6                 add eax, esi
// 008d2da2  89442424             mov dword ptr [esp + 0x24], eax
// 008d2da6  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2da9  8bcd                 mov ecx, ebp
// 008d2dab  ffd0                 call eax
// 008d2dad  83f802               cmp eax, 2
// 008d2db0  750d                 jne 0x8d2dbf
// 008d2db2  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d2db8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008d2dbb  03c6                 add eax, esi
// 008d2dbd  eb0d                 jmp 0x8d2dcc
// 008d2dbf  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d2dc5  8b4214               mov eax, dword ptr [edx + 0x14]
// 008d2dc8  03c6                 add eax, esi
// 008d2dca  f7d8                 neg eax
// 008d2dcc  89442438             mov dword ptr [esp + 0x38], eax
// 008d2dd0  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008d2dd6  8b30                 mov esi, dword ptr [eax]
// 008d2dd8  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d2ddc  83f801               cmp eax, 1
// 008d2ddf  89742440             mov dword ptr [esp + 0x40], esi
// 008d2de3  7e11                 jle 0x8d2df6
// 008d2de5  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 008d2dec  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008d2df4  7508                 jne 0x8d2dfe
// 008d2df6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d2dfe  33d2                 xor edx, edx
// 008d2e00  89542428             mov dword ptr [esp + 0x28], edx
// 008d2e04  85c0                 test eax, eax
// 008d2e06  0f8e78030000         jle 0x8d3184
// 008d2e0c  eb0a                 jmp 0x8d2e18
// 008d2e0e  8bff                 mov edi, edi
// 008d2e10  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008d2e14  8b742440             mov esi, dword ptr [esp + 0x40]
// 008d2e18  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 008d2e1b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 008d2e1f  2bc1                 sub eax, ecx
// 008d2e21  33ff                 xor edi, edi
// 008d2e23  40                   inc eax
// 008d2e24  897c2470             mov dword ptr [esp + 0x70], edi
// 008d2e28  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d2e2c  89442444             mov dword ptr [esp + 0x44], eax
// 008d2e30  397c2414             cmp dword ptr [esp + 0x14], edi
// 008d2e34  7438                 je 0x8d2e6e
// 008d2e36  33f6                 xor esi, esi
// 008d2e38  85c0                 test eax, eax
// 008d2e3a  7e32                 jle 0x8d2e6e
// 008d2e3c  8d1c8d00000000       lea ebx, [ecx*4]
// 008d2e43  85c9                 test ecx, ecx
// 008d2e45  7c0d                 jl 0x8d2e54
// 008d2e47  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d2e4a  7d08                 jge 0x8d2e54
// 008d2e4c  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d2e4f  8b1413               mov edx, dword ptr [ebx + edx]
// 008d2e52  eb02                 jmp 0x8d2e56
// 008d2e54  33d2                 xor edx, edx
// 008d2e56  037a20               add edi, dword ptr [edx + 0x20]
// 008d2e59  46                   inc esi
// 008d2e5a  83c304               add ebx, 4
// 008d2e5d  41                   inc ecx
// 008d2e5e  3bf0                 cmp esi, eax
// 008d2e60  897c2470             mov dword ptr [esp + 0x70], edi
// 008d2e64  7cdd                 jl 0x8d2e43
// 008d2e66  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d2e6a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008d2e6e  895c2418             mov dword ptr [esp + 0x18], ebx
// 008d2e72  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 008d2e75  035c244c             add ebx, dword ptr [esp + 0x4c]
// 008d2e79  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008d2e81  85c0                 test eax, eax
// 008d2e83  0f8ea8000000         jle 0x8d2f31
// 008d2e89  8d148d00000000       lea edx, [ecx*4]
// 008d2e90  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d2e94  89442420             mov dword ptr [esp + 0x20], eax
// 008d2e98  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d2e9c  8d642400             lea esp, [esp]
// 008d2ea0  85c9                 test ecx, ecx
// 008d2ea2  7c6e                 jl 0x8d2f12
// 008d2ea4  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d2ea7  7d69                 jge 0x8d2f12
// 008d2ea9  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d2eac  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d2eb0  8b3416               mov esi, dword ptr [esi + edx]
// 008d2eb3  85f6                 test esi, esi
// 008d2eb5  745b                 je 0x8d2f12
// 008d2eb7  837c241400           cmp dword ptr [esp + 0x14], 0
// 008d2ebc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008d2ebf  741a                 je 0x8d2edb
// 008d2ec1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d2ec5  2bc7                 sub eax, edi
// 008d2ec7  99                   cdq 
// 008d2ec8  f77c2420             idiv dword ptr [esp + 0x20]
// 008d2ecc  03c1                 add eax, ecx
// 008d2ece  29442418             sub dword ptr [esp + 0x18], eax
// 008d2ed2  294c2470             sub dword ptr [esp + 0x70], ecx
// 008d2ed6  8bc8                 mov ecx, eax
// 008d2ed8  894620               mov dword ptr [esi + 0x20], eax
// 008d2edb  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d2edf  8d3c19               lea edi, [ecx + ebx]
// 008d2ee2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d2ee6  83ec10               sub esp, 0x10
// 008d2ee9  8bc4                 mov eax, esp
// 008d2eeb  8918                 mov dword ptr [eax], ebx
// 008d2eed  894804               mov dword ptr [eax + 4], ecx
// 008d2ef0  897808               mov dword ptr [eax + 8], edi
// 008d2ef3  8bce                 mov ecx, esi
// 008d2ef5  89500c               mov dword ptr [eax + 0xc], edx
// 008d2ef8  e803b9ffff           call 0x8ce800
// 008d2efd  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d2f01  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d2f05  894664               mov dword ptr [esi + 0x64], eax
// 008d2f08  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d2f0c  8bdf                 mov ebx, edi
// 008d2f0e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008d2f12  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d2f16  8344241c04           add dword ptr [esp + 0x1c], 4
// 008d2f1b  ff4c2420             dec dword ptr [esp + 0x20]
// 008d2f1f  42                   inc edx
// 008d2f20  41                   inc ecx
// 008d2f21  3bd0                 cmp edx, eax
// 008d2f23  89542430             mov dword ptr [esp + 0x30], edx
// 008d2f27  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d2f2b  0f8c6fffffff         jl 0x8d2ea0
// 008d2f31  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d2f35  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d2f39  01442474             add dword ptr [esp + 0x74], eax
// 008d2f3d  01442424             add dword ptr [esp + 0x24], eax
// 008d2f41  42                   inc edx
// 008d2f42  3b542410             cmp edx, dword ptr [esp + 0x10]
// 008d2f46  89542428             mov dword ptr [esp + 0x28], edx
// 008d2f4a  0f8cc0feffff         jl 0x8d2e10
// 008d2f50  e92b020000           jmp 0x8d3180
// 008d2f55  8b5d30               mov ebx, dword ptr [ebp + 0x30]
// 008d2f58  2b5d28               sub ebx, dword ptr [ebp + 0x28]
// 008d2f5b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d2f5f  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 008d2f63  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 008d2f67  53                   push ebx
// 008d2f68  51                   push ecx
// 008d2f69  55                   push ebp
// 008d2f6a  8bcf                 mov ecx, edi
// 008d2f6c  895c2444             mov dword ptr [esp + 0x44], ebx
// 008d2f70  e8ebfbffff           call 0x8d2b60
// 008d2f75  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 008d2f7b  8b4204               mov eax, dword ptr [edx + 4]
// 008d2f7e  8b5500               mov edx, dword ptr [ebp]
// 008d2f81  89442410             mov dword ptr [esp + 0x10], eax
// 008d2f85  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2f88  8bcd                 mov ecx, ebp
// 008d2f8a  ffd0                 call eax
// 008d2f8c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d2f90  83f803               cmp eax, 3
// 008d2f93  7523                 jne 0x8d2fb8
// 008d2f95  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d2f9b  8d41ff               lea eax, [ecx - 1]
// 008d2f9e  0fafce               imul ecx, esi
// 008d2fa1  0faf4214             imul eax, dword ptr [edx + 0x14]
// 008d2fa5  8bd0                 mov edx, eax
// 008d2fa7  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008d2fae  2bc2                 sub eax, edx
// 008d2fb0  2bc1                 sub eax, ecx
// 008d2fb2  2b442450             sub eax, dword ptr [esp + 0x50]
// 008d2fb6  eb17                 jmp 0x8d2fcf
// 008d2fb8  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008d2fbe  8b4014               mov eax, dword ptr [eax + 0x14]
// 008d2fc1  03c6                 add eax, esi
// 008d2fc3  49                   dec ecx
// 008d2fc4  0fafc1               imul eax, ecx
// 008d2fc7  03442478             add eax, dword ptr [esp + 0x78]
// 008d2fcb  03442450             add eax, dword ptr [esp + 0x50]
// 008d2fcf  8b5500               mov edx, dword ptr [ebp]
// 008d2fd2  89442474             mov dword ptr [esp + 0x74], eax
// 008d2fd6  03c6                 add eax, esi
// 008d2fd8  89442418             mov dword ptr [esp + 0x18], eax
// 008d2fdc  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d2fdf  8bcd                 mov ecx, ebp
// 008d2fe1  ffd0                 call eax
// 008d2fe3  83f803               cmp eax, 3
// 008d2fe6  750d                 jne 0x8d2ff5
// 008d2fe8  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d2fee  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008d2ff1  03c6                 add eax, esi
// 008d2ff3  eb0d                 jmp 0x8d3002
// 008d2ff5  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d2ffb  8b4214               mov eax, dword ptr [edx + 0x14]
// 008d2ffe  03c6                 add eax, esi
// 008d3000  f7d8                 neg eax
// 008d3002  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d3006  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008d300c  8b30                 mov esi, dword ptr [eax]
// 008d300e  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d3012  83f801               cmp eax, 1
// 008d3015  89742444             mov dword ptr [esp + 0x44], esi
// 008d3019  7e11                 jle 0x8d302c
// 008d301b  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 008d3022  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008d302a  7508                 jne 0x8d3034
// 008d302c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008d3034  33d2                 xor edx, edx
// 008d3036  89542414             mov dword ptr [esp + 0x14], edx
// 008d303a  85c0                 test eax, eax
// 008d303c  0f8e42010000         jle 0x8d3184
// 008d3042  eb08                 jmp 0x8d304c
// 008d3044  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d3048  8b742444             mov esi, dword ptr [esp + 0x44]
// 008d304c  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 008d304f  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 008d3053  2bc1                 sub eax, ecx
// 008d3055  33ff                 xor edi, edi
// 008d3057  40                   inc eax
// 008d3058  897c2470             mov dword ptr [esp + 0x70], edi
// 008d305c  894c2440             mov dword ptr [esp + 0x40], ecx
// 008d3060  89442448             mov dword ptr [esp + 0x48], eax
// 008d3064  397c2428             cmp dword ptr [esp + 0x28], edi
// 008d3068  7438                 je 0x8d30a2
// 008d306a  33f6                 xor esi, esi
// 008d306c  85c0                 test eax, eax
// 008d306e  7e32                 jle 0x8d30a2
// 008d3070  8d1c8d00000000       lea ebx, [ecx*4]
// 008d3077  85c9                 test ecx, ecx
// 008d3079  7c0d                 jl 0x8d3088
// 008d307b  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d307e  7d08                 jge 0x8d3088
// 008d3080  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d3083  8b1413               mov edx, dword ptr [ebx + edx]
// 008d3086  eb02                 jmp 0x8d308a
// 008d3088  33d2                 xor edx, edx
// 008d308a  037a20               add edi, dword ptr [edx + 0x20]
// 008d308d  46                   inc esi
// 008d308e  83c304               add ebx, 4
// 008d3091  41                   inc ecx
// 008d3092  3bf0                 cmp esi, eax
// 008d3094  897c2470             mov dword ptr [esp + 0x70], edi
// 008d3098  7cdd                 jl 0x8d3077
// 008d309a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d309e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d30a2  895c2424             mov dword ptr [esp + 0x24], ebx
// 008d30a6  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 008d30a9  035c244c             add ebx, dword ptr [esp + 0x4c]
// 008d30ad  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008d30b5  85c0                 test eax, eax
// 008d30b7  0f8ea4000000         jle 0x8d3161
// 008d30bd  8d148d00000000       lea edx, [ecx*4]
// 008d30c4  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d30c8  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d30cc  89542420             mov dword ptr [esp + 0x20], edx
// 008d30d0  85c9                 test ecx, ecx
// 008d30d2  7c6e                 jl 0x8d3142
// 008d30d4  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d30d7  7d69                 jge 0x8d3142
// 008d30d9  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d30dc  8b742420             mov esi, dword ptr [esp + 0x20]
// 008d30e0  8b3416               mov esi, dword ptr [esi + edx]
// 008d30e3  85f6                 test esi, esi
// 008d30e5  745b                 je 0x8d3142
// 008d30e7  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d30ec  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008d30ef  741a                 je 0x8d310b
// 008d30f1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d30f5  2bc7                 sub eax, edi
// 008d30f7  99                   cdq 
// 008d30f8  f77c241c             idiv dword ptr [esp + 0x1c]
// 008d30fc  03c1                 add eax, ecx
// 008d30fe  29442424             sub dword ptr [esp + 0x24], eax
// 008d3102  294c2470             sub dword ptr [esp + 0x70], ecx
// 008d3106  8bc8                 mov ecx, eax
// 008d3108  894620               mov dword ptr [esi + 0x20], eax
// 008d310b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d310f  8d3c19               lea edi, [ecx + ebx]
// 008d3112  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d3116  83ec10               sub esp, 0x10
// 008d3119  8bc4                 mov eax, esp
// 008d311b  8908                 mov dword ptr [eax], ecx
// 008d311d  895804               mov dword ptr [eax + 4], ebx
// 008d3120  895008               mov dword ptr [eax + 8], edx
// 008d3123  8bce                 mov ecx, esi
// 008d3125  89780c               mov dword ptr [eax + 0xc], edi
// 008d3128  e8d3b6ffff           call 0x8ce800
// 008d312d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d3131  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d3135  894664               mov dword ptr [esi + 0x64], eax
// 008d3138  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d313c  8bdf                 mov ebx, edi
// 008d313e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008d3142  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d3146  8344242004           add dword ptr [esp + 0x20], 4
// 008d314b  ff4c241c             dec dword ptr [esp + 0x1c]
// 008d314f  42                   inc edx
// 008d3150  41                   inc ecx
// 008d3151  3bd0                 cmp edx, eax
// 008d3153  89542434             mov dword ptr [esp + 0x34], edx
// 008d3157  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d315b  0f8c6fffffff         jl 0x8d30d0
// 008d3161  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d3165  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d3169  01442474             add dword ptr [esp + 0x74], eax
// 008d316d  01442418             add dword ptr [esp + 0x18], eax
// 008d3171  42                   inc edx
// 008d3172  3b542410             cmp edx, dword ptr [esp + 0x10]
// 008d3176  89542414             mov dword ptr [esp + 0x14], edx
// 008d317a  0f8cc4feffff         jl 0x8d3044
// 008d3180  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d3184  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008d3188  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008d318c  83ec10               sub esp, 0x10
// 008d318f  8bc4                 mov eax, esp
// 008d3191  8908                 mov dword ptr [eax], ecx
// 008d3193  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d319a  895004               mov dword ptr [eax + 4], edx
// 008d319d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d31a4  894808               mov dword ptr [eax + 8], ecx
// 008d31a7  89500c               mov dword ptr [eax + 0xc], edx
// 008d31aa  55                   push ebp
// 008d31ab  8d442470             lea eax, [esp + 0x70]
// 008d31af  50                   push eax
// 008d31b0  8bcf                 mov ecx, edi
// 008d31b2  e839f7ffff           call 0x8d28f0
// 008d31b7  8b08                 mov ecx, dword ptr [eax]
// 008d31b9  894d24               mov dword ptr [ebp + 0x24], ecx
// 008d31bc  8b5004               mov edx, dword ptr [eax + 4]
// 008d31bf  895528               mov dword ptr [ebp + 0x28], edx
// 008d31c2  8b4808               mov ecx, dword ptr [eax + 8]
// 008d31c5  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 008d31c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d31cb  895530               mov dword ptr [ebp + 0x30], edx
// 008d31ce  5f                   pop edi
// 008d31cf  5e                   pop esi
// 008d31d0  5d                   pop ebp
// 008d31d1  5b                   pop ebx
// 008d31d2  83c45c               add esp, 0x5c
// 008d31d5  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlMultiRow@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
