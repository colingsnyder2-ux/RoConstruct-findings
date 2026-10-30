// roc 2009-12 00620f50  unit: seg_00620000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620f50
//
// 00620f50  83ec14               sub esp, 0x14
// 00620f53  8b542418             mov edx, dword ptr [esp + 0x18]
// 00620f57  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 00620f5d  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 00620f63  53                   push ebx
// 00620f64  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00620f68  55                   push ebp
// 00620f69  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 00620f6c  56                   push esi
// 00620f6d  8b7010               mov esi, dword ptr [eax + 0x10]
// 00620f70  8974241c             mov dword ptr [esp + 0x1c], esi
// 00620f74  8b7014               mov esi, dword ptr [eax + 0x14]
// 00620f77  89742418             mov dword ptr [esp + 0x18], esi
// 00620f7b  8b7018               mov esi, dword ptr [eax + 0x18]
// 00620f7e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00620f81  89742414             mov dword ptr [esp + 0x14], esi
// 00620f85  8b33                 mov esi, dword ptr [ebx]
// 00620f87  89442410             mov dword ptr [esp + 0x10], eax
// 00620f8b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00620f8f  57                   push edi
// 00620f90  8b3c86               mov edi, dword ptr [esi + eax*4]
// 00620f93  8b7304               mov esi, dword ptr [ebx + 4]
// 00620f96  8b5b08               mov ebx, dword ptr [ebx + 8]
// 00620f99  8b3486               mov esi, dword ptr [esi + eax*4]
// 00620f9c  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 00620f9f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00620fa3  8b00                 mov eax, dword ptr [eax]
// 00620fa5  d1ed                 shr ebp, 1
// 00620fa7  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00620fab  0f8495000000         je 0x621046
// 00620fb1  0fb62b               movzx ebp, byte ptr [ebx]
// 00620fb4  0fb616               movzx edx, byte ptr [esi]
// 00620fb7  46                   inc esi
// 00620fb8  43                   inc ebx
// 00620fb9  89742434             mov dword ptr [esp + 0x34], esi
// 00620fbd  8b742420             mov esi, dword ptr [esp + 0x20]
// 00620fc1  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 00620fc4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00620fc8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00620fcc  89742430             mov dword ptr [esp + 0x30], esi
// 00620fd0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00620fd4  8b3496               mov esi, dword ptr [esi + edx*4]
// 00620fd7  0334ab               add esi, dword ptr [ebx + ebp*4]
// 00620fda  0fb62f               movzx ebp, byte ptr [edi]
// 00620fdd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00620fe1  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00620fe4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00620fe8  03dd                 add ebx, ebp
// 00620fea  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00620fee  8818                 mov byte ptr [eax], bl
// 00620ff0  c1fe10               sar esi, 0x10
// 00620ff3  8d1c2e               lea ebx, [esi + ebp]
// 00620ff6  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00620ffa  885801               mov byte ptr [eax + 1], bl
// 00620ffd  03ea                 add ebp, edx
// 00620fff  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 00621003  885802               mov byte ptr [eax + 2], bl
// 00621006  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 0062100a  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0062100e  47                   inc edi
// 0062100f  03dd                 add ebx, ebp
// 00621011  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00621015  83c003               add eax, 3
// 00621018  03f5                 add esi, ebp
// 0062101a  8818                 mov byte ptr [eax], bl
// 0062101c  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 00621020  8b742434             mov esi, dword ptr [esp + 0x34]
// 00621024  885801               mov byte ptr [eax + 1], bl
// 00621027  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0062102b  03ea                 add ebp, edx
// 0062102d  8a1429               mov dl, byte ptr [ecx + ebp]
// 00621030  885002               mov byte ptr [eax + 2], dl
// 00621033  47                   inc edi
// 00621034  83c003               add eax, 3
// 00621037  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0062103c  0f856fffffff         jne 0x620fb1
// 00621042  8b542428             mov edx, dword ptr [esp + 0x28]
// 00621046  f6425c01             test byte ptr [edx + 0x5c], 1
// 0062104a  7444                 je 0x621090
// 0062104c  0fb616               movzx edx, byte ptr [esi]
// 0062104f  0fb61b               movzx ebx, byte ptr [ebx]
// 00621052  8b742414             mov esi, dword ptr [esp + 0x14]
// 00621056  8b3496               mov esi, dword ptr [esi + edx*4]
// 00621059  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0062105d  03749d00             add esi, dword ptr [ebp + ebx*4]
// 00621061  0fb63f               movzx edi, byte ptr [edi]
// 00621064  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00621068  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 0062106c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00621070  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00621073  03d7                 add edx, edi
// 00621075  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00621079  c1fe10               sar esi, 0x10
// 0062107c  8810                 mov byte ptr [eax], dl
// 0062107e  8d1437               lea edx, [edi + esi]
// 00621081  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00621085  03fd                 add edi, ebp
// 00621087  885001               mov byte ptr [eax + 1], dl
// 0062108a  8a0c0f               mov cl, byte ptr [edi + ecx]
// 0062108d  884802               mov byte ptr [eax + 2], cl
// 00621090  5f                   pop edi
// 00621091  5e                   pop esi
// 00621092  5d                   pop ebp
// 00621093  5b                   pop ebx
// 00621094  83c414               add esp, 0x14
// 00621097  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
