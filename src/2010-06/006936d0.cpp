// roc 2010-06 006936d0  unit: RBX::VLighting::?$FactoryProduct  size: 855 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006936d0
//
// 006936d0  6aff                 push -1
// 006936d2  684cd49a00           push 0x9ad44c
// 006936d7  64a100000000         mov eax, dword ptr fs:[0]
// 006936dd  50                   push eax
// 006936de  64892500000000       mov dword ptr fs:[0], esp
// 006936e5  81ec8c000000         sub esp, 0x8c
// 006936eb  55                   push ebp
// 006936ec  56                   push esi
// 006936ed  57                   push edi
// 006936ee  6a01                 push 1
// 006936f0  33ed                 xor ebp, ebp
// 006936f2  6a02                 push 2
// 006936f4  8d4c2420             lea ecx, [esp + 0x20]
// 006936f8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006936fc  ff1534a49e00         call dword ptr [0x9ea434]
// 00693702  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00693709  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 00693710  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 0069371b  3bf5                 cmp esi, ebp
// 0069371d  750c                 jne 0x69372b
// 0069371f  81ff00000080         cmp edi, 0x80000000
// 00693725  0f8459020000         je 0x693984
// 0069372b  83feff               cmp esi, -1
// 0069372e  750c                 jne 0x69373c
// 00693730  81ffffffff7f         cmp edi, 0x7fffffff
// 00693736  0f8448020000         je 0x693984
// 0069373c  83fefe               cmp esi, -2
// 0069373f  750c                 jne 0x69374d
// 00693741  81ffffffff7f         cmp edi, 0x7fffffff
// 00693747  0f8444020000         je 0x693991
// 0069374d  8d4c240c             lea ecx, [esp + 0xc]
// 00693751  51                   push ecx
// 00693752  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00693759  896c2410             mov dword ptr [esp + 0x10], ebp
// 0069375d  896c2414             mov dword ptr [esp + 0x14], ebp
// 00693761  e82af9ffff           call 0x693090
// 00693766  83f8ff               cmp eax, -1
// 00693769  0f94c0               sete al
// 0069376c  84c0                 test al, al
// 0069376e  741d                 je 0x69378d
// 00693770  8d542418             lea edx, [esp + 0x18]
// 00693774  6a2d                 push 0x2d
// 00693776  52                   push edx
// 00693777  e894a9dbff           call 0x44e110
// 0069377c  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 00693783  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 0069378a  83c408               add esp, 8
// 0069378d  55                   push ebp
// 0069378e  6800a493d6           push 0xd693a400
// 00693793  57                   push edi
// 00693794  56                   push esi
// 00693795  e846551100           call 0x7a8ce0
// 0069379a  3bc5                 cmp eax, ebp
// 0069379c  7d02                 jge 0x6937a0
// 0069379e  f7d8                 neg eax
// 006937a0  8b3598a59e00         mov esi, dword ptr [0x9ea598]
// 006937a6  53                   push ebx
// 006937a7  8bf8                 mov edi, eax
// 006937a9  8d442410             lea eax, [esp + 0x10]
// 006937ad  6a02                 push 2
// 006937af  50                   push eax
// 006937b0  ffd6                 call esi
// 006937b2  8b4804               mov ecx, dword ptr [eax + 4]
// 006937b5  8b542424             mov edx, dword ptr [esp + 0x24]
// 006937b9  8b00                 mov eax, dword ptr [eax]
// 006937bb  51                   push ecx
// 006937bc  8b4a04               mov ecx, dword ptr [edx + 4]
// 006937bf  8d540c28             lea edx, [esp + ecx + 0x28]
// 006937c3  52                   push edx
// 006937c4  ffd0                 call eax
// 006937c6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006937ca  8b4104               mov eax, dword ptr [ecx + 4]
// 006937cd  83c410               add esp, 0x10
// 006937d0  689478a100           push 0xa17894
// 006937d5  8d440420             lea eax, [esp + eax + 0x20]
// 006937d9  b330                 mov bl, 0x30
// 006937db  57                   push edi
// 006937dc  8d4c2424             lea ecx, [esp + 0x24]
// 006937e0  885830               mov byte ptr [eax + 0x30], bl
// 006937e3  ff15f4a49e00         call dword ptr [0x9ea4f4]
// 006937e9  50                   push eax
// 006937ea  e831a7dbff           call 0x44df20
// 006937ef  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 006937f6  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 006937fd  83c408               add esp, 8
// 00693800  55                   push ebp
// 00693801  6800879303           push 0x3938700
// 00693806  52                   push edx
// 00693807  50                   push eax
// 00693808  e8d3541100           call 0x7a8ce0
// 0069380d  55                   push ebp
// 0069380e  6a3c                 push 0x3c
// 00693810  52                   push edx
// 00693811  50                   push eax
// 00693812  e8c95b1100           call 0x7a93e0
// 00693817  3bc5                 cmp eax, ebp
// 00693819  7d02                 jge 0x69381d
// 0069381b  f7d8                 neg eax
// 0069381d  8d4c2410             lea ecx, [esp + 0x10]
// 00693821  6a02                 push 2
// 00693823  51                   push ecx
// 00693824  8bf8                 mov edi, eax
// 00693826  ffd6                 call esi
// 00693828  8b5004               mov edx, dword ptr [eax + 4]
// 0069382b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069382f  52                   push edx
// 00693830  8b5104               mov edx, dword ptr [ecx + 4]
// 00693833  8d4c1428             lea ecx, [esp + edx + 0x28]
// 00693837  8b10                 mov edx, dword ptr [eax]
// 00693839  51                   push ecx
// 0069383a  ffd2                 call edx
// 0069383c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00693840  8b4004               mov eax, dword ptr [eax + 4]
// 00693843  83c410               add esp, 0x10
// 00693846  689478a100           push 0xa17894
// 0069384b  8d440420             lea eax, [esp + eax + 0x20]
// 0069384f  57                   push edi
// 00693850  8d4c2424             lea ecx, [esp + 0x24]
// 00693854  885830               mov byte ptr [eax + 0x30], bl
// 00693857  ff15f4a49e00         call dword ptr [0x9ea4f4]
// 0069385d  50                   push eax
// 0069385e  e8bda6dbff           call 0x44df20
// 00693863  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0069386a  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00693871  83c408               add esp, 8
// 00693874  55                   push ebp
// 00693875  6840420f00           push 0xf4240
// 0069387a  51                   push ecx
// 0069387b  52                   push edx
// 0069387c  e85f541100           call 0x7a8ce0
// 00693881  55                   push ebp
// 00693882  6a3c                 push 0x3c
// 00693884  52                   push edx
// 00693885  50                   push eax
// 00693886  e8555b1100           call 0x7a93e0
// 0069388b  3bc5                 cmp eax, ebp
// 0069388d  7d02                 jge 0x693891
// 0069388f  f7d8                 neg eax
// 00693891  8bf8                 mov edi, eax
// 00693893  8d442410             lea eax, [esp + 0x10]
// 00693897  6a02                 push 2
// 00693899  50                   push eax
// 0069389a  ffd6                 call esi
// 0069389c  8b4804               mov ecx, dword ptr [eax + 4]
// 0069389f  8b542424             mov edx, dword ptr [esp + 0x24]
// 006938a3  8b00                 mov eax, dword ptr [eax]
// 006938a5  51                   push ecx
// 006938a6  8b4a04               mov ecx, dword ptr [edx + 4]
// 006938a9  8d540c28             lea edx, [esp + ecx + 0x28]
// 006938ad  52                   push edx
// 006938ae  ffd0                 call eax
// 006938b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006938b4  8b4104               mov eax, dword ptr [ecx + 4]
// 006938b7  83c410               add esp, 0x10
// 006938ba  8d44041c             lea eax, [esp + eax + 0x1c]
// 006938be  57                   push edi
// 006938bf  8d4c2420             lea ecx, [esp + 0x20]
// 006938c3  885830               mov byte ptr [eax + 0x30], bl
// 006938c6  ff15f4a49e00         call dword ptr [0x9ea4f4]
// 006938cc  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 006938d3  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 006938da  55                   push ebp
// 006938db  6840420f00           push 0xf4240
// 006938e0  52                   push edx
// 006938e1  50                   push eax
// 006938e2  e8f95a1100           call 0x7a93e0
// 006938e7  3bd5                 cmp edx, ebp
// 006938e9  7f0c                 jg 0x6938f7
// 006938eb  7c04                 jl 0x6938f1
// 006938ed  3bc5                 cmp eax, ebp
// 006938ef  7306                 jae 0x6938f7
// 006938f1  f7d8                 neg eax
// 006938f3  13d5                 adc edx, ebp
// 006938f5  f7da                 neg edx
// 006938f7  8bf8                 mov edi, eax
// 006938f9  8bea                 mov ebp, edx
// 006938fb  8bcf                 mov ecx, edi
// 006938fd  0bcd                 or ecx, ebp
// 006938ff  743c                 je 0x69393d
// 00693901  8d542410             lea edx, [esp + 0x10]
// 00693905  6a06                 push 6
// 00693907  52                   push edx
// 00693908  ffd6                 call esi
// 0069390a  83c408               add esp, 8
// 0069390d  50                   push eax
// 0069390e  8d442420             lea eax, [esp + 0x20]
// 00693912  683428a100           push 0xa12834
// 00693917  50                   push eax
// 00693918  e803a6dbff           call 0x44df20
// 0069391d  83c408               add esp, 8
// 00693920  50                   push eax
// 00693921  e8caf6ffff           call 0x692ff0
// 00693926  8b08                 mov ecx, dword ptr [eax]
// 00693928  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069392b  83c408               add esp, 8
// 0069392e  03c8                 add ecx, eax
// 00693930  55                   push ebp
// 00693931  885930               mov byte ptr [ecx + 0x30], bl
// 00693934  57                   push edi
// 00693935  8bc8                 mov ecx, eax
// 00693937  ff1578a69e00         call dword ptr [0x9ea678]
// 0069393d  5b                   pop ebx
// 0069393e  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 00693945  56                   push esi
// 00693946  8d4c241c             lea ecx, [esp + 0x1c]
// 0069394a  ff1530a49e00         call dword ptr [0x9ea430]
// 00693950  8d4c2418             lea ecx, [esp + 0x18]
// 00693954  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0069395c  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 00693964  ff152ca49e00         call dword ptr [0x9ea42c]
// 0069396a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00693971  5f                   pop edi
// 00693972  8bc6                 mov eax, esi
// 00693974  5e                   pop esi
// 00693975  5d                   pop ebp
// 00693976  64890d00000000       mov dword ptr fs:[0], ecx
// 0069397d  81c498000000         add esp, 0x98
// 00693983  c3                   ret 
// 00693984  83fefe               cmp esi, -2
// 00693987  750c                 jne 0x693995
// 00693989  81ffffffff7f         cmp edi, 0x7fffffff
// 0069398f  7504                 jne 0x693995
// 00693991  33c0                 xor eax, eax
// 00693993  eb28                 jmp 0x6939bd
// 00693995  3bf5                 cmp esi, ebp
// 00693997  750f                 jne 0x6939a8
// 00693999  81ff00000080         cmp edi, 0x80000000
// 0069399f  7507                 jne 0x6939a8
// 006939a1  b801000000           mov eax, 1
// 006939a6  eb15                 jmp 0x6939bd
// 006939a8  83feff               cmp esi, -1
// 006939ab  750b                 jne 0x6939b8
// 006939ad  8d4603               lea eax, [esi + 3]
// 006939b0  81ffffffff7f         cmp edi, 0x7fffffff
// 006939b6  7405                 je 0x6939bd
// 006939b8  b805000000           mov eax, 5
// 006939bd  2bc5                 sub eax, ebp
// 006939bf  744f                 je 0x693a10
// 006939c1  83e801               sub eax, 1
// 006939c4  7433                 je 0x6939f9
// 006939c6  83e801               sub eax, 1
// 006939c9  7417                 je 0x6939e2
// 006939cb  8d442418             lea eax, [esp + 0x18]
// 006939cf  68fe08a000           push 0xa008fe
// 006939d4  50                   push eax
// 006939d5  e846a5dbff           call 0x44df20
// 006939da  83c408               add esp, 8
// 006939dd  e95cffffff           jmp 0x69393e
// 006939e2  8d4c2418             lea ecx, [esp + 0x18]
// 006939e6  68d4dea300           push 0xa3ded4
// 006939eb  51                   push ecx
// 006939ec  e82fa5dbff           call 0x44df20
// 006939f1  83c408               add esp, 8
// 006939f4  e945ffffff           jmp 0x69393e
// 006939f9  8d542418             lea edx, [esp + 0x18]
// 006939fd  68c8dea300           push 0xa3dec8
// 00693a02  52                   push edx
// 00693a03  e818a5dbff           call 0x44df20
// 00693a08  83c408               add esp, 8
// 00693a0b  e92effffff           jmp 0x69393e
// 00693a10  8d442418             lea eax, [esp + 0x18]
// 00693a14  68b8dea300           push 0xa3deb8
// 00693a19  50                   push eax
// 00693a1a  e801a5dbff           call 0x44df20
// 00693a1f  83c408               add esp, 8
// 00693a22  e917ffffff           jmp 0x69393e
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
