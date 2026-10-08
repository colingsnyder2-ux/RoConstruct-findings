// from server: 100% by auto
// roc 2010-06 00589540  unit: seg_00580000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589540
//
// 00589540  837e2000             cmp dword ptr [esi + 0x20], 0
// 00589544  7612                 jbe 0x589558
// 00589546  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0058954a  760c                 jbe 0x589558
// 0058954c  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00589550  7e06                 jle 0x589558
// 00589552  837e2400             cmp dword ptr [esi + 0x24], 0
// 00589556  7f13                 jg 0x58956b
// 00589558  8b06                 mov eax, dword ptr [esi]
// 0058955a  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 00589561  8b0e                 mov ecx, dword ptr [esi]
// 00589563  8b11                 mov edx, dword ptr [ecx]
// 00589565  56                   push esi
// 00589566  ffd2                 call edx
// 00589568  83c404               add esp, 4
// 0058956b  b8dcff0000           mov eax, 0xffdc
// 00589570  394620               cmp dword ptr [esi + 0x20], eax
// 00589573  7f05                 jg 0x58957a
// 00589575  39461c               cmp dword ptr [esi + 0x1c], eax
// 00589578  7e18                 jle 0x589592
// 0058957a  8b0e                 mov ecx, dword ptr [esi]
// 0058957c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00589583  8b16                 mov edx, dword ptr [esi]
// 00589585  894218               mov dword ptr [edx + 0x18], eax
// 00589588  8b06                 mov eax, dword ptr [esi]
// 0058958a  8b08                 mov ecx, dword ptr [eax]
// 0058958c  56                   push esi
// 0058958d  ffd1                 call ecx
// 0058958f  83c404               add esp, 4
// 00589592  837e3808             cmp dword ptr [esi + 0x38], 8
// 00589596  741b                 je 0x5895b3
// 00589598  8b16                 mov edx, dword ptr [esi]
// 0058959a  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 005895a1  8b06                 mov eax, dword ptr [esi]
// 005895a3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005895a6  894818               mov dword ptr [eax + 0x18], ecx
// 005895a9  8b16                 mov edx, dword ptr [esi]
// 005895ab  8b02                 mov eax, dword ptr [edx]
// 005895ad  56                   push esi
// 005895ae  ffd0                 call eax
// 005895b0  83c404               add esp, 4
// 005895b3  b80a000000           mov eax, 0xa
// 005895b8  39463c               cmp dword ptr [esi + 0x3c], eax
// 005895bb  7e20                 jle 0x5895dd
// 005895bd  8b0e                 mov ecx, dword ptr [esi]
// 005895bf  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005895c6  8b16                 mov edx, dword ptr [esi]
// 005895c8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005895cb  894a18               mov dword ptr [edx + 0x18], ecx
// 005895ce  8b16                 mov edx, dword ptr [esi]
// 005895d0  89421c               mov dword ptr [edx + 0x1c], eax
// 005895d3  8b06                 mov eax, dword ptr [esi]
// 005895d5  8b08                 mov ecx, dword ptr [eax]
// 005895d7  56                   push esi
// 005895d8  ffd1                 call ecx
// 005895da  83c404               add esp, 4
// 005895dd  8b4644               mov eax, dword ptr [esi + 0x44]
// 005895e0  53                   push ebx
// 005895e1  55                   push ebp
// 005895e2  bb01000000           mov ebx, 1
// 005895e7  33ed                 xor ebp, ebp
// 005895e9  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 005895ec  57                   push edi
// 005895ed  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 005895f3  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005895f9  7e62                 jle 0x58965d
// 005895fb  8d780c               lea edi, [eax + 0xc]
// 005895fe  8bff                 mov edi, edi
// 00589600  8b47fc               mov eax, dword ptr [edi - 4]
// 00589603  85c0                 test eax, eax
// 00589605  7e10                 jle 0x589617
// 00589607  83f804               cmp eax, 4
// 0058960a  7f0b                 jg 0x589617
// 0058960c  8b07                 mov eax, dword ptr [edi]
// 0058960e  85c0                 test eax, eax
// 00589610  7e05                 jle 0x589617
// 00589612  83f804               cmp eax, 4
// 00589615  7e13                 jle 0x58962a
// 00589617  8b16                 mov edx, dword ptr [esi]
// 00589619  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00589620  8b06                 mov eax, dword ptr [esi]
// 00589622  8b08                 mov ecx, dword ptr [eax]
// 00589624  56                   push esi
// 00589625  ffd1                 call ecx
// 00589627  83c404               add esp, 4
// 0058962a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00589630  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00589633  3bc1                 cmp eax, ecx
// 00589635  7f02                 jg 0x589639
// 00589637  8bc1                 mov eax, ecx
// 00589639  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0058963f  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00589645  8b0f                 mov ecx, dword ptr [edi]
// 00589647  3bc1                 cmp eax, ecx
// 00589649  7f02                 jg 0x58964d
// 0058964b  8bc1                 mov eax, ecx
// 0058964d  03eb                 add ebp, ebx
// 0058964f  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 00589655  83c754               add edi, 0x54
// 00589658  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0058965b  7ca3                 jl 0x589600
// 0058965d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00589660  33ed                 xor ebp, ebp
// 00589662  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 00589665  0f8e8a000000         jle 0x5896f5
// 0058966b  8d7824               lea edi, [eax + 0x24]
// 0058966e  8bff                 mov edi, edi
// 00589670  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 00589673  896fe0               mov dword ptr [edi - 0x20], ebp
// 00589676  c70708000000         mov dword ptr [edi], 8
// 0058967c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 00589680  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 00589686  03d2                 add edx, edx
// 00589688  03d2                 add edx, edx
// 0058968a  03d2                 add edx, edx
// 0058968c  52                   push edx
// 0058968d  50                   push eax
// 0058968e  e8ad3cfeff           call 0x56d340
// 00589693  8b57e8               mov edx, dword ptr [edi - 0x18]
// 00589696  8947f8               mov dword ptr [edi - 8], eax
// 00589699  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0058969d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005896a3  03c9                 add ecx, ecx
// 005896a5  03c9                 add ecx, ecx
// 005896a7  03c9                 add ecx, ecx
// 005896a9  51                   push ecx
// 005896aa  52                   push edx
// 005896ab  e8903cfeff           call 0x56d340
// 005896b0  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 005896b3  8947fc               mov dword ptr [edi - 4], eax
// 005896b6  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 005896ba  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 005896c0  50                   push eax
// 005896c1  51                   push ecx
// 005896c2  e8793cfeff           call 0x56d340
// 005896c7  894704               mov dword ptr [edi + 4], eax
// 005896ca  8b47e8               mov eax, dword ptr [edi - 0x18]
// 005896cd  0faf4620             imul eax, dword ptr [esi + 0x20]
// 005896d1  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 005896d7  52                   push edx
// 005896d8  50                   push eax
// 005896d9  e8623cfeff           call 0x56d340
// 005896de  894708               mov dword ptr [edi + 8], eax
// 005896e1  885f0c               mov byte ptr [edi + 0xc], bl
// 005896e4  03eb                 add ebp, ebx
// 005896e6  83c420               add esp, 0x20
// 005896e9  83c754               add edi, 0x54
// 005896ec  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 005896ef  0f8c7bffffff         jl 0x589670
// 005896f5  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005896fb  8b5620               mov edx, dword ptr [esi + 0x20]
// 005896fe  03c9                 add ecx, ecx
// 00589700  03c9                 add ecx, ecx
// 00589702  03c9                 add ecx, ecx
// 00589704  51                   push ecx
// 00589705  52                   push edx
// 00589706  e8353cfeff           call 0x56d340
// 0058970b  83c408               add esp, 8
// 0058970e  5f                   pop edi
// 0058970f  5d                   pop ebp
// 00589710  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 00589716  5b                   pop ebx
// 00589717  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
