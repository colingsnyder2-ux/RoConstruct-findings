// roc 2012-06 009d8c90  unit: CXTPPropExchange  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8c90
//
// 009d8c90  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d8c94  56                   push esi
// 009d8c95  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009d8c99  3bf2                 cmp esi, edx
// 009d8c9b  7509                 jne 0x9d8ca6
// 009d8c9d  b801000000           mov eax, 1
// 009d8ca2  5e                   pop esi
// 009d8ca3  c20c00               ret 0xc
// 009d8ca6  85f6                 test esi, esi
// 009d8ca8  0f842c010000         je 0x9d8dda
// 009d8cae  85d2                 test edx, edx
// 009d8cb0  0f8424010000         je 0x9d8dda
// 009d8cb6  53                   push ebx
// 009d8cb7  57                   push edi
// 009d8cb8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009d8cbc  0fb7df               movzx ebx, di
// 009d8cbf  83c3fe               add ebx, -2
// 009d8cc2  33c0                 xor eax, eax
// 009d8cc4  83fb63               cmp ebx, 0x63
// 009d8cc7  0f8707010000         ja 0x9d8dd4
// 009d8ccd  0fb69bf88d9d00       movzx ebx, byte ptr [ebx + 0x9d8df8]
// 009d8cd4  ff249de08d9d00       jmp dword ptr [ebx*4 + 0x9d8de0]
// 009d8cdb  8b06                 mov eax, dword ptr [esi]
// 009d8cdd  8bca                 mov ecx, edx
// 009d8cdf  90                   nop 
// 009d8ce0  668b10               mov dx, word ptr [eax]
// 009d8ce3  663b11               cmp dx, word ptr [ecx]
// 009d8ce6  752b                 jne 0x9d8d13
// 009d8ce8  6685d2               test dx, dx
// 009d8ceb  7415                 je 0x9d8d02
// 009d8ced  668b5002             mov dx, word ptr [eax + 2]
// 009d8cf1  663b5102             cmp dx, word ptr [ecx + 2]
// 009d8cf5  751c                 jne 0x9d8d13
// 009d8cf7  83c004               add eax, 4
// 009d8cfa  83c104               add ecx, 4
// 009d8cfd  6685d2               test dx, dx
// 009d8d00  75de                 jne 0x9d8ce0
// 009d8d02  33c0                 xor eax, eax
// 009d8d04  33c9                 xor ecx, ecx
// 009d8d06  85c0                 test eax, eax
// 009d8d08  0f94c1               sete cl
// 009d8d0b  5f                   pop edi
// 009d8d0c  5b                   pop ebx
// 009d8d0d  5e                   pop esi
// 009d8d0e  8bc1                 mov eax, ecx
// 009d8d10  c20c00               ret 0xc
// 009d8d13  1bc0                 sbb eax, eax
// 009d8d15  83d8ff               sbb eax, -1
// 009d8d18  33c9                 xor ecx, ecx
// 009d8d1a  85c0                 test eax, eax
// 009d8d1c  0f94c1               sete cl
// 009d8d1f  5f                   pop edi
// 009d8d20  5b                   pop ebx
// 009d8d21  5e                   pop esi
// 009d8d22  8bc1                 mov eax, ecx
// 009d8d24  c20c00               ret 0xc
// 009d8d27  52                   push edx
// 009d8d28  8bce                 mov ecx, esi
// 009d8d2a  ff159c47b200         call dword ptr [0xb2479c]
// 009d8d30  f7d8                 neg eax
// 009d8d32  5f                   pop edi
// 009d8d33  1bc0                 sbb eax, eax
// 009d8d35  5b                   pop ebx
// 009d8d36  40                   inc eax
// 009d8d37  5e                   pop esi
// 009d8d38  c20c00               ret 0xc
// 009d8d3b  57                   push edi
// 009d8d3c  e8cfecffff           call 0x9d7a10
// 009d8d41  83f804               cmp eax, 4
// 009d8d44  7214                 jb 0x9d8d5a
// 009d8d46  8b0e                 mov ecx, dword ptr [esi]
// 009d8d48  3b0a                 cmp ecx, dword ptr [edx]
// 009d8d4a  7512                 jne 0x9d8d5e
// 009d8d4c  83e804               sub eax, 4
// 009d8d4f  83c204               add edx, 4
// 009d8d52  83c604               add esi, 4
// 009d8d55  83f804               cmp eax, 4
// 009d8d58  73ec                 jae 0x9d8d46
// 009d8d5a  85c0                 test eax, eax
// 009d8d5c  744e                 je 0x9d8dac
// 009d8d5e  0fb60e               movzx ecx, byte ptr [esi]
// 009d8d61  0fb63a               movzx edi, byte ptr [edx]
// 009d8d64  2bcf                 sub ecx, edi
// 009d8d66  7531                 jne 0x9d8d99
// 009d8d68  83f801               cmp eax, 1
// 009d8d6b  763f                 jbe 0x9d8dac
// 009d8d6d  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 009d8d71  0fb67a01             movzx edi, byte ptr [edx + 1]
// 009d8d75  2bcf                 sub ecx, edi
// 009d8d77  7520                 jne 0x9d8d99
// 009d8d79  83f802               cmp eax, 2
// 009d8d7c  762e                 jbe 0x9d8dac
// 009d8d7e  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 009d8d82  0fb67a02             movzx edi, byte ptr [edx + 2]
// 009d8d86  2bcf                 sub ecx, edi
// 009d8d88  750f                 jne 0x9d8d99
// 009d8d8a  83f803               cmp eax, 3
// 009d8d8d  761d                 jbe 0x9d8dac
// 009d8d8f  0fb64e03             movzx ecx, byte ptr [esi + 3]
// 009d8d93  0fb65203             movzx edx, byte ptr [edx + 3]
// 009d8d97  2bca                 sub ecx, edx
// 009d8d99  c1f91f               sar ecx, 0x1f
// 009d8d9c  5f                   pop edi
// 009d8d9d  83c901               or ecx, 1
// 009d8da0  33c0                 xor eax, eax
// 009d8da2  85c9                 test ecx, ecx
// 009d8da4  5b                   pop ebx
// 009d8da5  0f94c0               sete al
// 009d8da8  5e                   pop esi
// 009d8da9  c20c00               ret 0xc
// 009d8dac  5f                   pop edi
// 009d8dad  33c9                 xor ecx, ecx
// 009d8daf  33c0                 xor eax, eax
// 009d8db1  85c9                 test ecx, ecx
// 009d8db3  5b                   pop ebx
// 009d8db4  0f94c0               sete al
// 009d8db7  5e                   pop esi
// 009d8db8  c20c00               ret 0xc
// 009d8dbb  52                   push edx
// 009d8dbc  8bce                 mov ecx, esi
// 009d8dbe  e8870b0c00           call 0xa9994a
// 009d8dc3  5f                   pop edi
// 009d8dc4  5b                   pop ebx
// 009d8dc5  5e                   pop esi
// 009d8dc6  c20c00               ret 0xc
// 009d8dc9  52                   push edx
// 009d8dca  8bce                 mov ecx, esi
// 009d8dcc  e8ff0afeff           call 0x9b98d0
// 009d8dd1  0fb6c0               movzx eax, al
// 009d8dd4  5f                   pop edi
// 009d8dd5  5b                   pop ebx
// 009d8dd6  5e                   pop esi
// 009d8dd7  c20c00               ret 0xc
// 009d8dda  33c0                 xor eax, eax
// 009d8ddc  5e                   pop esi
// 009d8ddd  c20c00               ret 0xc
// 009d8de0  3b8d9d00c98d         cmp ecx, dword ptr [ebp - 0x7236ff63]
// 009d8de6  9d                   popfd 
// 009d8de7  00db                 add bl, bl
// 009d8de9  8c9d00bb8d9d         mov word ptr [ebp - 0x62724500], ds
// 009d8def  0027                 add byte ptr [edi], ah
// 009d8df1  8d9d00d48d9d         lea ebx, [ebp - 0x62722c00]
// 009d8df7  0000                 add byte ptr [eax], al
// 009d8df9  0000                 add byte ptr [eax], al
// 009d8dfb  0000                 add byte ptr [eax], al
// 009d8dfd  0102                 add dword ptr [edx], eax
// 009d8dff  0505000305           add eax, 0x5030005
// 009d8e04  0505050005           add eax, 0x5000505
// 009d8e09  0505050505           add eax, 0x5050505
// 009d8e0e  0505050505           add eax, 0x5050505
// 009d8e13  0504050505           add eax, 0x5050504
// 009d8e18  0505050505           add eax, 0x5050505
// 009d8e1d  0505050505           add eax, 0x5050505
// 009d8e22  0505050505           add eax, 0x5050505
// 009d8e27  0505050505           add eax, 0x5050505
// 009d8e2c  0505050505           add eax, 0x5050505
// 009d8e31  0505050505           add eax, 0x5050505
// 009d8e36  0505050505           add eax, 0x5050505
// 009d8e3b  0505050505           add eax, 0x5050505
// 009d8e40  0505050505           add eax, 0x5050505
// 009d8e45  0505050505           add eax, 0x5050505
// 009d8e4a  0505050505           add eax, 0x5050505
// 009d8e4f  0505050505           add eax, 0x5050505
// 009d8e54  0505050505           add eax, 0x5050505
// copied from an identical function in another client (function ?IsSamePropValue@CXTPPropExchange@@IAEHGPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp