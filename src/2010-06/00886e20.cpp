// roc 2010-06 00886e20  unit: CXTPTabPaintManager  size: 1384 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00886e20
//
// 00886e20  83ec5c               sub esp, 0x5c
// 00886e23  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00886e27  53                   push ebx
// 00886e28  55                   push ebp
// 00886e29  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00886e2d  56                   push esi
// 00886e2e  57                   push edi
// 00886e2f  8bf9                 mov edi, ecx
// 00886e31  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00886e35  83ec10               sub esp, 0x10
// 00886e38  8bc4                 mov eax, esp
// 00886e3a  8908                 mov dword ptr [eax], ecx
// 00886e3c  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00886e43  895004               mov dword ptr [eax + 4], edx
// 00886e46  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00886e4d  894808               mov dword ptr [eax + 8], ecx
// 00886e50  89500c               mov dword ptr [eax + 0xc], edx
// 00886e53  55                   push ebp
// 00886e54  8d442470             lea eax, [esp + 0x70]
// 00886e58  50                   push eax
// 00886e59  8bcf                 mov ecx, edi
// 00886e5b  897c2454             mov dword ptr [esp + 0x54], edi
// 00886e5f  e83cfcffff           call 0x886aa0
// 00886e64  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 00886e68  8b08                 mov ecx, dword ptr [eax]
// 00886e6a  894d24               mov dword ptr [ebp + 0x24], ecx
// 00886e6d  8b5004               mov edx, dword ptr [eax + 4]
// 00886e70  895528               mov dword ptr [ebp + 0x28], edx
// 00886e73  8b4808               mov ecx, dword ptr [eax + 8]
// 00886e76  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00886e79  8b500c               mov edx, dword ptr [eax + 0xc]
// 00886e7c  895530               mov dword ptr [ebp + 0x30], edx
// 00886e7f  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 00886e86  0f84f2040000         je 0x88737e
// 00886e8c  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00886e92  8b01                 mov eax, dword ptr [ecx]
// 00886e94  8b4010               mov eax, dword ptr [eax + 0x10]
// 00886e97  8d54244c             lea edx, [esp + 0x4c]
// 00886e9b  52                   push edx
// 00886e9c  ffd0                 call eax
// 00886e9e  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00886ea4  8b11                 mov edx, dword ptr [ecx]
// 00886ea6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00886ea9  55                   push ebp
// 00886eaa  ffd0                 call eax
// 00886eac  8b5500               mov edx, dword ptr [ebp]
// 00886eaf  8bf0                 mov esi, eax
// 00886eb1  8b4248               mov eax, dword ptr [edx + 0x48]
// 00886eb4  8bcd                 mov ecx, ebp
// 00886eb6  ffd0                 call eax
// 00886eb8  83f802               cmp eax, 2
// 00886ebb  7412                 je 0x886ecf
// 00886ebd  8b5500               mov edx, dword ptr [ebp]
// 00886ec0  8b4248               mov eax, dword ptr [edx + 0x48]
// 00886ec3  8bcd                 mov ecx, ebp
// 00886ec5  ffd0                 call eax
// 00886ec7  85c0                 test eax, eax
// 00886ec9  0f8536020000         jne 0x887105
// 00886ecf  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 00886ed2  2b5d24               sub ebx, dword ptr [ebp + 0x24]
// 00886ed5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00886ed9  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 00886edd  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 00886ee1  53                   push ebx
// 00886ee2  51                   push ecx
// 00886ee3  55                   push ebp
// 00886ee4  8bcf                 mov ecx, edi
// 00886ee6  895c2438             mov dword ptr [esp + 0x38], ebx
// 00886eea  e821feffff           call 0x886d10
// 00886eef  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 00886ef5  8b4204               mov eax, dword ptr [edx + 4]
// 00886ef8  8b5500               mov edx, dword ptr [ebp]
// 00886efb  89442410             mov dword ptr [esp + 0x10], eax
// 00886eff  8b4248               mov eax, dword ptr [edx + 0x48]
// 00886f02  8bcd                 mov ecx, ebp
// 00886f04  ffd0                 call eax
// 00886f06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00886f0a  83f802               cmp eax, 2
// 00886f0d  7523                 jne 0x886f32
// 00886f0f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 00886f15  8d41ff               lea eax, [ecx - 1]
// 00886f18  0fafce               imul ecx, esi
// 00886f1b  0faf4214             imul eax, dword ptr [edx + 0x14]
// 00886f1f  8bd0                 mov edx, eax
// 00886f21  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00886f28  2bc2                 sub eax, edx
// 00886f2a  2bc1                 sub eax, ecx
// 00886f2c  2b442450             sub eax, dword ptr [esp + 0x50]
// 00886f30  eb17                 jmp 0x886f49
// 00886f32  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00886f38  8b4014               mov eax, dword ptr [eax + 0x14]
// 00886f3b  03c6                 add eax, esi
// 00886f3d  49                   dec ecx
// 00886f3e  0fafc1               imul eax, ecx
// 00886f41  0344247c             add eax, dword ptr [esp + 0x7c]
// 00886f45  03442450             add eax, dword ptr [esp + 0x50]
// 00886f49  8b5500               mov edx, dword ptr [ebp]
// 00886f4c  89442474             mov dword ptr [esp + 0x74], eax
// 00886f50  03c6                 add eax, esi
// 00886f52  89442424             mov dword ptr [esp + 0x24], eax
// 00886f56  8b4248               mov eax, dword ptr [edx + 0x48]
// 00886f59  8bcd                 mov ecx, ebp
// 00886f5b  ffd0                 call eax
// 00886f5d  83f802               cmp eax, 2
// 00886f60  750d                 jne 0x886f6f
// 00886f62  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00886f68  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00886f6b  03c6                 add eax, esi
// 00886f6d  eb0d                 jmp 0x886f7c
// 00886f6f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 00886f75  8b4214               mov eax, dword ptr [edx + 0x14]
// 00886f78  03c6                 add eax, esi
// 00886f7a  f7d8                 neg eax
// 00886f7c  89442438             mov dword ptr [esp + 0x38], eax
// 00886f80  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00886f86  8b30                 mov esi, dword ptr [eax]
// 00886f88  8b442410             mov eax, dword ptr [esp + 0x10]
// 00886f8c  83f801               cmp eax, 1
// 00886f8f  89742440             mov dword ptr [esp + 0x40], esi
// 00886f93  7e11                 jle 0x886fa6
// 00886f95  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 00886f9c  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00886fa4  7508                 jne 0x886fae
// 00886fa6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00886fae  33d2                 xor edx, edx
// 00886fb0  89542428             mov dword ptr [esp + 0x28], edx
// 00886fb4  85c0                 test eax, eax
// 00886fb6  0f8e78030000         jle 0x887334
// 00886fbc  eb0a                 jmp 0x886fc8
// 00886fbe  8bff                 mov edi, edi
// 00886fc0  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00886fc4  8b742440             mov esi, dword ptr [esp + 0x40]
// 00886fc8  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 00886fcb  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 00886fcf  2bc1                 sub eax, ecx
// 00886fd1  33ff                 xor edi, edi
// 00886fd3  40                   inc eax
// 00886fd4  897c2470             mov dword ptr [esp + 0x70], edi
// 00886fd8  894c2434             mov dword ptr [esp + 0x34], ecx
// 00886fdc  89442444             mov dword ptr [esp + 0x44], eax
// 00886fe0  397c2414             cmp dword ptr [esp + 0x14], edi
// 00886fe4  7438                 je 0x88701e
// 00886fe6  33f6                 xor esi, esi
// 00886fe8  85c0                 test eax, eax
// 00886fea  7e32                 jle 0x88701e
// 00886fec  8d1c8d00000000       lea ebx, [ecx*4]
// 00886ff3  85c9                 test ecx, ecx
// 00886ff5  7c0d                 jl 0x887004
// 00886ff7  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00886ffa  7d08                 jge 0x887004
// 00886ffc  8b5558               mov edx, dword ptr [ebp + 0x58]
// 00886fff  8b1413               mov edx, dword ptr [ebx + edx]
// 00887002  eb02                 jmp 0x887006
// 00887004  33d2                 xor edx, edx
// 00887006  037a20               add edi, dword ptr [edx + 0x20]
// 00887009  46                   inc esi
// 0088700a  83c304               add ebx, 4
// 0088700d  41                   inc ecx
// 0088700e  3bf0                 cmp esi, eax
// 00887010  897c2470             mov dword ptr [esp + 0x70], edi
// 00887014  7cdd                 jl 0x886ff3
// 00887016  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088701a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0088701e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00887022  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 00887025  035c244c             add ebx, dword ptr [esp + 0x4c]
// 00887029  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00887031  85c0                 test eax, eax
// 00887033  0f8ea8000000         jle 0x8870e1
// 00887039  8d148d00000000       lea edx, [ecx*4]
// 00887040  894c2434             mov dword ptr [esp + 0x34], ecx
// 00887044  89442420             mov dword ptr [esp + 0x20], eax
// 00887048  8954241c             mov dword ptr [esp + 0x1c], edx
// 0088704c  8d642400             lea esp, [esp]
// 00887050  85c9                 test ecx, ecx
// 00887052  7c6e                 jl 0x8870c2
// 00887054  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00887057  7d69                 jge 0x8870c2
// 00887059  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0088705c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00887060  8b3416               mov esi, dword ptr [esi + edx]
// 00887063  85f6                 test esi, esi
// 00887065  745b                 je 0x8870c2
// 00887067  837c241400           cmp dword ptr [esp + 0x14], 0
// 0088706c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088706f  741a                 je 0x88708b
// 00887071  8b442418             mov eax, dword ptr [esp + 0x18]
// 00887075  2bc7                 sub eax, edi
// 00887077  99                   cdq 
// 00887078  f77c2420             idiv dword ptr [esp + 0x20]
// 0088707c  03c1                 add eax, ecx
// 0088707e  29442418             sub dword ptr [esp + 0x18], eax
// 00887082  294c2470             sub dword ptr [esp + 0x70], ecx
// 00887086  8bc8                 mov ecx, eax
// 00887088  894620               mov dword ptr [esi + 0x20], eax
// 0088708b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088708f  8d3c19               lea edi, [ecx + ebx]
// 00887092  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00887096  83ec10               sub esp, 0x10
// 00887099  8bc4                 mov eax, esp
// 0088709b  8918                 mov dword ptr [eax], ebx
// 0088709d  894804               mov dword ptr [eax + 4], ecx
// 008870a0  897808               mov dword ptr [eax + 8], edi
// 008870a3  8bce                 mov ecx, esi
// 008870a5  89500c               mov dword ptr [eax + 0xc], edx
// 008870a8  e833b9ffff           call 0x8829e0
// 008870ad  8b442428             mov eax, dword ptr [esp + 0x28]
// 008870b1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008870b5  894664               mov dword ptr [esi + 0x64], eax
// 008870b8  8b442444             mov eax, dword ptr [esp + 0x44]
// 008870bc  8bdf                 mov ebx, edi
// 008870be  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008870c2  8b542430             mov edx, dword ptr [esp + 0x30]
// 008870c6  8344241c04           add dword ptr [esp + 0x1c], 4
// 008870cb  ff4c2420             dec dword ptr [esp + 0x20]
// 008870cf  42                   inc edx
// 008870d0  41                   inc ecx
// 008870d1  3bd0                 cmp edx, eax
// 008870d3  89542430             mov dword ptr [esp + 0x30], edx
// 008870d7  894c2434             mov dword ptr [esp + 0x34], ecx
// 008870db  0f8c6fffffff         jl 0x887050
// 008870e1  8b542428             mov edx, dword ptr [esp + 0x28]
// 008870e5  8b442438             mov eax, dword ptr [esp + 0x38]
// 008870e9  01442474             add dword ptr [esp + 0x74], eax
// 008870ed  01442424             add dword ptr [esp + 0x24], eax
// 008870f1  42                   inc edx
// 008870f2  3b542410             cmp edx, dword ptr [esp + 0x10]
// 008870f6  89542428             mov dword ptr [esp + 0x28], edx
// 008870fa  0f8cc0feffff         jl 0x886fc0
// 00887100  e92b020000           jmp 0x887330
// 00887105  8b5d30               mov ebx, dword ptr [ebp + 0x30]
// 00887108  2b5d28               sub ebx, dword ptr [ebp + 0x28]
// 0088710b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0088710f  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 00887113  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 00887117  53                   push ebx
// 00887118  51                   push ecx
// 00887119  55                   push ebp
// 0088711a  8bcf                 mov ecx, edi
// 0088711c  895c2444             mov dword ptr [esp + 0x44], ebx
// 00887120  e8ebfbffff           call 0x886d10
// 00887125  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 0088712b  8b4204               mov eax, dword ptr [edx + 4]
// 0088712e  8b5500               mov edx, dword ptr [ebp]
// 00887131  89442410             mov dword ptr [esp + 0x10], eax
// 00887135  8b4248               mov eax, dword ptr [edx + 0x48]
// 00887138  8bcd                 mov ecx, ebp
// 0088713a  ffd0                 call eax
// 0088713c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00887140  83f803               cmp eax, 3
// 00887143  7523                 jne 0x887168
// 00887145  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 0088714b  8d41ff               lea eax, [ecx - 1]
// 0088714e  0fafce               imul ecx, esi
// 00887151  0faf4214             imul eax, dword ptr [edx + 0x14]
// 00887155  8bd0                 mov edx, eax
// 00887157  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088715e  2bc2                 sub eax, edx
// 00887160  2bc1                 sub eax, ecx
// 00887162  2b442450             sub eax, dword ptr [esp + 0x50]
// 00887166  eb17                 jmp 0x88717f
// 00887168  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 0088716e  8b4014               mov eax, dword ptr [eax + 0x14]
// 00887171  03c6                 add eax, esi
// 00887173  49                   dec ecx
// 00887174  0fafc1               imul eax, ecx
// 00887177  03442478             add eax, dword ptr [esp + 0x78]
// 0088717b  03442450             add eax, dword ptr [esp + 0x50]
// 0088717f  8b5500               mov edx, dword ptr [ebp]
// 00887182  89442474             mov dword ptr [esp + 0x74], eax
// 00887186  03c6                 add eax, esi
// 00887188  89442418             mov dword ptr [esp + 0x18], eax
// 0088718c  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088718f  8bcd                 mov ecx, ebp
// 00887191  ffd0                 call eax
// 00887193  83f803               cmp eax, 3
// 00887196  750d                 jne 0x8871a5
// 00887198  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0088719e  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008871a1  03c6                 add eax, esi
// 008871a3  eb0d                 jmp 0x8871b2
// 008871a5  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 008871ab  8b4214               mov eax, dword ptr [edx + 0x14]
// 008871ae  03c6                 add eax, esi
// 008871b0  f7d8                 neg eax
// 008871b2  8944242c             mov dword ptr [esp + 0x2c], eax
// 008871b6  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008871bc  8b30                 mov esi, dword ptr [eax]
// 008871be  8b442410             mov eax, dword ptr [esp + 0x10]
// 008871c2  83f801               cmp eax, 1
// 008871c5  89742444             mov dword ptr [esp + 0x44], esi
// 008871c9  7e11                 jle 0x8871dc
// 008871cb  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 008871d2  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008871da  7508                 jne 0x8871e4
// 008871dc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008871e4  33d2                 xor edx, edx
// 008871e6  89542414             mov dword ptr [esp + 0x14], edx
// 008871ea  85c0                 test eax, eax
// 008871ec  0f8e42010000         jle 0x887334
// 008871f2  eb08                 jmp 0x8871fc
// 008871f4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008871f8  8b742444             mov esi, dword ptr [esp + 0x44]
// 008871fc  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 008871ff  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 00887203  2bc1                 sub eax, ecx
// 00887205  33ff                 xor edi, edi
// 00887207  40                   inc eax
// 00887208  897c2470             mov dword ptr [esp + 0x70], edi
// 0088720c  894c2440             mov dword ptr [esp + 0x40], ecx
// 00887210  89442448             mov dword ptr [esp + 0x48], eax
// 00887214  397c2428             cmp dword ptr [esp + 0x28], edi
// 00887218  7438                 je 0x887252
// 0088721a  33f6                 xor esi, esi
// 0088721c  85c0                 test eax, eax
// 0088721e  7e32                 jle 0x887252
// 00887220  8d1c8d00000000       lea ebx, [ecx*4]
// 00887227  85c9                 test ecx, ecx
// 00887229  7c0d                 jl 0x887238
// 0088722b  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 0088722e  7d08                 jge 0x887238
// 00887230  8b5558               mov edx, dword ptr [ebp + 0x58]
// 00887233  8b1413               mov edx, dword ptr [ebx + edx]
// 00887236  eb02                 jmp 0x88723a
// 00887238  33d2                 xor edx, edx
// 0088723a  037a20               add edi, dword ptr [edx + 0x20]
// 0088723d  46                   inc esi
// 0088723e  83c304               add ebx, 4
// 00887241  41                   inc ecx
// 00887242  3bf0                 cmp esi, eax
// 00887244  897c2470             mov dword ptr [esp + 0x70], edi
// 00887248  7cdd                 jl 0x887227
// 0088724a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088724e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00887252  895c2424             mov dword ptr [esp + 0x24], ebx
// 00887256  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 00887259  035c244c             add ebx, dword ptr [esp + 0x4c]
// 0088725d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00887265  85c0                 test eax, eax
// 00887267  0f8ea4000000         jle 0x887311
// 0088726d  8d148d00000000       lea edx, [ecx*4]
// 00887274  894c2430             mov dword ptr [esp + 0x30], ecx
// 00887278  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088727c  89542420             mov dword ptr [esp + 0x20], edx
// 00887280  85c9                 test ecx, ecx
// 00887282  7c6e                 jl 0x8872f2
// 00887284  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00887287  7d69                 jge 0x8872f2
// 00887289  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0088728c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00887290  8b3416               mov esi, dword ptr [esi + edx]
// 00887293  85f6                 test esi, esi
// 00887295  745b                 je 0x8872f2
// 00887297  837c242800           cmp dword ptr [esp + 0x28], 0
// 0088729c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088729f  741a                 je 0x8872bb
// 008872a1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008872a5  2bc7                 sub eax, edi
// 008872a7  99                   cdq 
// 008872a8  f77c241c             idiv dword ptr [esp + 0x1c]
// 008872ac  03c1                 add eax, ecx
// 008872ae  29442424             sub dword ptr [esp + 0x24], eax
// 008872b2  294c2470             sub dword ptr [esp + 0x70], ecx
// 008872b6  8bc8                 mov ecx, eax
// 008872b8  894620               mov dword ptr [esi + 0x20], eax
// 008872bb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008872bf  8d3c19               lea edi, [ecx + ebx]
// 008872c2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008872c6  83ec10               sub esp, 0x10
// 008872c9  8bc4                 mov eax, esp
// 008872cb  8908                 mov dword ptr [eax], ecx
// 008872cd  895804               mov dword ptr [eax + 4], ebx
// 008872d0  895008               mov dword ptr [eax + 8], edx
// 008872d3  8bce                 mov ecx, esi
// 008872d5  89780c               mov dword ptr [eax + 0xc], edi
// 008872d8  e803b7ffff           call 0x8829e0
// 008872dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 008872e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008872e5  894664               mov dword ptr [esi + 0x64], eax
// 008872e8  8b442448             mov eax, dword ptr [esp + 0x48]
// 008872ec  8bdf                 mov ebx, edi
// 008872ee  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 008872f2  8b542434             mov edx, dword ptr [esp + 0x34]
// 008872f6  8344242004           add dword ptr [esp + 0x20], 4
// 008872fb  ff4c241c             dec dword ptr [esp + 0x1c]
// 008872ff  42                   inc edx
// 00887300  41                   inc ecx
// 00887301  3bd0                 cmp edx, eax
// 00887303  89542434             mov dword ptr [esp + 0x34], edx
// 00887307  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088730b  0f8c6fffffff         jl 0x887280
// 00887311  8b542414             mov edx, dword ptr [esp + 0x14]
// 00887315  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00887319  01442474             add dword ptr [esp + 0x74], eax
// 0088731d  01442418             add dword ptr [esp + 0x18], eax
// 00887321  42                   inc edx
// 00887322  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00887326  89542414             mov dword ptr [esp + 0x14], edx
// 0088732a  0f8cc4feffff         jl 0x8871f4
// 00887330  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00887334  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00887338  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0088733c  83ec10               sub esp, 0x10
// 0088733f  8bc4                 mov eax, esp
// 00887341  8908                 mov dword ptr [eax], ecx
// 00887343  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0088734a  895004               mov dword ptr [eax + 4], edx
// 0088734d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00887354  894808               mov dword ptr [eax + 8], ecx
// 00887357  89500c               mov dword ptr [eax + 0xc], edx
// 0088735a  55                   push ebp
// 0088735b  8d442470             lea eax, [esp + 0x70]
// 0088735f  50                   push eax
// 00887360  8bcf                 mov ecx, edi
// 00887362  e839f7ffff           call 0x886aa0
// 00887367  8b08                 mov ecx, dword ptr [eax]
// 00887369  894d24               mov dword ptr [ebp + 0x24], ecx
// 0088736c  8b5004               mov edx, dword ptr [eax + 4]
// 0088736f  895528               mov dword ptr [ebp + 0x28], edx
// 00887372  8b4808               mov ecx, dword ptr [eax + 8]
// 00887375  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00887378  8b500c               mov edx, dword ptr [eax + 0xc]
// 0088737b  895530               mov dword ptr [ebp + 0x30], edx
// 0088737e  5f                   pop edi
// 0088737f  5e                   pop esi
// 00887380  5d                   pop ebp
// 00887381  5b                   pop ebx
// 00887382  83c45c               add esp, 0x5c
// 00887385  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlMultiRow@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
