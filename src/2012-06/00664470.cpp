// roc 2012-06 00664470  unit: seg_00660000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664470
//
// 00664470  83ec14               sub esp, 0x14
// 00664473  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664477  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 0066447d  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 00664483  53                   push ebx
// 00664484  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00664488  55                   push ebp
// 00664489  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 0066448c  56                   push esi
// 0066448d  8b7010               mov esi, dword ptr [eax + 0x10]
// 00664490  8974241c             mov dword ptr [esp + 0x1c], esi
// 00664494  8b7014               mov esi, dword ptr [eax + 0x14]
// 00664497  89742418             mov dword ptr [esp + 0x18], esi
// 0066449b  8b7018               mov esi, dword ptr [eax + 0x18]
// 0066449e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 006644a1  89742414             mov dword ptr [esp + 0x14], esi
// 006644a5  8b33                 mov esi, dword ptr [ebx]
// 006644a7  89442410             mov dword ptr [esp + 0x10], eax
// 006644ab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006644af  57                   push edi
// 006644b0  8b3c86               mov edi, dword ptr [esi + eax*4]
// 006644b3  8b7304               mov esi, dword ptr [ebx + 4]
// 006644b6  8b5b08               mov ebx, dword ptr [ebx + 8]
// 006644b9  8b3486               mov esi, dword ptr [esi + eax*4]
// 006644bc  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 006644bf  8b442434             mov eax, dword ptr [esp + 0x34]
// 006644c3  8b00                 mov eax, dword ptr [eax]
// 006644c5  d1ed                 shr ebp, 1
// 006644c7  896c242c             mov dword ptr [esp + 0x2c], ebp
// 006644cb  0f8495000000         je 0x664566
// 006644d1  0fb62b               movzx ebp, byte ptr [ebx]
// 006644d4  0fb616               movzx edx, byte ptr [esi]
// 006644d7  46                   inc esi
// 006644d8  43                   inc ebx
// 006644d9  89742434             mov dword ptr [esp + 0x34], esi
// 006644dd  8b742420             mov esi, dword ptr [esp + 0x20]
// 006644e1  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 006644e4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006644e8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006644ec  89742430             mov dword ptr [esp + 0x30], esi
// 006644f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 006644f4  8b3496               mov esi, dword ptr [esi + edx*4]
// 006644f7  0334ab               add esi, dword ptr [ebx + ebp*4]
// 006644fa  0fb62f               movzx ebp, byte ptr [edi]
// 006644fd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00664501  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00664504  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00664508  03dd                 add ebx, ebp
// 0066450a  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 0066450e  8818                 mov byte ptr [eax], bl
// 00664510  c1fe10               sar esi, 0x10
// 00664513  8d1c2e               lea ebx, [esi + ebp]
// 00664516  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 0066451a  885801               mov byte ptr [eax + 1], bl
// 0066451d  03ea                 add ebp, edx
// 0066451f  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 00664523  885802               mov byte ptr [eax + 2], bl
// 00664526  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 0066452a  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0066452e  47                   inc edi
// 0066452f  03dd                 add ebx, ebp
// 00664531  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00664535  83c003               add eax, 3
// 00664538  03f5                 add esi, ebp
// 0066453a  8818                 mov byte ptr [eax], bl
// 0066453c  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 00664540  8b742434             mov esi, dword ptr [esp + 0x34]
// 00664544  885801               mov byte ptr [eax + 1], bl
// 00664547  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066454b  03ea                 add ebp, edx
// 0066454d  8a1429               mov dl, byte ptr [ecx + ebp]
// 00664550  885002               mov byte ptr [eax + 2], dl
// 00664553  47                   inc edi
// 00664554  83c003               add eax, 3
// 00664557  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0066455c  0f856fffffff         jne 0x6644d1
// 00664562  8b542428             mov edx, dword ptr [esp + 0x28]
// 00664566  f6425c01             test byte ptr [edx + 0x5c], 1
// 0066456a  7444                 je 0x6645b0
// 0066456c  0fb616               movzx edx, byte ptr [esi]
// 0066456f  0fb61b               movzx ebx, byte ptr [ebx]
// 00664572  8b742414             mov esi, dword ptr [esp + 0x14]
// 00664576  8b3496               mov esi, dword ptr [esi + edx*4]
// 00664579  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0066457d  03749d00             add esi, dword ptr [ebp + ebx*4]
// 00664581  0fb63f               movzx edi, byte ptr [edi]
// 00664584  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00664588  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0066458c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00664590  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00664593  03d7                 add edx, edi
// 00664595  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00664599  c1fe10               sar esi, 0x10
// 0066459c  8810                 mov byte ptr [eax], dl
// 0066459e  8d1437               lea edx, [edi + esi]
// 006645a1  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 006645a5  03fd                 add edi, ebp
// 006645a7  885001               mov byte ptr [eax + 1], dl
// 006645aa  8a0c0f               mov cl, byte ptr [edi + ecx]
// 006645ad  884802               mov byte ptr [eax + 2], cl
// 006645b0  5f                   pop edi
// 006645b1  5e                   pop esi
// 006645b2  5d                   pop ebp
// 006645b3  5b                   pop ebx
// 006645b4  83c414               add esp, 0x14
// 006645b7  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
