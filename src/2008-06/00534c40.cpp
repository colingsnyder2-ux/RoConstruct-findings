// from server: 100% by auto
// roc 2008-06 00534c40  unit: seg_00530000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534c40
//
// 00534c40  83ec14               sub esp, 0x14
// 00534c43  8b542418             mov edx, dword ptr [esp + 0x18]
// 00534c47  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 00534c4d  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 00534c53  53                   push ebx
// 00534c54  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00534c58  55                   push ebp
// 00534c59  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 00534c5c  56                   push esi
// 00534c5d  8b7010               mov esi, dword ptr [eax + 0x10]
// 00534c60  8974241c             mov dword ptr [esp + 0x1c], esi
// 00534c64  8b7014               mov esi, dword ptr [eax + 0x14]
// 00534c67  89742418             mov dword ptr [esp + 0x18], esi
// 00534c6b  8b7018               mov esi, dword ptr [eax + 0x18]
// 00534c6e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00534c71  89742414             mov dword ptr [esp + 0x14], esi
// 00534c75  8b33                 mov esi, dword ptr [ebx]
// 00534c77  89442410             mov dword ptr [esp + 0x10], eax
// 00534c7b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00534c7f  57                   push edi
// 00534c80  8b3c86               mov edi, dword ptr [esi + eax*4]
// 00534c83  8b7304               mov esi, dword ptr [ebx + 4]
// 00534c86  8b5b08               mov ebx, dword ptr [ebx + 8]
// 00534c89  8b3486               mov esi, dword ptr [esi + eax*4]
// 00534c8c  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 00534c8f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00534c93  8b00                 mov eax, dword ptr [eax]
// 00534c95  d1ed                 shr ebp, 1
// 00534c97  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00534c9b  0f8495000000         je 0x534d36
// 00534ca1  0fb62b               movzx ebp, byte ptr [ebx]
// 00534ca4  0fb616               movzx edx, byte ptr [esi]
// 00534ca7  46                   inc esi
// 00534ca8  43                   inc ebx
// 00534ca9  89742434             mov dword ptr [esp + 0x34], esi
// 00534cad  8b742420             mov esi, dword ptr [esp + 0x20]
// 00534cb1  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 00534cb4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00534cb8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00534cbc  89742430             mov dword ptr [esp + 0x30], esi
// 00534cc0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00534cc4  8b3496               mov esi, dword ptr [esi + edx*4]
// 00534cc7  0334ab               add esi, dword ptr [ebx + ebp*4]
// 00534cca  0fb62f               movzx ebp, byte ptr [edi]
// 00534ccd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00534cd1  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00534cd4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534cd8  03dd                 add ebx, ebp
// 00534cda  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00534cde  8818                 mov byte ptr [eax], bl
// 00534ce0  c1fe10               sar esi, 0x10
// 00534ce3  8d1c2e               lea ebx, [esi + ebp]
// 00534ce6  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00534cea  885801               mov byte ptr [eax + 1], bl
// 00534ced  03ea                 add ebp, edx
// 00534cef  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 00534cf3  885802               mov byte ptr [eax + 2], bl
// 00534cf6  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 00534cfa  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00534cfe  47                   inc edi
// 00534cff  03dd                 add ebx, ebp
// 00534d01  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00534d05  83c003               add eax, 3
// 00534d08  03f5                 add esi, ebp
// 00534d0a  8818                 mov byte ptr [eax], bl
// 00534d0c  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 00534d10  8b742434             mov esi, dword ptr [esp + 0x34]
// 00534d14  885801               mov byte ptr [eax + 1], bl
// 00534d17  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00534d1b  03ea                 add ebp, edx
// 00534d1d  8a1429               mov dl, byte ptr [ecx + ebp]
// 00534d20  885002               mov byte ptr [eax + 2], dl
// 00534d23  47                   inc edi
// 00534d24  83c003               add eax, 3
// 00534d27  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00534d2c  0f856fffffff         jne 0x534ca1
// 00534d32  8b542428             mov edx, dword ptr [esp + 0x28]
// 00534d36  f6425c01             test byte ptr [edx + 0x5c], 1
// 00534d3a  7444                 je 0x534d80
// 00534d3c  0fb616               movzx edx, byte ptr [esi]
// 00534d3f  0fb61b               movzx ebx, byte ptr [ebx]
// 00534d42  8b742414             mov esi, dword ptr [esp + 0x14]
// 00534d46  8b3496               mov esi, dword ptr [esi + edx*4]
// 00534d49  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00534d4d  03749d00             add esi, dword ptr [ebp + ebx*4]
// 00534d51  0fb63f               movzx edi, byte ptr [edi]
// 00534d54  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00534d58  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00534d5c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00534d60  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00534d63  03d7                 add edx, edi
// 00534d65  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00534d69  c1fe10               sar esi, 0x10
// 00534d6c  8810                 mov byte ptr [eax], dl
// 00534d6e  8d1437               lea edx, [edi + esi]
// 00534d71  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00534d75  03fd                 add edi, ebp
// 00534d77  885001               mov byte ptr [eax + 1], dl
// 00534d7a  8a0c0f               mov cl, byte ptr [edi + ecx]
// 00534d7d  884802               mov byte ptr [eax + 2], cl
// 00534d80  5f                   pop edi
// 00534d81  5e                   pop esi
// 00534d82  5d                   pop ebp
// 00534d83  5b                   pop ebx
// 00534d84  83c414               add esp, 0x14
// 00534d87  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
