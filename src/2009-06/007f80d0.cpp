// roc 2009-06 007f80d0  unit: CXTPTabPaintManager  size: 1384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f80d0
//
// 007f80d0  83ec5c               sub esp, 0x5c
// 007f80d3  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007f80d7  53                   push ebx
// 007f80d8  55                   push ebp
// 007f80d9  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 007f80dd  56                   push esi
// 007f80de  57                   push edi
// 007f80df  8bf9                 mov edi, ecx
// 007f80e1  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007f80e5  83ec10               sub esp, 0x10
// 007f80e8  8bc4                 mov eax, esp
// 007f80ea  8908                 mov dword ptr [eax], ecx
// 007f80ec  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007f80f3  895004               mov dword ptr [eax + 4], edx
// 007f80f6  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007f80fd  894808               mov dword ptr [eax + 8], ecx
// 007f8100  89500c               mov dword ptr [eax + 0xc], edx
// 007f8103  55                   push ebp
// 007f8104  8d442470             lea eax, [esp + 0x70]
// 007f8108  50                   push eax
// 007f8109  8bcf                 mov ecx, edi
// 007f810b  897c2454             mov dword ptr [esp + 0x54], edi
// 007f810f  e83cfcffff           call 0x7f7d50
// 007f8114  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 007f8118  8b08                 mov ecx, dword ptr [eax]
// 007f811a  894d24               mov dword ptr [ebp + 0x24], ecx
// 007f811d  8b5004               mov edx, dword ptr [eax + 4]
// 007f8120  895528               mov dword ptr [ebp + 0x28], edx
// 007f8123  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8126  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 007f8129  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f812c  895530               mov dword ptr [ebp + 0x30], edx
// 007f812f  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 007f8136  0f84f2040000         je 0x7f862e
// 007f813c  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 007f8142  8b01                 mov eax, dword ptr [ecx]
// 007f8144  8b4010               mov eax, dword ptr [eax + 0x10]
// 007f8147  8d54244c             lea edx, [esp + 0x4c]
// 007f814b  52                   push edx
// 007f814c  ffd0                 call eax
// 007f814e  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 007f8154  8b11                 mov edx, dword ptr [ecx]
// 007f8156  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007f8159  55                   push ebp
// 007f815a  ffd0                 call eax
// 007f815c  8b5500               mov edx, dword ptr [ebp]
// 007f815f  8bf0                 mov esi, eax
// 007f8161  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8164  8bcd                 mov ecx, ebp
// 007f8166  ffd0                 call eax
// 007f8168  83f802               cmp eax, 2
// 007f816b  7412                 je 0x7f817f
// 007f816d  8b5500               mov edx, dword ptr [ebp]
// 007f8170  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8173  8bcd                 mov ecx, ebp
// 007f8175  ffd0                 call eax
// 007f8177  85c0                 test eax, eax
// 007f8179  0f8536020000         jne 0x7f83b5
// 007f817f  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 007f8182  2b5d24               sub ebx, dword ptr [ebp + 0x24]
// 007f8185  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007f8189  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 007f818d  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 007f8191  53                   push ebx
// 007f8192  51                   push ecx
// 007f8193  55                   push ebp
// 007f8194  8bcf                 mov ecx, edi
// 007f8196  895c2438             mov dword ptr [esp + 0x38], ebx
// 007f819a  e821feffff           call 0x7f7fc0
// 007f819f  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 007f81a5  8b4204               mov eax, dword ptr [edx + 4]
// 007f81a8  8b5500               mov edx, dword ptr [ebp]
// 007f81ab  89442410             mov dword ptr [esp + 0x10], eax
// 007f81af  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f81b2  8bcd                 mov ecx, ebp
// 007f81b4  ffd0                 call eax
// 007f81b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f81ba  83f802               cmp eax, 2
// 007f81bd  7523                 jne 0x7f81e2
// 007f81bf  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 007f81c5  8d41ff               lea eax, [ecx - 1]
// 007f81c8  0fafce               imul ecx, esi
// 007f81cb  0faf4214             imul eax, dword ptr [edx + 0x14]
// 007f81cf  8bd0                 mov edx, eax
// 007f81d1  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007f81d8  2bc2                 sub eax, edx
// 007f81da  2bc1                 sub eax, ecx
// 007f81dc  2b442450             sub eax, dword ptr [esp + 0x50]
// 007f81e0  eb17                 jmp 0x7f81f9
// 007f81e2  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 007f81e8  8b4014               mov eax, dword ptr [eax + 0x14]
// 007f81eb  03c6                 add eax, esi
// 007f81ed  49                   dec ecx
// 007f81ee  0fafc1               imul eax, ecx
// 007f81f1  0344247c             add eax, dword ptr [esp + 0x7c]
// 007f81f5  03442450             add eax, dword ptr [esp + 0x50]
// 007f81f9  8b5500               mov edx, dword ptr [ebp]
// 007f81fc  89442474             mov dword ptr [esp + 0x74], eax
// 007f8200  03c6                 add eax, esi
// 007f8202  89442424             mov dword ptr [esp + 0x24], eax
// 007f8206  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8209  8bcd                 mov ecx, ebp
// 007f820b  ffd0                 call eax
// 007f820d  83f802               cmp eax, 2
// 007f8210  750d                 jne 0x7f821f
// 007f8212  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 007f8218  8b4114               mov eax, dword ptr [ecx + 0x14]
// 007f821b  03c6                 add eax, esi
// 007f821d  eb0d                 jmp 0x7f822c
// 007f821f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 007f8225  8b4214               mov eax, dword ptr [edx + 0x14]
// 007f8228  03c6                 add eax, esi
// 007f822a  f7d8                 neg eax
// 007f822c  89442438             mov dword ptr [esp + 0x38], eax
// 007f8230  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 007f8236  8b30                 mov esi, dword ptr [eax]
// 007f8238  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f823c  83f801               cmp eax, 1
// 007f823f  89742440             mov dword ptr [esp + 0x40], esi
// 007f8243  7e11                 jle 0x7f8256
// 007f8245  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 007f824c  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007f8254  7508                 jne 0x7f825e
// 007f8256  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f825e  33d2                 xor edx, edx
// 007f8260  89542428             mov dword ptr [esp + 0x28], edx
// 007f8264  85c0                 test eax, eax
// 007f8266  0f8e78030000         jle 0x7f85e4
// 007f826c  eb0a                 jmp 0x7f8278
// 007f826e  8bff                 mov edi, edi
// 007f8270  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007f8274  8b742440             mov esi, dword ptr [esp + 0x40]
// 007f8278  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 007f827b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 007f827f  2bc1                 sub eax, ecx
// 007f8281  33ff                 xor edi, edi
// 007f8283  40                   inc eax
// 007f8284  897c2470             mov dword ptr [esp + 0x70], edi
// 007f8288  894c2434             mov dword ptr [esp + 0x34], ecx
// 007f828c  89442444             mov dword ptr [esp + 0x44], eax
// 007f8290  397c2414             cmp dword ptr [esp + 0x14], edi
// 007f8294  7438                 je 0x7f82ce
// 007f8296  33f6                 xor esi, esi
// 007f8298  85c0                 test eax, eax
// 007f829a  7e32                 jle 0x7f82ce
// 007f829c  8d1c8d00000000       lea ebx, [ecx*4]
// 007f82a3  85c9                 test ecx, ecx
// 007f82a5  7c0d                 jl 0x7f82b4
// 007f82a7  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 007f82aa  7d08                 jge 0x7f82b4
// 007f82ac  8b5558               mov edx, dword ptr [ebp + 0x58]
// 007f82af  8b1413               mov edx, dword ptr [ebx + edx]
// 007f82b2  eb02                 jmp 0x7f82b6
// 007f82b4  33d2                 xor edx, edx
// 007f82b6  037a20               add edi, dword ptr [edx + 0x20]
// 007f82b9  46                   inc esi
// 007f82ba  83c304               add ebx, 4
// 007f82bd  41                   inc ecx
// 007f82be  3bf0                 cmp esi, eax
// 007f82c0  897c2470             mov dword ptr [esp + 0x70], edi
// 007f82c4  7cdd                 jl 0x7f82a3
// 007f82c6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f82ca  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007f82ce  895c2418             mov dword ptr [esp + 0x18], ebx
// 007f82d2  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 007f82d5  035c244c             add ebx, dword ptr [esp + 0x4c]
// 007f82d9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007f82e1  85c0                 test eax, eax
// 007f82e3  0f8ea8000000         jle 0x7f8391
// 007f82e9  8d148d00000000       lea edx, [ecx*4]
// 007f82f0  894c2434             mov dword ptr [esp + 0x34], ecx
// 007f82f4  89442420             mov dword ptr [esp + 0x20], eax
// 007f82f8  8954241c             mov dword ptr [esp + 0x1c], edx
// 007f82fc  8d642400             lea esp, [esp]
// 007f8300  85c9                 test ecx, ecx
// 007f8302  7c6e                 jl 0x7f8372
// 007f8304  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 007f8307  7d69                 jge 0x7f8372
// 007f8309  8b5558               mov edx, dword ptr [ebp + 0x58]
// 007f830c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007f8310  8b3416               mov esi, dword ptr [esi + edx]
// 007f8313  85f6                 test esi, esi
// 007f8315  745b                 je 0x7f8372
// 007f8317  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f831c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f831f  741a                 je 0x7f833b
// 007f8321  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f8325  2bc7                 sub eax, edi
// 007f8327  99                   cdq 
// 007f8328  f77c2420             idiv dword ptr [esp + 0x20]
// 007f832c  03c1                 add eax, ecx
// 007f832e  29442418             sub dword ptr [esp + 0x18], eax
// 007f8332  294c2470             sub dword ptr [esp + 0x70], ecx
// 007f8336  8bc8                 mov ecx, eax
// 007f8338  894620               mov dword ptr [esi + 0x20], eax
// 007f833b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007f833f  8d3c19               lea edi, [ecx + ebx]
// 007f8342  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007f8346  83ec10               sub esp, 0x10
// 007f8349  8bc4                 mov eax, esp
// 007f834b  8918                 mov dword ptr [eax], ebx
// 007f834d  894804               mov dword ptr [eax + 4], ecx
// 007f8350  897808               mov dword ptr [eax + 8], edi
// 007f8353  8bce                 mov ecx, esi
// 007f8355  89500c               mov dword ptr [eax + 0xc], edx
// 007f8358  e8f3b8ffff           call 0x7f3c50
// 007f835d  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f8361  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f8365  894664               mov dword ptr [esi + 0x64], eax
// 007f8368  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f836c  8bdf                 mov ebx, edi
// 007f836e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 007f8372  8b542430             mov edx, dword ptr [esp + 0x30]
// 007f8376  8344241c04           add dword ptr [esp + 0x1c], 4
// 007f837b  ff4c2420             dec dword ptr [esp + 0x20]
// 007f837f  42                   inc edx
// 007f8380  41                   inc ecx
// 007f8381  3bd0                 cmp edx, eax
// 007f8383  89542430             mov dword ptr [esp + 0x30], edx
// 007f8387  894c2434             mov dword ptr [esp + 0x34], ecx
// 007f838b  0f8c6fffffff         jl 0x7f8300
// 007f8391  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f8395  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f8399  01442474             add dword ptr [esp + 0x74], eax
// 007f839d  01442424             add dword ptr [esp + 0x24], eax
// 007f83a1  42                   inc edx
// 007f83a2  3b542410             cmp edx, dword ptr [esp + 0x10]
// 007f83a6  89542428             mov dword ptr [esp + 0x28], edx
// 007f83aa  0f8cc0feffff         jl 0x7f8270
// 007f83b0  e92b020000           jmp 0x7f85e0
// 007f83b5  8b5d30               mov ebx, dword ptr [ebp + 0x30]
// 007f83b8  2b5d28               sub ebx, dword ptr [ebp + 0x28]
// 007f83bb  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007f83bf  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 007f83c3  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 007f83c7  53                   push ebx
// 007f83c8  51                   push ecx
// 007f83c9  55                   push ebp
// 007f83ca  8bcf                 mov ecx, edi
// 007f83cc  895c2444             mov dword ptr [esp + 0x44], ebx
// 007f83d0  e8ebfbffff           call 0x7f7fc0
// 007f83d5  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 007f83db  8b4204               mov eax, dword ptr [edx + 4]
// 007f83de  8b5500               mov edx, dword ptr [ebp]
// 007f83e1  89442410             mov dword ptr [esp + 0x10], eax
// 007f83e5  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f83e8  8bcd                 mov ecx, ebp
// 007f83ea  ffd0                 call eax
// 007f83ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f83f0  83f803               cmp eax, 3
// 007f83f3  7523                 jne 0x7f8418
// 007f83f5  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 007f83fb  8d41ff               lea eax, [ecx - 1]
// 007f83fe  0fafce               imul ecx, esi
// 007f8401  0faf4214             imul eax, dword ptr [edx + 0x14]
// 007f8405  8bd0                 mov edx, eax
// 007f8407  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007f840e  2bc2                 sub eax, edx
// 007f8410  2bc1                 sub eax, ecx
// 007f8412  2b442450             sub eax, dword ptr [esp + 0x50]
// 007f8416  eb17                 jmp 0x7f842f
// 007f8418  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 007f841e  8b4014               mov eax, dword ptr [eax + 0x14]
// 007f8421  03c6                 add eax, esi
// 007f8423  49                   dec ecx
// 007f8424  0fafc1               imul eax, ecx
// 007f8427  03442478             add eax, dword ptr [esp + 0x78]
// 007f842b  03442450             add eax, dword ptr [esp + 0x50]
// 007f842f  8b5500               mov edx, dword ptr [ebp]
// 007f8432  89442474             mov dword ptr [esp + 0x74], eax
// 007f8436  03c6                 add eax, esi
// 007f8438  89442418             mov dword ptr [esp + 0x18], eax
// 007f843c  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f843f  8bcd                 mov ecx, ebp
// 007f8441  ffd0                 call eax
// 007f8443  83f803               cmp eax, 3
// 007f8446  750d                 jne 0x7f8455
// 007f8448  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 007f844e  8b4114               mov eax, dword ptr [ecx + 0x14]
// 007f8451  03c6                 add eax, esi
// 007f8453  eb0d                 jmp 0x7f8462
// 007f8455  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 007f845b  8b4214               mov eax, dword ptr [edx + 0x14]
// 007f845e  03c6                 add eax, esi
// 007f8460  f7d8                 neg eax
// 007f8462  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f8466  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 007f846c  8b30                 mov esi, dword ptr [eax]
// 007f846e  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f8472  83f801               cmp eax, 1
// 007f8475  89742444             mov dword ptr [esp + 0x44], esi
// 007f8479  7e11                 jle 0x7f848c
// 007f847b  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 007f8482  c744242801000000     mov dword ptr [esp + 0x28], 1
// 007f848a  7508                 jne 0x7f8494
// 007f848c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007f8494  33d2                 xor edx, edx
// 007f8496  89542414             mov dword ptr [esp + 0x14], edx
// 007f849a  85c0                 test eax, eax
// 007f849c  0f8e42010000         jle 0x7f85e4
// 007f84a2  eb08                 jmp 0x7f84ac
// 007f84a4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007f84a8  8b742444             mov esi, dword ptr [esp + 0x44]
// 007f84ac  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 007f84af  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 007f84b3  2bc1                 sub eax, ecx
// 007f84b5  33ff                 xor edi, edi
// 007f84b7  40                   inc eax
// 007f84b8  897c2470             mov dword ptr [esp + 0x70], edi
// 007f84bc  894c2440             mov dword ptr [esp + 0x40], ecx
// 007f84c0  89442448             mov dword ptr [esp + 0x48], eax
// 007f84c4  397c2428             cmp dword ptr [esp + 0x28], edi
// 007f84c8  7438                 je 0x7f8502
// 007f84ca  33f6                 xor esi, esi
// 007f84cc  85c0                 test eax, eax
// 007f84ce  7e32                 jle 0x7f8502
// 007f84d0  8d1c8d00000000       lea ebx, [ecx*4]
// 007f84d7  85c9                 test ecx, ecx
// 007f84d9  7c0d                 jl 0x7f84e8
// 007f84db  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 007f84de  7d08                 jge 0x7f84e8
// 007f84e0  8b5558               mov edx, dword ptr [ebp + 0x58]
// 007f84e3  8b1413               mov edx, dword ptr [ebx + edx]
// 007f84e6  eb02                 jmp 0x7f84ea
// 007f84e8  33d2                 xor edx, edx
// 007f84ea  037a20               add edi, dword ptr [edx + 0x20]
// 007f84ed  46                   inc esi
// 007f84ee  83c304               add ebx, 4
// 007f84f1  41                   inc ecx
// 007f84f2  3bf0                 cmp esi, eax
// 007f84f4  897c2470             mov dword ptr [esp + 0x70], edi
// 007f84f8  7cdd                 jl 0x7f84d7
// 007f84fa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f84fe  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007f8502  895c2424             mov dword ptr [esp + 0x24], ebx
// 007f8506  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 007f8509  035c244c             add ebx, dword ptr [esp + 0x4c]
// 007f850d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007f8515  85c0                 test eax, eax
// 007f8517  0f8ea4000000         jle 0x7f85c1
// 007f851d  8d148d00000000       lea edx, [ecx*4]
// 007f8524  894c2430             mov dword ptr [esp + 0x30], ecx
// 007f8528  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f852c  89542420             mov dword ptr [esp + 0x20], edx
// 007f8530  85c9                 test ecx, ecx
// 007f8532  7c6e                 jl 0x7f85a2
// 007f8534  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 007f8537  7d69                 jge 0x7f85a2
// 007f8539  8b5558               mov edx, dword ptr [ebp + 0x58]
// 007f853c  8b742420             mov esi, dword ptr [esp + 0x20]
// 007f8540  8b3416               mov esi, dword ptr [esi + edx]
// 007f8543  85f6                 test esi, esi
// 007f8545  745b                 je 0x7f85a2
// 007f8547  837c242800           cmp dword ptr [esp + 0x28], 0
// 007f854c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f854f  741a                 je 0x7f856b
// 007f8551  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f8555  2bc7                 sub eax, edi
// 007f8557  99                   cdq 
// 007f8558  f77c241c             idiv dword ptr [esp + 0x1c]
// 007f855c  03c1                 add eax, ecx
// 007f855e  29442424             sub dword ptr [esp + 0x24], eax
// 007f8562  294c2470             sub dword ptr [esp + 0x70], ecx
// 007f8566  8bc8                 mov ecx, eax
// 007f8568  894620               mov dword ptr [esi + 0x20], eax
// 007f856b  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f856f  8d3c19               lea edi, [ecx + ebx]
// 007f8572  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007f8576  83ec10               sub esp, 0x10
// 007f8579  8bc4                 mov eax, esp
// 007f857b  8908                 mov dword ptr [eax], ecx
// 007f857d  895804               mov dword ptr [eax + 4], ebx
// 007f8580  895008               mov dword ptr [eax + 8], edx
// 007f8583  8bce                 mov ecx, esi
// 007f8585  89780c               mov dword ptr [eax + 0xc], edi
// 007f8588  e8c3b6ffff           call 0x7f3c50
// 007f858d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f8591  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007f8595  894664               mov dword ptr [esi + 0x64], eax
// 007f8598  8b442448             mov eax, dword ptr [esp + 0x48]
// 007f859c  8bdf                 mov ebx, edi
// 007f859e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 007f85a2  8b542434             mov edx, dword ptr [esp + 0x34]
// 007f85a6  8344242004           add dword ptr [esp + 0x20], 4
// 007f85ab  ff4c241c             dec dword ptr [esp + 0x1c]
// 007f85af  42                   inc edx
// 007f85b0  41                   inc ecx
// 007f85b1  3bd0                 cmp edx, eax
// 007f85b3  89542434             mov dword ptr [esp + 0x34], edx
// 007f85b7  894c2430             mov dword ptr [esp + 0x30], ecx
// 007f85bb  0f8c6fffffff         jl 0x7f8530
// 007f85c1  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f85c5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f85c9  01442474             add dword ptr [esp + 0x74], eax
// 007f85cd  01442418             add dword ptr [esp + 0x18], eax
// 007f85d1  42                   inc edx
// 007f85d2  3b542410             cmp edx, dword ptr [esp + 0x10]
// 007f85d6  89542414             mov dword ptr [esp + 0x14], edx
// 007f85da  0f8cc4feffff         jl 0x7f84a4
// 007f85e0  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007f85e4  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007f85e8  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007f85ec  83ec10               sub esp, 0x10
// 007f85ef  8bc4                 mov eax, esp
// 007f85f1  8908                 mov dword ptr [eax], ecx
// 007f85f3  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007f85fa  895004               mov dword ptr [eax + 4], edx
// 007f85fd  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007f8604  894808               mov dword ptr [eax + 8], ecx
// 007f8607  89500c               mov dword ptr [eax + 0xc], edx
// 007f860a  55                   push ebp
// 007f860b  8d442470             lea eax, [esp + 0x70]
// 007f860f  50                   push eax
// 007f8610  8bcf                 mov ecx, edi
// 007f8612  e839f7ffff           call 0x7f7d50
// 007f8617  8b08                 mov ecx, dword ptr [eax]
// 007f8619  894d24               mov dword ptr [ebp + 0x24], ecx
// 007f861c  8b5004               mov edx, dword ptr [eax + 4]
// 007f861f  895528               mov dword ptr [ebp + 0x28], edx
// 007f8622  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8625  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 007f8628  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f862b  895530               mov dword ptr [ebp + 0x30], edx
// 007f862e  5f                   pop edi
// 007f862f  5e                   pop esi
// 007f8630  5d                   pop ebp
// 007f8631  5b                   pop ebx
// 007f8632  83c45c               add esp, 0x5c
// 007f8635  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlMultiRow@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
