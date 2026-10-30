// roc 2007-03 00601840  unit: seg_00600000  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00601840
//
// 00601840  83ec50               sub esp, 0x50
// 00601843  53                   push ebx
// 00601844  56                   push esi
// 00601845  8bd8                 mov ebx, eax
// 00601847  8b03                 mov eax, dword ptr [ebx]
// 00601849  57                   push edi
// 0060184a  50                   push eax
// 0060184b  e860f5ffff           call 0x600db0
// 00601850  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601853  8b08                 mov ecx, dword ptr [eax]
// 00601855  83c404               add esp, 4
// 00601858  85c9                 test ecx, ecx
// 0060185a  8d51ff               lea edx, [ecx - 1]
// 0060185d  8910                 mov dword ptr [eax], edx
// 0060185f  7611                 jbe 0x601872
// 00601861  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00601864  8b5104               mov edx, dword ptr [ecx + 4]
// 00601867  0fb602               movzx eax, byte ptr [edx]
// 0060186a  83c201               add edx, 1
// 0060186d  895104               mov dword ptr [ecx + 4], edx
// 00601870  eb0c                 jmp 0x60187e
// 00601872  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601875  50                   push eax
// 00601876  e825b4ffff           call 0x5fcca0
// 0060187b  83c404               add esp, 4
// 0060187e  3b442460             cmp eax, dword ptr [esp + 0x60]
// 00601882  8903                 mov dword ptr [ebx], eax
// 00601884  0f84a7020000         je 0x601b31
// 0060188a  55                   push ebp
// 0060188b  8b2dc8e87700         mov ebp, dword ptr [0x77e8c8]
// 00601891  8b03                 mov eax, dword ptr [ebx]
// 00601893  8d4801               lea ecx, [eax + 1]
// 00601896  83f95d               cmp ecx, 0x5d
// 00601899  0f873c010000         ja 0x6019db
// 0060189f  0fb689d41b6000       movzx ecx, byte ptr [ecx + 0x601bd4]
// 006018a6  ff248dc41b6000       jmp dword ptr [ecx*4 + 0x601bc4]
// 006018ad  8b5340               mov edx, dword ptr [ebx + 0x40]
// 006018b0  6a50                 push 0x50
// 006018b2  83c210               add edx, 0x10
// 006018b5  52                   push edx
// 006018b6  8d442418             lea eax, [esp + 0x18]
// 006018ba  50                   push eax
// 006018bb  e8a06fffff           call 0x5f8860
// 006018c0  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006018c3  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006018c6  68a80a7c00           push 0x7c0aa8
// 006018cb  51                   push ecx
// 006018cc  8d542424             lea edx, [esp + 0x24]
// 006018d0  52                   push edx
// 006018d1  686c9a7b00           push 0x7b9a6c
// 006018d6  50                   push eax
// 006018d7  e8646fffff           call 0x5f8840
// 006018dc  8b0de0097c00         mov ecx, dword ptr [0x7c09e0]
// 006018e2  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006018e5  51                   push ecx
// 006018e6  50                   push eax
// 006018e7  68140a7c00           push 0x7c0a14
// 006018ec  52                   push edx
// 006018ed  e84e6fffff           call 0x5f8840
// 006018f2  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006018f5  6a03                 push 3
// 006018f7  50                   push eax
// 006018f8  e803e9fbff           call 0x5c0200
// 006018fd  83c438               add esp, 0x38
// 00601900  e91f020000           jmp 0x601b24
// 00601905  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00601908  6a50                 push 0x50
// 0060190a  83c110               add ecx, 0x10
// 0060190d  51                   push ecx
// 0060190e  8d542418             lea edx, [esp + 0x18]
// 00601912  52                   push edx
// 00601913  e8486fffff           call 0x5f8860
// 00601918  8b4304               mov eax, dword ptr [ebx + 4]
// 0060191b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0060191e  68a80a7c00           push 0x7c0aa8
// 00601923  50                   push eax
// 00601924  8d4c2424             lea ecx, [esp + 0x24]
// 00601928  51                   push ecx
// 00601929  686c9a7b00           push 0x7b9a6c
// 0060192e  52                   push edx
// 0060192f  e80c6fffff           call 0x5f8840
// 00601934  6a00                 push 0
// 00601936  8bf0                 mov esi, eax
// 00601938  e873f4ffff           call 0x600db0
// 0060193d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00601940  8b00                 mov eax, dword ptr [eax]
// 00601942  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00601945  50                   push eax
// 00601946  56                   push esi
// 00601947  68140a7c00           push 0x7c0a14
// 0060194c  51                   push ecx
// 0060194d  e8ee6effff           call 0x5f8840
// 00601952  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00601955  6a03                 push 3
// 00601957  52                   push edx
// 00601958  e8a3e8fbff           call 0x5c0200
// 0060195d  83c43c               add esp, 0x3c
// 00601960  e9bf010000           jmp 0x601b24
// 00601965  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601968  8b08                 mov ecx, dword ptr [eax]
// 0060196a  85c9                 test ecx, ecx
// 0060196c  8d51ff               lea edx, [ecx - 1]
// 0060196f  8910                 mov dword ptr [eax], edx
// 00601971  7611                 jbe 0x601984
// 00601973  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00601976  8b5104               mov edx, dword ptr [ecx + 4]
// 00601979  0fb602               movzx eax, byte ptr [edx]
// 0060197c  83c201               add edx, 1
// 0060197f  895104               mov dword ptr [ecx + 4], edx
// 00601982  eb0c                 jmp 0x601990
// 00601984  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601987  50                   push eax
// 00601988  e813b3ffff           call 0x5fcca0
// 0060198d  83c404               add esp, 4
// 00601990  8d4801               lea ecx, [eax + 1]
// 00601993  83f977               cmp ecx, 0x77
// 00601996  8903                 mov dword ptr [ebx], eax
// 00601998  0f8782000000         ja 0x601a20
// 0060199e  0fb6895c1c6000       movzx ecx, byte ptr [ecx + 0x601c5c]
// 006019a5  ff248d341c6000       jmp dword ptr [ecx*4 + 0x601c34]
// 006019ac  b807000000           mov eax, 7
// 006019b1  eb28                 jmp 0x6019db
// 006019b3  b808000000           mov eax, 8
// 006019b8  eb21                 jmp 0x6019db
// 006019ba  b80c000000           mov eax, 0xc
// 006019bf  eb1a                 jmp 0x6019db
// 006019c1  b80a000000           mov eax, 0xa
// 006019c6  eb13                 jmp 0x6019db
// 006019c8  b80d000000           mov eax, 0xd
// 006019cd  eb0c                 jmp 0x6019db
// 006019cf  b809000000           mov eax, 9
// 006019d4  eb05                 jmp 0x6019db
// 006019d6  b80b000000           mov eax, 0xb
// 006019db  50                   push eax
// 006019dc  e8cff3ffff           call 0x600db0
// 006019e1  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006019e4  8b08                 mov ecx, dword ptr [eax]
// 006019e6  83c404               add esp, 4
// 006019e9  85c9                 test ecx, ecx
// 006019eb  8d51ff               lea edx, [ecx - 1]
// 006019ee  8910                 mov dword ptr [eax], edx
// 006019f0  0f8620010000         jbe 0x601b16
// 006019f6  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006019f9  8b5104               mov edx, dword ptr [ecx + 4]
// 006019fc  0fb602               movzx eax, byte ptr [edx]
// 006019ff  83c201               add edx, 1
// 00601a02  895104               mov dword ptr [ecx + 4], edx
// 00601a05  e918010000           jmp 0x601b22
// 00601a0a  6a0a                 push 0xa
// 00601a0c  e89ff3ffff           call 0x600db0
// 00601a11  83c404               add esp, 4
// 00601a14  8bf3                 mov esi, ebx
// 00601a16  e8c5f5ffff           call 0x600fe0
// 00601a1b  e904010000           jmp 0x601b24
// 00601a20  50                   push eax
// 00601a21  ffd5                 call ebp
// 00601a23  83c404               add esp, 4
// 00601a26  85c0                 test eax, eax
// 00601a28  7531                 jne 0x601a5b
// 00601a2a  8b0b                 mov ecx, dword ptr [ebx]
// 00601a2c  51                   push ecx
// 00601a2d  e87ef3ffff           call 0x600db0
// 00601a32  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601a35  8b08                 mov ecx, dword ptr [eax]
// 00601a37  83c404               add esp, 4
// 00601a3a  85c9                 test ecx, ecx
// 00601a3c  8d51ff               lea edx, [ecx - 1]
// 00601a3f  8910                 mov dword ptr [eax], edx
// 00601a41  0f86cf000000         jbe 0x601b16
// 00601a47  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00601a4a  8b5104               mov edx, dword ptr [ecx + 4]
// 00601a4d  0fb602               movzx eax, byte ptr [edx]
// 00601a50  83c201               add edx, 1
// 00601a53  895104               mov dword ptr [ecx + 4], edx
// 00601a56  e9c7000000           jmp 0x601b22
// 00601a5b  33f6                 xor esi, esi
// 00601a5d  33ff                 xor edi, edi
// 00601a5f  90                   nop 
// 00601a60  8b13                 mov edx, dword ptr [ebx]
// 00601a62  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601a65  8d0cbf               lea ecx, [edi + edi*4]
// 00601a68  8d7c4ad0             lea edi, [edx + ecx*2 - 0x30]
// 00601a6c  8b08                 mov ecx, dword ptr [eax]
// 00601a6e  85c9                 test ecx, ecx
// 00601a70  8d51ff               lea edx, [ecx - 1]
// 00601a73  8910                 mov dword ptr [eax], edx
// 00601a75  7611                 jbe 0x601a88
// 00601a77  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00601a7a  8b5104               mov edx, dword ptr [ecx + 4]
// 00601a7d  0fb602               movzx eax, byte ptr [edx]
// 00601a80  83c201               add edx, 1
// 00601a83  895104               mov dword ptr [ecx + 4], edx
// 00601a86  eb0c                 jmp 0x601a94
// 00601a88  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601a8b  50                   push eax
// 00601a8c  e80fb2ffff           call 0x5fcca0
// 00601a91  83c404               add esp, 4
// 00601a94  83c601               add esi, 1
// 00601a97  83fe03               cmp esi, 3
// 00601a9a  8903                 mov dword ptr [ebx], eax
// 00601a9c  7d0a                 jge 0x601aa8
// 00601a9e  50                   push eax
// 00601a9f  ffd5                 call ebp
// 00601aa1  83c404               add esp, 4
// 00601aa4  85c0                 test eax, eax
// 00601aa6  75b8                 jne 0x601a60
// 00601aa8  81ffff000000         cmp edi, 0xff
// 00601aae  7e5b                 jle 0x601b0b
// 00601ab0  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00601ab3  6a50                 push 0x50
// 00601ab5  83c110               add ecx, 0x10
// 00601ab8  51                   push ecx
// 00601ab9  8d542418             lea edx, [esp + 0x18]
// 00601abd  52                   push edx
// 00601abe  e89d6dffff           call 0x5f8860
// 00601ac3  8b4304               mov eax, dword ptr [ebx + 4]
// 00601ac6  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00601ac9  688c0a7c00           push 0x7c0a8c
// 00601ace  50                   push eax
// 00601acf  8d4c2424             lea ecx, [esp + 0x24]
// 00601ad3  51                   push ecx
// 00601ad4  686c9a7b00           push 0x7b9a6c
// 00601ad9  52                   push edx
// 00601ada  e8616dffff           call 0x5f8840
// 00601adf  6a00                 push 0
// 00601ae1  8bf0                 mov esi, eax
// 00601ae3  e8c8f2ffff           call 0x600db0
// 00601ae8  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00601aeb  8b00                 mov eax, dword ptr [eax]
// 00601aed  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00601af0  50                   push eax
// 00601af1  56                   push esi
// 00601af2  68140a7c00           push 0x7c0a14
// 00601af7  51                   push ecx
// 00601af8  e8436dffff           call 0x5f8840
// 00601afd  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00601b00  6a03                 push 3
// 00601b02  52                   push edx
// 00601b03  e8f8e6fbff           call 0x5c0200
// 00601b08  83c43c               add esp, 0x3c
// 00601b0b  57                   push edi
// 00601b0c  e89ff2ffff           call 0x600db0
// 00601b11  83c404               add esp, 4
// 00601b14  eb0e                 jmp 0x601b24
// 00601b16  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601b19  50                   push eax
// 00601b1a  e881b1ffff           call 0x5fcca0
// 00601b1f  83c404               add esp, 4
// 00601b22  8903                 mov dword ptr [ebx], eax
// 00601b24  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00601b28  390b                 cmp dword ptr [ebx], ecx
// 00601b2a  0f8561fdffff         jne 0x601891
// 00601b30  5d                   pop ebp
// 00601b31  8b13                 mov edx, dword ptr [ebx]
// 00601b33  52                   push edx
// 00601b34  e877f2ffff           call 0x600db0
// 00601b39  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601b3c  8b08                 mov ecx, dword ptr [eax]
// 00601b3e  83c404               add esp, 4
// 00601b41  85c9                 test ecx, ecx
// 00601b43  8d51ff               lea edx, [ecx - 1]
// 00601b46  8910                 mov dword ptr [eax], edx
// 00601b48  7611                 jbe 0x601b5b
// 00601b4a  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00601b4d  8b5104               mov edx, dword ptr [ecx + 4]
// 00601b50  0fb602               movzx eax, byte ptr [edx]
// 00601b53  83c201               add edx, 1
// 00601b56  895104               mov dword ptr [ecx + 4], edx
// 00601b59  eb0c                 jmp 0x601b67
// 00601b5b  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601b5e  50                   push eax
// 00601b5f  e83cb1ffff           call 0x5fcca0
// 00601b64  83c404               add esp, 4
// 00601b67  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00601b6a  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00601b6d  8903                 mov dword ptr [ebx], eax
// 00601b6f  8b4104               mov eax, dword ptr [ecx + 4]
// 00601b72  8b09                 mov ecx, dword ptr [ecx]
// 00601b74  83e802               sub eax, 2
// 00601b77  50                   push eax
// 00601b78  83c101               add ecx, 1
// 00601b7b  51                   push ecx
// 00601b7c  56                   push esi
// 00601b7d  e89eabffff           call 0x5fc720
// 00601b82  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00601b85  8b5104               mov edx, dword ptr [ecx + 4]
// 00601b88  8bf8                 mov edi, eax
// 00601b8a  57                   push edi
// 00601b8b  52                   push edx
// 00601b8c  56                   push esi
// 00601b8d  e8dea9ffff           call 0x5fc570
// 00601b92  83c418               add esp, 0x18
// 00601b95  83780800             cmp dword ptr [eax + 8], 0
// 00601b99  751a                 jne 0x601bb5
// 00601b9b  c70001000000         mov dword ptr [eax], 1
// 00601ba1  c7400801000000       mov dword ptr [eax + 8], 1
// 00601ba8  8b442464             mov eax, dword ptr [esp + 0x64]
// 00601bac  8938                 mov dword ptr [eax], edi
// 00601bae  5f                   pop edi
// 00601baf  5e                   pop esi
// 00601bb0  5b                   pop ebx
// 00601bb1  83c450               add esp, 0x50
// 00601bb4  c3                   ret 
// 00601bb5  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00601bb9  8939                 mov dword ptr [ecx], edi
// 00601bbb  5f                   pop edi
// 00601bbc  5e                   pop esi
// 00601bbd  5b                   pop ebx
// 00601bbe  83c450               add esp, 0x50
// 00601bc1  c3                   ret 
// 00601bc2  8bff                 mov edi, edi
// 00601bc4  ad                   lodsd eax, dword ptr [esi]
// 00601bc5  186000               sbb byte ptr [eax], ah
// 00601bc8  0519600065           add eax, 0x65006019
// 00601bcd  196000               sbb dword ptr [eax], esp
// 00601bd0  db19                 fistp dword ptr [ecx]
// 00601bd2  60                   pushal 
// 00601bd3  0000                 add byte ptr [eax], al
// 00601bd5  0303                 add eax, dword ptr [ebx]
// 00601bd7  0303                 add eax, dword ptr [ebx]
// 00601bd9  0303                 add eax, dword ptr [ebx]
// 00601bdb  0303                 add eax, dword ptr [ebx]
// 00601bdd  0303                 add eax, dword ptr [ebx]
// 00601bdf  0103                 add dword ptr [ebx], eax
// 00601be1  0301                 add eax, dword ptr [ecx]
// 00601be3  0303                 add eax, dword ptr [ebx]
// 00601be5  0303                 add eax, dword ptr [ebx]
// 00601be7  0303                 add eax, dword ptr [ebx]
// 00601be9  0303                 add eax, dword ptr [ebx]
// 00601beb  0303                 add eax, dword ptr [ebx]
// 00601bed  0303                 add eax, dword ptr [ebx]
// 00601bef  0303                 add eax, dword ptr [ebx]
// 00601bf1  0303                 add eax, dword ptr [ebx]
// 00601bf3  0303                 add eax, dword ptr [ebx]
// 00601bf5  0303                 add eax, dword ptr [ebx]
// 00601bf7  0303                 add eax, dword ptr [ebx]
// 00601bf9  0303                 add eax, dword ptr [ebx]
// 00601bfb  0303                 add eax, dword ptr [ebx]
// 00601bfd  0303                 add eax, dword ptr [ebx]
// 00601bff  0303                 add eax, dword ptr [ebx]
// 00601c01  0303                 add eax, dword ptr [ebx]
// 00601c03  0303                 add eax, dword ptr [ebx]
// 00601c05  0303                 add eax, dword ptr [ebx]
// 00601c07  0303                 add eax, dword ptr [ebx]
// 00601c09  0303                 add eax, dword ptr [ebx]
// 00601c0b  0303                 add eax, dword ptr [ebx]
// 00601c0d  0303                 add eax, dword ptr [ebx]
// 00601c0f  0303                 add eax, dword ptr [ebx]
// 00601c11  0303                 add eax, dword ptr [ebx]
// 00601c13  0303                 add eax, dword ptr [ebx]
// 00601c15  0303                 add eax, dword ptr [ebx]
// 00601c17  0303                 add eax, dword ptr [ebx]
// 00601c19  0303                 add eax, dword ptr [ebx]
// 00601c1b  0303                 add eax, dword ptr [ebx]
// 00601c1d  0303                 add eax, dword ptr [ebx]
// 00601c1f  0303                 add eax, dword ptr [ebx]
// 00601c21  0303                 add eax, dword ptr [ebx]
// 00601c23  0303                 add eax, dword ptr [ebx]
// 00601c25  0303                 add eax, dword ptr [ebx]
// 00601c27  0303                 add eax, dword ptr [ebx]
// 00601c29  0303                 add eax, dword ptr [ebx]
// 00601c2b  0303                 add eax, dword ptr [ebx]
// 00601c2d  0303                 add eax, dword ptr [ebx]
// 00601c2f  0303                 add eax, dword ptr [ebx]
// 00601c31  028bff241b60         add cl, byte ptr [ebx + 0x601b24ff]
// 00601c37  000a                 add byte ptr [edx], cl
// 00601c39  1a6000               sbb ah, byte ptr [eax]
// 00601c3c  ac                   lodsb al, byte ptr [esi]
// 00601c3d  196000               sbb dword ptr [eax], esp
// 00601c40  b319                 mov bl, 0x19
// 00601c42  60                   pushal 
// 00601c43  00ba196000c1         add byte ptr [edx - 0x3eff9fe7], bh
// 00601c49  196000               sbb dword ptr [eax], esp
// 00601c4c  c8196000             enter 0x6019, 0
// 00601c50  cf                   iretd 
// 00601c51  196000               sbb dword ptr [eax], esp
// 00601c54  d6                   salc 
// 00601c55  196000               sbb dword ptr [eax], esp
// 00601c58  201a                 and byte ptr [edx], bl
// 00601c5a  60                   pushal 
// 00601c5b  0000                 add byte ptr [eax], al
// 00601c5d  0909                 or dword ptr [ecx], ecx
// 00601c5f  0909                 or dword ptr [ecx], ecx
// 00601c61  0909                 or dword ptr [ecx], ecx
// 00601c63  0909                 or dword ptr [ecx], ecx
// 00601c65  0909                 or dword ptr [ecx], ecx
// 00601c67  0109                 add dword ptr [ecx], ecx
// 00601c69  0901                 or dword ptr [ecx], eax
// 00601c6b  0909                 or dword ptr [ecx], ecx
// 00601c6d  0909                 or dword ptr [ecx], ecx
// 00601c6f  0909                 or dword ptr [ecx], ecx
// 00601c71  0909                 or dword ptr [ecx], ecx
// 00601c73  0909                 or dword ptr [ecx], ecx
// 00601c75  0909                 or dword ptr [ecx], ecx
// 00601c77  0909                 or dword ptr [ecx], ecx
// 00601c79  0909                 or dword ptr [ecx], ecx
// 00601c7b  0909                 or dword ptr [ecx], ecx
// 00601c7d  0909                 or dword ptr [ecx], ecx
// 00601c7f  0909                 or dword ptr [ecx], ecx
// 00601c81  0909                 or dword ptr [ecx], ecx
// 00601c83  0909                 or dword ptr [ecx], ecx
// 00601c85  0909                 or dword ptr [ecx], ecx
// 00601c87  0909                 or dword ptr [ecx], ecx
// 00601c89  0909                 or dword ptr [ecx], ecx
// 00601c8b  0909                 or dword ptr [ecx], ecx
// 00601c8d  0909                 or dword ptr [ecx], ecx
// 00601c8f  0909                 or dword ptr [ecx], ecx
// 00601c91  0909                 or dword ptr [ecx], ecx
// 00601c93  0909                 or dword ptr [ecx], ecx
// 00601c95  0909                 or dword ptr [ecx], ecx
// 00601c97  0909                 or dword ptr [ecx], ecx
// 00601c99  0909                 or dword ptr [ecx], ecx
// 00601c9b  0909                 or dword ptr [ecx], ecx
// 00601c9d  0909                 or dword ptr [ecx], ecx
// 00601c9f  0909                 or dword ptr [ecx], ecx
// 00601ca1  0909                 or dword ptr [ecx], ecx
// 00601ca3  0909                 or dword ptr [ecx], ecx
// 00601ca5  0909                 or dword ptr [ecx], ecx
// 00601ca7  0909                 or dword ptr [ecx], ecx
// 00601ca9  0909                 or dword ptr [ecx], ecx
// 00601cab  0909                 or dword ptr [ecx], ecx
// 00601cad  0909                 or dword ptr [ecx], ecx
// 00601caf  0909                 or dword ptr [ecx], ecx
// 00601cb1  0909                 or dword ptr [ecx], ecx
// 00601cb3  0909                 or dword ptr [ecx], ecx
// 00601cb5  0909                 or dword ptr [ecx], ecx
// 00601cb7  0909                 or dword ptr [ecx], ecx
// 00601cb9  0909                 or dword ptr [ecx], ecx
// 00601cbb  0909                 or dword ptr [ecx], ecx
// 00601cbd  0902                 or dword ptr [edx], eax
// 00601cbf  0309                 add ecx, dword ptr [ecx]
// 00601cc1  0909                 or dword ptr [ecx], ecx
// 00601cc3  0409                 add al, 9
// 00601cc5  0909                 or dword ptr [ecx], ecx
// 00601cc7  0909                 or dword ptr [ecx], ecx
// 00601cc9  0909                 or dword ptr [ecx], ecx
// 00601ccb  0509090906           add eax, 0x6090909
// 00601cd0  0907                 or dword ptr [edi], eax
// 00601cd2  0908                 or dword ptr [eax], ecx
// copied from an identical function in another client (function _read_string)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll llex.c