// roc 2011-06 00578d60  unit: seg_00570000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578d60
//
// 00578d60  83ec14               sub esp, 0x14
// 00578d63  8b542418             mov edx, dword ptr [esp + 0x18]
// 00578d67  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 00578d6d  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 00578d73  53                   push ebx
// 00578d74  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00578d78  55                   push ebp
// 00578d79  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 00578d7c  56                   push esi
// 00578d7d  8b7010               mov esi, dword ptr [eax + 0x10]
// 00578d80  8974241c             mov dword ptr [esp + 0x1c], esi
// 00578d84  8b7014               mov esi, dword ptr [eax + 0x14]
// 00578d87  89742418             mov dword ptr [esp + 0x18], esi
// 00578d8b  8b7018               mov esi, dword ptr [eax + 0x18]
// 00578d8e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00578d91  89742414             mov dword ptr [esp + 0x14], esi
// 00578d95  8b33                 mov esi, dword ptr [ebx]
// 00578d97  89442410             mov dword ptr [esp + 0x10], eax
// 00578d9b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00578d9f  57                   push edi
// 00578da0  8b3c86               mov edi, dword ptr [esi + eax*4]
// 00578da3  8b7304               mov esi, dword ptr [ebx + 4]
// 00578da6  8b5b08               mov ebx, dword ptr [ebx + 8]
// 00578da9  8b3486               mov esi, dword ptr [esi + eax*4]
// 00578dac  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 00578daf  8b442434             mov eax, dword ptr [esp + 0x34]
// 00578db3  8b00                 mov eax, dword ptr [eax]
// 00578db5  d1ed                 shr ebp, 1
// 00578db7  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00578dbb  0f8495000000         je 0x578e56
// 00578dc1  0fb62b               movzx ebp, byte ptr [ebx]
// 00578dc4  0fb616               movzx edx, byte ptr [esi]
// 00578dc7  46                   inc esi
// 00578dc8  43                   inc ebx
// 00578dc9  89742434             mov dword ptr [esp + 0x34], esi
// 00578dcd  8b742420             mov esi, dword ptr [esp + 0x20]
// 00578dd1  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 00578dd4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00578dd8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00578ddc  89742430             mov dword ptr [esp + 0x30], esi
// 00578de0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00578de4  8b3496               mov esi, dword ptr [esi + edx*4]
// 00578de7  0334ab               add esi, dword ptr [ebx + ebp*4]
// 00578dea  0fb62f               movzx ebp, byte ptr [edi]
// 00578ded  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00578df1  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00578df4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00578df8  03dd                 add ebx, ebp
// 00578dfa  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00578dfe  8818                 mov byte ptr [eax], bl
// 00578e00  c1fe10               sar esi, 0x10
// 00578e03  8d1c2e               lea ebx, [esi + ebp]
// 00578e06  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00578e0a  885801               mov byte ptr [eax + 1], bl
// 00578e0d  03ea                 add ebp, edx
// 00578e0f  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 00578e13  885802               mov byte ptr [eax + 2], bl
// 00578e16  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 00578e1a  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00578e1e  47                   inc edi
// 00578e1f  03dd                 add ebx, ebp
// 00578e21  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00578e25  83c003               add eax, 3
// 00578e28  03f5                 add esi, ebp
// 00578e2a  8818                 mov byte ptr [eax], bl
// 00578e2c  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 00578e30  8b742434             mov esi, dword ptr [esp + 0x34]
// 00578e34  885801               mov byte ptr [eax + 1], bl
// 00578e37  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00578e3b  03ea                 add ebp, edx
// 00578e3d  8a1429               mov dl, byte ptr [ecx + ebp]
// 00578e40  885002               mov byte ptr [eax + 2], dl
// 00578e43  47                   inc edi
// 00578e44  83c003               add eax, 3
// 00578e47  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00578e4c  0f856fffffff         jne 0x578dc1
// 00578e52  8b542428             mov edx, dword ptr [esp + 0x28]
// 00578e56  f6425c01             test byte ptr [edx + 0x5c], 1
// 00578e5a  7444                 je 0x578ea0
// 00578e5c  0fb616               movzx edx, byte ptr [esi]
// 00578e5f  0fb61b               movzx ebx, byte ptr [ebx]
// 00578e62  8b742414             mov esi, dword ptr [esp + 0x14]
// 00578e66  8b3496               mov esi, dword ptr [esi + edx*4]
// 00578e69  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00578e6d  03749d00             add esi, dword ptr [ebp + ebx*4]
// 00578e71  0fb63f               movzx edi, byte ptr [edi]
// 00578e74  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00578e78  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00578e7c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578e80  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00578e83  03d7                 add edx, edi
// 00578e85  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00578e89  c1fe10               sar esi, 0x10
// 00578e8c  8810                 mov byte ptr [eax], dl
// 00578e8e  8d1437               lea edx, [edi + esi]
// 00578e91  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00578e95  03fd                 add edi, ebp
// 00578e97  885001               mov byte ptr [eax + 1], dl
// 00578e9a  8a0c0f               mov cl, byte ptr [edi + ecx]
// 00578e9d  884802               mov byte ptr [eax + 2], cl
// 00578ea0  5f                   pop edi
// 00578ea1  5e                   pop esi
// 00578ea2  5d                   pop ebp
// 00578ea3  5b                   pop ebx
// 00578ea4  83c414               add esp, 0x14
// 00578ea7  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
