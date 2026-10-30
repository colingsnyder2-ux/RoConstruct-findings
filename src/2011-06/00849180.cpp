// roc 2011-06 00849180  unit: CRobloxTreeCtrl  size: 1231 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849180
//
// 00849180  6aff                 push -1
// 00849182  684055a000           push 0xa05540
// 00849187  64a100000000         mov eax, dword ptr fs:[0]
// 0084918d  50                   push eax
// 0084918e  81ec90000000         sub esp, 0x90
// 00849194  53                   push ebx
// 00849195  55                   push ebp
// 00849196  56                   push esi
// 00849197  57                   push edi
// 00849198  a12058c900           mov eax, dword ptr [0xc95820]
// 0084919d  33c4                 xor eax, esp
// 0084919f  50                   push eax
// 008491a0  8d8424a4000000       lea eax, [esp + 0xa4]
// 008491a7  64a300000000         mov dword ptr fs:[0], eax
// 008491ad  8bf1                 mov esi, ecx
// 008491af  8b4634               mov eax, dword ptr [esi + 0x34]
// 008491b2  8b7820               mov edi, dword ptr [eax + 0x20]
// 008491b5  ff15f819a400         call dword ptr [0xa419f8]
// 008491bb  3bc7                 cmp eax, edi
// 008491bd  7407                 je 0x8491c6
// 008491bf  57                   push edi
// 008491c0  ff15c419a400         call dword ptr [0xa419c4]
// 008491c6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008491c9  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008491cc  52                   push edx
// 008491cd  ff15341ba400         call dword ptr [0xa41b34]
// 008491d3  6a0a                 push 0xa
// 008491d5  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008491dc  e889361800           call 0x9cc86a
// 008491e1  c7842488000000a864ac00 mov dword ptr [esp + 0x88], 0xac64a8
// 008491ec  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 008491f3  33ed                 xor ebp, ebp
// 008491f5  83e00c               and eax, 0xc
// 008491f8  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 008491ff  89442434             mov dword ptr [esp + 0x34], eax
// 00849203  740f                 je 0x849214
// 00849205  8d842488000000       lea eax, [esp + 0x88]
// 0084920c  50                   push eax
// 0084920d  8bce                 mov ecx, esi
// 0084920f  e81cf5ffff           call 0x848730
// 00849214  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00849217  51                   push ecx
// 00849218  8d4c2470             lea ecx, [esp + 0x70]
// 0084921c  e8071dfcff           call 0x80af28
// 00849221  8b4634               mov eax, dword ptr [esi + 0x34]
// 00849224  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849227  8d542440             lea edx, [esp + 0x40]
// 0084922b  52                   push edx
// 0084922c  bb01000000           mov ebx, 1
// 00849231  50                   push eax
// 00849232  889c24b4000000       mov byte ptr [esp + 0xb4], bl
// 00849239  ff157c1ca400         call dword ptr [0xa41c7c]
// 0084923f  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00849245  6a45                 push 0x45
// 00849247  ffd7                 call edi
// 00849249  6a44                 push 0x44
// 0084924b  8944243c             mov dword ptr [esp + 0x3c], eax
// 0084924f  ffd7                 call edi
// 00849251  55                   push ebp
// 00849252  89842484000000       mov dword ptr [esp + 0x84], eax
// 00849259  8b4634               mov eax, dword ptr [esi + 0x34]
// 0084925c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084925f  6a4b                 push 0x4b
// 00849261  53                   push ebx
// 00849262  51                   push ecx
// 00849263  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00849267  ff15741ca400         call dword ptr [0xa41c74]
// 0084926d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00849270  53                   push ebx
// 00849271  89442440             mov dword ptr [esp + 0x40], eax
// 00849275  e820361800           call 0x9cc89a
// 0084927a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084927d  55                   push ebp
// 0084927e  8bf8                 mov edi, eax
// 00849280  e815361800           call 0x9cc89a
// 00849285  33c9                 xor ecx, ecx
// 00849287  51                   push ecx
// 00849288  8be8                 mov ebp, eax
// 0084928a  8b4634               mov eax, dword ptr [esi + 0x34]
// 0084928d  51                   push ecx
// 0084928e  894c2424             mov dword ptr [esp + 0x24], ecx
// 00849292  894c2428             mov dword ptr [esp + 0x28], ecx
// 00849296  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0084929a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0084929e  8b5020               mov edx, dword ptr [eax + 0x20]
// 008492a1  680a110000           push 0x110a
// 008492a6  52                   push edx
// 008492a7  894c2440             mov dword ptr [esp + 0x40], ecx
// 008492ab  ff15c019a400         call dword ptr [0xa419c0]
// 008492b1  85c0                 test eax, eax
// 008492b3  741f                 je 0x8492d4
// 008492b5  6a00                 push 0
// 008492b7  8d4c2420             lea ecx, [esp + 0x20]
// 008492bb  51                   push ecx
// 008492bc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008492bf  50                   push eax
// 008492c0  e82f17fcff           call 0x80a9f4
// 008492c5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008492c9  2b442420             sub eax, dword ptr [esp + 0x20]
// 008492cd  89442430             mov dword ptr [esp + 0x30], eax
// 008492d1  0faff8               imul edi, eax
// 008492d4  01ac24b8000000       add dword ptr [esp + 0xb8], ebp
// 008492db  01bc24bc000000       add dword ptr [esp + 0xbc], edi
// 008492e2  6a00                 push 0
// 008492e4  6a00                 push 0
// 008492e6  6a00                 push 0
// 008492e8  8d54245c             lea edx, [esp + 0x5c]
// 008492ec  52                   push edx
// 008492ed  ff15281ca400         call dword ptr [0xa41c28]
// 008492f3  85c0                 test eax, eax
// 008492f5  0f84b2000000         je 0x8493ad
// 008492fb  8b7e34               mov edi, dword ptr [esi + 0x34]
// 008492fe  ff15381ba400         call dword ptr [0xa41b38]
// 00849304  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00849307  0f85a0000000         jne 0x8493ad
// 0084930d  8b442454             mov eax, dword ptr [esp + 0x54]
// 00849311  3d00020000           cmp eax, 0x200
// 00849316  0f87b9020000         ja 0x8495d5
// 0084931c  0f84d0000000         je 0x8493f2
// 00849322  2d00010000           sub eax, 0x100
// 00849327  746d                 je 0x849396
// 00849329  83e813               sub eax, 0x13
// 0084932c  0f85b7020000         jne 0x8495e9
// 00849332  837c24584b           cmp dword ptr [esp + 0x58], 0x4b
// 00849337  75a9                 jne 0x8492e2
// 00849339  8b442464             mov eax, dword ptr [esp + 0x64]
// 0084933d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00849341  8d542414             lea edx, [esp + 0x14]
// 00849345  89442414             mov dword ptr [esp + 0x14], eax
// 00849349  894c2418             mov dword ptr [esp + 0x18], ecx
// 0084934d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00849350  52                   push edx
// 00849351  50                   push eax
// 00849352  ff15f419a400         call dword ptr [0xa419f4]
// 00849358  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084935c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00849360  51                   push ecx
// 00849361  52                   push edx
// 00849362  8d442448             lea eax, [esp + 0x48]
// 00849366  50                   push eax
// 00849367  ff15101ca400         call dword ptr [0xa41c10]
// 0084936d  85c0                 test eax, eax
// 0084936f  7410                 je 0x849381
// 00849371  8d4c2450             lea ecx, [esp + 0x50]
// 00849375  51                   push ecx
// 00849376  ff150c1aa400         call dword ptr [0xa41a0c]
// 0084937c  e961ffffff           jmp 0x8492e2
// 00849381  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00849386  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 0084938b  c1e010               shl eax, 0x10
// 0084938e  0bc2                 or eax, edx
// 00849390  8944245c             mov dword ptr [esp + 0x5c], eax
// 00849394  eb60                 jmp 0x8493f6
// 00849396  66837c24581b         cmp word ptr [esp + 0x58], 0x1b
// 0084939c  0f8547020000         jne 0x8495e9
// 008493a2  6a00                 push 0
// 008493a4  6a00                 push 0
// 008493a6  8bce                 mov ecx, esi
// 008493a8  e873ecffff           call 0x848020
// 008493ad  8b4634               mov eax, dword ptr [esi + 0x34]
// 008493b0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008493b4  8b4020               mov eax, dword ptr [eax + 0x20]
// 008493b7  52                   push edx
// 008493b8  50                   push eax
// 008493b9  ff15d019a400         call dword ptr [0xa419d0]
// 008493bf  ff15401ba400         call dword ptr [0xa41b40]
// 008493c5  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008493ca  0f8429020000         je 0x8495f9
// 008493d0  6a00                 push 0
// 008493d2  6a00                 push 0
// 008493d4  8bc3                 mov eax, ebx
// 008493d6  50                   push eax
// 008493d7  53                   push ebx
// 008493d8  6a00                 push 0
// 008493da  50                   push eax
// 008493db  53                   push ebx
// 008493dc  8d4c2438             lea ecx, [esp + 0x38]
// 008493e0  51                   push ecx
// 008493e1  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008493e8  e8a7341800           call 0x9cc894
// 008493ed  e919020000           jmp 0x84960b
// 008493f2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008493f6  0fbfc8               movsx ecx, ax
// 008493f9  c1e810               shr eax, 0x10
// 008493fc  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00849401  0fbff8               movsx edi, ax
// 00849404  894c2414             mov dword ptr [esp + 0x14], ecx
// 00849408  897c2418             mov dword ptr [esp + 0x18], edi
// 0084940c  0f858c000000         jne 0x84949e
// 00849412  2b8c24b8000000       sub ecx, dword ptr [esp + 0xb8]
// 00849419  8bc1                 mov eax, ecx
// 0084941b  99                   cdq 
// 0084941c  33c2                 xor eax, edx
// 0084941e  2bc2                 sub eax, edx
// 00849420  3b842480000000       cmp eax, dword ptr [esp + 0x80]
// 00849427  7f18                 jg 0x849441
// 00849429  2bbc24bc000000       sub edi, dword ptr [esp + 0xbc]
// 00849430  8bc7                 mov eax, edi
// 00849432  99                   cdq 
// 00849433  33c2                 xor eax, edx
// 00849435  2bc2                 sub eax, edx
// 00849437  3b442438             cmp eax, dword ptr [esp + 0x38]
// 0084943b  0f8ea1feffff         jle 0x8492e2
// 00849441  837c243400           cmp dword ptr [esp + 0x34], 0
// 00849446  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0084944a  750b                 jne 0x849457
// 0084944c  6a00                 push 0
// 0084944e  6a00                 push 0
// 00849450  8bce                 mov ecx, esi
// 00849452  e8c9ebffff           call 0x848020
// 00849457  8b4634               mov eax, dword ptr [esi + 0x34]
// 0084945a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084945d  50                   push eax
// 0084945e  ff152c1ba400         call dword ptr [0xa41b2c]
// 00849464  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0084946b  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00849472  50                   push eax
// 00849473  51                   push ecx
// 00849474  50                   push eax
// 00849475  51                   push ecx
// 00849476  8d4c242c             lea ecx, [esp + 0x2c]
// 0084947a  51                   push ecx
// 0084947b  ff15c81ba400         call dword ptr [0xa41bc8]
// 00849481  6a00                 push 0
// 00849483  6a00                 push 0
// 00849485  8bc3                 mov eax, ebx
// 00849487  50                   push eax
// 00849488  53                   push ebx
// 00849489  6a00                 push 0
// 0084948b  50                   push eax
// 0084948c  53                   push ebx
// 0084948d  8d542438             lea edx, [esp + 0x38]
// 00849491  52                   push edx
// 00849492  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00849499  e8f6331800           call 0x9cc894
// 0084949e  6a00                 push 0
// 008494a0  6a00                 push 0
// 008494a2  8bc3                 mov eax, ebx
// 008494a4  50                   push eax
// 008494a5  53                   push ebx
// 008494a6  6a00                 push 0
// 008494a8  50                   push eax
// 008494a9  53                   push ebx
// 008494aa  8d442438             lea eax, [esp + 0x38]
// 008494ae  50                   push eax
// 008494af  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008494b6  e8d9331800           call 0x9cc894
// 008494bb  8b442418             mov eax, dword ptr [esp + 0x18]
// 008494bf  3b442444             cmp eax, dword ptr [esp + 0x44]
// 008494c3  7d12                 jge 0x8494d7
// 008494c5  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008494c8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008494cb  6a00                 push 0
// 008494cd  6a00                 push 0
// 008494cf  6815010000           push 0x115
// 008494d4  52                   push edx
// 008494d5  eb16                 jmp 0x8494ed
// 008494d7  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 008494db  7c16                 jl 0x8494f3
// 008494dd  8b4634               mov eax, dword ptr [esi + 0x34]
// 008494e0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008494e3  6a00                 push 0
// 008494e5  6a01                 push 1
// 008494e7  6815010000           push 0x115
// 008494ec  51                   push ecx
// 008494ed  ff15c019a400         call dword ptr [0xa419c0]
// 008494f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008494f7  3b442440             cmp eax, dword ptr [esp + 0x40]
// 008494fb  7d12                 jge 0x84950f
// 008494fd  8b5634               mov edx, dword ptr [esi + 0x34]
// 00849500  8b4220               mov eax, dword ptr [edx + 0x20]
// 00849503  6a00                 push 0
// 00849505  6a00                 push 0
// 00849507  6814010000           push 0x114
// 0084950c  50                   push eax
// 0084950d  eb16                 jmp 0x849525
// 0084950f  3b442448             cmp eax, dword ptr [esp + 0x48]
// 00849513  7c16                 jl 0x84952b
// 00849515  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00849518  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0084951b  6a00                 push 0
// 0084951d  6a01                 push 1
// 0084951f  6814010000           push 0x114
// 00849524  52                   push edx
// 00849525  ff15c019a400         call dword ptr [0xa419c0]
// 0084952b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084952e  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 00849535  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 0084953c  6a00                 push 0
// 0084953e  e857331800           call 0x9cc89a
// 00849543  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00849546  6a01                 push 1
// 00849548  2bf8                 sub edi, eax
// 0084954a  e84b331800           call 0x9cc89a
// 0084954f  0faf442430           imul eax, dword ptr [esp + 0x30]
// 00849554  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00849558  2be8                 sub ebp, eax
// 0084955a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084955e  50                   push eax
// 0084955f  51                   push ecx
// 00849560  55                   push ebp
// 00849561  57                   push edi
// 00849562  8d54242c             lea edx, [esp + 0x2c]
// 00849566  52                   push edx
// 00849567  ff15c81ba400         call dword ptr [0xa41bc8]
// 0084956d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00849571  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00849575  3bc1                 cmp eax, ecx
// 00849577  7e08                 jle 0x849581
// 00849579  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0084957d  89442424             mov dword ptr [esp + 0x24], eax
// 00849581  8b442420             mov eax, dword ptr [esp + 0x20]
// 00849585  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00849589  3bc1                 cmp eax, ecx
// 0084958b  7e08                 jle 0x849595
// 0084958d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00849591  89442428             mov dword ptr [esp + 0x28], eax
// 00849595  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 0084959c  8b06                 mov eax, dword ptr [esi]
// 0084959e  8d8c2488000000       lea ecx, [esp + 0x88]
// 008495a5  51                   push ecx
// 008495a6  52                   push edx
// 008495a7  8b5064               mov edx, dword ptr [eax + 0x64]
// 008495aa  8d4c2424             lea ecx, [esp + 0x24]
// 008495ae  51                   push ecx
// 008495af  8bce                 mov ecx, esi
// 008495b1  ffd2                 call edx
// 008495b3  6a00                 push 0
// 008495b5  6a00                 push 0
// 008495b7  8bc3                 mov eax, ebx
// 008495b9  50                   push eax
// 008495ba  53                   push ebx
// 008495bb  6a00                 push 0
// 008495bd  50                   push eax
// 008495be  53                   push ebx
// 008495bf  8d442438             lea eax, [esp + 0x38]
// 008495c3  50                   push eax
// 008495c4  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008495cb  e8c4321800           call 0x9cc894
// 008495d0  e90dfdffff           jmp 0x8492e2
// 008495d5  2d02020000           sub eax, 0x202
// 008495da  0f84cdfdffff         je 0x8493ad
// 008495e0  83e803               sub eax, 3
// 008495e3  0f84c4fdffff         je 0x8493ad
// 008495e9  8d4c2450             lea ecx, [esp + 0x50]
// 008495ed  51                   push ecx
// 008495ee  ff150c1aa400         call dword ptr [0xa41a0c]
// 008495f4  e9e9fcffff           jmp 0x8492e2
// 008495f9  837c243400           cmp dword ptr [esp + 0x34], 0
// 008495fe  750b                 jne 0x84960b
// 00849600  6a00                 push 0
// 00849602  6a00                 push 0
// 00849604  8bce                 mov ecx, esi
// 00849606  e815eaffff           call 0x848020
// 0084960b  8d4c246c             lea ecx, [esp + 0x6c]
// 0084960f  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00849617  e80619fcff           call 0x80af22
// 0084961c  8d8c2488000000       lea ecx, [esp + 0x88]
// 00849623  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 0084962e  e82b321800           call 0x9cc85e
// 00849633  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0084963a  64890d00000000       mov dword ptr fs:[0], ecx
// 00849641  59                   pop ecx
// 00849642  5f                   pop edi
// 00849643  5e                   pop esi
// 00849644  5d                   pop ebp
// 00849645  5b                   pop ebx
// 00849646  81c49c000000         add esp, 0x9c
// 0084964c  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoBanding@CXTTreeBase@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp