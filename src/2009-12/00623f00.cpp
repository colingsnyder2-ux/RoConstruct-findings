// roc 2009-12 00623f00  unit: seg_00620000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623f00
//
// 00623f00  53                   push ebx
// 00623f01  55                   push ebp
// 00623f02  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00623f06  56                   push esi
// 00623f07  8bf0                 mov esi, eax
// 00623f09  8b442410             mov eax, dword ptr [esp + 0x10]
// 00623f0d  57                   push edi
// 00623f0e  0fbf38               movsx edi, word ptr [eax]
// 00623f11  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00623f15  8bc7                 mov eax, edi
// 00623f17  7903                 jns 0x623f1c
// 00623f19  f7d8                 neg eax
// 00623f1b  4f                   dec edi
// 00623f1c  33db                 xor ebx, ebx
// 00623f1e  85c0                 test eax, eax
// 00623f20  7423                 je 0x623f45
// 00623f22  43                   inc ebx
// 00623f23  d1f8                 sar eax, 1
// 00623f25  75fb                 jne 0x623f22
// 00623f27  83fb0b               cmp ebx, 0xb
// 00623f2a  7e19                 jle 0x623f45
// 00623f2c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00623f2f  8b11                 mov edx, dword ptr [ecx]
// 00623f31  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00623f38  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623f3b  8b08                 mov ecx, dword ptr [eax]
// 00623f3d  8b11                 mov edx, dword ptr [ecx]
// 00623f3f  50                   push eax
// 00623f40  ffd2                 call edx
// 00623f42  83c404               add esp, 4
// 00623f45  8b4c9d00             mov ecx, dword ptr [ebp + ebx*4]
// 00623f49  0fbe842b00040000     movsx eax, byte ptr [ebx + ebp + 0x400]
// 00623f51  51                   push ecx
// 00623f52  e8c9feffff           call 0x623e20
// 00623f57  83c404               add esp, 4
// 00623f5a  84c0                 test al, al
// 00623f5c  7507                 jne 0x623f65
// 00623f5e  5f                   pop edi
// 00623f5f  5e                   pop esi
// 00623f60  5d                   pop ebp
// 00623f61  32c0                 xor al, al
// 00623f63  5b                   pop ebx
// 00623f64  c3                   ret 
// 00623f65  85db                 test ebx, ebx
// 00623f67  740f                 je 0x623f78
// 00623f69  57                   push edi
// 00623f6a  8bc3                 mov eax, ebx
// 00623f6c  e8affeffff           call 0x623e20
// 00623f71  83c404               add esp, 4
// 00623f74  84c0                 test al, al
// 00623f76  74e6                 je 0x623f5e
// 00623f78  b89c579c00           mov eax, 0x9c579c
// 00623f7d  33ff                 xor edi, edi
// 00623f7f  89442418             mov dword ptr [esp + 0x18], eax
// 00623f83  8b10                 mov edx, dword ptr [eax]
// 00623f85  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00623f89  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 00623f8d  85db                 test ebx, ebx
// 00623f8f  7506                 jne 0x623f97
// 00623f91  47                   inc edi
// 00623f92  e9ae000000           jmp 0x624045
// 00623f97  83ff0f               cmp edi, 0xf
// 00623f9a  7e2a                 jle 0x623fc6
// 00623f9c  8d642400             lea esp, [esp]
// 00623fa0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00623fa4  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 00623faa  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 00623fb1  52                   push edx
// 00623fb2  e869feffff           call 0x623e20
// 00623fb7  83c404               add esp, 4
// 00623fba  84c0                 test al, al
// 00623fbc  74a0                 je 0x623f5e
// 00623fbe  83ef10               sub edi, 0x10
// 00623fc1  83ff0f               cmp edi, 0xf
// 00623fc4  7fda                 jg 0x623fa0
// 00623fc6  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00623fca  85db                 test ebx, ebx
// 00623fcc  7d06                 jge 0x623fd4
// 00623fce  f7db                 neg ebx
// 00623fd0  ff4c241c             dec dword ptr [esp + 0x1c]
// 00623fd4  d1fb                 sar ebx, 1
// 00623fd6  bd01000000           mov ebp, 1
// 00623fdb  7426                 je 0x624003
// 00623fdd  8d4900               lea ecx, [ecx]
// 00623fe0  45                   inc ebp
// 00623fe1  d1fb                 sar ebx, 1
// 00623fe3  75fb                 jne 0x623fe0
// 00623fe5  83fd0a               cmp ebp, 0xa
// 00623fe8  7e19                 jle 0x624003
// 00623fea  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623fed  8b08                 mov ecx, dword ptr [eax]
// 00623fef  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00623ff6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623ff9  8b10                 mov edx, dword ptr [eax]
// 00623ffb  50                   push eax
// 00623ffc  8b02                 mov eax, dword ptr [edx]
// 00623ffe  ffd0                 call eax
// 00624000  83c404               add esp, 4
// 00624003  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00624007  c1e704               shl edi, 4
// 0062400a  03fd                 add edi, ebp
// 0062400c  0fbe840f00040000     movsx eax, byte ptr [edi + ecx + 0x400]
// 00624014  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00624017  51                   push ecx
// 00624018  e803feffff           call 0x623e20
// 0062401d  83c404               add esp, 4
// 00624020  84c0                 test al, al
// 00624022  0f8436ffffff         je 0x623f5e
// 00624028  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0062402c  52                   push edx
// 0062402d  8bc5                 mov eax, ebp
// 0062402f  e8ecfdffff           call 0x623e20
// 00624034  83c404               add esp, 4
// 00624037  84c0                 test al, al
// 00624039  0f841fffffff         je 0x623f5e
// 0062403f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00624043  33ff                 xor edi, edi
// 00624045  83c004               add eax, 4
// 00624048  3d98589c00           cmp eax, 0x9c5898
// 0062404d  89442418             mov dword ptr [esp + 0x18], eax
// 00624051  0f8c2cffffff         jl 0x623f83
// 00624057  85ff                 test edi, edi
// 00624059  7e1e                 jle 0x624079
// 0062405b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062405f  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 00624066  8b09                 mov ecx, dword ptr [ecx]
// 00624068  51                   push ecx
// 00624069  e8b2fdffff           call 0x623e20
// 0062406e  83c404               add esp, 4
// 00624071  84c0                 test al, al
// 00624073  0f84e5feffff         je 0x623f5e
// 00624079  5f                   pop edi
// 0062407a  5e                   pop esi
// 0062407b  5d                   pop ebp
// 0062407c  b001                 mov al, 1
// 0062407e  5b                   pop ebx
// 0062407f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
