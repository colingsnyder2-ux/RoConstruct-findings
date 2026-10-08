// from server: 100% by auto
// roc 2009-06 005a1ed0  unit: seg_005a0000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1ed0
//
// 005a1ed0  53                   push ebx
// 005a1ed1  55                   push ebp
// 005a1ed2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a1ed6  56                   push esi
// 005a1ed7  8bf0                 mov esi, eax
// 005a1ed9  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a1edd  57                   push edi
// 005a1ede  0fbf38               movsx edi, word ptr [eax]
// 005a1ee1  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 005a1ee5  8bc7                 mov eax, edi
// 005a1ee7  7903                 jns 0x5a1eec
// 005a1ee9  f7d8                 neg eax
// 005a1eeb  4f                   dec edi
// 005a1eec  33db                 xor ebx, ebx
// 005a1eee  85c0                 test eax, eax
// 005a1ef0  7423                 je 0x5a1f15
// 005a1ef2  43                   inc ebx
// 005a1ef3  d1f8                 sar eax, 1
// 005a1ef5  75fb                 jne 0x5a1ef2
// 005a1ef7  83fb0b               cmp ebx, 0xb
// 005a1efa  7e19                 jle 0x5a1f15
// 005a1efc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005a1eff  8b11                 mov edx, dword ptr [ecx]
// 005a1f01  c7421406000000       mov dword ptr [edx + 0x14], 6
// 005a1f08  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1f0b  8b08                 mov ecx, dword ptr [eax]
// 005a1f0d  8b11                 mov edx, dword ptr [ecx]
// 005a1f0f  50                   push eax
// 005a1f10  ffd2                 call edx
// 005a1f12  83c404               add esp, 4
// 005a1f15  8b4c9d00             mov ecx, dword ptr [ebp + ebx*4]
// 005a1f19  0fbe842b00040000     movsx eax, byte ptr [ebx + ebp + 0x400]
// 005a1f21  51                   push ecx
// 005a1f22  e8c9feffff           call 0x5a1df0
// 005a1f27  83c404               add esp, 4
// 005a1f2a  84c0                 test al, al
// 005a1f2c  7507                 jne 0x5a1f35
// 005a1f2e  5f                   pop edi
// 005a1f2f  5e                   pop esi
// 005a1f30  5d                   pop ebp
// 005a1f31  32c0                 xor al, al
// 005a1f33  5b                   pop ebx
// 005a1f34  c3                   ret 
// 005a1f35  85db                 test ebx, ebx
// 005a1f37  740f                 je 0x5a1f48
// 005a1f39  57                   push edi
// 005a1f3a  8bc3                 mov eax, ebx
// 005a1f3c  e8affeffff           call 0x5a1df0
// 005a1f41  83c404               add esp, 4
// 005a1f44  84c0                 test al, al
// 005a1f46  74e6                 je 0x5a1f2e
// 005a1f48  b8fce88c00           mov eax, 0x8ce8fc
// 005a1f4d  33ff                 xor edi, edi
// 005a1f4f  89442418             mov dword ptr [esp + 0x18], eax
// 005a1f53  8b10                 mov edx, dword ptr [eax]
// 005a1f55  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a1f59  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 005a1f5d  85db                 test ebx, ebx
// 005a1f5f  7506                 jne 0x5a1f67
// 005a1f61  47                   inc edi
// 005a1f62  e9ae000000           jmp 0x5a2015
// 005a1f67  83ff0f               cmp edi, 0xf
// 005a1f6a  7e2a                 jle 0x5a1f96
// 005a1f6c  8d642400             lea esp, [esp]
// 005a1f70  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a1f74  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 005a1f7a  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 005a1f81  52                   push edx
// 005a1f82  e869feffff           call 0x5a1df0
// 005a1f87  83c404               add esp, 4
// 005a1f8a  84c0                 test al, al
// 005a1f8c  74a0                 je 0x5a1f2e
// 005a1f8e  83ef10               sub edi, 0x10
// 005a1f91  83ff0f               cmp edi, 0xf
// 005a1f94  7fda                 jg 0x5a1f70
// 005a1f96  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a1f9a  85db                 test ebx, ebx
// 005a1f9c  7d06                 jge 0x5a1fa4
// 005a1f9e  f7db                 neg ebx
// 005a1fa0  ff4c241c             dec dword ptr [esp + 0x1c]
// 005a1fa4  d1fb                 sar ebx, 1
// 005a1fa6  bd01000000           mov ebp, 1
// 005a1fab  7426                 je 0x5a1fd3
// 005a1fad  8d4900               lea ecx, [ecx]
// 005a1fb0  45                   inc ebp
// 005a1fb1  d1fb                 sar ebx, 1
// 005a1fb3  75fb                 jne 0x5a1fb0
// 005a1fb5  83fd0a               cmp ebp, 0xa
// 005a1fb8  7e19                 jle 0x5a1fd3
// 005a1fba  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1fbd  8b08                 mov ecx, dword ptr [eax]
// 005a1fbf  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 005a1fc6  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1fc9  8b10                 mov edx, dword ptr [eax]
// 005a1fcb  50                   push eax
// 005a1fcc  8b02                 mov eax, dword ptr [edx]
// 005a1fce  ffd0                 call eax
// 005a1fd0  83c404               add esp, 4
// 005a1fd3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a1fd7  c1e704               shl edi, 4
// 005a1fda  03fd                 add edi, ebp
// 005a1fdc  0fbe840f00040000     movsx eax, byte ptr [edi + ecx + 0x400]
// 005a1fe4  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005a1fe7  51                   push ecx
// 005a1fe8  e803feffff           call 0x5a1df0
// 005a1fed  83c404               add esp, 4
// 005a1ff0  84c0                 test al, al
// 005a1ff2  0f8436ffffff         je 0x5a1f2e
// 005a1ff8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a1ffc  52                   push edx
// 005a1ffd  8bc5                 mov eax, ebp
// 005a1fff  e8ecfdffff           call 0x5a1df0
// 005a2004  83c404               add esp, 4
// 005a2007  84c0                 test al, al
// 005a2009  0f841fffffff         je 0x5a1f2e
// 005a200f  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a2013  33ff                 xor edi, edi
// 005a2015  83c004               add eax, 4
// 005a2018  3df8e98c00           cmp eax, 0x8ce9f8
// 005a201d  89442418             mov dword ptr [esp + 0x18], eax
// 005a2021  0f8c2cffffff         jl 0x5a1f53
// 005a2027  85ff                 test edi, edi
// 005a2029  7e1e                 jle 0x5a2049
// 005a202b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a202f  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 005a2036  8b09                 mov ecx, dword ptr [ecx]
// 005a2038  51                   push ecx
// 005a2039  e8b2fdffff           call 0x5a1df0
// 005a203e  83c404               add esp, 4
// 005a2041  84c0                 test al, al
// 005a2043  0f84e5feffff         je 0x5a1f2e
// 005a2049  5f                   pop edi
// 005a204a  5e                   pop esi
// 005a204b  5d                   pop ebp
// 005a204c  b001                 mov al, 1
// 005a204e  5b                   pop ebx
// 005a204f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
