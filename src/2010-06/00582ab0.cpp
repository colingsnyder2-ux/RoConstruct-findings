// from server: 100% by auto
// roc 2010-06 00582ab0  unit: seg_00580000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582ab0
//
// 00582ab0  83ec14               sub esp, 0x14
// 00582ab3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00582ab7  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 00582abd  8b8a20010000         mov ecx, dword ptr [edx + 0x120]
// 00582ac3  53                   push ebx
// 00582ac4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00582ac8  55                   push ebp
// 00582ac9  8b6a5c               mov ebp, dword ptr [edx + 0x5c]
// 00582acc  56                   push esi
// 00582acd  8b7010               mov esi, dword ptr [eax + 0x10]
// 00582ad0  8974241c             mov dword ptr [esp + 0x1c], esi
// 00582ad4  8b7014               mov esi, dword ptr [eax + 0x14]
// 00582ad7  89742418             mov dword ptr [esp + 0x18], esi
// 00582adb  8b7018               mov esi, dword ptr [eax + 0x18]
// 00582ade  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00582ae1  89742414             mov dword ptr [esp + 0x14], esi
// 00582ae5  8b33                 mov esi, dword ptr [ebx]
// 00582ae7  89442410             mov dword ptr [esp + 0x10], eax
// 00582aeb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00582aef  57                   push edi
// 00582af0  8b3c86               mov edi, dword ptr [esi + eax*4]
// 00582af3  8b7304               mov esi, dword ptr [ebx + 4]
// 00582af6  8b5b08               mov ebx, dword ptr [ebx + 8]
// 00582af9  8b3486               mov esi, dword ptr [esi + eax*4]
// 00582afc  8b1c83               mov ebx, dword ptr [ebx + eax*4]
// 00582aff  8b442434             mov eax, dword ptr [esp + 0x34]
// 00582b03  8b00                 mov eax, dword ptr [eax]
// 00582b05  d1ed                 shr ebp, 1
// 00582b07  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00582b0b  0f8495000000         je 0x582ba6
// 00582b11  0fb62b               movzx ebp, byte ptr [ebx]
// 00582b14  0fb616               movzx edx, byte ptr [esi]
// 00582b17  46                   inc esi
// 00582b18  43                   inc ebx
// 00582b19  89742434             mov dword ptr [esp + 0x34], esi
// 00582b1d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00582b21  8b34ae               mov esi, dword ptr [esi + ebp*4]
// 00582b24  895c2410             mov dword ptr [esp + 0x10], ebx
// 00582b28  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00582b2c  89742430             mov dword ptr [esp + 0x30], esi
// 00582b30  8b742414             mov esi, dword ptr [esp + 0x14]
// 00582b34  8b3496               mov esi, dword ptr [esi + edx*4]
// 00582b37  0334ab               add esi, dword ptr [ebx + ebp*4]
// 00582b3a  0fb62f               movzx ebp, byte ptr [edi]
// 00582b3d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00582b41  8b1493               mov edx, dword ptr [ebx + edx*4]
// 00582b44  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00582b48  03dd                 add ebx, ebp
// 00582b4a  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00582b4e  8818                 mov byte ptr [eax], bl
// 00582b50  c1fe10               sar esi, 0x10
// 00582b53  8d1c2e               lea ebx, [esi + ebp]
// 00582b56  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00582b5a  885801               mov byte ptr [eax + 1], bl
// 00582b5d  03ea                 add ebp, edx
// 00582b5f  0fb61c29             movzx ebx, byte ptr [ecx + ebp]
// 00582b63  885802               mov byte ptr [eax + 2], bl
// 00582b66  0fb66f01             movzx ebp, byte ptr [edi + 1]
// 00582b6a  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00582b6e  47                   inc edi
// 00582b6f  03dd                 add ebx, ebp
// 00582b71  0fb61c0b             movzx ebx, byte ptr [ebx + ecx]
// 00582b75  83c003               add eax, 3
// 00582b78  03f5                 add esi, ebp
// 00582b7a  8818                 mov byte ptr [eax], bl
// 00582b7c  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 00582b80  8b742434             mov esi, dword ptr [esp + 0x34]
// 00582b84  885801               mov byte ptr [eax + 1], bl
// 00582b87  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00582b8b  03ea                 add ebp, edx
// 00582b8d  8a1429               mov dl, byte ptr [ecx + ebp]
// 00582b90  885002               mov byte ptr [eax + 2], dl
// 00582b93  47                   inc edi
// 00582b94  83c003               add eax, 3
// 00582b97  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00582b9c  0f856fffffff         jne 0x582b11
// 00582ba2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00582ba6  f6425c01             test byte ptr [edx + 0x5c], 1
// 00582baa  7444                 je 0x582bf0
// 00582bac  0fb616               movzx edx, byte ptr [esi]
// 00582baf  0fb61b               movzx ebx, byte ptr [ebx]
// 00582bb2  8b742414             mov esi, dword ptr [esp + 0x14]
// 00582bb6  8b3496               mov esi, dword ptr [esi + edx*4]
// 00582bb9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00582bbd  03749d00             add esi, dword ptr [ebp + ebx*4]
// 00582bc1  0fb63f               movzx edi, byte ptr [edi]
// 00582bc4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00582bc8  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00582bcc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00582bd0  8b149a               mov edx, dword ptr [edx + ebx*4]
// 00582bd3  03d7                 add edx, edi
// 00582bd5  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00582bd9  c1fe10               sar esi, 0x10
// 00582bdc  8810                 mov byte ptr [eax], dl
// 00582bde  8d1437               lea edx, [edi + esi]
// 00582be1  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00582be5  03fd                 add edi, ebp
// 00582be7  885001               mov byte ptr [eax + 1], dl
// 00582bea  8a0c0f               mov cl, byte ptr [edi + ecx]
// 00582bed  884802               mov byte ptr [eax + 2], cl
// 00582bf0  5f                   pop edi
// 00582bf1  5e                   pop esi
// 00582bf2  5d                   pop ebp
// 00582bf3  5b                   pop ebx
// 00582bf4  83c414               add esp, 0x14
// 00582bf7  c3                   ret 
// library jpeg-6b/jdmerge.c (function _h2v1_merged_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
