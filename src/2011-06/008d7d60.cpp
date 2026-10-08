// roc 2011-06 008d7d60  unit: CXTPTabPaintManager  size: 1384 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d7d60
//
// 008d7d60  83ec5c               sub esp, 0x5c
// 008d7d63  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008d7d67  53                   push ebx
// 008d7d68  55                   push ebp
// 008d7d69  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 008d7d6d  56                   push esi
// 008d7d6e  57                   push edi
// 008d7d6f  8bf9                 mov edi, ecx
// 008d7d71  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008d7d75  83ec10               sub esp, 0x10
// 008d7d78  8bc4                 mov eax, esp
// 008d7d7a  8908                 mov dword ptr [eax], ecx
// 008d7d7c  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d7d83  895004               mov dword ptr [eax + 4], edx
// 008d7d86  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d7d8d  894808               mov dword ptr [eax + 8], ecx
// 008d7d90  89500c               mov dword ptr [eax + 0xc], edx
// 008d7d93  55                   push ebp
// 008d7d94  8d442470             lea eax, [esp + 0x70]
// 008d7d98  50                   push eax
// 008d7d99  8bcf                 mov ecx, edi
// 008d7d9b  897c2454             mov dword ptr [esp + 0x54], edi
// 008d7d9f  e83cfcffff           call 0x8d79e0
// 008d7da4  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 008d7da8  8b08                 mov ecx, dword ptr [eax]
// 008d7daa  894d24               mov dword ptr [ebp + 0x24], ecx
// 008d7dad  8b5004               mov edx, dword ptr [eax + 4]
// 008d7db0  895528               mov dword ptr [ebp + 0x28], edx
// 008d7db3  8b4808               mov ecx, dword ptr [eax + 8]
// 008d7db6  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 008d7db9  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d7dbc  895530               mov dword ptr [ebp + 0x30], edx
// 008d7dbf  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 008d7dc6  0f84f2040000         je 0x8d82be
// 008d7dcc  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d7dd2  8b01                 mov eax, dword ptr [ecx]
// 008d7dd4  8b4010               mov eax, dword ptr [eax + 0x10]
// 008d7dd7  8d54244c             lea edx, [esp + 0x4c]
// 008d7ddb  52                   push edx
// 008d7ddc  ffd0                 call eax
// 008d7dde  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d7de4  8b11                 mov edx, dword ptr [ecx]
// 008d7de6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d7de9  55                   push ebp
// 008d7dea  ffd0                 call eax
// 008d7dec  8b5500               mov edx, dword ptr [ebp]
// 008d7def  8bf0                 mov esi, eax
// 008d7df1  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7df4  8bcd                 mov ecx, ebp
// 008d7df6  ffd0                 call eax
// 008d7df8  83f802               cmp eax, 2
// 008d7dfb  7412                 je 0x8d7e0f
// 008d7dfd  8b5500               mov edx, dword ptr [ebp]
// 008d7e00  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7e03  8bcd                 mov ecx, ebp
// 008d7e05  ffd0                 call eax
// 008d7e07  85c0                 test eax, eax
// 008d7e09  0f8536020000         jne 0x8d8045
// 008d7e0f  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 008d7e12  2b5d24               sub ebx, dword ptr [ebp + 0x24]
// 008d7e15  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d7e19  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 008d7e1d  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 008d7e21  53                   push ebx
// 008d7e22  51                   push ecx
// 008d7e23  55                   push ebp
// 008d7e24  8bcf                 mov ecx, edi
// 008d7e26  895c2438             mov dword ptr [esp + 0x38], ebx
// 008d7e2a  e821feffff           call 0x8d7c50
// 008d7e2f  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 008d7e35  8b4204               mov eax, dword ptr [edx + 4]
// 008d7e38  8b5500               mov edx, dword ptr [ebp]
// 008d7e3b  89442410             mov dword ptr [esp + 0x10], eax
// 008d7e3f  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7e42  8bcd                 mov ecx, ebp
// 008d7e44  ffd0                 call eax
// 008d7e46  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d7e4a  83f802               cmp eax, 2
// 008d7e4d  7523                 jne 0x8d7e72
// 008d7e4f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d7e55  8d41ff               lea eax, [ecx - 1]
// 008d7e58  0fafce               imul ecx, esi
// 008d7e5b  0faf4214             imul eax, dword ptr [edx + 0x14]
// 008d7e5f  8bd0                 mov edx, eax
// 008d7e61  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d7e68  2bc2                 sub eax, edx
// 008d7e6a  2bc1                 sub eax, ecx
// 008d7e6c  2b442450             sub eax, dword ptr [esp + 0x50]
// 008d7e70  eb17                 jmp 0x8d7e89
// 008d7e72  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008d7e78  8b4014               mov eax, dword ptr [eax + 0x14]
// 008d7e7b  03c6                 add eax, esi
// 008d7e7d  49                   dec ecx
// 008d7e7e  0fafc1               imul eax, ecx
// 008d7e81  0344247c             add eax, dword ptr [esp + 0x7c]
// 008d7e85  03442450             add eax, dword ptr [esp + 0x50]
// 008d7e89  8b5500               mov edx, dword ptr [ebp]
// 008d7e8c  89442474             mov dword ptr [esp + 0x74], eax
// 008d7e90  03c6                 add eax, esi
// 008d7e92  89442424             mov dword ptr [esp + 0x24], eax
// 008d7e96  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7e99  8bcd                 mov ecx, ebp
// 008d7e9b  ffd0                 call eax
// 008d7e9d  83f802               cmp eax, 2
// 008d7ea0  750d                 jne 0x8d7eaf
// 008d7ea2  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d7ea8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008d7eab  03c6                 add eax, esi
// 008d7ead  eb0d                 jmp 0x8d7ebc
// 008d7eaf  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d7eb5  8b4214               mov eax, dword ptr [edx + 0x14]
// 008d7eb8  03c6                 add eax, esi
// 008d7eba  f7d8                 neg eax
// 008d7ebc  89442438             mov dword ptr [esp + 0x38], eax
// 008d7ec0  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008d7ec6  8b30                 mov esi, dword ptr [eax]
// 008d7ec8  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d7ecc  83f801               cmp eax, 1
// 008d7ecf  89742440             mov dword ptr [esp + 0x40], esi
// 008d7ed3  7e11                 jle 0x8d7ee6
// 008d7ed5  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 008d7edc  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008d7ee4  7508                 jne 0x8d7eee
// 008d7ee6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d7eee  33d2                 xor edx, edx
// 008d7ef0  89542428             mov dword ptr [esp + 0x28], edx
// 008d7ef4  85c0                 test eax, eax
// 008d7ef6  0f8e78030000         jle 0x8d8274
// 008d7efc  eb0a                 jmp 0x8d7f08
// 008d7efe  8bff                 mov edi, edi
// 008d7f00  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008d7f04  8b742440             mov esi, dword ptr [esp + 0x40]
// 008d7f08  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 008d7f0b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 008d7f0f  2bc1                 sub eax, ecx
// 008d7f11  33ff                 xor edi, edi
// 008d7f13  40                   inc eax
// 008d7f14  897c2470             mov dword ptr [esp + 0x70], edi
// 008d7f18  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d7f1c  89442444             mov dword ptr [esp + 0x44], eax
// 008d7f20  397c2414             cmp dword ptr [esp + 0x14], edi
// 008d7f24  7438                 je 0x8d7f5e
// 008d7f26  33f6                 xor esi, esi
// 008d7f28  85c0                 test eax, eax
// 008d7f2a  7e32                 jle 0x8d7f5e
// 008d7f2c  8d1c8d00000000       lea ebx, [ecx*4]
// 008d7f33  85c9                 test ecx, ecx
// 008d7f35  7c0d                 jl 0x8d7f44
// 008d7f37  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d7f3a  7d08                 jge 0x8d7f44
// 008d7f3c  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d7f3f  8b1413               mov edx, dword ptr [ebx + edx]
// 008d7f42  eb02                 jmp 0x8d7f46
// 008d7f44  33d2                 xor edx, edx
// 008d7f46  037a20               add edi, dword ptr [edx + 0x20]
// 008d7f49  46                   inc esi
// 008d7f4a  83c304               add ebx, 4
// 008d7f4d  41                   inc ecx
// 008d7f4e  3bf0                 cmp esi, eax
// 008d7f50  897c2470             mov dword ptr [esp + 0x70], edi
// 008d7f54  7cdd                 jl 0x8d7f33
// 008d7f56  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d7f5a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008d7f5e  895c2418             mov dword ptr [esp + 0x18], ebx
// 008d7f62  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 008d7f65  035c244c             add ebx, dword ptr [esp + 0x4c]
// 008d7f69  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008d7f71  85c0                 test eax, eax
// 008d7f73  0f8ea8000000         jle 0x8d8021
// 008d7f79  8d148d00000000       lea edx, [ecx*4]
// 008d7f80  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d7f84  89442420             mov dword ptr [esp + 0x20], eax
// 008d7f88  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d7f8c  8d642400             lea esp, [esp]
// 008d7f90  85c9                 test ecx, ecx
// 008d7f92  7c6e                 jl 0x8d8002
// 008d7f94  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d7f97  7d69                 jge 0x8d8002
// 008d7f99  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d7f9c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d7fa0  8b3416               mov esi, dword ptr [esi + edx]
// 008d7fa3  85f6                 test esi, esi
// 008d7fa5  745b                 je 0x8d8002
// 008d7fa7  837c241400           cmp dword ptr [esp + 0x14], 0
// 008d7fac  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008d7faf  741a                 je 0x8d7fcb
// 008d7fb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d7fb5  2bc7                 sub eax, edi
// 008d7fb7  99                   cdq 
// 008d7fb8  f77c2420             idiv dword ptr [esp + 0x20]
// 008d7fbc  03c1                 add eax, ecx
// 008d7fbe  29442418             sub dword ptr [esp + 0x18], eax
// 008d7fc2  294c2470             sub dword ptr [esp + 0x70], ecx
// 008d7fc6  8bc8                 mov ecx, eax
// 008d7fc8  894620               mov dword ptr [esi + 0x20], eax
// 008d7fcb  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d7fcf  8d3c19               lea edi, [ecx + ebx]
// 008d7fd2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d7fd6  83ec10               sub esp, 0x10
// 008d7fd9  8bc4                 mov eax, esp
// 008d7fdb  8918                 mov dword ptr [eax], ebx
// 008d7fdd  894804               mov dword ptr [eax + 4], ecx
// 008d7fe0  897808               mov dword ptr [eax + 8], edi
// 008d7fe3  8bce                 mov ecx, esi
// 008d7fe5  89500c               mov dword ptr [eax + 0xc], edx
// 008d7fe8  e803b9ffff           call 0x8d38f0
// 008d7fed  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d7ff1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d7ff5  894664               mov dword ptr [esi + 0x64], eax
// 008d7ff8  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d7ffc  8bdf                 mov ebx, edi
// 008d7ffe  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008d8002  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d8006  8344241c04           add dword ptr [esp + 0x1c], 4
// 008d800b  ff4c2420             dec dword ptr [esp + 0x20]
// 008d800f  42                   inc edx
// 008d8010  41                   inc ecx
// 008d8011  3bd0                 cmp edx, eax
// 008d8013  89542430             mov dword ptr [esp + 0x30], edx
// 008d8017  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d801b  0f8c6fffffff         jl 0x8d7f90
// 008d8021  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d8025  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d8029  01442474             add dword ptr [esp + 0x74], eax
// 008d802d  01442424             add dword ptr [esp + 0x24], eax
// 008d8031  42                   inc edx
// 008d8032  3b542410             cmp edx, dword ptr [esp + 0x10]
// 008d8036  89542428             mov dword ptr [esp + 0x28], edx
// 008d803a  0f8cc0feffff         jl 0x8d7f00
// 008d8040  e92b020000           jmp 0x8d8270
// 008d8045  8b5d30               mov ebx, dword ptr [ebp + 0x30]
// 008d8048  2b5d28               sub ebx, dword ptr [ebp + 0x28]
// 008d804b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d804f  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 008d8053  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 008d8057  53                   push ebx
// 008d8058  51                   push ecx
// 008d8059  55                   push ebp
// 008d805a  8bcf                 mov ecx, edi
// 008d805c  895c2444             mov dword ptr [esp + 0x44], ebx
// 008d8060  e8ebfbffff           call 0x8d7c50
// 008d8065  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 008d806b  8b4204               mov eax, dword ptr [edx + 4]
// 008d806e  8b5500               mov edx, dword ptr [ebp]
// 008d8071  89442410             mov dword ptr [esp + 0x10], eax
// 008d8075  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d8078  8bcd                 mov ecx, ebp
// 008d807a  ffd0                 call eax
// 008d807c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d8080  83f803               cmp eax, 3
// 008d8083  7523                 jne 0x8d80a8
// 008d8085  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d808b  8d41ff               lea eax, [ecx - 1]
// 008d808e  0fafce               imul ecx, esi
// 008d8091  0faf4214             imul eax, dword ptr [edx + 0x14]
// 008d8095  8bd0                 mov edx, eax
// 008d8097  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008d809e  2bc2                 sub eax, edx
// 008d80a0  2bc1                 sub eax, ecx
// 008d80a2  2b442450             sub eax, dword ptr [esp + 0x50]
// 008d80a6  eb17                 jmp 0x8d80bf
// 008d80a8  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008d80ae  8b4014               mov eax, dword ptr [eax + 0x14]
// 008d80b1  03c6                 add eax, esi
// 008d80b3  49                   dec ecx
// 008d80b4  0fafc1               imul eax, ecx
// 008d80b7  03442478             add eax, dword ptr [esp + 0x78]
// 008d80bb  03442450             add eax, dword ptr [esp + 0x50]
// 008d80bf  8b5500               mov edx, dword ptr [ebp]
// 008d80c2  89442474             mov dword ptr [esp + 0x74], eax
// 008d80c6  03c6                 add eax, esi
// 008d80c8  89442418             mov dword ptr [esp + 0x18], eax
// 008d80cc  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d80cf  8bcd                 mov ecx, ebp
// 008d80d1  ffd0                 call eax
// 008d80d3  83f803               cmp eax, 3
// 008d80d6  750d                 jne 0x8d80e5
// 008d80d8  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d80de  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008d80e1  03c6                 add eax, esi
// 008d80e3  eb0d                 jmp 0x8d80f2
// 008d80e5  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008d80eb  8b4214               mov eax, dword ptr [edx + 0x14]
// 008d80ee  03c6                 add eax, esi
// 008d80f0  f7d8                 neg eax
// 008d80f2  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d80f6  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008d80fc  8b30                 mov esi, dword ptr [eax]
// 008d80fe  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d8102  83f801               cmp eax, 1
// 008d8105  89742444             mov dword ptr [esp + 0x44], esi
// 008d8109  7e11                 jle 0x8d811c
// 008d810b  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 008d8112  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008d811a  7508                 jne 0x8d8124
// 008d811c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008d8124  33d2                 xor edx, edx
// 008d8126  89542414             mov dword ptr [esp + 0x14], edx
// 008d812a  85c0                 test eax, eax
// 008d812c  0f8e42010000         jle 0x8d8274
// 008d8132  eb08                 jmp 0x8d813c
// 008d8134  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d8138  8b742444             mov esi, dword ptr [esp + 0x44]
// 008d813c  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 008d813f  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 008d8143  2bc1                 sub eax, ecx
// 008d8145  33ff                 xor edi, edi
// 008d8147  40                   inc eax
// 008d8148  897c2470             mov dword ptr [esp + 0x70], edi
// 008d814c  894c2440             mov dword ptr [esp + 0x40], ecx
// 008d8150  89442448             mov dword ptr [esp + 0x48], eax
// 008d8154  397c2428             cmp dword ptr [esp + 0x28], edi
// 008d8158  7438                 je 0x8d8192
// 008d815a  33f6                 xor esi, esi
// 008d815c  85c0                 test eax, eax
// 008d815e  7e32                 jle 0x8d8192
// 008d8160  8d1c8d00000000       lea ebx, [ecx*4]
// 008d8167  85c9                 test ecx, ecx
// 008d8169  7c0d                 jl 0x8d8178
// 008d816b  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d816e  7d08                 jge 0x8d8178
// 008d8170  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d8173  8b1413               mov edx, dword ptr [ebx + edx]
// 008d8176  eb02                 jmp 0x8d817a
// 008d8178  33d2                 xor edx, edx
// 008d817a  037a20               add edi, dword ptr [edx + 0x20]
// 008d817d  46                   inc esi
// 008d817e  83c304               add ebx, 4
// 008d8181  41                   inc ecx
// 008d8182  3bf0                 cmp esi, eax
// 008d8184  897c2470             mov dword ptr [esp + 0x70], edi
// 008d8188  7cdd                 jl 0x8d8167
// 008d818a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d818e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d8192  895c2424             mov dword ptr [esp + 0x24], ebx
// 008d8196  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 008d8199  035c244c             add ebx, dword ptr [esp + 0x4c]
// 008d819d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008d81a5  85c0                 test eax, eax
// 008d81a7  0f8ea4000000         jle 0x8d8251
// 008d81ad  8d148d00000000       lea edx, [ecx*4]
// 008d81b4  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d81b8  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d81bc  89542420             mov dword ptr [esp + 0x20], edx
// 008d81c0  85c9                 test ecx, ecx
// 008d81c2  7c6e                 jl 0x8d8232
// 008d81c4  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 008d81c7  7d69                 jge 0x8d8232
// 008d81c9  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008d81cc  8b742420             mov esi, dword ptr [esp + 0x20]
// 008d81d0  8b3416               mov esi, dword ptr [esi + edx]
// 008d81d3  85f6                 test esi, esi
// 008d81d5  745b                 je 0x8d8232
// 008d81d7  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d81dc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008d81df  741a                 je 0x8d81fb
// 008d81e1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d81e5  2bc7                 sub eax, edi
// 008d81e7  99                   cdq 
// 008d81e8  f77c241c             idiv dword ptr [esp + 0x1c]
// 008d81ec  03c1                 add eax, ecx
// 008d81ee  29442424             sub dword ptr [esp + 0x24], eax
// 008d81f2  294c2470             sub dword ptr [esp + 0x70], ecx
// 008d81f6  8bc8                 mov ecx, eax
// 008d81f8  894620               mov dword ptr [esi + 0x20], eax
// 008d81fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d81ff  8d3c19               lea edi, [ecx + ebx]
// 008d8202  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d8206  83ec10               sub esp, 0x10
// 008d8209  8bc4                 mov eax, esp
// 008d820b  8908                 mov dword ptr [eax], ecx
// 008d820d  895804               mov dword ptr [eax + 4], ebx
// 008d8210  895008               mov dword ptr [eax + 8], edx
// 008d8213  8bce                 mov ecx, esi
// 008d8215  89780c               mov dword ptr [eax + 0xc], edi
// 008d8218  e8d3b6ffff           call 0x8d38f0
// 008d821d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8221  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d8225  894664               mov dword ptr [esi + 0x64], eax
// 008d8228  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d822c  8bdf                 mov ebx, edi
// 008d822e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008d8232  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d8236  8344242004           add dword ptr [esp + 0x20], 4
// 008d823b  ff4c241c             dec dword ptr [esp + 0x1c]
// 008d823f  42                   inc edx
// 008d8240  41                   inc ecx
// 008d8241  3bd0                 cmp edx, eax
// 008d8243  89542434             mov dword ptr [esp + 0x34], edx
// 008d8247  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d824b  0f8c6fffffff         jl 0x8d81c0
// 008d8251  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d8255  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d8259  01442474             add dword ptr [esp + 0x74], eax
// 008d825d  01442418             add dword ptr [esp + 0x18], eax
// 008d8261  42                   inc edx
// 008d8262  3b542410             cmp edx, dword ptr [esp + 0x10]
// 008d8266  89542414             mov dword ptr [esp + 0x14], edx
// 008d826a  0f8cc4feffff         jl 0x8d8134
// 008d8270  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d8274  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008d8278  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008d827c  83ec10               sub esp, 0x10
// 008d827f  8bc4                 mov eax, esp
// 008d8281  8908                 mov dword ptr [eax], ecx
// 008d8283  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d828a  895004               mov dword ptr [eax + 4], edx
// 008d828d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d8294  894808               mov dword ptr [eax + 8], ecx
// 008d8297  89500c               mov dword ptr [eax + 0xc], edx
// 008d829a  55                   push ebp
// 008d829b  8d442470             lea eax, [esp + 0x70]
// 008d829f  50                   push eax
// 008d82a0  8bcf                 mov ecx, edi
// 008d82a2  e839f7ffff           call 0x8d79e0
// 008d82a7  8b08                 mov ecx, dword ptr [eax]
// 008d82a9  894d24               mov dword ptr [ebp + 0x24], ecx
// 008d82ac  8b5004               mov edx, dword ptr [eax + 4]
// 008d82af  895528               mov dword ptr [ebp + 0x28], edx
// 008d82b2  8b4808               mov ecx, dword ptr [eax + 8]
// 008d82b5  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 008d82b8  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d82bb  895530               mov dword ptr [ebp + 0x30], edx
// 008d82be  5f                   pop edi
// 008d82bf  5e                   pop esi
// 008d82c0  5d                   pop ebp
// 008d82c1  5b                   pop ebx
// 008d82c2  83c45c               add esp, 0x5c
// 008d82c5  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlMultiRow@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
