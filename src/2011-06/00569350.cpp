// roc 2011-06 00569350  unit: seg_00560000  size: 548 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569350
//
// 00569350  56                   push esi
// 00569351  8b742408             mov esi, dword ptr [esp + 8]
// 00569355  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0056935c  741b                 je 0x569379
// 0056935e  8b06                 mov eax, dword ptr [esi]
// 00569360  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00569367  8b0e                 mov ecx, dword ptr [esi]
// 00569369  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056936c  895118               mov dword ptr [ecx + 0x18], edx
// 0056936f  8b06                 mov eax, dword ptr [esi]
// 00569371  8b08                 mov ecx, dword ptr [eax]
// 00569373  56                   push esi
// 00569374  ffd1                 call ecx
// 00569376  83c404               add esp, 4
// 00569379  8b4630               mov eax, dword ptr [esi + 0x30]
// 0056937c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056937f  8d14c500000000       lea edx, [eax*8]
// 00569386  3bd1                 cmp edx, ecx
// 00569388  7728                 ja 0x5693b2
// 0056938a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0056938d  6a08                 push 8
// 0056938f  50                   push eax
// 00569390  e80beaffff           call 0x567da0
// 00569395  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00569398  6a08                 push 8
// 0056939a  51                   push ecx
// 0056939b  89465c               mov dword ptr [esi + 0x5c], eax
// 0056939e  e8fde9ffff           call 0x567da0
// 005693a3  83c410               add esp, 0x10
// 005693a6  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 005693b0  eb75                 jmp 0x569427
// 005693b2  8d148500000000       lea edx, [eax*4]
// 005693b9  3bd1                 cmp edx, ecx
// 005693bb  7728                 ja 0x5693e5
// 005693bd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005693c0  6a04                 push 4
// 005693c2  50                   push eax
// 005693c3  e8d8e9ffff           call 0x567da0
// 005693c8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005693cb  6a04                 push 4
// 005693cd  51                   push ecx
// 005693ce  89465c               mov dword ptr [esi + 0x5c], eax
// 005693d1  e8cae9ffff           call 0x567da0
// 005693d6  83c410               add esp, 0x10
// 005693d9  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 005693e3  eb42                 jmp 0x569427
// 005693e5  8d1400               lea edx, [eax + eax]
// 005693e8  3bd1                 cmp edx, ecx
// 005693ea  7728                 ja 0x569414
// 005693ec  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005693ef  6a02                 push 2
// 005693f1  50                   push eax
// 005693f2  e8a9e9ffff           call 0x567da0
// 005693f7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005693fa  6a02                 push 2
// 005693fc  51                   push ecx
// 005693fd  89465c               mov dword ptr [esi + 0x5c], eax
// 00569400  e89be9ffff           call 0x567da0
// 00569405  83c410               add esp, 0x10
// 00569408  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 00569412  eb13                 jmp 0x569427
// 00569414  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00569417  8b4620               mov eax, dword ptr [esi + 0x20]
// 0056941a  89565c               mov dword ptr [esi + 0x5c], edx
// 0056941d  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00569427  837e2400             cmp dword ptr [esi + 0x24], 0
// 0056942b  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00569431  53                   push ebx
// 00569432  894660               mov dword ptr [esi + 0x60], eax
// 00569435  57                   push edi
// 00569436  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056943e  7e5c                 jle 0x56949c
// 00569440  83c10c               add ecx, 0xc
// 00569443  55                   push ebp
// 00569444  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 0056944a  8bc2                 mov eax, edx
// 0056944c  83f808               cmp eax, 8
// 0056944f  7d36                 jge 0x569487
// 00569451  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 00569457  0faffa               imul edi, edx
// 0056945a  8d9b00000000         lea ebx, [ebx]
// 00569460  8b59fc               mov ebx, dword ptr [ecx - 4]
// 00569463  0fafd8               imul ebx, eax
// 00569466  03db                 add ebx, ebx
// 00569468  3bdf                 cmp ebx, edi
// 0056946a  7f1b                 jg 0x569487
// 0056946c  8b29                 mov ebp, dword ptr [ecx]
// 0056946e  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 00569474  0fafe8               imul ebp, eax
// 00569477  0fafda               imul ebx, edx
// 0056947a  03ed                 add ebp, ebp
// 0056947c  3beb                 cmp ebp, ebx
// 0056947e  7f07                 jg 0x569487
// 00569480  03c0                 add eax, eax
// 00569482  83f808               cmp eax, 8
// 00569485  7cd9                 jl 0x569460
// 00569487  894118               mov dword ptr [ecx + 0x18], eax
// 0056948a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056948e  40                   inc eax
// 0056948f  83c154               add ecx, 0x54
// 00569492  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00569495  89442414             mov dword ptr [esp + 0x14], eax
// 00569499  7ca9                 jl 0x569444
// 0056949b  5d                   pop ebp
// 0056949c  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 005694a2  33db                 xor ebx, ebx
// 005694a4  395e24               cmp dword ptr [esi + 0x24], ebx
// 005694a7  7e53                 jle 0x5694fc
// 005694a9  83c724               add edi, 0x24
// 005694ac  8d642400             lea esp, [esp]
// 005694b0  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 005694b3  0faf17               imul edx, dword ptr [edi]
// 005694b6  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 005694ba  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 005694c0  03c9                 add ecx, ecx
// 005694c2  03c9                 add ecx, ecx
// 005694c4  03c9                 add ecx, ecx
// 005694c6  51                   push ecx
// 005694c7  52                   push edx
// 005694c8  e8d3e8ffff           call 0x567da0
// 005694cd  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 005694d0  894704               mov dword ptr [edi + 4], eax
// 005694d3  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 005694d7  0faf0f               imul ecx, dword ptr [edi]
// 005694da  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 005694e0  03c0                 add eax, eax
// 005694e2  03c0                 add eax, eax
// 005694e4  03c0                 add eax, eax
// 005694e6  50                   push eax
// 005694e7  51                   push ecx
// 005694e8  e8b3e8ffff           call 0x567da0
// 005694ed  894708               mov dword ptr [edi + 8], eax
// 005694f0  43                   inc ebx
// 005694f1  83c410               add esp, 0x10
// 005694f4  83c754               add edi, 0x54
// 005694f7  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 005694fa  7cb4                 jl 0x5694b0
// 005694fc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005694ff  48                   dec eax
// 00569500  5f                   pop edi
// 00569501  5b                   pop ebx
// 00569502  83f804               cmp eax, 4
// 00569505  7722                 ja 0x569529
// 00569507  ff248560955600       jmp dword ptr [eax*4 + 0x569560]
// 0056950e  c7466401000000       mov dword ptr [esi + 0x64], 1
// 00569515  eb18                 jmp 0x56952f
// 00569517  c7466403000000       mov dword ptr [esi + 0x64], 3
// 0056951e  eb0f                 jmp 0x56952f
// 00569520  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00569527  eb06                 jmp 0x56952f
// 00569529  8b5624               mov edx, dword ptr [esi + 0x24]
// 0056952c  895664               mov dword ptr [esi + 0x64], edx
// 0056952f  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00569533  b801000000           mov eax, 1
// 00569538  7503                 jne 0x56953d
// 0056953a  8b4664               mov eax, dword ptr [esi + 0x64]
// 0056953d  8bd6                 mov edx, esi
// 0056953f  894668               mov dword ptr [esi + 0x68], eax
// 00569542  e889fdffff           call 0x5692d0
// 00569547  84c0                 test al, al
// 00569549  740b                 je 0x569556
// 0056954b  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00569551  89466c               mov dword ptr [esi + 0x6c], eax
// 00569554  5e                   pop esi
// 00569555  c3                   ret 
// 00569556  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 0056955d  5e                   pop esi
// 0056955e  c3                   ret 
// 0056955f  90                   nop 
// 00569560  0e                   push cs
// 00569561  95                   xchg ebp, eax
// 00569562  56                   push esi
// 00569563  0017                 add byte ptr [edi], dl
// 00569565  95                   xchg ebp, eax
// 00569566  56                   push esi
// 00569567  0017                 add byte ptr [edi], dl
// 00569569  95                   xchg ebp, eax
// 0056956a  56                   push esi
// 0056956b  0020                 add byte ptr [eax], ah
// 0056956d  95                   xchg ebp, eax
// 0056956e  56                   push esi
// 0056956f  0020                 add byte ptr [eax], ah
// 00569571  95                   xchg ebp, eax
// 00569572  56                   push esi
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
