// roc 2010-06 00589db0  unit: seg_00580000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589db0
//
// 00589db0  56                   push esi
// 00589db1  8b742408             mov esi, dword ptr [esp + 8]
// 00589db5  57                   push edi
// 00589db6  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 00589dbc  8b4710               mov eax, dword ptr [edi + 0x10]
// 00589dbf  83e800               sub eax, 0
// 00589dc2  0f84d4000000         je 0x589e9c
// 00589dc8  83e801               sub eax, 1
// 00589dcb  741d                 je 0x589dea
// 00589dcd  83e801               sub eax, 1
// 00589dd0  7447                 je 0x589e19
// 00589dd2  8b06                 mov eax, dword ptr [esi]
// 00589dd4  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 00589ddb  8b0e                 mov ecx, dword ptr [esi]
// 00589ddd  8b11                 mov edx, dword ptr [ecx]
// 00589ddf  56                   push esi
// 00589de0  ffd2                 call edx
// 00589de2  83c404               add esp, 4
// 00589de5  e93f010000           jmp 0x589f29
// 00589dea  e801fdffff           call 0x589af0
// 00589def  e8ecfdffff           call 0x589be0
// 00589df4  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00589dfb  7579                 jne 0x589e76
// 00589dfd  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00589e04  7470                 je 0x589e76
// 00589e06  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00589e0d  7567                 jne 0x589e76
// 00589e0f  ff4714               inc dword ptr [edi + 0x14]
// 00589e12  c7471002000000       mov dword ptr [edi + 0x10], 2
// 00589e19  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 00589e20  750a                 jne 0x589e2c
// 00589e22  e8c9fcffff           call 0x589af0
// 00589e27  e8b4fdffff           call 0x589be0
// 00589e2c  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00589e32  8b08                 mov ecx, dword ptr [eax]
// 00589e34  6a00                 push 0
// 00589e36  56                   push esi
// 00589e37  ffd1                 call ecx
// 00589e39  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 00589e3f  8b02                 mov eax, dword ptr [edx]
// 00589e41  6a02                 push 2
// 00589e43  56                   push esi
// 00589e44  ffd0                 call eax
// 00589e46  83c410               add esp, 0x10
// 00589e49  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 00589e4d  750f                 jne 0x589e5e
// 00589e4f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 00589e55  8b5104               mov edx, dword ptr [ecx + 4]
// 00589e58  56                   push esi
// 00589e59  ffd2                 call edx
// 00589e5b  83c404               add esp, 4
// 00589e5e  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00589e64  8b4808               mov ecx, dword ptr [eax + 8]
// 00589e67  56                   push esi
// 00589e68  ffd1                 call ecx
// 00589e6a  83c404               add esp, 4
// 00589e6d  c6470c00             mov byte ptr [edi + 0xc], 0
// 00589e71  e9b3000000           jmp 0x589f29
// 00589e76  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 00589e7c  8b02                 mov eax, dword ptr [edx]
// 00589e7e  6a01                 push 1
// 00589e80  56                   push esi
// 00589e81  ffd0                 call eax
// 00589e83  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 00589e89  8b11                 mov edx, dword ptr [ecx]
// 00589e8b  6a02                 push 2
// 00589e8d  56                   push esi
// 00589e8e  ffd2                 call edx
// 00589e90  83c410               add esp, 0x10
// 00589e93  c6470c00             mov byte ptr [edi + 0xc], 0
// 00589e97  e98d000000           jmp 0x589f29
// 00589e9c  e84ffcffff           call 0x589af0
// 00589ea1  e83afdffff           call 0x589be0
// 00589ea6  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00589ead  7526                 jne 0x589ed5
// 00589eaf  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00589eb5  8b08                 mov ecx, dword ptr [eax]
// 00589eb7  56                   push esi
// 00589eb8  ffd1                 call ecx
// 00589eba  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 00589ec0  8b02                 mov eax, dword ptr [edx]
// 00589ec2  56                   push esi
// 00589ec3  ffd0                 call eax
// 00589ec5  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 00589ecb  8b11                 mov edx, dword ptr [ecx]
// 00589ecd  6a00                 push 0
// 00589ecf  56                   push esi
// 00589ed0  ffd2                 call edx
// 00589ed2  83c410               add esp, 0x10
// 00589ed5  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 00589edb  8b08                 mov ecx, dword ptr [eax]
// 00589edd  56                   push esi
// 00589ede  ffd1                 call ecx
// 00589ee0  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 00589ee7  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 00589eed  8b0a                 mov ecx, dword ptr [edx]
// 00589eef  50                   push eax
// 00589ef0  56                   push esi
// 00589ef1  ffd1                 call ecx
// 00589ef3  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 00589ef9  8b0a                 mov ecx, dword ptr [edx]
// 00589efb  33c0                 xor eax, eax
// 00589efd  837f1801             cmp dword ptr [edi + 0x18], 1
// 00589f01  0f9ec0               setle al
// 00589f04  48                   dec eax
// 00589f05  83e003               and eax, 3
// 00589f08  50                   push eax
// 00589f09  56                   push esi
// 00589f0a  ffd1                 call ecx
// 00589f0c  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 00589f12  8b02                 mov eax, dword ptr [edx]
// 00589f14  6a00                 push 0
// 00589f16  56                   push esi
// 00589f17  ffd0                 call eax
// 00589f19  83c41c               add esp, 0x1c
// 00589f1c  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 00589f23  0f94c1               sete cl
// 00589f26  884f0c               mov byte ptr [edi + 0xc], cl
// 00589f29  8b5718               mov edx, dword ptr [edi + 0x18]
// 00589f2c  8b4714               mov eax, dword ptr [edi + 0x14]
// 00589f2f  4a                   dec edx
// 00589f30  3bc2                 cmp eax, edx
// 00589f32  0f94c1               sete cl
// 00589f35  884f0d               mov byte ptr [edi + 0xd], cl
// 00589f38  837e0800             cmp dword ptr [esi + 8], 0
// 00589f3c  740f                 je 0x589f4d
// 00589f3e  8b5608               mov edx, dword ptr [esi + 8]
// 00589f41  89420c               mov dword ptr [edx + 0xc], eax
// 00589f44  8b4608               mov eax, dword ptr [esi + 8]
// 00589f47  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00589f4a  894810               mov dword ptr [eax + 0x10], ecx
// 00589f4d  5f                   pop edi
// 00589f4e  5e                   pop esi
// 00589f4f  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
