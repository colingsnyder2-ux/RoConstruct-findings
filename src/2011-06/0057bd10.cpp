// from server: 100% by auto
// roc 2011-06 0057bd10  unit: seg_00570000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057bd10
//
// 0057bd10  53                   push ebx
// 0057bd11  55                   push ebp
// 0057bd12  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057bd16  56                   push esi
// 0057bd17  8bf0                 mov esi, eax
// 0057bd19  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057bd1d  57                   push edi
// 0057bd1e  0fbf38               movsx edi, word ptr [eax]
// 0057bd21  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0057bd25  8bc7                 mov eax, edi
// 0057bd27  7903                 jns 0x57bd2c
// 0057bd29  f7d8                 neg eax
// 0057bd2b  4f                   dec edi
// 0057bd2c  33db                 xor ebx, ebx
// 0057bd2e  85c0                 test eax, eax
// 0057bd30  7423                 je 0x57bd55
// 0057bd32  43                   inc ebx
// 0057bd33  d1f8                 sar eax, 1
// 0057bd35  75fb                 jne 0x57bd32
// 0057bd37  83fb0b               cmp ebx, 0xb
// 0057bd3a  7e19                 jle 0x57bd55
// 0057bd3c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057bd3f  8b11                 mov edx, dword ptr [ecx]
// 0057bd41  c7421406000000       mov dword ptr [edx + 0x14], 6
// 0057bd48  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bd4b  8b08                 mov ecx, dword ptr [eax]
// 0057bd4d  8b11                 mov edx, dword ptr [ecx]
// 0057bd4f  50                   push eax
// 0057bd50  ffd2                 call edx
// 0057bd52  83c404               add esp, 4
// 0057bd55  8b4c9d00             mov ecx, dword ptr [ebp + ebx*4]
// 0057bd59  0fbe842b00040000     movsx eax, byte ptr [ebx + ebp + 0x400]
// 0057bd61  51                   push ecx
// 0057bd62  e8c9feffff           call 0x57bc30
// 0057bd67  83c404               add esp, 4
// 0057bd6a  84c0                 test al, al
// 0057bd6c  7507                 jne 0x57bd75
// 0057bd6e  5f                   pop edi
// 0057bd6f  5e                   pop esi
// 0057bd70  5d                   pop ebp
// 0057bd71  32c0                 xor al, al
// 0057bd73  5b                   pop ebx
// 0057bd74  c3                   ret 
// 0057bd75  85db                 test ebx, ebx
// 0057bd77  740f                 je 0x57bd88
// 0057bd79  57                   push edi
// 0057bd7a  8bc3                 mov eax, ebx
// 0057bd7c  e8affeffff           call 0x57bc30
// 0057bd81  83c404               add esp, 4
// 0057bd84  84c0                 test al, al
// 0057bd86  74e6                 je 0x57bd6e
// 0057bd88  b8f458a800           mov eax, 0xa858f4
// 0057bd8d  33ff                 xor edi, edi
// 0057bd8f  89442418             mov dword ptr [esp + 0x18], eax
// 0057bd93  8b10                 mov edx, dword ptr [eax]
// 0057bd95  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057bd99  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 0057bd9d  85db                 test ebx, ebx
// 0057bd9f  7506                 jne 0x57bda7
// 0057bda1  47                   inc edi
// 0057bda2  e9ae000000           jmp 0x57be55
// 0057bda7  83ff0f               cmp edi, 0xf
// 0057bdaa  7e2a                 jle 0x57bdd6
// 0057bdac  8d642400             lea esp, [esp]
// 0057bdb0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057bdb4  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 0057bdba  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 0057bdc1  52                   push edx
// 0057bdc2  e869feffff           call 0x57bc30
// 0057bdc7  83c404               add esp, 4
// 0057bdca  84c0                 test al, al
// 0057bdcc  74a0                 je 0x57bd6e
// 0057bdce  83ef10               sub edi, 0x10
// 0057bdd1  83ff0f               cmp edi, 0xf
// 0057bdd4  7fda                 jg 0x57bdb0
// 0057bdd6  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057bdda  85db                 test ebx, ebx
// 0057bddc  7d06                 jge 0x57bde4
// 0057bdde  f7db                 neg ebx
// 0057bde0  ff4c241c             dec dword ptr [esp + 0x1c]
// 0057bde4  d1fb                 sar ebx, 1
// 0057bde6  bd01000000           mov ebp, 1
// 0057bdeb  7426                 je 0x57be13
// 0057bded  8d4900               lea ecx, [ecx]
// 0057bdf0  45                   inc ebp
// 0057bdf1  d1fb                 sar ebx, 1
// 0057bdf3  75fb                 jne 0x57bdf0
// 0057bdf5  83fd0a               cmp ebp, 0xa
// 0057bdf8  7e19                 jle 0x57be13
// 0057bdfa  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bdfd  8b08                 mov ecx, dword ptr [eax]
// 0057bdff  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0057be06  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057be09  8b10                 mov edx, dword ptr [eax]
// 0057be0b  50                   push eax
// 0057be0c  8b02                 mov eax, dword ptr [edx]
// 0057be0e  ffd0                 call eax
// 0057be10  83c404               add esp, 4
// 0057be13  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057be17  c1e704               shl edi, 4
// 0057be1a  03fd                 add edi, ebp
// 0057be1c  0fbe840f00040000     movsx eax, byte ptr [edi + ecx + 0x400]
// 0057be24  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 0057be27  51                   push ecx
// 0057be28  e803feffff           call 0x57bc30
// 0057be2d  83c404               add esp, 4
// 0057be30  84c0                 test al, al
// 0057be32  0f8436ffffff         je 0x57bd6e
// 0057be38  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057be3c  52                   push edx
// 0057be3d  8bc5                 mov eax, ebp
// 0057be3f  e8ecfdffff           call 0x57bc30
// 0057be44  83c404               add esp, 4
// 0057be47  84c0                 test al, al
// 0057be49  0f841fffffff         je 0x57bd6e
// 0057be4f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057be53  33ff                 xor edi, edi
// 0057be55  83c004               add eax, 4
// 0057be58  3df059a800           cmp eax, 0xa859f0
// 0057be5d  89442418             mov dword ptr [esp + 0x18], eax
// 0057be61  0f8c2cffffff         jl 0x57bd93
// 0057be67  85ff                 test edi, edi
// 0057be69  7e1e                 jle 0x57be89
// 0057be6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057be6f  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 0057be76  8b09                 mov ecx, dword ptr [ecx]
// 0057be78  51                   push ecx
// 0057be79  e8b2fdffff           call 0x57bc30
// 0057be7e  83c404               add esp, 4
// 0057be81  84c0                 test al, al
// 0057be83  0f84e5feffff         je 0x57bd6e
// 0057be89  5f                   pop edi
// 0057be8a  5e                   pop esi
// 0057be8b  5d                   pop ebp
// 0057be8c  b001                 mov al, 1
// 0057be8e  5b                   pop ebx
// 0057be8f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
