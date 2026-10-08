// from server: 100% by auto
// roc 2010-06 00585a60  unit: seg_00580000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585a60
//
// 00585a60  53                   push ebx
// 00585a61  55                   push ebp
// 00585a62  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00585a66  56                   push esi
// 00585a67  8bf0                 mov esi, eax
// 00585a69  8b442410             mov eax, dword ptr [esp + 0x10]
// 00585a6d  57                   push edi
// 00585a6e  0fbf38               movsx edi, word ptr [eax]
// 00585a71  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00585a75  8bc7                 mov eax, edi
// 00585a77  7903                 jns 0x585a7c
// 00585a79  f7d8                 neg eax
// 00585a7b  4f                   dec edi
// 00585a7c  33db                 xor ebx, ebx
// 00585a7e  85c0                 test eax, eax
// 00585a80  7423                 je 0x585aa5
// 00585a82  43                   inc ebx
// 00585a83  d1f8                 sar eax, 1
// 00585a85  75fb                 jne 0x585a82
// 00585a87  83fb0b               cmp ebx, 0xb
// 00585a8a  7e19                 jle 0x585aa5
// 00585a8c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00585a8f  8b11                 mov edx, dword ptr [ecx]
// 00585a91  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00585a98  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585a9b  8b08                 mov ecx, dword ptr [eax]
// 00585a9d  8b11                 mov edx, dword ptr [ecx]
// 00585a9f  50                   push eax
// 00585aa0  ffd2                 call edx
// 00585aa2  83c404               add esp, 4
// 00585aa5  8b4c9d00             mov ecx, dword ptr [ebp + ebx*4]
// 00585aa9  0fbe842b00040000     movsx eax, byte ptr [ebx + ebp + 0x400]
// 00585ab1  51                   push ecx
// 00585ab2  e8c9feffff           call 0x585980
// 00585ab7  83c404               add esp, 4
// 00585aba  84c0                 test al, al
// 00585abc  7507                 jne 0x585ac5
// 00585abe  5f                   pop edi
// 00585abf  5e                   pop esi
// 00585ac0  5d                   pop ebp
// 00585ac1  32c0                 xor al, al
// 00585ac3  5b                   pop ebx
// 00585ac4  c3                   ret 
// 00585ac5  85db                 test ebx, ebx
// 00585ac7  740f                 je 0x585ad8
// 00585ac9  57                   push edi
// 00585aca  8bc3                 mov eax, ebx
// 00585acc  e8affeffff           call 0x585980
// 00585ad1  83c404               add esp, 4
// 00585ad4  84c0                 test al, al
// 00585ad6  74e6                 je 0x585abe
// 00585ad8  b8fc34a200           mov eax, 0xa234fc
// 00585add  33ff                 xor edi, edi
// 00585adf  89442418             mov dword ptr [esp + 0x18], eax
// 00585ae3  8b10                 mov edx, dword ptr [eax]
// 00585ae5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00585ae9  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 00585aed  85db                 test ebx, ebx
// 00585aef  7506                 jne 0x585af7
// 00585af1  47                   inc edi
// 00585af2  e9ae000000           jmp 0x585ba5
// 00585af7  83ff0f               cmp edi, 0xf
// 00585afa  7e2a                 jle 0x585b26
// 00585afc  8d642400             lea esp, [esp]
// 00585b00  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00585b04  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 00585b0a  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 00585b11  52                   push edx
// 00585b12  e869feffff           call 0x585980
// 00585b17  83c404               add esp, 4
// 00585b1a  84c0                 test al, al
// 00585b1c  74a0                 je 0x585abe
// 00585b1e  83ef10               sub edi, 0x10
// 00585b21  83ff0f               cmp edi, 0xf
// 00585b24  7fda                 jg 0x585b00
// 00585b26  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00585b2a  85db                 test ebx, ebx
// 00585b2c  7d06                 jge 0x585b34
// 00585b2e  f7db                 neg ebx
// 00585b30  ff4c241c             dec dword ptr [esp + 0x1c]
// 00585b34  d1fb                 sar ebx, 1
// 00585b36  bd01000000           mov ebp, 1
// 00585b3b  7426                 je 0x585b63
// 00585b3d  8d4900               lea ecx, [ecx]
// 00585b40  45                   inc ebp
// 00585b41  d1fb                 sar ebx, 1
// 00585b43  75fb                 jne 0x585b40
// 00585b45  83fd0a               cmp ebp, 0xa
// 00585b48  7e19                 jle 0x585b63
// 00585b4a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585b4d  8b08                 mov ecx, dword ptr [eax]
// 00585b4f  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00585b56  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585b59  8b10                 mov edx, dword ptr [eax]
// 00585b5b  50                   push eax
// 00585b5c  8b02                 mov eax, dword ptr [edx]
// 00585b5e  ffd0                 call eax
// 00585b60  83c404               add esp, 4
// 00585b63  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00585b67  c1e704               shl edi, 4
// 00585b6a  03fd                 add edi, ebp
// 00585b6c  0fbe840f00040000     movsx eax, byte ptr [edi + ecx + 0x400]
// 00585b74  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00585b77  51                   push ecx
// 00585b78  e803feffff           call 0x585980
// 00585b7d  83c404               add esp, 4
// 00585b80  84c0                 test al, al
// 00585b82  0f8436ffffff         je 0x585abe
// 00585b88  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00585b8c  52                   push edx
// 00585b8d  8bc5                 mov eax, ebp
// 00585b8f  e8ecfdffff           call 0x585980
// 00585b94  83c404               add esp, 4
// 00585b97  84c0                 test al, al
// 00585b99  0f841fffffff         je 0x585abe
// 00585b9f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00585ba3  33ff                 xor edi, edi
// 00585ba5  83c004               add eax, 4
// 00585ba8  3df835a200           cmp eax, 0xa235f8
// 00585bad  89442418             mov dword ptr [esp + 0x18], eax
// 00585bb1  0f8c2cffffff         jl 0x585ae3
// 00585bb7  85ff                 test edi, edi
// 00585bb9  7e1e                 jle 0x585bd9
// 00585bbb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00585bbf  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 00585bc6  8b09                 mov ecx, dword ptr [ecx]
// 00585bc8  51                   push ecx
// 00585bc9  e8b2fdffff           call 0x585980
// 00585bce  83c404               add esp, 4
// 00585bd1  84c0                 test al, al
// 00585bd3  0f84e5feffff         je 0x585abe
// 00585bd9  5f                   pop edi
// 00585bda  5e                   pop esi
// 00585bdb  5d                   pop ebp
// 00585bdc  b001                 mov al, 1
// 00585bde  5b                   pop ebx
// 00585bdf  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
