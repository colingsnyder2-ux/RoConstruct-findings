// roc 2007-08 00528ab0  unit: seg_00520000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528ab0
//
// 00528ab0  83ec14               sub esp, 0x14
// 00528ab3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528ab7  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 00528abd  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 00528ac3  53                   push ebx
// 00528ac4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00528ac8  55                   push ebp
// 00528ac9  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 00528acc  56                   push esi
// 00528acd  8b7010               mov esi, dword ptr [eax + 0x10]
// 00528ad0  8974241c             mov dword ptr [esp + 0x1c], esi
// 00528ad4  8b7014               mov esi, dword ptr [eax + 0x14]
// 00528ad7  89742418             mov dword ptr [esp + 0x18], esi
// 00528adb  8b7018               mov esi, dword ptr [eax + 0x18]
// 00528ade  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00528ae1  89742414             mov dword ptr [esp + 0x14], esi
// 00528ae5  8b33                 mov esi, dword ptr [ebx]
// 00528ae7  89442410             mov dword ptr [esp + 0x10], eax
// 00528aeb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00528aef  57                   push edi
// 00528af0  8b3c86               mov edi, dword ptr [esi + eax*4]
// 00528af3  8b7304               mov esi, dword ptr [ebx + 4]
// 00528af6  8b5b08               mov ebx, dword ptr [ebx + 8]
// 00528af9  8b3486               mov esi, dword ptr [esi + eax*4]
// 00528afc  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 00528aff  8b442434             mov eax, dword ptr [esp + 0x34]
// 00528b03  8b00                 mov eax, dword ptr [eax]
// 00528b05  d1ed                 shr ebp, 1
// 00528b07  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00528b0b  0f849d000000         je 0x528bae
// 00528b11  0fb62b               movzx ebp, byte ptr [ebx]
// 00528b14  0fb616               movzx edx, byte ptr [esi]
// 00528b17  83c601               add esi, 1
// 00528b1a  83c301               add ebx, 1
// 00528b1d  89742434             mov dword ptr [esp + 0x34], esi
// 00528b21  8b742420             mov esi, dword ptr [esp + 0x20]
// 00528b25  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 00528b28  895c2410             mov dword ptr [esp + 0x10], ebx
// 00528b2c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00528b30  89742430             mov dword ptr [esp + 0x30], esi
// 00528b34  8b742414             mov esi, dword ptr [esp + 0x14]
// 00528b38  8b3496               mov esi, dword ptr [esi + edx*4]
// 00528b3b  0334ab               add esi, dword ptr [ebx + ebp*4]
// 00528b3e  0fb62f               movzx ebp, byte ptr [edi]
// 00528b41  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00528b45  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00528b48  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00528b4c  03dd                 add ebx, ebp
// 00528b4e  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00528b52  8818                 mov byte ptr [eax], bl
// 00528b54  c1fe10               sar esi, 0x10
// 00528b57  8d1c2e               lea ebx, [esi + ebp]
// 00528b5a  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00528b5e  885801               mov byte ptr [eax + 1], bl
// 00528b61  03ea                 add ebp, edx
// 00528b63  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 00528b67  885802               mov byte ptr [eax + 2], bl
// 00528b6a  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 00528b6e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00528b72  83c701               add edi, 1
// 00528b75  03dd                 add ebx, ebp
// 00528b77  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00528b7b  83c003               add eax, 3
// 00528b7e  03f5                 add esi, ebp
// 00528b80  8818                 mov byte ptr [eax], bl
// 00528b82  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 00528b86  8b742434             mov esi, dword ptr [esp + 0x34]
// 00528b8a  885801               mov byte ptr [eax + 1], bl
// 00528b8d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00528b91  03ea                 add ebp, edx
// 00528b93  8a1429               mov dl, byte ptr [ecx + ebp]
// 00528b96  885002               mov byte ptr [eax + 2], dl
// 00528b99  83c701               add edi, 1
// 00528b9c  83c003               add eax, 3
// 00528b9f  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00528ba4  0f8567ffffff         jne 0x528b11
// 00528baa  8b542428             mov edx, dword ptr [esp + 0x28]
// 00528bae  f6425c01             test byte ptr [edx + 0x5c], 1
// 00528bb2  7444                 je 0x528bf8
// 00528bb4  0fb616               movzx edx, byte ptr [esi]
// 00528bb7  0fb61b               movzx ebx, byte ptr [ebx]
// 00528bba  8b742414             mov esi, dword ptr [esp + 0x14]
// 00528bbe  8b3496               mov esi, dword ptr [esi + edx*4]
// 00528bc1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00528bc5  03749d00             add esi, dword ptr [ebp + ebx*4]
// 00528bc9  0fb63f               movzx edi, byte ptr [edi]
// 00528bcc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00528bd0  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00528bd4  8b542420             mov edx, dword ptr [esp + 0x20]
// 00528bd8  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00528bdb  03d7                 add edx, edi
// 00528bdd  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00528be1  c1fe10               sar esi, 0x10
// 00528be4  8810                 mov byte ptr [eax], dl
// 00528be6  8d1437               lea edx, [edi + esi]
// 00528be9  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00528bed  03fd                 add edi, ebp
// 00528bef  885001               mov byte ptr [eax + 1], dl
// 00528bf2  8a0c0f               mov cl, byte ptr [edi + ecx]
// 00528bf5  884802               mov byte ptr [eax + 2], cl
// 00528bf8  5f                   pop edi
// 00528bf9  5e                   pop esi
// 00528bfa  5d                   pop ebp
// 00528bfb  5b                   pop ebx
// 00528bfc  83c414               add esp, 0x14
// 00528bff  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
