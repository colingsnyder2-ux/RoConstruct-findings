// roc 2009-12 007d5bf0  unit: seg_007d0000  size: 1156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d5bf0
//
// 007d5bf0  83ec50               sub esp, 0x50
// 007d5bf3  53                   push ebx
// 007d5bf4  56                   push esi
// 007d5bf5  8bd8                 mov ebx, eax
// 007d5bf7  8b03                 mov eax, dword ptr [ebx]
// 007d5bf9  57                   push edi
// 007d5bfa  50                   push eax
// 007d5bfb  e880f5ffff           call 0x7d5180
// 007d5c00  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5c03  8b08                 mov ecx, dword ptr [eax]
// 007d5c05  83c404               add esp, 4
// 007d5c08  8d51ff               lea edx, [ecx - 1]
// 007d5c0b  8910                 mov dword ptr [eax], edx
// 007d5c0d  85c9                 test ecx, ecx
// 007d5c0f  760f                 jbe 0x7d5c20
// 007d5c11  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5c14  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5c17  0fb602               movzx eax, byte ptr [edx]
// 007d5c1a  42                   inc edx
// 007d5c1b  895104               mov dword ptr [ecx + 4], edx
// 007d5c1e  eb0c                 jmp 0x7d5c2c
// 007d5c20  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5c23  50                   push eax
// 007d5c24  e8a7b4ffff           call 0x7d10d0
// 007d5c29  83c404               add esp, 4
// 007d5c2c  8903                 mov dword ptr [ebx], eax
// 007d5c2e  3b442460             cmp eax, dword ptr [esp + 0x60]
// 007d5c32  0f849d020000         je 0x7d5ed5
// 007d5c38  55                   push ebp
// 007d5c39  8b2ddcb89800         mov ebp, dword ptr [0x98b8dc]
// 007d5c3f  90                   nop 
// 007d5c40  8b03                 mov eax, dword ptr [ebx]
// 007d5c42  8d4801               lea ecx, [eax + 1]
// 007d5c45  83f95d               cmp ecx, 0x5d
// 007d5c48  0f873a010000         ja 0x7d5d88
// 007d5c4e  0fb689745f7d00       movzx ecx, byte ptr [ecx + 0x7d5f74]
// 007d5c55  ff248d645f7d00       jmp dword ptr [ecx*4 + 0x7d5f64]
// 007d5c5c  8b5340               mov edx, dword ptr [ebx + 0x40]
// 007d5c5f  6a50                 push 0x50
// 007d5c61  83c210               add edx, 0x10
// 007d5c64  52                   push edx
// 007d5c65  8d442418             lea eax, [esp + 0x18]
// 007d5c69  50                   push eax
// 007d5c6a  e83149fcff           call 0x79a5a0
// 007d5c6f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007d5c72  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007d5c75  6878f49e00           push 0x9ef478
// 007d5c7a  51                   push ecx
// 007d5c7b  8d542424             lea edx, [esp + 0x24]
// 007d5c7f  52                   push edx
// 007d5c80  68b4ab9e00           push 0x9eabb4
// 007d5c85  50                   push eax
// 007d5c86  e8f548fcff           call 0x79a580
// 007d5c8b  8b0db0f39e00         mov ecx, dword ptr [0x9ef3b0]
// 007d5c91  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007d5c94  51                   push ecx
// 007d5c95  50                   push eax
// 007d5c96  68e4f39e00           push 0x9ef3e4
// 007d5c9b  52                   push edx
// 007d5c9c  e8df48fcff           call 0x79a580
// 007d5ca1  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007d5ca4  6a03                 push 3
// 007d5ca6  50                   push eax
// 007d5ca7  e8a41bfcff           call 0x797850
// 007d5cac  83c438               add esp, 0x38
// 007d5caf  e914020000           jmp 0x7d5ec8
// 007d5cb4  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 007d5cb7  6a50                 push 0x50
// 007d5cb9  83c110               add ecx, 0x10
// 007d5cbc  51                   push ecx
// 007d5cbd  8d542418             lea edx, [esp + 0x18]
// 007d5cc1  52                   push edx
// 007d5cc2  e8d948fcff           call 0x79a5a0
// 007d5cc7  8b4304               mov eax, dword ptr [ebx + 4]
// 007d5cca  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007d5ccd  6878f49e00           push 0x9ef478
// 007d5cd2  50                   push eax
// 007d5cd3  8d4c2424             lea ecx, [esp + 0x24]
// 007d5cd7  51                   push ecx
// 007d5cd8  68b4ab9e00           push 0x9eabb4
// 007d5cdd  52                   push edx
// 007d5cde  e89d48fcff           call 0x79a580
// 007d5ce3  6a00                 push 0
// 007d5ce5  8bf0                 mov esi, eax
// 007d5ce7  e894f4ffff           call 0x7d5180
// 007d5cec  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 007d5cef  8b00                 mov eax, dword ptr [eax]
// 007d5cf1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007d5cf4  50                   push eax
// 007d5cf5  56                   push esi
// 007d5cf6  68e4f39e00           push 0x9ef3e4
// 007d5cfb  51                   push ecx
// 007d5cfc  e87f48fcff           call 0x79a580
// 007d5d01  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007d5d04  6a03                 push 3
// 007d5d06  52                   push edx
// 007d5d07  e8441bfcff           call 0x797850
// 007d5d0c  83c43c               add esp, 0x3c
// 007d5d0f  e9b4010000           jmp 0x7d5ec8
// 007d5d14  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5d17  8b08                 mov ecx, dword ptr [eax]
// 007d5d19  8d51ff               lea edx, [ecx - 1]
// 007d5d1c  8910                 mov dword ptr [eax], edx
// 007d5d1e  85c9                 test ecx, ecx
// 007d5d20  760f                 jbe 0x7d5d31
// 007d5d22  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5d25  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5d28  0fb602               movzx eax, byte ptr [edx]
// 007d5d2b  42                   inc edx
// 007d5d2c  895104               mov dword ptr [ecx + 4], edx
// 007d5d2f  eb0c                 jmp 0x7d5d3d
// 007d5d31  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5d34  50                   push eax
// 007d5d35  e896b3ffff           call 0x7d10d0
// 007d5d3a  83c404               add esp, 4
// 007d5d3d  8d4801               lea ecx, [eax + 1]
// 007d5d40  8903                 mov dword ptr [ebx], eax
// 007d5d42  83f977               cmp ecx, 0x77
// 007d5d45  0f8780000000         ja 0x7d5dcb
// 007d5d4b  0fb689fc5f7d00       movzx ecx, byte ptr [ecx + 0x7d5ffc]
// 007d5d52  ff248dd45f7d00       jmp dword ptr [ecx*4 + 0x7d5fd4]
// 007d5d59  b807000000           mov eax, 7
// 007d5d5e  eb28                 jmp 0x7d5d88
// 007d5d60  b808000000           mov eax, 8
// 007d5d65  eb21                 jmp 0x7d5d88
// 007d5d67  b80c000000           mov eax, 0xc
// 007d5d6c  eb1a                 jmp 0x7d5d88
// 007d5d6e  b80a000000           mov eax, 0xa
// 007d5d73  eb13                 jmp 0x7d5d88
// 007d5d75  b80d000000           mov eax, 0xd
// 007d5d7a  eb0c                 jmp 0x7d5d88
// 007d5d7c  b809000000           mov eax, 9
// 007d5d81  eb05                 jmp 0x7d5d88
// 007d5d83  b80b000000           mov eax, 0xb
// 007d5d88  50                   push eax
// 007d5d89  e8f2f3ffff           call 0x7d5180
// 007d5d8e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5d91  8b08                 mov ecx, dword ptr [eax]
// 007d5d93  83c404               add esp, 4
// 007d5d96  8d51ff               lea edx, [ecx - 1]
// 007d5d99  8910                 mov dword ptr [eax], edx
// 007d5d9b  85c9                 test ecx, ecx
// 007d5d9d  0f8617010000         jbe 0x7d5eba
// 007d5da3  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5da6  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5da9  0fb602               movzx eax, byte ptr [edx]
// 007d5dac  42                   inc edx
// 007d5dad  895104               mov dword ptr [ecx + 4], edx
// 007d5db0  e911010000           jmp 0x7d5ec6
// 007d5db5  6a0a                 push 0xa
// 007d5db7  e8c4f3ffff           call 0x7d5180
// 007d5dbc  83c404               add esp, 4
// 007d5dbf  8bf3                 mov esi, ebx
// 007d5dc1  e8eaf5ffff           call 0x7d53b0
// 007d5dc6  e9fd000000           jmp 0x7d5ec8
// 007d5dcb  50                   push eax
// 007d5dcc  ffd5                 call ebp
// 007d5dce  83c404               add esp, 4
// 007d5dd1  85c0                 test eax, eax
// 007d5dd3  752f                 jne 0x7d5e04
// 007d5dd5  8b0b                 mov ecx, dword ptr [ebx]
// 007d5dd7  51                   push ecx
// 007d5dd8  e8a3f3ffff           call 0x7d5180
// 007d5ddd  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5de0  8b08                 mov ecx, dword ptr [eax]
// 007d5de2  83c404               add esp, 4
// 007d5de5  8d51ff               lea edx, [ecx - 1]
// 007d5de8  8910                 mov dword ptr [eax], edx
// 007d5dea  85c9                 test ecx, ecx
// 007d5dec  0f86c8000000         jbe 0x7d5eba
// 007d5df2  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5df5  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5df8  0fb602               movzx eax, byte ptr [edx]
// 007d5dfb  42                   inc edx
// 007d5dfc  895104               mov dword ptr [ecx + 4], edx
// 007d5dff  e9c2000000           jmp 0x7d5ec6
// 007d5e04  33f6                 xor esi, esi
// 007d5e06  33ff                 xor edi, edi
// 007d5e08  8b13                 mov edx, dword ptr [ebx]
// 007d5e0a  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5e0d  8d0cbf               lea ecx, [edi + edi*4]
// 007d5e10  8d7c4ad0             lea edi, [edx + ecx*2 - 0x30]
// 007d5e14  8b08                 mov ecx, dword ptr [eax]
// 007d5e16  8d51ff               lea edx, [ecx - 1]
// 007d5e19  8910                 mov dword ptr [eax], edx
// 007d5e1b  85c9                 test ecx, ecx
// 007d5e1d  760f                 jbe 0x7d5e2e
// 007d5e1f  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5e22  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5e25  0fb602               movzx eax, byte ptr [edx]
// 007d5e28  42                   inc edx
// 007d5e29  895104               mov dword ptr [ecx + 4], edx
// 007d5e2c  eb0c                 jmp 0x7d5e3a
// 007d5e2e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5e31  50                   push eax
// 007d5e32  e899b2ffff           call 0x7d10d0
// 007d5e37  83c404               add esp, 4
// 007d5e3a  46                   inc esi
// 007d5e3b  83fe03               cmp esi, 3
// 007d5e3e  8903                 mov dword ptr [ebx], eax
// 007d5e40  7d0a                 jge 0x7d5e4c
// 007d5e42  50                   push eax
// 007d5e43  ffd5                 call ebp
// 007d5e45  83c404               add esp, 4
// 007d5e48  85c0                 test eax, eax
// 007d5e4a  75bc                 jne 0x7d5e08
// 007d5e4c  81ffff000000         cmp edi, 0xff
// 007d5e52  7e5b                 jle 0x7d5eaf
// 007d5e54  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 007d5e57  6a50                 push 0x50
// 007d5e59  83c110               add ecx, 0x10
// 007d5e5c  51                   push ecx
// 007d5e5d  8d542418             lea edx, [esp + 0x18]
// 007d5e61  52                   push edx
// 007d5e62  e83947fcff           call 0x79a5a0
// 007d5e67  8b4304               mov eax, dword ptr [ebx + 4]
// 007d5e6a  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007d5e6d  685cf49e00           push 0x9ef45c
// 007d5e72  50                   push eax
// 007d5e73  8d4c2424             lea ecx, [esp + 0x24]
// 007d5e77  51                   push ecx
// 007d5e78  68b4ab9e00           push 0x9eabb4
// 007d5e7d  52                   push edx
// 007d5e7e  e8fd46fcff           call 0x79a580
// 007d5e83  6a00                 push 0
// 007d5e85  8bf0                 mov esi, eax
// 007d5e87  e8f4f2ffff           call 0x7d5180
// 007d5e8c  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 007d5e8f  8b00                 mov eax, dword ptr [eax]
// 007d5e91  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 007d5e94  50                   push eax
// 007d5e95  56                   push esi
// 007d5e96  68e4f39e00           push 0x9ef3e4
// 007d5e9b  51                   push ecx
// 007d5e9c  e8df46fcff           call 0x79a580
// 007d5ea1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007d5ea4  6a03                 push 3
// 007d5ea6  52                   push edx
// 007d5ea7  e8a419fcff           call 0x797850
// 007d5eac  83c43c               add esp, 0x3c
// 007d5eaf  57                   push edi
// 007d5eb0  e8cbf2ffff           call 0x7d5180
// 007d5eb5  83c404               add esp, 4
// 007d5eb8  eb0e                 jmp 0x7d5ec8
// 007d5eba  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5ebd  50                   push eax
// 007d5ebe  e80db2ffff           call 0x7d10d0
// 007d5ec3  83c404               add esp, 4
// 007d5ec6  8903                 mov dword ptr [ebx], eax
// 007d5ec8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007d5ecc  390b                 cmp dword ptr [ebx], ecx
// 007d5ece  0f856cfdffff         jne 0x7d5c40
// 007d5ed4  5d                   pop ebp
// 007d5ed5  8b13                 mov edx, dword ptr [ebx]
// 007d5ed7  52                   push edx
// 007d5ed8  e8a3f2ffff           call 0x7d5180
// 007d5edd  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5ee0  8b08                 mov ecx, dword ptr [eax]
// 007d5ee2  83c404               add esp, 4
// 007d5ee5  8d51ff               lea edx, [ecx - 1]
// 007d5ee8  8910                 mov dword ptr [eax], edx
// 007d5eea  85c9                 test ecx, ecx
// 007d5eec  760f                 jbe 0x7d5efd
// 007d5eee  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5ef1  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5ef4  0fb602               movzx eax, byte ptr [edx]
// 007d5ef7  42                   inc edx
// 007d5ef8  895104               mov dword ptr [ecx + 4], edx
// 007d5efb  eb0c                 jmp 0x7d5f09
// 007d5efd  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5f00  50                   push eax
// 007d5f01  e8cab1ffff           call 0x7d10d0
// 007d5f06  83c404               add esp, 4
// 007d5f09  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 007d5f0c  8b7334               mov esi, dword ptr [ebx + 0x34]
// 007d5f0f  8903                 mov dword ptr [ebx], eax
// 007d5f11  8b4104               mov eax, dword ptr [ecx + 4]
// 007d5f14  8b09                 mov ecx, dword ptr [ecx]
// 007d5f16  83e802               sub eax, 2
// 007d5f19  50                   push eax
// 007d5f1a  41                   inc ecx
// 007d5f1b  51                   push ecx
// 007d5f1c  56                   push esi
// 007d5f1d  e86eacffff           call 0x7d0b90
// 007d5f22  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007d5f25  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5f28  8bf8                 mov edi, eax
// 007d5f2a  57                   push edi
// 007d5f2b  52                   push edx
// 007d5f2c  56                   push esi
// 007d5f2d  e8aeaaffff           call 0x7d09e0
// 007d5f32  83c418               add esp, 0x18
// 007d5f35  83780800             cmp dword ptr [eax + 8], 0
// 007d5f39  751a                 jne 0x7d5f55
// 007d5f3b  c70001000000         mov dword ptr [eax], 1
// 007d5f41  c7400801000000       mov dword ptr [eax + 8], 1
// 007d5f48  8b442464             mov eax, dword ptr [esp + 0x64]
// 007d5f4c  8938                 mov dword ptr [eax], edi
// 007d5f4e  5f                   pop edi
// 007d5f4f  5e                   pop esi
// 007d5f50  5b                   pop ebx
// 007d5f51  83c450               add esp, 0x50
// 007d5f54  c3                   ret 
// 007d5f55  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007d5f59  8939                 mov dword ptr [ecx], edi
// 007d5f5b  5f                   pop edi
// 007d5f5c  5e                   pop esi
// 007d5f5d  5b                   pop ebx
// 007d5f5e  83c450               add esp, 0x50
// 007d5f61  c3                   ret 
// 007d5f62  8bff                 mov edi, edi
// 007d5f64  5c                   pop esp
// 007d5f65  5c                   pop esp
// 007d5f66  7d00                 jge 0x7d5f68
// 007d5f68  b45c                 mov ah, 0x5c
// 007d5f6a  7d00                 jge 0x7d5f6c
// 007d5f6c  145d                 adc al, 0x5d
// 007d5f6e  7d00                 jge 0x7d5f70
// 007d5f70  885d7d               mov byte ptr [ebp + 0x7d], bl
// 007d5f73  0000                 add byte ptr [eax], al
// 007d5f75  0303                 add eax, dword ptr [ebx]
// 007d5f77  0303                 add eax, dword ptr [ebx]
// 007d5f79  0303                 add eax, dword ptr [ebx]
// 007d5f7b  0303                 add eax, dword ptr [ebx]
// 007d5f7d  0303                 add eax, dword ptr [ebx]
// 007d5f7f  0103                 add dword ptr [ebx], eax
// 007d5f81  0301                 add eax, dword ptr [ecx]
// 007d5f83  0303                 add eax, dword ptr [ebx]
// 007d5f85  0303                 add eax, dword ptr [ebx]
// 007d5f87  0303                 add eax, dword ptr [ebx]
// 007d5f89  0303                 add eax, dword ptr [ebx]
// 007d5f8b  0303                 add eax, dword ptr [ebx]
// 007d5f8d  0303                 add eax, dword ptr [ebx]
// 007d5f8f  0303                 add eax, dword ptr [ebx]
// 007d5f91  0303                 add eax, dword ptr [ebx]
// 007d5f93  0303                 add eax, dword ptr [ebx]
// 007d5f95  0303                 add eax, dword ptr [ebx]
// 007d5f97  0303                 add eax, dword ptr [ebx]
// 007d5f99  0303                 add eax, dword ptr [ebx]
// 007d5f9b  0303                 add eax, dword ptr [ebx]
// 007d5f9d  0303                 add eax, dword ptr [ebx]
// 007d5f9f  0303                 add eax, dword ptr [ebx]
// 007d5fa1  0303                 add eax, dword ptr [ebx]
// 007d5fa3  0303                 add eax, dword ptr [ebx]
// 007d5fa5  0303                 add eax, dword ptr [ebx]
// 007d5fa7  0303                 add eax, dword ptr [ebx]
// 007d5fa9  0303                 add eax, dword ptr [ebx]
// 007d5fab  0303                 add eax, dword ptr [ebx]
// 007d5fad  0303                 add eax, dword ptr [ebx]
// 007d5faf  0303                 add eax, dword ptr [ebx]
// 007d5fb1  0303                 add eax, dword ptr [ebx]
// 007d5fb3  0303                 add eax, dword ptr [ebx]
// 007d5fb5  0303                 add eax, dword ptr [ebx]
// 007d5fb7  0303                 add eax, dword ptr [ebx]
// 007d5fb9  0303                 add eax, dword ptr [ebx]
// 007d5fbb  0303                 add eax, dword ptr [ebx]
// 007d5fbd  0303                 add eax, dword ptr [ebx]
// 007d5fbf  0303                 add eax, dword ptr [ebx]
// 007d5fc1  0303                 add eax, dword ptr [ebx]
// 007d5fc3  0303                 add eax, dword ptr [ebx]
// 007d5fc5  0303                 add eax, dword ptr [ebx]
// 007d5fc7  0303                 add eax, dword ptr [ebx]
// 007d5fc9  0303                 add eax, dword ptr [ebx]
// 007d5fcb  0303                 add eax, dword ptr [ebx]
// 007d5fcd  0303                 add eax, dword ptr [ebx]
// 007d5fcf  0303                 add eax, dword ptr [ebx]
// 007d5fd1  028bffc85e7d         add cl, byte ptr [ebx + 0x7d5ec8ff]
// 007d5fd7  00b55d7d0059         add byte ptr [ebp + 0x59007d5d], dh
// 007d5fdd  5d                   pop ebp
// 007d5fde  7d00                 jge 0x7d5fe0
// 007d5fe0  60                   pushal 
// 007d5fe1  5d                   pop ebp
// 007d5fe2  7d00                 jge 0x7d5fe4
// 007d5fe4  675d                 pop ebp
// 007d5fe6  7d00                 jge 0x7d5fe8
// 007d5fe8  6e                   outsb dx, byte ptr [esi]
// 007d5fe9  5d                   pop ebp
// 007d5fea  7d00                 jge 0x7d5fec
// 007d5fec  755d                 jne 0x7d604b
// 007d5fee  7d00                 jge 0x7d5ff0
// 007d5ff0  7c5d                 jl 0x7d604f
// 007d5ff2  7d00                 jge 0x7d5ff4
// 007d5ff4  835d7d00             sbb dword ptr [ebp + 0x7d], 0
// 007d5ff8  cb                   retf 
// 007d5ff9  5d                   pop ebp
// 007d5ffa  7d00                 jge 0x7d5ffc
// 007d5ffc  0009                 add byte ptr [ecx], cl
// 007d5ffe  0909                 or dword ptr [ecx], ecx
// 007d6000  0909                 or dword ptr [ecx], ecx
// 007d6002  0909                 or dword ptr [ecx], ecx
// 007d6004  0909                 or dword ptr [ecx], ecx
// 007d6006  0901                 or dword ptr [ecx], eax
// 007d6008  0909                 or dword ptr [ecx], ecx
// 007d600a  0109                 add dword ptr [ecx], ecx
// 007d600c  0909                 or dword ptr [ecx], ecx
// 007d600e  0909                 or dword ptr [ecx], ecx
// 007d6010  0909                 or dword ptr [ecx], ecx
// 007d6012  0909                 or dword ptr [ecx], ecx
// 007d6014  0909                 or dword ptr [ecx], ecx
// 007d6016  0909                 or dword ptr [ecx], ecx
// 007d6018  0909                 or dword ptr [ecx], ecx
// 007d601a  0909                 or dword ptr [ecx], ecx
// 007d601c  0909                 or dword ptr [ecx], ecx
// 007d601e  0909                 or dword ptr [ecx], ecx
// 007d6020  0909                 or dword ptr [ecx], ecx
// 007d6022  0909                 or dword ptr [ecx], ecx
// 007d6024  0909                 or dword ptr [ecx], ecx
// 007d6026  0909                 or dword ptr [ecx], ecx
// 007d6028  0909                 or dword ptr [ecx], ecx
// 007d602a  0909                 or dword ptr [ecx], ecx
// 007d602c  0909                 or dword ptr [ecx], ecx
// 007d602e  0909                 or dword ptr [ecx], ecx
// 007d6030  0909                 or dword ptr [ecx], ecx
// 007d6032  0909                 or dword ptr [ecx], ecx
// 007d6034  0909                 or dword ptr [ecx], ecx
// 007d6036  0909                 or dword ptr [ecx], ecx
// 007d6038  0909                 or dword ptr [ecx], ecx
// 007d603a  0909                 or dword ptr [ecx], ecx
// 007d603c  0909                 or dword ptr [ecx], ecx
// 007d603e  0909                 or dword ptr [ecx], ecx
// 007d6040  0909                 or dword ptr [ecx], ecx
// 007d6042  0909                 or dword ptr [ecx], ecx
// 007d6044  0909                 or dword ptr [ecx], ecx
// 007d6046  0909                 or dword ptr [ecx], ecx
// 007d6048  0909                 or dword ptr [ecx], ecx
// 007d604a  0909                 or dword ptr [ecx], ecx
// 007d604c  0909                 or dword ptr [ecx], ecx
// 007d604e  0909                 or dword ptr [ecx], ecx
// 007d6050  0909                 or dword ptr [ecx], ecx
// 007d6052  0909                 or dword ptr [ecx], ecx
// 007d6054  0909                 or dword ptr [ecx], ecx
// 007d6056  0909                 or dword ptr [ecx], ecx
// 007d6058  0909                 or dword ptr [ecx], ecx
// 007d605a  0909                 or dword ptr [ecx], ecx
// 007d605c  0909                 or dword ptr [ecx], ecx
// 007d605e  0203                 add al, byte ptr [ebx]
// 007d6060  0909                 or dword ptr [ecx], ecx
// 007d6062  090409               or dword ptr [ecx + ecx], eax
// 007d6065  0909                 or dword ptr [ecx], ecx
// 007d6067  0909                 or dword ptr [ecx], ecx
// 007d6069  0909                 or dword ptr [ecx], ecx
// 007d606b  0509090906           add eax, 0x6090909
// 007d6070  0907                 or dword ptr [edi], eax
// 007d6072  0908                 or dword ptr [eax], ecx
// copied from an identical function in another client (function _read_string)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll llex.c