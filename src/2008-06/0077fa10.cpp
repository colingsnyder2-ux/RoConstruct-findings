// from server: 100% by auto
// roc 2008-06 0077fa10  unit: CXTPTabPaintManager  size: 1384 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077fa10
//
// 0077fa10  83ec5c               sub esp, 0x5c
// 0077fa13  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0077fa17  53                   push ebx
// 0077fa18  55                   push ebp
// 0077fa19  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0077fa1d  56                   push esi
// 0077fa1e  57                   push edi
// 0077fa1f  8bf9                 mov edi, ecx
// 0077fa21  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0077fa25  83ec10               sub esp, 0x10
// 0077fa28  8bc4                 mov eax, esp
// 0077fa2a  8908                 mov dword ptr [eax], ecx
// 0077fa2c  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0077fa33  895004               mov dword ptr [eax + 4], edx
// 0077fa36  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0077fa3d  894808               mov dword ptr [eax + 8], ecx
// 0077fa40  89500c               mov dword ptr [eax + 0xc], edx
// 0077fa43  55                   push ebp
// 0077fa44  8d442470             lea eax, [esp + 0x70]
// 0077fa48  50                   push eax
// 0077fa49  8bcf                 mov ecx, edi
// 0077fa4b  897c2454             mov dword ptr [esp + 0x54], edi
// 0077fa4f  e83cfcffff           call 0x77f690
// 0077fa54  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 0077fa58  8b08                 mov ecx, dword ptr [eax]
// 0077fa5a  894d24               mov dword ptr [ebp + 0x24], ecx
// 0077fa5d  8b5004               mov edx, dword ptr [eax + 4]
// 0077fa60  895528               mov dword ptr [ebp + 0x28], edx
// 0077fa63  8b4808               mov ecx, dword ptr [eax + 8]
// 0077fa66  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 0077fa69  8b500c               mov edx, dword ptr [eax + 0xc]
// 0077fa6c  895530               mov dword ptr [ebp + 0x30], edx
// 0077fa6f  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 0077fa76  0f84f2040000         je 0x77ff6e
// 0077fa7c  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0077fa82  8b01                 mov eax, dword ptr [ecx]
// 0077fa84  8b4010               mov eax, dword ptr [eax + 0x10]
// 0077fa87  8d54244c             lea edx, [esp + 0x4c]
// 0077fa8b  52                   push edx
// 0077fa8c  ffd0                 call eax
// 0077fa8e  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0077fa94  8b11                 mov edx, dword ptr [ecx]
// 0077fa96  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0077fa99  55                   push ebp
// 0077fa9a  ffd0                 call eax
// 0077fa9c  8b5500               mov edx, dword ptr [ebp]
// 0077fa9f  8bf0                 mov esi, eax
// 0077faa1  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077faa4  8bcd                 mov ecx, ebp
// 0077faa6  ffd0                 call eax
// 0077faa8  83f802               cmp eax, 2
// 0077faab  7412                 je 0x77fabf
// 0077faad  8b5500               mov edx, dword ptr [ebp]
// 0077fab0  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077fab3  8bcd                 mov ecx, ebp
// 0077fab5  ffd0                 call eax
// 0077fab7  85c0                 test eax, eax
// 0077fab9  0f8536020000         jne 0x77fcf5
// 0077fabf  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 0077fac2  2b5d24               sub ebx, dword ptr [ebp + 0x24]
// 0077fac5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0077fac9  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 0077facd  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 0077fad1  53                   push ebx
// 0077fad2  51                   push ecx
// 0077fad3  55                   push ebp
// 0077fad4  8bcf                 mov ecx, edi
// 0077fad6  895c2438             mov dword ptr [esp + 0x38], ebx
// 0077fada  e821feffff           call 0x77f900
// 0077fadf  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 0077fae5  8b4204               mov eax, dword ptr [edx + 4]
// 0077fae8  8b5500               mov edx, dword ptr [ebp]
// 0077faeb  89442410             mov dword ptr [esp + 0x10], eax
// 0077faef  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077faf2  8bcd                 mov ecx, ebp
// 0077faf4  ffd0                 call eax
// 0077faf6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077fafa  83f802               cmp eax, 2
// 0077fafd  7523                 jne 0x77fb22
// 0077faff  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 0077fb05  8d41ff               lea eax, [ecx - 1]
// 0077fb08  0fafce               imul ecx, esi
// 0077fb0b  0faf4214             imul eax, dword ptr [edx + 0x14]
// 0077fb0f  8bd0                 mov edx, eax
// 0077fb11  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0077fb18  2bc2                 sub eax, edx
// 0077fb1a  2bc1                 sub eax, ecx
// 0077fb1c  2b442450             sub eax, dword ptr [esp + 0x50]
// 0077fb20  eb17                 jmp 0x77fb39
// 0077fb22  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 0077fb28  8b4014               mov eax, dword ptr [eax + 0x14]
// 0077fb2b  03c6                 add eax, esi
// 0077fb2d  49                   dec ecx
// 0077fb2e  0fafc1               imul eax, ecx
// 0077fb31  0344247c             add eax, dword ptr [esp + 0x7c]
// 0077fb35  03442450             add eax, dword ptr [esp + 0x50]
// 0077fb39  8b5500               mov edx, dword ptr [ebp]
// 0077fb3c  89442474             mov dword ptr [esp + 0x74], eax
// 0077fb40  03c6                 add eax, esi
// 0077fb42  89442424             mov dword ptr [esp + 0x24], eax
// 0077fb46  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077fb49  8bcd                 mov ecx, ebp
// 0077fb4b  ffd0                 call eax
// 0077fb4d  83f802               cmp eax, 2
// 0077fb50  750d                 jne 0x77fb5f
// 0077fb52  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0077fb58  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0077fb5b  03c6                 add eax, esi
// 0077fb5d  eb0d                 jmp 0x77fb6c
// 0077fb5f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 0077fb65  8b4214               mov eax, dword ptr [edx + 0x14]
// 0077fb68  03c6                 add eax, esi
// 0077fb6a  f7d8                 neg eax
// 0077fb6c  89442438             mov dword ptr [esp + 0x38], eax
// 0077fb70  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0077fb76  8b30                 mov esi, dword ptr [eax]
// 0077fb78  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077fb7c  83f801               cmp eax, 1
// 0077fb7f  89742440             mov dword ptr [esp + 0x40], esi
// 0077fb83  7e11                 jle 0x77fb96
// 0077fb85  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 0077fb8c  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0077fb94  7508                 jne 0x77fb9e
// 0077fb96  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0077fb9e  33d2                 xor edx, edx
// 0077fba0  89542428             mov dword ptr [esp + 0x28], edx
// 0077fba4  85c0                 test eax, eax
// 0077fba6  0f8e78030000         jle 0x77ff24
// 0077fbac  eb0a                 jmp 0x77fbb8
// 0077fbae  8bff                 mov edi, edi
// 0077fbb0  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0077fbb4  8b742440             mov esi, dword ptr [esp + 0x40]
// 0077fbb8  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 0077fbbb  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 0077fbbf  2bc1                 sub eax, ecx
// 0077fbc1  33ff                 xor edi, edi
// 0077fbc3  40                   inc eax
// 0077fbc4  897c2470             mov dword ptr [esp + 0x70], edi
// 0077fbc8  894c2434             mov dword ptr [esp + 0x34], ecx
// 0077fbcc  89442444             mov dword ptr [esp + 0x44], eax
// 0077fbd0  397c2414             cmp dword ptr [esp + 0x14], edi
// 0077fbd4  7438                 je 0x77fc0e
// 0077fbd6  33f6                 xor esi, esi
// 0077fbd8  85c0                 test eax, eax
// 0077fbda  7e32                 jle 0x77fc0e
// 0077fbdc  8d1c8d00000000       lea ebx, [ecx*4]
// 0077fbe3  85c9                 test ecx, ecx
// 0077fbe5  7c0d                 jl 0x77fbf4
// 0077fbe7  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 0077fbea  7d08                 jge 0x77fbf4
// 0077fbec  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0077fbef  8b1413               mov edx, dword ptr [ebx + edx]
// 0077fbf2  eb02                 jmp 0x77fbf6
// 0077fbf4  33d2                 xor edx, edx
// 0077fbf6  037a20               add edi, dword ptr [edx + 0x20]
// 0077fbf9  46                   inc esi
// 0077fbfa  83c304               add ebx, 4
// 0077fbfd  41                   inc ecx
// 0077fbfe  3bf0                 cmp esi, eax
// 0077fc00  897c2470             mov dword ptr [esp + 0x70], edi
// 0077fc04  7cdd                 jl 0x77fbe3
// 0077fc06  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0077fc0a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0077fc0e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0077fc12  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 0077fc15  035c244c             add ebx, dword ptr [esp + 0x4c]
// 0077fc19  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0077fc21  85c0                 test eax, eax
// 0077fc23  0f8ea8000000         jle 0x77fcd1
// 0077fc29  8d148d00000000       lea edx, [ecx*4]
// 0077fc30  894c2434             mov dword ptr [esp + 0x34], ecx
// 0077fc34  89442420             mov dword ptr [esp + 0x20], eax
// 0077fc38  8954241c             mov dword ptr [esp + 0x1c], edx
// 0077fc3c  8d642400             lea esp, [esp]
// 0077fc40  85c9                 test ecx, ecx
// 0077fc42  7c6e                 jl 0x77fcb2
// 0077fc44  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 0077fc47  7d69                 jge 0x77fcb2
// 0077fc49  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0077fc4c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0077fc50  8b3416               mov esi, dword ptr [esi + edx]
// 0077fc53  85f6                 test esi, esi
// 0077fc55  745b                 je 0x77fcb2
// 0077fc57  837c241400           cmp dword ptr [esp + 0x14], 0
// 0077fc5c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0077fc5f  741a                 je 0x77fc7b
// 0077fc61  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077fc65  2bc7                 sub eax, edi
// 0077fc67  99                   cdq 
// 0077fc68  f77c2420             idiv dword ptr [esp + 0x20]
// 0077fc6c  03c1                 add eax, ecx
// 0077fc6e  29442418             sub dword ptr [esp + 0x18], eax
// 0077fc72  294c2470             sub dword ptr [esp + 0x70], ecx
// 0077fc76  8bc8                 mov ecx, eax
// 0077fc78  894620               mov dword ptr [esi + 0x20], eax
// 0077fc7b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0077fc7f  8d3c19               lea edi, [ecx + ebx]
// 0077fc82  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0077fc86  83ec10               sub esp, 0x10
// 0077fc89  8bc4                 mov eax, esp
// 0077fc8b  8918                 mov dword ptr [eax], ebx
// 0077fc8d  894804               mov dword ptr [eax + 4], ecx
// 0077fc90  897808               mov dword ptr [eax + 8], edi
// 0077fc93  8bce                 mov ecx, esi
// 0077fc95  89500c               mov dword ptr [eax + 0xc], edx
// 0077fc98  e863b8ffff           call 0x77b500
// 0077fc9d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077fca1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0077fca5  894664               mov dword ptr [esi + 0x64], eax
// 0077fca8  8b442444             mov eax, dword ptr [esp + 0x44]
// 0077fcac  8bdf                 mov ebx, edi
// 0077fcae  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0077fcb2  8b542430             mov edx, dword ptr [esp + 0x30]
// 0077fcb6  8344241c04           add dword ptr [esp + 0x1c], 4
// 0077fcbb  ff4c2420             dec dword ptr [esp + 0x20]
// 0077fcbf  42                   inc edx
// 0077fcc0  41                   inc ecx
// 0077fcc1  3bd0                 cmp edx, eax
// 0077fcc3  89542430             mov dword ptr [esp + 0x30], edx
// 0077fcc7  894c2434             mov dword ptr [esp + 0x34], ecx
// 0077fccb  0f8c6fffffff         jl 0x77fc40
// 0077fcd1  8b542428             mov edx, dword ptr [esp + 0x28]
// 0077fcd5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0077fcd9  01442474             add dword ptr [esp + 0x74], eax
// 0077fcdd  01442424             add dword ptr [esp + 0x24], eax
// 0077fce1  42                   inc edx
// 0077fce2  3b542410             cmp edx, dword ptr [esp + 0x10]
// 0077fce6  89542428             mov dword ptr [esp + 0x28], edx
// 0077fcea  0f8cc0feffff         jl 0x77fbb0
// 0077fcf0  e92b020000           jmp 0x77ff20
// 0077fcf5  8b5d30               mov ebx, dword ptr [ebp + 0x30]
// 0077fcf8  2b5d28               sub ebx, dword ptr [ebp + 0x28]
// 0077fcfb  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0077fcff  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 0077fd03  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 0077fd07  53                   push ebx
// 0077fd08  51                   push ecx
// 0077fd09  55                   push ebp
// 0077fd0a  8bcf                 mov ecx, edi
// 0077fd0c  895c2444             mov dword ptr [esp + 0x44], ebx
// 0077fd10  e8ebfbffff           call 0x77f900
// 0077fd15  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 0077fd1b  8b4204               mov eax, dword ptr [edx + 4]
// 0077fd1e  8b5500               mov edx, dword ptr [ebp]
// 0077fd21  89442410             mov dword ptr [esp + 0x10], eax
// 0077fd25  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077fd28  8bcd                 mov ecx, ebp
// 0077fd2a  ffd0                 call eax
// 0077fd2c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077fd30  83f803               cmp eax, 3
// 0077fd33  7523                 jne 0x77fd58
// 0077fd35  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 0077fd3b  8d41ff               lea eax, [ecx - 1]
// 0077fd3e  0fafce               imul ecx, esi
// 0077fd41  0faf4214             imul eax, dword ptr [edx + 0x14]
// 0077fd45  8bd0                 mov edx, eax
// 0077fd47  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0077fd4e  2bc2                 sub eax, edx
// 0077fd50  2bc1                 sub eax, ecx
// 0077fd52  2b442450             sub eax, dword ptr [esp + 0x50]
// 0077fd56  eb17                 jmp 0x77fd6f
// 0077fd58  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 0077fd5e  8b4014               mov eax, dword ptr [eax + 0x14]
// 0077fd61  03c6                 add eax, esi
// 0077fd63  49                   dec ecx
// 0077fd64  0fafc1               imul eax, ecx
// 0077fd67  03442478             add eax, dword ptr [esp + 0x78]
// 0077fd6b  03442450             add eax, dword ptr [esp + 0x50]
// 0077fd6f  8b5500               mov edx, dword ptr [ebp]
// 0077fd72  89442474             mov dword ptr [esp + 0x74], eax
// 0077fd76  03c6                 add eax, esi
// 0077fd78  89442418             mov dword ptr [esp + 0x18], eax
// 0077fd7c  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077fd7f  8bcd                 mov ecx, ebp
// 0077fd81  ffd0                 call eax
// 0077fd83  83f803               cmp eax, 3
// 0077fd86  750d                 jne 0x77fd95
// 0077fd88  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0077fd8e  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0077fd91  03c6                 add eax, esi
// 0077fd93  eb0d                 jmp 0x77fda2
// 0077fd95  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 0077fd9b  8b4214               mov eax, dword ptr [edx + 0x14]
// 0077fd9e  03c6                 add eax, esi
// 0077fda0  f7d8                 neg eax
// 0077fda2  8944242c             mov dword ptr [esp + 0x2c], eax
// 0077fda6  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0077fdac  8b30                 mov esi, dword ptr [eax]
// 0077fdae  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077fdb2  83f801               cmp eax, 1
// 0077fdb5  89742444             mov dword ptr [esp + 0x44], esi
// 0077fdb9  7e11                 jle 0x77fdcc
// 0077fdbb  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 0077fdc2  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0077fdca  7508                 jne 0x77fdd4
// 0077fdcc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0077fdd4  33d2                 xor edx, edx
// 0077fdd6  89542414             mov dword ptr [esp + 0x14], edx
// 0077fdda  85c0                 test eax, eax
// 0077fddc  0f8e42010000         jle 0x77ff24
// 0077fde2  eb08                 jmp 0x77fdec
// 0077fde4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0077fde8  8b742444             mov esi, dword ptr [esp + 0x44]
// 0077fdec  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 0077fdef  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 0077fdf3  2bc1                 sub eax, ecx
// 0077fdf5  33ff                 xor edi, edi
// 0077fdf7  40                   inc eax
// 0077fdf8  897c2470             mov dword ptr [esp + 0x70], edi
// 0077fdfc  894c2440             mov dword ptr [esp + 0x40], ecx
// 0077fe00  89442448             mov dword ptr [esp + 0x48], eax
// 0077fe04  397c2428             cmp dword ptr [esp + 0x28], edi
// 0077fe08  7438                 je 0x77fe42
// 0077fe0a  33f6                 xor esi, esi
// 0077fe0c  85c0                 test eax, eax
// 0077fe0e  7e32                 jle 0x77fe42
// 0077fe10  8d1c8d00000000       lea ebx, [ecx*4]
// 0077fe17  85c9                 test ecx, ecx
// 0077fe19  7c0d                 jl 0x77fe28
// 0077fe1b  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 0077fe1e  7d08                 jge 0x77fe28
// 0077fe20  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0077fe23  8b1413               mov edx, dword ptr [ebx + edx]
// 0077fe26  eb02                 jmp 0x77fe2a
// 0077fe28  33d2                 xor edx, edx
// 0077fe2a  037a20               add edi, dword ptr [edx + 0x20]
// 0077fe2d  46                   inc esi
// 0077fe2e  83c304               add ebx, 4
// 0077fe31  41                   inc ecx
// 0077fe32  3bf0                 cmp esi, eax
// 0077fe34  897c2470             mov dword ptr [esp + 0x70], edi
// 0077fe38  7cdd                 jl 0x77fe17
// 0077fe3a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0077fe3e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0077fe42  895c2424             mov dword ptr [esp + 0x24], ebx
// 0077fe46  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 0077fe49  035c244c             add ebx, dword ptr [esp + 0x4c]
// 0077fe4d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0077fe55  85c0                 test eax, eax
// 0077fe57  0f8ea4000000         jle 0x77ff01
// 0077fe5d  8d148d00000000       lea edx, [ecx*4]
// 0077fe64  894c2430             mov dword ptr [esp + 0x30], ecx
// 0077fe68  8944241c             mov dword ptr [esp + 0x1c], eax
// 0077fe6c  89542420             mov dword ptr [esp + 0x20], edx
// 0077fe70  85c9                 test ecx, ecx
// 0077fe72  7c6e                 jl 0x77fee2
// 0077fe74  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 0077fe77  7d69                 jge 0x77fee2
// 0077fe79  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0077fe7c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0077fe80  8b3416               mov esi, dword ptr [esi + edx]
// 0077fe83  85f6                 test esi, esi
// 0077fe85  745b                 je 0x77fee2
// 0077fe87  837c242800           cmp dword ptr [esp + 0x28], 0
// 0077fe8c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0077fe8f  741a                 je 0x77feab
// 0077fe91  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077fe95  2bc7                 sub eax, edi
// 0077fe97  99                   cdq 
// 0077fe98  f77c241c             idiv dword ptr [esp + 0x1c]
// 0077fe9c  03c1                 add eax, ecx
// 0077fe9e  29442424             sub dword ptr [esp + 0x24], eax
// 0077fea2  294c2470             sub dword ptr [esp + 0x70], ecx
// 0077fea6  8bc8                 mov ecx, eax
// 0077fea8  894620               mov dword ptr [esi + 0x20], eax
// 0077feab  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077feaf  8d3c19               lea edi, [ecx + ebx]
// 0077feb2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0077feb6  83ec10               sub esp, 0x10
// 0077feb9  8bc4                 mov eax, esp
// 0077febb  8908                 mov dword ptr [eax], ecx
// 0077febd  895804               mov dword ptr [eax + 4], ebx
// 0077fec0  895008               mov dword ptr [eax + 8], edx
// 0077fec3  8bce                 mov ecx, esi
// 0077fec5  89780c               mov dword ptr [eax + 0xc], edi
// 0077fec8  e833b6ffff           call 0x77b500
// 0077fecd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077fed1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0077fed5  894664               mov dword ptr [esi + 0x64], eax
// 0077fed8  8b442448             mov eax, dword ptr [esp + 0x48]
// 0077fedc  8bdf                 mov ebx, edi
// 0077fede  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0077fee2  8b542434             mov edx, dword ptr [esp + 0x34]
// 0077fee6  8344242004           add dword ptr [esp + 0x20], 4
// 0077feeb  ff4c241c             dec dword ptr [esp + 0x1c]
// 0077feef  42                   inc edx
// 0077fef0  41                   inc ecx
// 0077fef1  3bd0                 cmp edx, eax
// 0077fef3  89542434             mov dword ptr [esp + 0x34], edx
// 0077fef7  894c2430             mov dword ptr [esp + 0x30], ecx
// 0077fefb  0f8c6fffffff         jl 0x77fe70
// 0077ff01  8b542414             mov edx, dword ptr [esp + 0x14]
// 0077ff05  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0077ff09  01442474             add dword ptr [esp + 0x74], eax
// 0077ff0d  01442418             add dword ptr [esp + 0x18], eax
// 0077ff11  42                   inc edx
// 0077ff12  3b542410             cmp edx, dword ptr [esp + 0x10]
// 0077ff16  89542414             mov dword ptr [esp + 0x14], edx
// 0077ff1a  0f8cc4feffff         jl 0x77fde4
// 0077ff20  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0077ff24  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0077ff28  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0077ff2c  83ec10               sub esp, 0x10
// 0077ff2f  8bc4                 mov eax, esp
// 0077ff31  8908                 mov dword ptr [eax], ecx
// 0077ff33  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0077ff3a  895004               mov dword ptr [eax + 4], edx
// 0077ff3d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0077ff44  894808               mov dword ptr [eax + 8], ecx
// 0077ff47  89500c               mov dword ptr [eax + 0xc], edx
// 0077ff4a  55                   push ebp
// 0077ff4b  8d442470             lea eax, [esp + 0x70]
// 0077ff4f  50                   push eax
// 0077ff50  8bcf                 mov ecx, edi
// 0077ff52  e839f7ffff           call 0x77f690
// 0077ff57  8b08                 mov ecx, dword ptr [eax]
// 0077ff59  894d24               mov dword ptr [ebp + 0x24], ecx
// 0077ff5c  8b5004               mov edx, dword ptr [eax + 4]
// 0077ff5f  895528               mov dword ptr [ebp + 0x28], edx
// 0077ff62  8b4808               mov ecx, dword ptr [eax + 8]
// 0077ff65  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 0077ff68  8b500c               mov edx, dword ptr [eax + 0xc]
// 0077ff6b  895530               mov dword ptr [ebp + 0x30], edx
// 0077ff6e  5f                   pop edi
// 0077ff6f  5e                   pop esi
// 0077ff70  5d                   pop ebp
// 0077ff71  5b                   pop ebx
// 0077ff72  83c45c               add esp, 0x5c
// 0077ff75  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlMultiRow@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
