// roc 2008-06 00537bf0  unit: seg_00530000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537bf0
//
// 00537bf0  53                   push ebx
// 00537bf1  55                   push ebp
// 00537bf2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00537bf6  56                   push esi
// 00537bf7  8bf0                 mov esi, eax
// 00537bf9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00537bfd  57                   push edi
// 00537bfe  0fbf38               movsx edi, word ptr [eax]
// 00537c01  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00537c05  8bc7                 mov eax, edi
// 00537c07  7903                 jns 0x537c0c
// 00537c09  f7d8                 neg eax
// 00537c0b  4f                   dec edi
// 00537c0c  33db                 xor ebx, ebx
// 00537c0e  85c0                 test eax, eax
// 00537c10  7423                 je 0x537c35
// 00537c12  43                   inc ebx
// 00537c13  d1f8                 sar eax, 1
// 00537c15  75fb                 jne 0x537c12
// 00537c17  83fb0b               cmp ebx, 0xb
// 00537c1a  7e19                 jle 0x537c35
// 00537c1c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00537c1f  8b11                 mov edx, dword ptr [ecx]
// 00537c21  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00537c28  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537c2b  8b08                 mov ecx, dword ptr [eax]
// 00537c2d  8b11                 mov edx, dword ptr [ecx]
// 00537c2f  50                   push eax
// 00537c30  ffd2                 call edx
// 00537c32  83c404               add esp, 4
// 00537c35  8b4c9d00             mov ecx, dword ptr [ebp + ebx*4]
// 00537c39  0fbe842b00040000     movsx eax, byte ptr [ebx + ebp + 0x400]
// 00537c41  51                   push ecx
// 00537c42  e8c9feffff           call 0x537b10
// 00537c47  83c404               add esp, 4
// 00537c4a  84c0                 test al, al
// 00537c4c  7507                 jne 0x537c55
// 00537c4e  5f                   pop edi
// 00537c4f  5e                   pop esi
// 00537c50  5d                   pop ebp
// 00537c51  32c0                 xor al, al
// 00537c53  5b                   pop ebx
// 00537c54  c3                   ret 
// 00537c55  85db                 test ebx, ebx
// 00537c57  740f                 je 0x537c68
// 00537c59  57                   push edi
// 00537c5a  8bc3                 mov eax, ebx
// 00537c5c  e8affeffff           call 0x537b10
// 00537c61  83c404               add esp, 4
// 00537c64  84c0                 test al, al
// 00537c66  74e6                 je 0x537c4e
// 00537c68  b8b4b18200           mov eax, 0x82b1b4
// 00537c6d  33ff                 xor edi, edi
// 00537c6f  89442418             mov dword ptr [esp + 0x18], eax
// 00537c73  8b10                 mov edx, dword ptr [eax]
// 00537c75  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00537c79  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 00537c7d  85db                 test ebx, ebx
// 00537c7f  7506                 jne 0x537c87
// 00537c81  47                   inc edi
// 00537c82  e9ae000000           jmp 0x537d35
// 00537c87  83ff0f               cmp edi, 0xf
// 00537c8a  7e2a                 jle 0x537cb6
// 00537c8c  8d642400             lea esp, [esp]
// 00537c90  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00537c94  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 00537c9a  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 00537ca1  52                   push edx
// 00537ca2  e869feffff           call 0x537b10
// 00537ca7  83c404               add esp, 4
// 00537caa  84c0                 test al, al
// 00537cac  74a0                 je 0x537c4e
// 00537cae  83ef10               sub edi, 0x10
// 00537cb1  83ff0f               cmp edi, 0xf
// 00537cb4  7fda                 jg 0x537c90
// 00537cb6  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00537cba  85db                 test ebx, ebx
// 00537cbc  7d06                 jge 0x537cc4
// 00537cbe  f7db                 neg ebx
// 00537cc0  ff4c241c             dec dword ptr [esp + 0x1c]
// 00537cc4  d1fb                 sar ebx, 1
// 00537cc6  bd01000000           mov ebp, 1
// 00537ccb  7426                 je 0x537cf3
// 00537ccd  8d4900               lea ecx, [ecx]
// 00537cd0  45                   inc ebp
// 00537cd1  d1fb                 sar ebx, 1
// 00537cd3  75fb                 jne 0x537cd0
// 00537cd5  83fd0a               cmp ebp, 0xa
// 00537cd8  7e19                 jle 0x537cf3
// 00537cda  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537cdd  8b08                 mov ecx, dword ptr [eax]
// 00537cdf  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00537ce6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537ce9  8b10                 mov edx, dword ptr [eax]
// 00537ceb  50                   push eax
// 00537cec  8b02                 mov eax, dword ptr [edx]
// 00537cee  ffd0                 call eax
// 00537cf0  83c404               add esp, 4
// 00537cf3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00537cf7  c1e704               shl edi, 4
// 00537cfa  03fd                 add edi, ebp
// 00537cfc  0fbe840f00040000     movsx eax, byte ptr [edi + ecx + 0x400]
// 00537d04  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00537d07  51                   push ecx
// 00537d08  e803feffff           call 0x537b10
// 00537d0d  83c404               add esp, 4
// 00537d10  84c0                 test al, al
// 00537d12  0f8436ffffff         je 0x537c4e
// 00537d18  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00537d1c  52                   push edx
// 00537d1d  8bc5                 mov eax, ebp
// 00537d1f  e8ecfdffff           call 0x537b10
// 00537d24  83c404               add esp, 4
// 00537d27  84c0                 test al, al
// 00537d29  0f841fffffff         je 0x537c4e
// 00537d2f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00537d33  33ff                 xor edi, edi
// 00537d35  83c004               add eax, 4
// 00537d38  3db0b28200           cmp eax, 0x82b2b0
// 00537d3d  89442418             mov dword ptr [esp + 0x18], eax
// 00537d41  0f8c2cffffff         jl 0x537c73
// 00537d47  85ff                 test edi, edi
// 00537d49  7e1e                 jle 0x537d69
// 00537d4b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00537d4f  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 00537d56  8b09                 mov ecx, dword ptr [ecx]
// 00537d58  51                   push ecx
// 00537d59  e8b2fdffff           call 0x537b10
// 00537d5e  83c404               add esp, 4
// 00537d61  84c0                 test al, al
// 00537d63  0f84e5feffff         je 0x537c4e
// 00537d69  5f                   pop edi
// 00537d6a  5e                   pop esi
// 00537d6b  5d                   pop ebp
// 00537d6c  b001                 mov al, 1
// 00537d6e  5b                   pop ebx
// 00537d6f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
