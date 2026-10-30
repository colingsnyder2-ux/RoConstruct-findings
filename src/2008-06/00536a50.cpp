// from server: 100% by auto
// roc 2008-06 00536a50  unit: seg_00530000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536a50
//
// 00536a50  83ec28               sub esp, 0x28
// 00536a53  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00536a57  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 00536a5d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00536a60  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00536a63  56                   push esi
// 00536a64  8b30                 mov esi, dword ptr [eax]
// 00536a66  89742414             mov dword ptr [esp + 0x14], esi
// 00536a6a  8b7004               mov esi, dword ptr [eax + 4]
// 00536a6d  8b4008               mov eax, dword ptr [eax + 8]
// 00536a70  894c2410             mov dword ptr [esp + 0x10], ecx
// 00536a74  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00536a78  89542424             mov dword ptr [esp + 0x24], edx
// 00536a7c  89742418             mov dword ptr [esp + 0x18], esi
// 00536a80  89442420             mov dword ptr [esp + 0x20], eax
// 00536a84  85c9                 test ecx, ecx
// 00536a86  0f8ee0000000         jle 0x536b6c
// 00536a8c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00536a90  53                   push ebx
// 00536a91  55                   push ebp
// 00536a92  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00536a96  2bc5                 sub eax, ebp
// 00536a98  57                   push edi
// 00536a99  896c2410             mov dword ptr [esp + 0x10], ebp
// 00536a9d  89442418             mov dword ptr [esp + 0x18], eax
// 00536aa1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00536aa5  eb0d                 jmp 0x536ab4
// 00536aa7  eb07                 jmp 0x536ab0
// 00536aa9  8da42400000000       lea esp, [esp]
// 00536ab0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00536ab4  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00536ab7  8b7500               mov esi, dword ptr [ebp]
// 00536aba  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 00536abd  8b7a38               mov edi, dword ptr [edx + 0x38]
// 00536ac0  8b0428               mov eax, dword ptr [eax + ebp]
// 00536ac3  894c2434             mov dword ptr [esp + 0x34], ecx
// 00536ac7  c1e106               shl ecx, 6
// 00536aca  03d9                 add ebx, ecx
// 00536acc  8974243c             mov dword ptr [esp + 0x3c], esi
// 00536ad0  8b7234               mov esi, dword ptr [edx + 0x34]
// 00536ad3  03f1                 add esi, ecx
// 00536ad5  03f9                 add edi, ecx
// 00536ad7  895c2428             mov dword ptr [esp + 0x28], ebx
// 00536adb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00536adf  33c9                 xor ecx, ecx
// 00536ae1  895c2448             mov dword ptr [esp + 0x48], ebx
// 00536ae5  85db                 test ebx, ebx
// 00536ae7  7663                 jbe 0x536b4c
// 00536ae9  8da42400000000       lea esp, [esp]
// 00536af0  0fb610               movzx edx, byte ptr [eax]
// 00536af3  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 00536af6  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 00536af9  03da                 add ebx, edx
// 00536afb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00536aff  0fb61413             movzx edx, byte ptr [ebx + edx]
// 00536b03  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00536b07  03eb                 add ebp, ebx
// 00536b09  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00536b0d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00536b11  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00536b15  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00536b19  40                   inc eax
// 00536b1a  03d3                 add edx, ebx
// 00536b1c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00536b20  40                   inc eax
// 00536b21  03eb                 add ebp, ebx
// 00536b23  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00536b27  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00536b2b  03d3                 add edx, ebx
// 00536b2d  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00536b31  41                   inc ecx
// 00536b32  8813                 mov byte ptr [ebx], dl
// 00536b34  43                   inc ebx
// 00536b35  40                   inc eax
// 00536b36  83e10f               and ecx, 0xf
// 00536b39  836c244801           sub dword ptr [esp + 0x48], 1
// 00536b3e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00536b42  75ac                 jne 0x536af0
// 00536b44  8b542430             mov edx, dword ptr [esp + 0x30]
// 00536b48  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00536b4c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00536b50  40                   inc eax
// 00536b51  83e00f               and eax, 0xf
// 00536b54  83c504               add ebp, 4
// 00536b57  836c241401           sub dword ptr [esp + 0x14], 1
// 00536b5c  894230               mov dword ptr [edx + 0x30], eax
// 00536b5f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00536b63  0f8547ffffff         jne 0x536ab0
// 00536b69  5f                   pop edi
// 00536b6a  5d                   pop ebp
// 00536b6b  5b                   pop ebx
// 00536b6c  5e                   pop esi
// 00536b6d  83c428               add esp, 0x28
// 00536b70  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
