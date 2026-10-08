// roc 2009-12 00622d60  unit: seg_00620000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622d60
//
// 00622d60  83ec28               sub esp, 0x28
// 00622d63  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00622d67  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 00622d6d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00622d70  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00622d73  56                   push esi
// 00622d74  8b30                 mov esi, dword ptr [eax]
// 00622d76  89742414             mov dword ptr [esp + 0x14], esi
// 00622d7a  8b7004               mov esi, dword ptr [eax + 4]
// 00622d7d  8b4008               mov eax, dword ptr [eax + 8]
// 00622d80  894c2410             mov dword ptr [esp + 0x10], ecx
// 00622d84  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00622d88  89542424             mov dword ptr [esp + 0x24], edx
// 00622d8c  89742418             mov dword ptr [esp + 0x18], esi
// 00622d90  89442420             mov dword ptr [esp + 0x20], eax
// 00622d94  85c9                 test ecx, ecx
// 00622d96  0f8ee0000000         jle 0x622e7c
// 00622d9c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00622da0  53                   push ebx
// 00622da1  55                   push ebp
// 00622da2  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00622da6  2bc5                 sub eax, ebp
// 00622da8  57                   push edi
// 00622da9  896c2410             mov dword ptr [esp + 0x10], ebp
// 00622dad  89442418             mov dword ptr [esp + 0x18], eax
// 00622db1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00622db5  eb0d                 jmp 0x622dc4
// 00622db7  eb07                 jmp 0x622dc0
// 00622db9  8da42400000000       lea esp, [esp]
// 00622dc0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00622dc4  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00622dc7  8b7500               mov esi, dword ptr [ebp]
// 00622dca  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 00622dcd  8b7a38               mov edi, dword ptr [edx + 0x38]
// 00622dd0  8b0428               mov eax, dword ptr [eax + ebp]
// 00622dd3  894c2434             mov dword ptr [esp + 0x34], ecx
// 00622dd7  c1e106               shl ecx, 6
// 00622dda  03d9                 add ebx, ecx
// 00622ddc  8974243c             mov dword ptr [esp + 0x3c], esi
// 00622de0  8b7234               mov esi, dword ptr [edx + 0x34]
// 00622de3  03f1                 add esi, ecx
// 00622de5  03f9                 add edi, ecx
// 00622de7  895c2428             mov dword ptr [esp + 0x28], ebx
// 00622deb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00622def  33c9                 xor ecx, ecx
// 00622df1  895c2448             mov dword ptr [esp + 0x48], ebx
// 00622df5  85db                 test ebx, ebx
// 00622df7  7663                 jbe 0x622e5c
// 00622df9  8da42400000000       lea esp, [esp]
// 00622e00  0fb610               movzx edx, byte ptr [eax]
// 00622e03  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 00622e06  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 00622e09  03da                 add ebx, edx
// 00622e0b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00622e0f  0fb61413             movzx edx, byte ptr [ebx + edx]
// 00622e13  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00622e17  03eb                 add ebp, ebx
// 00622e19  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00622e1d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00622e21  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00622e25  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00622e29  40                   inc eax
// 00622e2a  03d3                 add edx, ebx
// 00622e2c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00622e30  40                   inc eax
// 00622e31  03eb                 add ebp, ebx
// 00622e33  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00622e37  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00622e3b  03d3                 add edx, ebx
// 00622e3d  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00622e41  41                   inc ecx
// 00622e42  8813                 mov byte ptr [ebx], dl
// 00622e44  43                   inc ebx
// 00622e45  40                   inc eax
// 00622e46  83e10f               and ecx, 0xf
// 00622e49  836c244801           sub dword ptr [esp + 0x48], 1
// 00622e4e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00622e52  75ac                 jne 0x622e00
// 00622e54  8b542430             mov edx, dword ptr [esp + 0x30]
// 00622e58  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00622e5c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00622e60  40                   inc eax
// 00622e61  83e00f               and eax, 0xf
// 00622e64  83c504               add ebp, 4
// 00622e67  836c241401           sub dword ptr [esp + 0x14], 1
// 00622e6c  894230               mov dword ptr [edx + 0x30], eax
// 00622e6f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00622e73  0f8547ffffff         jne 0x622dc0
// 00622e79  5f                   pop edi
// 00622e7a  5d                   pop ebp
// 00622e7b  5b                   pop ebx
// 00622e7c  5e                   pop esi
// 00622e7d  83c428               add esp, 0x28
// 00622e80  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
